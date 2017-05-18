#pragma once
#include <stdint.h>
#include <vector>

//Убрать комментарий с нужного формата записи сигнала
//#define _LITTLEENDIAN_
#define _BIGENDIAN_

#pragma region Макросы на основе ГОСТ 52070-2003

#pragma region Статус блока
#define COMMAND_ERROR 1
#define RTT_CMD2_ERR 2
#define RT_TO_RT_GAP_ERR 4
#define BAD_WORD 8
#define BAD_SYNC 16
#define WORD_COUNT_ERR 32

#define DATA_ROLL 128
#define GOOD_DATA 256
#define RESPONSE 512
#define FORMAT_ERR 1024
#define RT_TO_RT_TRANSFER 2048
#define BLOCK_ERROR 4096
#define CHANNEL_B 8192
#define BEGIN_OF_MSG 16384
#define END_OF_MSG 32768
#pragma endregion

#ifdef _BIGENDIAN_



#pragma region Состав
//Адрес ОУ
#define OU_ADRESS_GROUP 63488 /*1111100000000000*/
#define OU_ADRESS_SHIFT >> 11

//К
#define THE_K 1024 /*0000010000000000*/
#define THE_K_SHIFT >> 10

//Подадрес
#define SUBADDRESS_SHIFT >> 5

//Количество СД
#define SD_NUM	31 /*0000000000011111*/
#define SD_NUM_SHIFT >> 0

//Конструкция для проверки комманды
#define CODE_CHECK 1055 /*0000010000011111*/

//Разбиение по группам данных
#define DATA_1 61440 /*1111000000000000*/
#define DATA1_SHIFT >> 12
#define DATA_2 3840 /*0000111100000000*/
#define DATA2_SHIFT >> 8
#define DATA_3 240 /*0000000011110000*/
#define DATA3_SHIFT >> 4
#define DATA_4 15 /*0000000000001111*/
#define DATA4_SHIFT >> 0
#pragma endregion

#pragma region Особые значения
#define SUBADDRESS_CONTROL_REGIME 992  /*0000001111100000*/
#define CONTROL_REGIME_1 992  /*0000001111100000*/
#define CONTROL_REGIME_2 0  /*0000000000000000*/
#define OU_TESTING 960 /*0000001111000000*/
#define SPECIAL_32_SD 0 /*0000000000000000*/
#pragma endregion 

#pragma region Комманды
#define ASSUME_INTERFACE_CONTROL 1024 /*0000010000000000*/
#define SYNCRONISATION 1025 /*0000010000000001*/
#define SEND_OS 1026 /*0000010000000010*/
#define BEGIN_SELFCHECK 1027 /*0000010000000011*/
#define LOCK_TRANSMITTER 1028 /*0000010000000100*/
#define UNLOCK_TRANSMITTER 1029 /*0000010000000101*/
#define LOCK_OU_ERR_FLAG 1030 /*0000010000000110*/
#define UNLOCK_OU_ERR_FLAG 1031 /*0000010000000111*/
#define OU_RESET 1032 /*0000010000001000*/
#define SEND_VECTOR 1040 /*0000010000010000*/
#define SYNC_WITH_SD 17 /*0000000000010001*/
#define REPEAT_LAST 1042 /*0000010000010010*/
#define SEND_VSK_OU 1043 /*0000010000010011*/
#define LOCK_TRANSMITTER_I 20 /*0000000000010100*/
#define UNLOCK_TRANSMITTER_I 21 /*0000000000010101*/
#pragma endregion 

#pragma region Флаги
#define ERROR_IN_MESSAGE 1024 /*0000010000000000*/
#define SENDING_OS 512 /*0000001000000000*/
#define MAINTNANCE_REQUEST 256 /*0000000100000000*/
#define GROUP_COMMAND_RECIEVED 16 /*0000000000010000*/
#define RECEPIENT_BUSY 8 /*0000000000001000*/
#define RECEPIENT_ERROR 4 /*000000000000100*/
#define INTERFACE_CONTROL_RECIEVED 2 /*0000000000000010*/
#define OU_ERROR 1 /*0000000000000001*/
#pragma endregion

#endif // _BIGENDIAN_

#ifdef _LITTLEENDIAN_

#pragma region Состав
//Адрес ОУ
#define OU_ADRESS_GROUP 31 /*0000000000011111*/
#define OU_ADRESS_SHIFT >> 0

//К
#define THE_K 1024 /*0000000000100000*/
#define THE_K_SHIFT >> 5

