/*
 * UCSerial.h
 *
 *  Created on: 2018. 10. 23.
 *      Author: jej
 */

#ifndef SRC_COMMON_CONSTRAINED_INCLUDE_COMMUNICATION_UCSERIAL_H_
#define SRC_COMMON_CONSTRAINED_INCLUDE_COMMUNICATION_UCSERIAL_H_

#include <uem_common.h>

#include <uem_enum.h>

#ifdef __cplusplus
extern "C"
{
#endif


#ifndef DATA_SERIAL_DEFAULT_BAUD_RATE
	#define DATA_SERIAL_DEFAULT_BAUD_RATE (38400)
#endif


typedef struct _SSerialHandle *HSerial;

/**
 * @brief Initialize serial communication.
 *
 * This function initializes serial communication. \n
 * hSerial handle is already generated by UEMTranslator, so only initialization is needed. \n
 * Serial communication can be performed through wire/USB or Bluetooth.
 *
 * @param hSerial a serial communication handle.
 */
void UCSerial_Initialize(HSerial hSerial);

/**
 * @brief Send data through serial communication.
 *
 * This function sends data through serial communication.
 *
 * @param hSerial a serial communication handle.
 * @param pData data to send.
 * @param nDataLen size of data.
 * @param[out] pnSentSize amount of data transmitted.
 *
 * @return @ref ERR_UEM_NOERROR is returned if there is no error. \n
 *         Errors to be returned - @ref ERR_UEM_NET_SEND_ERROR, @ref ERR_UEM_INVALID_PARAM. \n
 *         @ref ERR_UEM_NET_SEND_ERROR can be occurred when the data cannot be sent.
 */
uem_result UCSerial_Send(HSerial hSerial, IN char *pData, IN int nDataLen, OUT int *pnSentSize);

/**
 * @brief Receive data through serial communication.
 *
 * This function receives data through serial communication. \n
 * Actually, it checks the how much data can be read and reads the data.
 *
 * @param hSerial a serial communication handle.
 * @param[in,out] pBuffer buffer to store received data.
 * @param nBufferLen size of the buffer.
 * @param[out] pnReceivedSize amount of size read.
 *
 * @return @ref ERR_UEM_NOERROR is returned if there is no error. \n
 *         Errors to be returned - @ref ERR_UEM_INVALID_PARAM.
 */
uem_result UCSerial_Receive(HSerial hSerial, IN OUT char *pBuffer, IN int nBufferLen, OUT int *pnReceivedSize);

/**
 * @brief Check the amount of received data through serial communication.
 *
 * This function checks the amount of received data through serial communication. \n
 * This function can be used to monitor how much data are received before reading the actual data.
 *
 * @param hSerial a serial communication handle.
 * @param[out] pnAvailableSize amount of size can be readable.
 *
 * @return It always returns @ref ERR_UEM_NOERROR.
 */
uem_result UCSerial_Available(HSerial hSerial, OUT int *pnAvailableSize);

#ifdef __cplusplus
}
#endif

#endif /* SRC_COMMON_CONSTRAINED_INCLUDE_COMMUNICATION_UCSERIAL_H_ */
