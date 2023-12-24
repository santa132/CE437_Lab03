//#include "can_diagnostic.h"
//
//void diagnosticReadDataByIdentifier(CAN_HandleTypeDef *hcan, const CAN_TxHeaderTypeDef *pHeader,
//								uint16_t identifier, uint32_t *pTxMailbox, uint8_t securityAccess)
//{
//	uint8_t requestFormat[8];
//	memset(requestFormat, 0x00, 8);
//	requestFormat[0] = READ_DATA_BY_ID_SID;
//	requestFormat[1] = (identifier >> 8) & 0xff;
//	requestFormat[2] = identifier & 0xff;
//	CAN_Transmit(hcan, pHeader, requestFormat, pTxMailbox);
//}
//
//void diagnosticWriteDataByIdentifier(CAN_HandleTypeDef *hcan, const CAN_TxHeaderTypeDef *pHeader,
//								uint32_t *pTxMailbox, uint8_t securityAccess)
//{
//	uint8_t requestFormat[8];
//	memset(requestFormat, 0x00, 8);
//	requestFormat[0] = WRITE_DATA_BY_ID_SID;
//	requestFormat[1] = (identifier >> 8) & 0xff;
//	requestFormat[2] = identifier & 0xff;
//	CAN_Transmit(hcan, pHeader, requestFormat, pTxMailbox);
//}
