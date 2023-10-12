/* uem_multicast_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_common.h>
#include <uem_multicast_data.h>
#include <UCDynamicSocket.h>
#include <UCUDPSocket.h>
#include <UKUDPSocketMulticast.h>


#include <UKHostSystem.h>
#include <UKSharedMemoryMulticast.h>
#include <UKMulticast.h>
#include <UCBasic.h>

#include <uem_data.h>

// ##MULTICAST_GROUP_SIZE_DEFINITION_TEMPLATE::START
#define MULTICAST_Robot_leader_heartbeat_SIZE (16)
#define MULTICAST_Burger_2_color_SIZE (4)
#define MULTICAST_Burger_2_led_SIZE (8)
#define MULTICAST_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_SIZE (16)
#define MULTICAST_Burger_2_camera_SIZE (691200)
#define MULTICAST_Robot_groupB_leader_heartbeat_SIZE (16)
#define MULTICAST_Burger_2_wheel_SIZE (4)
#define MULTICAST_Robot_groupA_leader_robotId_SIZE (16)
#define MULTICAST_Burger_2_distance_SIZE (16)
#define MULTICAST_Robot_leader_robotId_SIZE (16)
#define MULTICAST_Robot_groupA_leader_heartbeat_SIZE (16)
#define MULTICAST_Robot_groupA_event_SIZE (16)
#define MULTICAST_Robot_SEARCH_GROUPING_grouping_SIZE (156)
#define MULTICAST_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_SIZE (20)
#define MULTICAST_Robot_groupB_leader_robotId_SIZE (16)
#define MULTICAST_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_SIZE (16)
#define MULTICAST_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_SIZE (20)
#define MULTICAST_Robot_groupB_event_SIZE (16)
// ##MULTICAST_GROUP_SIZE_DEFINITION_TEMPLATE::END

// ##MULTICAST_API_DEFINITION_TEMPLATE::START
SMulticastAPI g_stSharedMemoryMulticast = {
	(FnMulticastAPIInitialize) NULL, // fnAPIInitialize
	(FnMulticastAPIFinalize) NULL, // fnAPIFinalize
	UKSharedMemoryMulticastGroup_Initialize, // fnGroupInitialize
	UKSharedMemoryMulticastGroup_Finalize, // fnGroupFinalize
	(FnMulticastPortInitialize) NULL, // fnPortInitialize
	(FnMulticastPortFinalize) NULL, // fnPortFinalize
	UKSharedMemoryMulticast_ReadFromBuffer, // fnReadFromBuffer
	UKSharedMemoryMulticast_WriteToBuffer, // fnWriteToBuffer
};

SMulticastAPI g_stUDPSocketMulticast = {
	UKUDPSocketMulticastAPI_Initialize, // fnAPIInitialize
	UKUDPSocketMulticastAPI_Finalize, // fnAPIFinalize
	(FnMulticastGroupInitialize) NULL, // fnInitialize
	(FnMulticastGroupFinalize) NULL, // fnFinalize
	UKUDPSocketMulticastPort_Initialize, // fnInitialize
	UKUDPSocketMulticastPort_Finalize, // fnFinalize
	(FnMulticastReadFromBuffer) NULL, // fnReadFromBuffer
	UKUDPSocketMulticast_WriteToBuffer, // fnWriteToBuffer
};

SMulticastAPI *g_astMulticastAPIList[] = {
	&g_stSharedMemoryMulticast,
	&g_stUDPSocketMulticast,
};

SSocketAPI stUDPAPI = {
	UCUDPSocket_Bind,
	(FnSocketAccept) NULL,
	(FnSocketConnect) NULL,
	UCUDPSocket_Create,
	(FnSocketDestroy) NULL,
};		
// ##MULTICAST_API_DEFINITION_TEMPLATE::END

// ##MEMORY_MENAGEMENT_TEMPLATE::START
SGenericMemoryAccess g_stMulticastHostMemory = {
	UKHostSystem_CreateMemory,
	UKHostSystem_CopyToMemory,
	UKHostSystem_CopyInMemory,
	UKHostSystem_CopyFromMemory,
	UKHostSystem_DestroyMemory,
};

// ##MEMORY_MENAGEMENT_TEMPLATE::END

// ##MULTICAST_GROUP_BUFFER_DEFINITION_TEMPLATE::START
char s_pMulticastGroup_Robot_leader_heartbeat_buffer[MULTICAST_Robot_leader_heartbeat_SIZE];
char s_pMulticastGroup_Burger_2_color_buffer[MULTICAST_Burger_2_color_SIZE];
char s_pMulticastGroup_Burger_2_led_buffer[MULTICAST_Burger_2_led_SIZE];
char s_pMulticastGroup_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_buffer[MULTICAST_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_SIZE];
char s_pMulticastGroup_Burger_2_camera_buffer[MULTICAST_Burger_2_camera_SIZE];
char s_pMulticastGroup_Robot_groupB_leader_heartbeat_buffer[MULTICAST_Robot_groupB_leader_heartbeat_SIZE];
char s_pMulticastGroup_Burger_2_wheel_buffer[MULTICAST_Burger_2_wheel_SIZE];
char s_pMulticastGroup_Robot_groupA_leader_robotId_buffer[MULTICAST_Robot_groupA_leader_robotId_SIZE];
char s_pMulticastGroup_Burger_2_distance_buffer[MULTICAST_Burger_2_distance_SIZE];
char s_pMulticastGroup_Robot_leader_robotId_buffer[MULTICAST_Robot_leader_robotId_SIZE];
char s_pMulticastGroup_Robot_groupA_leader_heartbeat_buffer[MULTICAST_Robot_groupA_leader_heartbeat_SIZE];
char s_pMulticastGroup_Robot_groupA_event_buffer[MULTICAST_Robot_groupA_event_SIZE];
char s_pMulticastGroup_Robot_SEARCH_GROUPING_grouping_buffer[MULTICAST_Robot_SEARCH_GROUPING_grouping_SIZE];
char s_pMulticastGroup_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_buffer[MULTICAST_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_SIZE];
char s_pMulticastGroup_Robot_groupB_leader_robotId_buffer[MULTICAST_Robot_groupB_leader_robotId_SIZE];
char s_pMulticastGroup_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_buffer[MULTICAST_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_SIZE];
char s_pMulticastGroup_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_buffer[MULTICAST_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_SIZE];
char s_pMulticastGroup_Robot_groupB_event_buffer[MULTICAST_Robot_groupB_event_SIZE];
// ##MULTICAST_GROUP_BUFFER_DEFINITION_TEMPLATE::END

// ##MULTICAST_CONNECTION_TEMPLATE::START
int g_anMulticastUDPReceivers_255_255_255_255_18080[] = {
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
};
int g_anMulticastUDPSenders_255_255_255_255_18080[] = {
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
};

SUDPMulticast g_astMulticastUDPList[] = {
	{
		{
			"255.255.255.255",
			18080,
		},
		g_anMulticastUDPReceivers_255_255_255_255_18080,
		13,
		g_anMulticastUDPSenders_255_255_255_255_18080,
		13,
		(SUDPMulticastReceiver *) NULL,
	},
};
// ##MULTICAST_CONNECTION_TEMPLATE::END

// ##MULTICAST_SHARED_MEMORY_TEMPLATE::START
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_leader_heartbeat = {
	s_pMulticastGroup_Robot_leader_heartbeat_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Burger_2_color = {
	s_pMulticastGroup_Burger_2_color_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Burger_2_led = {
	s_pMulticastGroup_Burger_2_led_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
	s_pMulticastGroup_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Burger_2_camera = {
	s_pMulticastGroup_Burger_2_camera_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupB_leader_heartbeat = {
	s_pMulticastGroup_Robot_groupB_leader_heartbeat_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Burger_2_wheel = {
	s_pMulticastGroup_Burger_2_wheel_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupA_leader_robotId = {
	s_pMulticastGroup_Robot_groupA_leader_robotId_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Burger_2_distance = {
	s_pMulticastGroup_Burger_2_distance_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_leader_robotId = {
	s_pMulticastGroup_Robot_leader_robotId_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupA_leader_heartbeat = {
	s_pMulticastGroup_Robot_groupA_leader_heartbeat_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupA_event = {
	s_pMulticastGroup_Robot_groupA_event_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_SEARCH_GROUPING_grouping = {
	s_pMulticastGroup_Robot_SEARCH_GROUPING_grouping_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0 = {
	s_pMulticastGroup_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupB_leader_robotId = {
	s_pMulticastGroup_Robot_groupB_leader_robotId_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
	s_pMulticastGroup_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0 = {
	s_pMulticastGroup_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
SSharedMemoryMulticast g_stSharedMemoryMulticast_Robot_groupB_event = {
	s_pMulticastGroup_Robot_groupB_event_buffer, // pData
	0, // nDataLen
	(HThreadMutex) NULL, // Mutex
};
// ##MULTICAST_SHARED_MEMORY_TEMPLATE::END

// ##MULTICAST_INPUT_PORT_LIST_TEMPLATE::START
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_leader_heartbeat,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_leader_heartbeat[] = {
	{
		52, // nTaskId
		8, // nPortId
		"Robot_leader_heartbeat", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Burger_2_color[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_color,
	},
};

SMulticastPort g_astMulticastInputPortList_Burger_2_color[] = {
	{
		35, // nTaskId
		0, // nPortId
		"color", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_color, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		31, // nTaskId
		1, // nPortId
		"color", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_color, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Burger_2_led[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_led,
	},
};

SMulticastPort g_astMulticastInputPortList_Burger_2_led[] = {
	{
		47, // nTaskId
		0, // nPortId
		"led", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_led, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		52, // nTaskId
		2, // nPortId
		"Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Burger_2_camera[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_camera,
	},
};

SMulticastPort g_astMulticastInputPortList_Burger_2_camera[] = {
	{
		32, // nTaskId
		0, // nPortId
		"camera", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_camera, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		36, // nTaskId
		1, // nPortId
		"camera", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_camera, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupB_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_leader_heartbeat,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupB_leader_heartbeat[] = {
	{
		52, // nTaskId
		8, // nPortId
		"Robot_groupB_leader_heartbeat", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupB_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Burger_2_wheel[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_wheel,
	},
};

SMulticastPort g_astMulticastInputPortList_Burger_2_wheel[] = {
	{
		39, // nTaskId
		0, // nPortId
		"wheel", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_wheel, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupA_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_leader_robotId,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupA_leader_robotId[] = {
	{
		52, // nTaskId
		6, // nPortId
		"Robot_groupA_leader_robotId", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupA_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Burger_2_distance[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_distance,
	},
};

SMulticastPort g_astMulticastInputPortList_Burger_2_distance[] = {
	{
		31, // nTaskId
		0, // nPortId
		"distance", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_distance, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		35, // nTaskId
		1, // nPortId
		"distance", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Burger_2_distance, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_leader_robotId,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_leader_robotId[] = {
	{
		52, // nTaskId
		6, // nPortId
		"Robot_leader_robotId", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupA_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_leader_heartbeat,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupA_leader_heartbeat[] = {
	{
		52, // nTaskId
		8, // nPortId
		"Robot_groupA_leader_heartbeat", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupA_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupA_event[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_event,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupA_event[] = {
	{
		52, // nTaskId
		9, // nPortId
		"Robot_groupA_FINISH", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupA_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_SEARCH_GROUPING_grouping[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_SEARCH_GROUPING_grouping,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_SEARCH_GROUPING_grouping[] = {
	{
		52, // nTaskId
		6, // nPortId
		"Robot_SEARCH_GROUPING_grouping", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_SEARCH_GROUPING_grouping, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		52, // nTaskId
		8, // nPortId
		"Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupB_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_leader_robotId,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupB_leader_robotId[] = {
	{
		52, // nTaskId
		6, // nPortId
		"Robot_groupB_leader_robotId", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupB_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		52, // nTaskId
		4, // nPortId
		"Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		52, // nTaskId
		8, // nPortId
		"Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastInputCommunicationList_Robot_groupB_event[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_event,
	},
};

SMulticastPort g_astMulticastInputPortList_Robot_groupB_event[] = {
	{
		52, // nTaskId
		9, // nPortId
		"Robot_groupB_FINISH", // pszPortName
		PORT_DIRECTION_INPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastInputCommunicationList_Robot_groupB_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
// ##MULTICAST_INPUT_PORT_LIST_TEMPLATE::END

// ##MULTICAST_OUTPUT_PORT_LIST_TEMPLATE::START
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_leader_heartbeat,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_leader_heartbeat[] = {
	{
		53, // nTaskId
		9, // nMulticastPortId
		"Robot_leader_heartbeat", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Burger_2_color[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_color,
	},
};

SMulticastPort g_astMulticastOutputPortList_Burger_2_color[] = {
	{
		43, // nTaskId
		2, // nMulticastPortId
		"color", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_color, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Burger_2_led[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_led,
	},
};

SMulticastPort g_astMulticastOutputPortList_Burger_2_led[] = {
	{
		33, // nTaskId
		1, // nMulticastPortId
		"led", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_led, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		37, // nTaskId
		2, // nMulticastPortId
		"led", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_led, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		53, // nTaskId
		3, // nMulticastPortId
		"Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Burger_2_camera[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_camera,
	},
};

SMulticastPort g_astMulticastOutputPortList_Burger_2_camera[] = {
	{
		46, // nTaskId
		2, // nMulticastPortId
		"camera", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_camera, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupB_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_leader_heartbeat,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupB_leader_heartbeat[] = {
	{
		53, // nTaskId
		9, // nMulticastPortId
		"Robot_groupB_leader_heartbeat", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupB_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Burger_2_wheel[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_wheel,
	},
};

SMulticastPort g_astMulticastOutputPortList_Burger_2_wheel[] = {
	{
		35, // nTaskId
		1, // nMulticastPortId
		"wheel", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_wheel, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		28, // nTaskId
		2, // nMulticastPortId
		"wheel", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_wheel, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		31, // nTaskId
		3, // nMulticastPortId
		"wheel", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_wheel, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupA_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_leader_robotId,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupA_leader_robotId[] = {
	{
		53, // nTaskId
		7, // nMulticastPortId
		"Robot_groupA_leader_robotId", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupA_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Burger_2_distance[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_distance,
	},
};

SMulticastPort g_astMulticastOutputPortList_Burger_2_distance[] = {
	{
		45, // nTaskId
		2, // nMulticastPortId
		"distance", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Burger_2_distance, // astCommunicationList
		1, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_leader_robotId,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_leader_robotId[] = {
	{
		53, // nTaskId
		7, // nMulticastPortId
		"Robot_leader_robotId", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupA_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_leader_heartbeat,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupA_leader_heartbeat[] = {
	{
		53, // nTaskId
		9, // nMulticastPortId
		"Robot_groupA_leader_heartbeat", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupA_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupA_event[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_event,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupA_event[] = {
	{
		53, // nTaskId
		10, // nMulticastPortId
		"Robot_groupA_FINISH", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupA_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		52, // nTaskId
		11, // nMulticastPortId
		"Robot_groupA_FINISH_out", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupA_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_SEARCH_GROUPING_grouping[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_SEARCH_GROUPING_grouping,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_SEARCH_GROUPING_grouping[] = {
	{
		53, // nTaskId
		7, // nMulticastPortId
		"Robot_SEARCH_GROUPING_grouping", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_SEARCH_GROUPING_grouping, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		53, // nTaskId
		9, // nMulticastPortId
		"Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupB_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_leader_robotId,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupB_leader_robotId[] = {
	{
		53, // nTaskId
		7, // nMulticastPortId
		"Robot_groupB_leader_robotId", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupB_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		53, // nTaskId
		5, // nMulticastPortId
		"Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		53, // nTaskId
		9, // nMulticastPortId
		"Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
SMulticastCommunication g_astMulticastOutputCommunicationList_Robot_groupB_event[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_event,
	},
};

SMulticastPort g_astMulticastOutputPortList_Robot_groupB_event[] = {
	{
		53, // nTaskId
		10, // nMulticastPortId
		"Robot_groupB_FINISH", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupB_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		52, // nTaskId
		11, // nMulticastPortId
		"Robot_groupB_FINISH_out", // pszPortName
		PORT_DIRECTION_OUTPUT, // eDirection
		&g_stMulticastHostMemory, // pstMemoryAccessAPI
		(SMulticastGroup *) NULL, // pMulticastGroup
		g_astMulticastOutputCommunicationList_Robot_groupB_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
// ##MULTICAST_OUTPUT_PORT_LIST_TEMPLATE::END

// ##MULTICAST_GROUP_LIST_TEMPLATE::START
SMulticastCommunication g_astMulticastCommunicationList_Robot_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_leader_heartbeat,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Burger_2_color[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_color,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Burger_2_led[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_led,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Burger_2_camera[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_camera,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupB_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_leader_heartbeat,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Burger_2_wheel[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_wheel,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupA_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_leader_robotId,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Burger_2_distance[] = {
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Burger_2_distance,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_leader_robotId,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupA_leader_heartbeat[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_leader_heartbeat,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupA_event[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_event,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_SEARCH_GROUPING_grouping[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_SEARCH_GROUPING_grouping,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupB_leader_robotId[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_leader_robotId,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0,
	},
};
SMulticastCommunication g_astMulticastCommunicationList_Robot_groupB_event[] = {
	{
		UDP,
		&g_stUDPSocketMulticast,
		(void *) NULL,
	},
	{
		SHARED_MEMORY,
		&g_stSharedMemoryMulticast,
		&g_stSharedMemoryMulticast_Robot_groupB_event,
	},
};
SMulticastGroup g_astMulticastGroups[] = {
	{
		14, // Multicast group ID
		"Robot_leader_heartbeat", // pszGroupName
		MULTICAST_Robot_leader_heartbeat_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_leader_heartbeat, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_leader_heartbeat, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		20, // Multicast group ID
		"Burger_2_color", // pszGroupName
		MULTICAST_Burger_2_color_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Burger_2_color, // pstInputPort
		2, // nInputPortNum
		g_astMulticastOutputPortList_Burger_2_color, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Burger_2_color, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		23, // Multicast group ID
		"Burger_2_led", // pszGroupName
		MULTICAST_Burger_2_led_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Burger_2_led, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Burger_2_led, // pstOutputPort
		2, // nOutputPortNum
		g_astMulticastCommunicationList_Burger_2_led, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		17, // Multicast group ID
		"Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // pszGroupName
		MULTICAST_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		22, // Multicast group ID
		"Burger_2_camera", // pszGroupName
		MULTICAST_Burger_2_camera_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Burger_2_camera, // pstInputPort
		2, // nInputPortNum
		g_astMulticastOutputPortList_Burger_2_camera, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Burger_2_camera, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		13, // Multicast group ID
		"Robot_groupB_leader_heartbeat", // pszGroupName
		MULTICAST_Robot_groupB_leader_heartbeat_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupB_leader_heartbeat, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupB_leader_heartbeat, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupB_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		19, // Multicast group ID
		"Burger_2_wheel", // pszGroupName
		MULTICAST_Burger_2_wheel_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Burger_2_wheel, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Burger_2_wheel, // pstOutputPort
		3, // nOutputPortNum
		g_astMulticastCommunicationList_Burger_2_wheel, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		12, // Multicast group ID
		"Robot_groupA_leader_robotId", // pszGroupName
		MULTICAST_Robot_groupA_leader_robotId_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupA_leader_robotId, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupA_leader_robotId, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupA_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		21, // Multicast group ID
		"Burger_2_distance", // pszGroupName
		MULTICAST_Burger_2_distance_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Burger_2_distance, // pstInputPort
		2, // nInputPortNum
		g_astMulticastOutputPortList_Burger_2_distance, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Burger_2_distance, // astCommunicationList
		1, // nCommunicationTypeNum
	},
	{
		11, // Multicast group ID
		"Robot_leader_robotId", // pszGroupName
		MULTICAST_Robot_leader_robotId_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_leader_robotId, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_leader_robotId, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		15, // Multicast group ID
		"Robot_groupA_leader_heartbeat", // pszGroupName
		MULTICAST_Robot_groupA_leader_heartbeat_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupA_leader_heartbeat, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupA_leader_heartbeat, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupA_leader_heartbeat, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		6, // Multicast group ID
		"Robot_groupA_event", // pszGroupName
		MULTICAST_Robot_groupA_event_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupA_event, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupA_event, // pstOutputPort
		2, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupA_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		18, // Multicast group ID
		"Robot_SEARCH_GROUPING_grouping", // pszGroupName
		MULTICAST_Robot_SEARCH_GROUPING_grouping_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_SEARCH_GROUPING_grouping, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_SEARCH_GROUPING_grouping, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_SEARCH_GROUPING_grouping, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		9, // Multicast group ID
		"Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0", // pszGroupName
		MULTICAST_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		10, // Multicast group ID
		"Robot_groupB_leader_robotId", // pszGroupName
		MULTICAST_Robot_groupB_leader_robotId_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupB_leader_robotId, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupB_leader_robotId, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupB_leader_robotId, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		16, // Multicast group ID
		"Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // pszGroupName
		MULTICAST_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		8, // Multicast group ID
		"Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0", // pszGroupName
		MULTICAST_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // pstOutputPort
		1, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0, // astCommunicationList
		2, // nCommunicationTypeNum
	},
	{
		7, // Multicast group ID
		"Robot_groupB_event", // pszGroupName
		MULTICAST_Robot_groupB_event_SIZE, // Multicast group buffer size
		g_astMulticastInputPortList_Robot_groupB_event, // pstInputPort
		1, // nInputPortNum
		g_astMulticastOutputPortList_Robot_groupB_event, // pstOutputPort
		2, // nOutputPortNum
		g_astMulticastCommunicationList_Robot_groupB_event, // astCommunicationList
		2, // nCommunicationTypeNum
	},
};
// ##MULTICAST_GROUP_LIST_TEMPLATE::START

#ifdef __cplusplus
extern "C"
{
#endif

uem_result MulticastAPI_SetSocketAPIs()
{
	uem_result result = ERR_UEM_UNKNOWN;

	result = UCDynamicSocket_SetAPIList(SOCKET_TYPE_UDP, &stUDPAPI);
	ERRIFGOTO(result, _EXIT);

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}

#ifdef __cplusplus
}
#endif

int g_nMulticastUDPNum = ARRAYLEN(g_astMulticastUDPList);
int g_nMulticastGroupNum = ARRAYLEN(g_astMulticastGroups);
int g_nMulticastAPINum = ARRAYLEN(g_astMulticastAPIList);
