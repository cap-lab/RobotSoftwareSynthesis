/* uem_channel_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif





#include <Arduino.h>
#include <USBSerial.h>
#include <HardwareSerial.h>

#include <uem_common.h>

#include <UCSerial.h>
#include <UCSerial_data.hpp>

#include <uem_enum.h>

#include <uem_channel_data.h>
#include <uem_bluetooth_data.h>
#include <UKSerialChannel.h>
#include <UKSerialModule.h>
#include <UKVirtualEncryption.h>


#include <UKAddOnHandler.h>
#include <UKSharedMemoryChannel.h>

// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::START
#define CHANNEL_56_SIZE (4)
#define CHANNEL_57_SIZE (4)
#define CHANNEL_58_SIZE (8)
// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::END

// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::START
char s_pChannel_56_buffer[CHANNEL_56_SIZE];
char s_pChannel_57_buffer[CHANNEL_57_SIZE];
char s_pChannel_58_buffer[CHANNEL_58_SIZE];
// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::END


// ##PORT_ARRAY_TEMPLATE::START
SPort g_astPortInfo[] = {
	{
		68, // Task ID
		"colorFromOpenCR", // Port name
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information
	{
		67, // Task ID
		"color", // Port name
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information
	{
		71, // Task ID
		"direction", // Port name
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information
	{
		70, // Task ID
		"direction", // Port name
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information
	{
		76, // Task ID
		"led", // Port name
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information
	{
		75, // Task ID
		"ledToOpenCR", // Port name
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information
};
// ##PORT_ARRAY_TEMPLATE::END


// ##SOFTWARESERIAL_GENERATION_TEMPLATE::START
// ##SOFTWARESERIAL_GENERATION_TEMPLATE::END

//OPENCRSERIAL_GENERATION_TEMPLATE::START
	 //suppose only one Serial used.
SSerialHandle g_stSerial_USB_slave  = { &Serial, USBSerial_Initialize };

SChannel *g_pastAccessChannel_USB_slave[3];
	
SSerialInfo g_astSerialSlaveInfo[] = {
	{
		&g_stSerial_USB_slave,
		3,
		0,
		g_pastAccessChannel_USB_slave,
	},
};
//OPENCRSERIAL_GENERATION_TEMPLATE::END

// ##SPECIFIC_CHANNEL_LIST_TEMPLATE::START
SSharedMemoryChannel g_stSharedMemoryChannel_56 = {
	s_pChannel_56_buffer, // Channel buffer pointer
	s_pChannel_56_buffer, // Channel data start
	s_pChannel_56_buffer, // Channel data end
	0, // Channel data length
	TRUE, // initial data is updated
};

SSerialChannel g_stSerialChannel_56 = {
	&g_astSerialSlaveInfo[0],
	{
		MESSAGE_TYPE_NONE,
		0,
	},
	&g_stSharedMemoryChannel_56,
};

SSharedMemoryChannel g_stSharedMemoryChannel_57 = {
	s_pChannel_57_buffer, // Channel buffer pointer
	s_pChannel_57_buffer, // Channel data start
	s_pChannel_57_buffer, // Channel data end
	0, // Channel data length
	TRUE, // initial data is updated
};

SSerialChannel g_stSerialChannel_57 = {
	&g_astSerialSlaveInfo[0],
	{
		MESSAGE_TYPE_NONE,
		0,
	},
	&g_stSharedMemoryChannel_57,
};

SSharedMemoryChannel g_stSharedMemoryChannel_58 = {
	s_pChannel_58_buffer, // Channel buffer pointer
	s_pChannel_58_buffer, // Channel data start
	s_pChannel_58_buffer, // Channel data end
	0, // Channel data length
	TRUE, // initial data is updated
};

SSerialChannel g_stSerialChannel_58 = {
	&g_astSerialSlaveInfo[0],
	{
		MESSAGE_TYPE_NONE,
		0,
	},
	&g_stSharedMemoryChannel_58,
};

// ##SPECIFIC_CHANNEL_LIST_TEMPLATE::END


// ##CHANNEL_LIST_TEMPLATE::START
SChannel g_astChannels[] = {
	{
		56, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		//CHANNEL_TYPE_GENERAL, // Channel type (not used in constrained device)
		CHANNEL_56_SIZE, // Channel size
		&(g_astPortInfo[0]), // Outer-most input port information
		&(g_astPortInfo[1]), // Outer-most output port information
		0, // Initial data length
		&g_stSerialChannel_56, // specific serial channel structure pointer
	},
	{
		57, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_READER, // Channel communication type
		//CHANNEL_TYPE_GENERAL, // Channel type (not used in constrained device)
		CHANNEL_57_SIZE, // Channel size
		&(g_astPortInfo[2]), // Outer-most input port information
		&(g_astPortInfo[3]), // Outer-most output port information
		0, // Initial data length
		&g_stSerialChannel_57, // specific serial channel structure pointer
	},
	{
		58, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_READER, // Channel communication type
		//CHANNEL_TYPE_GENERAL, // Channel type (not used in constrained device)
		CHANNEL_58_SIZE, // Channel size
		&(g_astPortInfo[4]), // Outer-most input port information
		&(g_astPortInfo[5]), // Outer-most output port information
		0, // Initial data length
		&g_stSerialChannel_58, // specific serial channel structure pointer
	},
};
// ##CHANNEL_LIST_TEMPLATE::END



SChannelAPI g_stSharedMemoryChannel = {
	UKSharedMemoryChannel_Initialize, // fnInitialize
	UKSharedMemoryChannel_ReadFromQueue, // fnReadFromQueue
	UKSharedMemoryChannel_ReadFromBuffer, // fnReadFromBuffer
	UKSharedMemoryChannel_WriteToQueue, // fnWriteToQueue
	UKSharedMemoryChannel_WriteToBuffer, // fnWriteToBuffer
	UKSharedMemoryChannel_GetAvailableChunk, // fnGetAvailableChunk
	UKSharedMemoryChannel_GetNumOfAvailableData, // fnGetNumOfAvailableData
	UKSharedMemoryChannel_Clear, // fnClear
	UKSharedMemoryChannel_SetExit,
	UKSharedMemoryChannel_ClearExit,
	UKSharedMemoryChannel_FillInitialData,
	UKSharedMemoryChannel_Finalize, // fnFinalize
	(FnChannelAPIInitialize) NULL,
	(FnChannelAPIInitialize) NULL,
};

SChannelAPI g_stSerialChannel = {
	UKSerialChannel_Initialize, // fnInitialize
	UKSerialChannel_ReadFromQueue, // fnReadFromQueue
	UKSerialChannel_ReadFromBuffer, // fnReadFromBuffer
	UKSerialChannel_WriteToQueue, // fnWriteToQueue
	UKSerialChannel_WriteToBuffer, // fnWriteToBuffer
	UKSerialChannel_GetAvailableChunk, // fnGetAvailableChunk
	UKSerialChannel_GetNumOfAvailableData, // fnGetNumOfAvailableData
	UKSerialChannel_Clear, // fnClear
	UKSerialChannel_SetExit,
	UKSerialChannel_ClearExit,
	UKSerialChannel_FillInitialData,
	UKSerialChannel_Finalize, // fnFinalize
	UKSerialModule_Initialize,
	UKSerialModule_Finalize,
};

SChannelAPI *g_astChannelAPIList[] = {
		&g_stSharedMemoryChannel,
		&g_stSerialChannel,
};


SAddOnFunction g_astAddOns[] = {
	{
		(FuncAddOnFunction) NULL,
		UKSerialModule_Run,
		(FuncAddOnFunction) NULL,
	},
};


#ifdef __cplusplus
extern "C"
{
#endif

uem_result ChannelAPI_SetSocketAPIs()
{
	return ERR_UEM_NOERROR;
}


uem_result ChannelAPI_GetAPIStructureFromCommunicationType(IN ECommunicationType enType, OUT SChannelAPI **ppstChannelAPI)
{
	uem_result result = ERR_UEM_UNKNOWN;
	switch(enType)
	{
	case COMMUNICATION_TYPE_SHARED_MEMORY:
		*ppstChannelAPI = &g_stSharedMemoryChannel;
		break;
	// For unconstrained device, only serial communication (serial or bluetooth) is supported for remote communication
	case COMMUNICATION_TYPE_REMOTE_WRITER:
	case COMMUNICATION_TYPE_REMOTE_READER:
		*ppstChannelAPI = &g_stSerialChannel;	
		break;
	default:
		ERRASSIGNGOTO(result, ERR_UEM_INVALID_PARAM, _EXIT)
		break;
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}

#ifdef __cplusplus
}
#endif

int g_nChannelAPINum = ARRAYLEN(g_astChannelAPIList);
int g_nChannelNum = ARRAYLEN(g_astChannels);

int g_nAddOnNum = ARRAYLEN(g_astAddOns);

int g_nSerialMasterNum = 0;
	
int g_nSerialSlaveNum = ARRAYLEN(g_astSerialSlaveInfo);