//Подадрес
#define SUBADDRESS_CONTROL_REGIME 1984 /*0000011111000000*/
#define SUBADDRESS_SHIFT >> 6

//Количество СД
#define SD_NUM 63488 /*1111100000000000*/
#define SD_NUM_SHIFT >> 11

//Конструкция для проверки комманды
#define CODE_CHECK 63520 /*1111100000100000*/

//Разбиение по группам данных
#define DATA_1 15 /*0000000000001111*/
#define DATA1_SHIFT >> 0
#define DATA_2 240 /*0000000011110000*/
#define DATA2_SHIFT >> 4
#define DATA_3 3840 /*0000111100000000*/
#define DATA3_SHIFT >> 8
#define DATA_4 61440 /*1111000000000000*/
#define DATA4_SHIFT >> 12
#pragma endregion

#pragma region Особые значения
#define CONTROL_REGIME_1 1984 /*0000011111000000*/
#define CONTROL_REGIME_2 0 /*0000000000000000*/
#define OU_TESTING 1920 /*0000011110000000*/
#define SPECIAL_32_SD 0 /*0000000000000000*/
#pragma endregion 

#pragma region Комманды
#define ASSUME_INTERFACE_CONTROL 32 /*0000000000100000*/
#define SYNCRONISATION 2080 /*0000100000100000*/
#define SEND_OS 4128 /*0001000000100000*/
#define BEGIN_SELFCHECK 6176 /*0001100000100000*/
#define LOCK_TRANSMITTER 8224 /*0010000000100000*/
#define UNLOCK_TRANSMITTER 10272 /*0010100000100000*/
#define LOCK_OU_ERR_FLAG 12320 /*0011000000100000*/
#define UNLOCK_OU_ERR_FLAG 14368 /*0011100000100000*/
#define OU_RESET 16416 /*0100000000100000*/
#define SEND_VECTOR 32800 /*1000000000100000*/
#define SYNC_WITH_SD 34816 /*1000100000000000*/
#define REPEAT_LAST 36896 /*0000000000100000*/
#define SEND_VSK_OU 38944 /*1001100000100000*/
#define LOCK_TRANSMITTER_I 40960 /*1010000000000000*/
#define UNLOCK_TRANSMITTER_I 43008 /*1010100000000000*/
#pragma endregion 

#pragma region Флаги
#define ERROR_IN_MESSAGE 32768 /*1000000000000000*/
#define SENDING_OS 16384 /*0100000000000000*/
#define MAINTNANCE_REQUEST 8192 /*0010000000000000*/
#define GROUP_COMMAND_RECIEVED 4096 /*0001000000000000*/
#define RECEPIENT_BUSY 2048 /*0000100000000000*/
#define RECEPIENT_ERROR 128 /*0000000010000000*/
#define INTERFACE_CONTROL_RECIEVED 64 /*0000000001000000*/
#define OU_ERROR 32 /*0000000000100000*/
#pragma endregion
#endif // _LITTLEENDIAN_

#pragma endregion

struct commandWord {
	__int8 blockId;
	__int8 ouAddress;
	bool isGroup;
	bool isTesting;
	bool k;
	std::string commandName;
	__int8* subAddr;
	__int8* sdNum;
	__int8 wordInBlock;
};

struct dataWord {
	__int8 blockId;
	char data[4][4];
	__int8 wordInBlock;
};

struct responseWord {
	__int8 blockId;
	__int8 ouAddress;
	bool isGroup;
	bool msgErr;
	bool OSTransmit;
	bool maintReq;
	bool grpComdRcvd;
	bool rcvrBusy;
	bool rcvrErr;
	bool intrfcCtrl;
	bool ouErr;
	__int8 wordInBlock;
};

struct blockWord {
	bool commandErrorFlag;
	bool rttErrorFlag;
	bool rtRtGapErrorFlag;
	bool badWordFlag;
	bool badSyncFlag;
	bool wordCountErrorFlag;
	bool dataRollFlag;
	bool goodDataFlag;
	bool responseFlag;
	bool formatErrorFlag;
	bool rtRtTransferFlag;
	bool blockErrorFlag;
	bool channelBFlag;
	bool beginOfMssgFlag;
	bool endOfMssgFlag;
	int time;
};

std::vector<commandWord> commandWords;
std::vector<dataWord> dataWords;
std::vector<responseWord> responseWords;
std::vector<blockWord> blockWords;