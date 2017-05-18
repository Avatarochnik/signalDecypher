#pragma once

#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include "BVSWordStruct.h"
#include "Connection.h"

__int64 fileLength;
unsigned char wordNum = 1;
unsigned int blockNum = 0;
bool isCommand = false;
bool isSD = false;
bool isResponse = false;
bool isResponseSD = false;
bool isBlockStatus = true;
bool isTimeTag = false;
bool ignoreOne = false;
bool checkSD = false;
bool respFirst = false;
bool k;
unsigned char numSD = 0;

//Интеграция с БД
dataWord sampleData;
responseWord sampleResponse;
commandWord sampleCommand;
blockWord sampleBlock;


//Эта функция декодирует дешифрованный сигнал
bool decodeSignal(System::IO::Stream ^fileStream, std::wstring* result) {
	array<Byte>^ reader = gcnew array<Byte>(2);
	
	if (fileStream->Position == fileLength) {
		*result += L"Достигнут конец файла";
		return false;
	}

	int  isOk = fileStream->Read(reader, 0, 2);
	if (!isOk) {
		*result += L"Ошибка чтения из файла.";
		return false;
	}

	//Пропуск незначимых слов
	if (ignoreOne) {
		ignoreOne = false;
		return true;
	}

	uint16_t word;
	word = (reader[1] << 8) + reader[0];
	
	//Слово статуса блока
	if (isBlockStatus) {
		sampleBlock.time = 0;
		sampleBlock.badSyncFlag = false;
		sampleBlock.badWordFlag = false;
		sampleBlock.beginOfMssgFlag = false;
		sampleBlock.blockErrorFlag = false;
		sampleBlock.channelBFlag = false;
		sampleBlock.commandErrorFlag = false;
		sampleBlock.dataRollFlag = false;
		sampleBlock.endOfMssgFlag = false;
		sampleBlock.formatErrorFlag = false;
		sampleBlock.goodDataFlag = false;
		sampleBlock.responseFlag = false;
		sampleBlock.rtRtGapErrorFlag = false;
		sampleBlock.rtRtTransferFlag = false;
		sampleBlock.rttErrorFlag = false;
		sampleBlock.wordCountErrorFlag = false;
		*result += L"Блок ";
		*result += std::to_wstring(blockNum);
		*result += L". Флаги: [";
		if (word & COMMAND_ERROR) {
			*result += L"Ошибка комманды; ";
			sampleBlock.commandErrorFlag = true;
		}
		if (word & RTT_CMD2_ERR) {
			*result += L"Ошибка CMD2; ";
			sampleBlock.rttErrorFlag = true;
		}
		if (word & RT_TO_RT_GAP_ERR) {
			*result += L"Ошибка разрыва; ";
			sampleBlock.rtRtGapErrorFlag = true;
		}
		if (word & BAD_WORD) {
			*result += L"Поврежденное слово; ";
			sampleBlock.badWordFlag = true;
		}
		if (word & BAD_SYNC) {
			*result += L"Проблема синхронизации; ";
			sampleBlock.badSyncFlag = true;
		}
		if (word & WORD_COUNT_ERR) {
			*result += L"Неверное количество слов; ";
			sampleBlock.wordCountErrorFlag = true;
		}
		if (word & DATA_ROLL) {
			*result += L"Общий опрос; ";
			sampleBlock.dataRollFlag = true;
		}
		if (word & GOOD_DATA) {
			*result += L"Верные данные; ";
			sampleBlock.goodDataFlag = true;
		}
		if (word & RESPONSE) {
			*result += L"Ответ; ";
			sampleBlock.responseFlag = true;
		}
		if (word & FORMAT_ERR) {
			*result += L"Ошибка формата; ";
			sampleBlock.formatErrorFlag = true;
		}
		if (word & RT_TO_RT_TRANSFER) {
			*result += L"Общение между ОУ; ";
			sampleBlock.rtRtTransferFlag = true;
		}
		if (word & BLOCK_ERROR) {
			*result += L"Ошибка блока; ";
			sampleBlock.blockErrorFlag = true;
			//ignoreOne = true;
		}
		if (word & CHANNEL_B) {
			*result += L"Резервный канал; ";
			sampleBlock.channelBFlag = true;
		}
		if (word & BEGIN_OF_MSG) {
			*result += L"Начало сообщения; ";
			sampleBlock.beginOfMssgFlag = true;
		}
		if (word & END_OF_MSG) {
			*result += L"Конец сообщения";
			sampleBlock.endOfMssgFlag = true;
		}
		*result += L"] ";
		isBlockStatus = false;
		isTimeTag = true;
		return true;
	}

	//Временная метка
	if (isTimeTag) {
		sampleBlock.time = word * 2;
		*result += L"Время: ";
		*result += std::to_wstring(sampleBlock.time);
		*result += L" мс. Состав:";
		isTimeTag = false;
		isCommand = true;
		blockWords.push_back(sampleBlock);
		return true;
	}

	*result += L"\r\n\tСлово ";
	*result += std::to_wstring(wordNum);
	*result += L": ";
	wordNum++;

	//Коммандное слово
	if (isCommand) {
		sampleCommand.blockId = blockNum;
		sampleCommand.isGroup = false;
		sampleCommand.isTesting = false;
		sampleCommand.sdNum = nullptr;
		sampleCommand.subAddr = nullptr;
		sampleCommand.wordInBlock = wordNum;

		ignoreOne = true;
		isResponse = true;
		isCommand = false;
		//isBlockStatus = true;

		int ouAddress = word & OU_ADRESS_GROUP;
		k = (word & THE_K) THE_K_SHIFT;
		respFirst = k;
		sampleCommand.k = k;

		//Проверка группового сообщения
		if ((ouAddress) == OU_ADRESS_GROUP) {
			*result += L"(Групповое) ";
			sampleCommand.isGroup = true;
		}

		*result += L"Командное слово. Адрес ОУ: ";
		sampleCommand.ouAddress = ouAddress OU_ADRESS_SHIFT;
		*result += std::to_wstring(sampleCommand.ouAddress);
		*result += L" K: ";
		*result += std::to_wstring(k);
		*result += L" ";

		int subAddressControlRegime = word & SUBADDRESS_CONTROL_REGIME;

		//Проверка на режим тестирования
		if ((word & OU_TESTING) == OU_TESTING) {
			sampleCommand.isTesting = true;
			*result += L"Режим тестирования. Количество СД: ";
			numSD = (word & SD_NUM) SD_NUM_SHIFT;
			if (numSD == SPECIAL_32_SD) {
				numSD = 32;
			}
			sampleCommand.sdNum = (char*)(&numSD);
			*result += std::to_wstring(numSD);
			*result += L" ";
			commandWords.push_back(sampleCommand);
			return true;
		}
		
		//Проверка на режим управления
		if ((subAddressControlRegime == CONTROL_REGIME_1) || (subAddressControlRegime == CONTROL_REGIME_2)) {
			unsigned int commandItself = word & CODE_CHECK;
			*result += L"Режим управления. Комманда: ";
			switch (commandItself) {
				case ASSUME_INTERFACE_CONTROL:
					*result += L"Принять управление интерфейсом";
					sampleCommand.commandName = "Принять управление интерфейсом";
					break;
				case SYNCRONISATION:
					*result += L"Синхронизация";
					sampleCommand.commandName = "Синхронизация";
					break;
				case SEND_OS:
					*result += L"Передать ОС";
					sampleCommand.commandName = "Передать ОС";
					break;
				case BEGIN_SELFCHECK:
					*result += L"Начать самоконтроль ОУ";
					sampleCommand.commandName = "Начать самоконтроль ОУ";
					break;
				case LOCK_TRANSMITTER:
					*result += L"Блокировать передатчик";
					sampleCommand.commandName = "Блокировать передатчик";
					break;
				case UNLOCK_TRANSMITTER:
					*result += L"Разблокировать передатчик";
					sampleCommand.commandName = "Разблокировать передатчик";
					break;
				case LOCK_OU_ERR_FLAG:
					*result += L"Блокировать признак неисправности ОУ";
					sampleCommand.commandName = "Блокировать признак неисправности ОУ";
					break;
				case UNLOCK_OU_ERR_FLAG:
					*result += L"Разблокировать признак неисправности ОУ";
					sampleCommand.commandName = "Разблокировать признак неисправности ОУ";
					break;
				case OU_RESET:
					*result += L"Установить ОУ в исходное состояние";
					sampleCommand.commandName = "Установить ОУ в исходное состояние";
					break;
				case SEND_VECTOR:
					*result += L"Передать векторное слово";
					sampleCommand.commandName = "Передать векторное слово";
					isResponseSD = true;
					break;
				case SYNC_WITH_SD:
					*result += L"Синхронизация с СД";
					sampleCommand.commandName = "Синхронизация с СД";
					numSD = 1;
					isSD = true;
					break;
				case REPEAT_LAST:
					*result += L"Передать последнюю команду";
					sampleCommand.commandName = "Передать последнюю команду";
					isResponseSD = true;
					break;
				case SEND_VSK_OU:
					*result += L"Передать слово ВСК ОУ";
					sampleCommand.commandName = "Передать слово ВСК ОУ";
					isResponseSD = true;
					break;
				case LOCK_TRANSMITTER_I:
					*result += L"Блокировать выбранный передатчик";
					sampleCommand.commandName = "Блокировать выбранный передатчик";
					numSD = 1;
					isSD = true;
					break;
				case UNLOCK_TRANSMITTER_I:
					*result += L"Разблокировать выбранный передатчик";
					sampleCommand.commandName = "Разблокировать выбранный передатчик";
					numSD = 1;
					isSD = true;
					break;
				default:
					*result += L"Ошибка чтения команды.";
					sampleCommand.commandName = "Ошибка чтения команды.";
					break;
			}
			commandWords.push_back(sampleCommand);
			return true;
		}
		
		//Просто СД
		*result += L"Подадрес ОУ: ";
		__int8 subaddress = subAddressControlRegime SUBADDRESS_SHIFT;
		sampleCommand.subAddr = &subaddress;
		*result += std::to_wstring(*sampleCommand.subAddr);
		*result += L" Количество СД: ";
		numSD = (word & SD_NUM) SD_NUM_SHIFT;
		if (numSD == SPECIAL_32_SD) {
			numSD = 32;
		}
		sampleCommand.sdNum = (char*)(&numSD);
		isSD = true;
		*result += std::to_wstring(numSD);
		commandWords.push_back(sampleCommand);
		return true;
	}
	
	//Слово данных
	if (!respFirst) {
		if (isSD) {
			sampleData.blockId = blockNum;
			*result += L"Слово данных. Данные: ";
			int data_1 = (word & DATA_1) DATA1_SHIFT;
			int data_2 = (word & DATA_2) DATA2_SHIFT;
			int data_3 = (word & DATA_3) DATA3_SHIFT;
			int data_4 = (word & DATA_4) DATA4_SHIFT;

			std::wstringstream tmpStream;
			tmpStream << std::setfill(L'0') << std::setw(4) << std::hex << data_1 << L" "
				<< std::setfill(L'0') << std::setw(4) << data_2 << L" "
				<< std::setfill(L'0') << std::setw(4) << data_3 << L" "
				<< std::setfill(L'0') << std::setw(4) << data_4;

			std::stringstream dataBaseStream;
			dataBaseStream << std::setfill('0') << std::setw(4) << std::hex << data_1
				<< std::setfill('0') << std::setw(4) << data_2
				<< std::setfill('0') << std::setw(4) << data_3
				<< std::setfill('0') << std::setw(4) << data_4;
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					sampleData.data[i][j] = dataBaseStream.str().at(4 * i + j);
				}
			}
			sampleData.wordInBlock = wordNum;
			*result += tmpStream.str();
			numSD--;
			if (!numSD) {
				isSD = false;
				if (!isResponse) {
					ignoreOne = true;
					isBlockStatus = true;
					blockNum++;
					wordNum = 1;
					*result += L"\r\n";
				}
			}
			dataWords.push_back(sampleData);
			return true;
		}
	}
	else {
		respFirst = false;
	}

	//Ответное слово
	if (isResponse) {
		sampleResponse.blockId = blockNum;
		sampleResponse.grpComdRcvd = false;
		sampleResponse.intrfcCtrl = false;
		sampleResponse.isGroup = false;
		sampleResponse.maintReq = false;
		sampleResponse.msgErr = false;
		sampleResponse.OSTransmit = false;
		sampleResponse.ouErr = false;
		sampleResponse.rcvrBusy = false;
		sampleResponse.rcvrErr = false;
		sampleResponse.wordInBlock = wordNum;
		isResponse = false;

		int ouAddress = word & OU_ADRESS_GROUP;

		//Проверка группового сообщения
		if ((ouAddress) == OU_ADRESS_GROUP) {
			*result += L"(Групповое) ";
			sampleResponse.isGroup = true;
		}

		*result += L"Ответное слово. Адрес ОУ :";
		sampleResponse.ouAddress = ouAddress OU_ADRESS_SHIFT;
		*result += std::to_wstring(sampleResponse.ouAddress);
		*result += L" Активные признаки: [";
		if (word & ERROR_IN_MESSAGE) {
			*result += L"Ошибка в сообщении; ";
			sampleResponse.msgErr = true;
		}
		if (word & SENDING_OS) {
			*result += L"Передача ОС; ";
			sampleResponse.OSTransmit = true;
		}
		if (word & MAINTNANCE_REQUEST) {
			*result += L"Запрос на обслуживание; ";
			sampleResponse.maintReq = true;
		}
		if (word & GROUP_COMMAND_RECIEVED) {
			*result += L"Принята групповая команда; ";
			sampleResponse.grpComdRcvd = true;
		}
		if (word & RECEPIENT_BUSY) {
			*result += L"Абонент занят: ";
			sampleResponse.rcvrBusy = true;
		}
		if (word & RECEPIENT_ERROR) {
			*result += L"Неисправность абонента; ";
			sampleResponse.rcvrErr = true;
		}
		if (word & INTERFACE_CONTROL_RECIEVED) {
			*result += L"Принято управление интерфейсом; ";
			sampleResponse.intrfcCtrl = true;
		}
		if (word & OU_ERROR) {
			*result += L"Неисправность ОУ";
			sampleResponse.ouErr = true;
		}
		*result += L"]";

		//Проверка на СД после ОС
		if (isResponseSD) {
			isSD = true;
			numSD = 1;
			isResponseSD = false;
		}

		//Конец блока
		if (!isSD) {
			ignoreOne = true;
			isBlockStatus = true;
			blockNum++;
			wordNum = 1;
			*result += L"\r\n";
		}
		responseWords.push_back(sampleResponse);
		return true;
	}

	*result += L"Неопознанное слово.";
	return false;
}

//Эта функция кодирует сигнал для шифровки
void codeSignal(String ^string) {
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
}