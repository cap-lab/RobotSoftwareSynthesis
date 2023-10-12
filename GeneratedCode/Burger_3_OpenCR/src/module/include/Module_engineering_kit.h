/*
 * Module_ev3dev.h
 *
 *  Created on: 2018. 6. 15.
 *      Author: jej
 */

#ifndef SRC_MODULE_INCLUDE_MODULE_ENGINEERING_KIT_H_
#define SRC_MODULE_INCLUDE_MODULE_ENGINEERING_KIT_H_

#include <uem_common.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define DXL_ID_13 13
#define DXL_ID_14 14
#define DXL_ID_15 15
#define DXL_ID_16 16
#define DXL_ID_BROADCAST 254
#define CM_ID 200

/**
 * @brief
 *
 * This function
 *
 * @return
 */
uem_result Module_engineering_kit_Initialize();

/**
 * @brief
 *
 * This function
 *
 * @return
 */
uem_result Module_engineering_kit_Finalize();

uem_result SEMO_write1ByteTxRx(unsigned char id, unsigned short address, int value);
uem_result SEMO_write4ByteTxRx(unsigned char id, unsigned short address, int value);
uem_result SEMO_read1ByteTxRx(unsigned char id, unsigned short address, unsigned char *buffer);
uem_result SEMO_read2ByteTxRx(unsigned char id, unsigned short address, unsigned char *buffer);

#ifdef __cplusplus
}
#endif

#endif /* SRC_MODULE_INCLUDE_MODULE_ENGINEERING_KIT_H_ */
