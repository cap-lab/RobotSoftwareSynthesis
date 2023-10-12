/*
 * Module_ev3dev.c
 *
 *  Created on: 2018. 6. 15.
 *      Author: jej
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_common.h>
#include <UCThreadMutex.h>
#include "dynamixel_sdk.h"

#define PROTOCOL_VERSION 2.0
#define DEVICENAME "/dev/ttyACM0"
#define BAUDRATE 57600 

int port_num = 0;
HThreadMutex port_mutex;

uem_result Module_engineering_kit_Initialize()
{
	uem_result result = ERR_UEM_UNKNOWN;

	port_num = portHandler(DEVICENAME);
	packetHandler();
	printf("port init %d\n", port_num);

	if(openPort(port_num)) {
         printf("port open %d\n", port_num);
    } else {
		ERRASSIGNGOTO(result, ERR_UEM_INTERNAL_FAIL, _EXIT);
    }
    if (setBaudRate(port_num, BAUDRATE)) {
        printf("port baudrate %d\n", BAUDRATE);
    } else {
		ERRASSIGNGOTO(result, ERR_UEM_INTERNAL_FAIL, _EXIT);
    }
	UCThreadMutex_Create(&port_mutex);
	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}

uem_result Module_engineering_kit_Finalize()
{
	closePort(port_num);
	UCThreadMutex_Destroy(&port_mutex);
	port_num = 0;
_EXIT:
	return ERR_UEM_NOERROR;
}

uem_result SEMO_write1ByteTxRx(uint8_t id, uint16_t address, int value)
{
	UCThreadMutex_Lock(port_mutex);
	write1ByteTxRx(port_num, PROTOCOL_VERSION, id, address, value);
	UCThreadMutex_Unlock(port_mutex);
	return ERR_UEM_NOERROR;
}
uem_result SEMO_write4ByteTxRx(uint8_t id, uint16_t address, int value)
{
	UCThreadMutex_Lock(port_mutex);
	write4ByteTxRx(port_num, PROTOCOL_VERSION, id, address, value);
	UCThreadMutex_Unlock(port_mutex);
	return ERR_UEM_NOERROR;
}
uem_result SEMO_read1ByteTxRx(uint8_t id, uint16_t address, uint8_t *buffer)
{
	UCThreadMutex_Lock(port_mutex);
	*buffer = read1ByteTxRx(port_num, PROTOCOL_VERSION, id, address);
	UCThreadMutex_Unlock(port_mutex);
	return ERR_UEM_NOERROR;
}
uem_result SEMO_read2ByteTxRx(uint8_t id, uint16_t address, uint16_t *buffer)
{
	UCThreadMutex_Lock(port_mutex);
	*buffer = read2ByteTxRx(port_num, PROTOCOL_VERSION, id, address);
	UCThreadMutex_Unlock(port_mutex);
	return ERR_UEM_NOERROR;
}
