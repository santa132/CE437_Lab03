#ifndef __CAN_H__
#define __CAN_H__

#include "main.h"

#define CAN_TX_STD_ID 	0x0A2
#define CAN_RX_STD_ID 	0x012
#define CAN_DATA_LENGTH 0x08

int SAE_J1850_Calc(uint8_t data[], int len);

void genMessage();
void CAN_Transmit(CAN_HandleTypeDef *hcan);

#endif /* __CAN_H__ */
