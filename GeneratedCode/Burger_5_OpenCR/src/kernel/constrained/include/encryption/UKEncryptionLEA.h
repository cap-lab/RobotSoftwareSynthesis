/*
 * UKEncryptionLEA.h
 *
 *  Created on: 2021. 9. 2.
 *      Author: jrkim
 */

#ifndef SRC_KERNEL_UNCONSTRAINED_INCLUDE_ENCRYPTION_UKENCRYPTIONLEA_H_
#define SRC_KERNEL_UNCONSTRAINED_INCLUDE_ENCRYPTION_UKENCRYPTIONLEA_H_

#include <uem_common.h>

#include <UKVirtualEncryption.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief initialize an encryption.
 *
 * This function initialize roundkey and init vec.
 *
 * @param phKey a key to be used in the encryption.
 * @param pstEncKeyInfo a encryption key info.
 *
 * @return
 * @ref ERR_UEM_NOERROR is returned if there is no error. \n
 * Errors to be returned - @ref ERR_UEM_INVALID_PARAM.
 */
uem_result UKEncryptionLEA_Initialize(HVirtualKey *phKey, void *pstKeyInfo);

/**
 * @brief encode/decode data on CTR mode.
 *
 * This function encode/decode the data.
 *
 * @param hKey a key to be used in the encryption.
 * @param pData a data to be encrypted or decrypted.
 * @param nDataLen a data length.
 *
 * @return
 * @ref ERR_UEM_NOERROR is returned if there is no error. \n
 * Errors to be returned - @ref ERR_UEM_INVALID_PARAM.
 */
uem_result UKEncryptionLEA_EncodeOnCTRMode(HVirtualKey hKey, uem_uint8 *pData, uem_uint32 nDataLen);

#ifdef __cplusplus
}
#endif


#endif /* SRC_KERNEL_UNCONSTRAINED_INCLUDE_ENCRYPTION_UKENCRYPTIONLEA_H_ */
