#pragma once
#include <iostream>

#include "postgres-connection.h"
#include "postgres-exceptions.h"
using namespace db::postgres;

Connection cnx;

std::wstring connect() {
	std::wstring returned = L"";
	try {
		cnx.connect("postgresql://postgres@localhost:5432/decypheredSignals");
		returned += L"\r\nСоединение с БД установлено.\r\n";
		return returned;
	}
	catch (ConnectionException e) {
		return L"\r\nOops... Cannot connect...";
	}
	catch (ExecutionException e) {
		std::string s(e.what());
		returned.assign(s.begin(), s.end());
		return returned;
	}
}

//Функция записи в БД
std::wstring writeToDb() {
	int rowsAffected = 0;
	std::wstring lefter;
	try {
		for (int i = 0; i < blockWords.size(); ++i) {
			rowsAffected += cnx.execute(R"SQL(INSERT INTO blocks (command_error_flag,rt_to_rt_gap_error_flag,
bad_word_flag,bad_sync_flag,word_count_error_flag,data_roll_flag,good_data_flag,response_flag,format_error_flag,
rt_to_rt_transfer_flag,block_error_flag,channel_b_flag,begin_of_message_flag,end_of_message_flag,time,rtt_cmd2_error_flag) 
VALUES ($1,$2,$3,$4,$5,$6,$7,$8,$9,$10,$11,$12,$13,$14,$15,$16))SQL", blockWords[i].commandErrorFlag, blockWords[i].rtRtGapErrorFlag,
						blockWords[i].badWordFlag, blockWords[i].badSyncFlag,
						blockWords[i].wordCountErrorFlag, blockWords[i].dataRollFlag,
						blockWords[i].goodDataFlag, blockWords[i].responseFlag,
						blockWords[i].formatErrorFlag, blockWords[i].rtRtTransferFlag,
						blockWords[i].blockErrorFlag, blockWords[i].channelBFlag,
						blockWords[i].beginOfMssgFlag, blockWords[i].endOfMssgFlag,
						blockWords[i].time, blockWords[i].rttErrorFlag).count();
		}
		std::string executionString = "";
		for (int i = 0; i < commandWords.size(); ++i) {
			executionString = "";
			executionString += "INSERT INTO cmdwords (blockid,isgroup,istesting,commandname,ouaddress,k,sdnum,ousubaddress,wordinblock) VALUES (";
			executionString += std::to_string(commandWords[i].blockId);
			executionString += ",";
			executionString += commandWords[i].isGroup ? "true" : "false";
			executionString += ",";
			executionString += commandWords[i].isTesting ? "true" : "false";
			executionString += ",";
			if (commandWords[i].commandName == "") {
				executionString += "NULL";
			}
			else {
				executionString += "\'";
				executionString += commandWords[i].commandName;
				executionString += "\'";
			}
			executionString += ",";
			executionString += std::to_string(commandWords[i].ouAddress);
			executionString += ",";
			executionString += commandWords[i].k ? "true" : "false";
			executionString += ",";
			if (commandWords[i].sdNum == nullptr) {
				executionString += "NULL";
			}
			else {
				executionString += std::to_string((int)*(commandWords[i].sdNum));
			}
			executionString += ",";
			if (commandWords[i].subAddr == nullptr) {
				executionString += "NULL";
			}
			else {
				executionString += std::to_string((int)*(commandWords[i].subAddr));
			}
			executionString += ",";
			executionString += std::to_string(commandWords[i].wordInBlock);
			executionString += ")";
			rowsAffected += cnx.execute(executionString.c_str()).count();
		}

		for (int i = 0; i < responseWords.size(); ++i) {
			rowsAffected += cnx.execute(R"SQL(INSERT INTO responsewords (blockid,ouaddress,connection_error_flag,os_transmit_flag,maintenance_request_flag,group_command_flag,busy_flag,fault_flag,
interface_control_flag,ou_error_flag,wordinblock,isgroup) VALUES ($1,$2,$3,$4,$5,$6,$7,$8,$9,$10,$11,$12))SQL", (int)responseWords[i].blockId, (int)responseWords[i].ouAddress, responseWords[i].msgErr, responseWords[i].OSTransmit,
responseWords[i].maintReq, responseWords[i].grpComdRcvd, responseWords[i].rcvrBusy, responseWords[i].rcvrErr, responseWords[i].intrfcCtrl, responseWords[i].ouErr, (int)responseWords[i].wordInBlock, responseWords[i].isGroup).count();
		}
		
		for (int i = 0; i < dataWords.size(); ++i) {
			executionString = "";
			executionString += "INSERT INTO datawords (blockid,data1,data2,data3,data4,wordinblock) VALUES (";
			executionString += std::to_string(dataWords[i].blockId);
			executionString += ",\'";
			for (int i = 0; i < 4; ++i) {
				executionString += dataWords[i].data[0][i];
			}
			executionString += "\',\'";
			for (int i = 0; i < 4; ++i) {
				executionString += dataWords[i].data[1][i];
			}
			executionString += "\',\'";
			for (int i = 0; i < 4; ++i) {
				executionString += dataWords[i].data[2][i];
			}
			executionString += "\',\'";
			for (int i = 0; i < 4; ++i) {
				executionString += dataWords[i].data[3][i];
			}
			executionString += "\',";
			executionString += std::to_string(dataWords[i].wordInBlock);
			executionString += ")";
			rowsAffected += cnx.execute(executionString.c_str()).count();
		}
		
		lefter = L"Всего записей добавлено: ";
		lefter += std::to_wstring(rowsAffected);
		dataWords.clear();
		responseWords.clear();
		commandWords.clear();
		blockWords.clear();
		return lefter;
	}
	catch (ExecutionException e) {
		std::string s(e.what());
		lefter.assign(s.begin(), s.end());
		return lefter;
	}
}

//Функция чтния из БД
std::wstring readFromDb() {
//
	//
	//
	//
	//

}