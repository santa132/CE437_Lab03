#ifndef __CAN_DIAGNOSTIC_H__
#define __CAN_DIAGNOSTIC_H__

#include "main.h"
#include "can.h"

#define CAN_DIAGNOSTIC_REQUEST_ID	0x712
#define CAN_DIAGNOSTIC_RESPONSE_ID	0x7a2

#define NEGATIVE_RESPONSE			0x7f
#define READ_DATA_BY_ID_SID 		0x22
#define WRITE_DATA_BY_ID_SID		0x2e
#define SECURITY_ACCESS_SID			0x27

#define READ_INVALID_LENGTH			0x13
#define WRITE_INVALID_LENGTH		0x13
#define WRITE_DID_NOT_SUPPORT		0x31
#define SECURITY_INVALID_LENGTH		0x13
#define SECURITY_INVALID_KEY		0x35

void diagnosticReadDataByIdentifier(CAN_HandleTypeDef *hcan, const CAN_TxHeaderTypeDef *pHeader,
								uint16_t identifier, uint32_t *pTxMailbox, uint8_t securityAccess);


void diagnosticWriteDataByIdentifier(CAN_HandleTypeDef *hcan, const CAN_TxHeaderTypeDef *pHeader,
								uint32_t *pTxMailbox, uint8_t securityAccess);

void diagnosticSecurityAccess(CAN_HandleTypeDef *hcan, const CAN_TxHeaderTypeDef *pHeader,
		uint32_t *pTxMailbox, uint8_t securityAccess);

#endif /* __CAN_DIAGNOSTIC_H__ */
