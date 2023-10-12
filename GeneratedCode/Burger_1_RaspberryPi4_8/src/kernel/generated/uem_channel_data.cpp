/* uem_channel_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_common.h>

#include <UCSocket.h>
#include <UCDynamicSocket.h>
#include <UCFixedSizeQueue.h>
#include <UCSerialPort.h>

#include <UKHostSystem.h>
#include <UKSharedMemoryChannel.h>
#include <UKChannel.h>

#include <uem_data.h>

#include <UKUEMProtocol.h>
#include <UKVirtualCommunication.h>
#include <UKVirtualEncryption.h>
#include <UKRemoteChannel.h>
#include <uem_remote_data.h>
#include <UKSocketCommunication.h>

#include <UKSerialModule.h>
#include <UKSerialCommunication.h>
#include <uem_serial_data.h>


// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::START
#define CHANNEL_0_SIZE (4)
#define CHANNEL_1_SIZE (4)
#define CHANNEL_2_SIZE (4)
#define CHANNEL_3_SIZE (4)
#define CHANNEL_4_SIZE (4)
#define CHANNEL_5_SIZE (4)
#define CHANNEL_6_SIZE (8)
#define CHANNEL_7_SIZE (16)
#define CHANNEL_8_SIZE (16)
#define CHANNEL_9_SIZE (16)
#define CHANNEL_10_SIZE (16)
#define CHANNEL_11_SIZE (16)
#define CHANNEL_12_SIZE (16)
#define CHANNEL_13_SIZE (16)
#define CHANNEL_14_SIZE (16)
#define CHANNEL_15_SIZE (16)
#define CHANNEL_16_SIZE (16)
#define CHANNEL_17_SIZE (16)
#define CHANNEL_18_SIZE (16)
#define CHANNEL_19_SIZE (16)
#define CHANNEL_20_SIZE (16)
#define CHANNEL_21_SIZE (16)
#define CHANNEL_22_SIZE (16)
#define CHANNEL_23_SIZE (192)
#define CHANNEL_24_SIZE (16)
#define CHANNEL_25_SIZE (16)
// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::END


// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::START
char s_pChannel_0_buffer[CHANNEL_0_SIZE];
char s_pChannel_1_buffer[CHANNEL_1_SIZE];
char s_pChannel_2_buffer[CHANNEL_2_SIZE];
char s_pChannel_3_buffer[CHANNEL_3_SIZE];
char s_pChannel_4_buffer[CHANNEL_4_SIZE];
char s_pChannel_5_buffer[CHANNEL_5_SIZE];
char s_pChannel_6_buffer[CHANNEL_6_SIZE];
char s_pChannel_7_buffer[CHANNEL_7_SIZE];
char s_pChannel_8_buffer[CHANNEL_8_SIZE];
char s_pChannel_9_buffer[CHANNEL_9_SIZE];
char s_pChannel_10_buffer[CHANNEL_10_SIZE];
char s_pChannel_11_buffer[CHANNEL_11_SIZE];
char s_pChannel_12_buffer[CHANNEL_12_SIZE];
char s_pChannel_13_buffer[CHANNEL_13_SIZE];
char s_pChannel_14_buffer[CHANNEL_14_SIZE];
char s_pChannel_15_buffer[CHANNEL_15_SIZE];
char s_pChannel_16_buffer[CHANNEL_16_SIZE];
char s_pChannel_17_buffer[CHANNEL_17_SIZE];
char s_pChannel_18_buffer[CHANNEL_18_SIZE];
char s_pChannel_19_buffer[CHANNEL_19_SIZE];
char s_pChannel_20_buffer[CHANNEL_20_SIZE];
char s_pChannel_21_buffer[CHANNEL_21_SIZE];
char s_pChannel_22_buffer[CHANNEL_22_SIZE];
char s_pChannel_23_buffer[CHANNEL_23_SIZE];
char s_pChannel_24_buffer[CHANNEL_24_SIZE];
char s_pChannel_25_buffer[CHANNEL_25_SIZE];
// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::END


// ##CHUNK_DEFINITION_TEMPLATE::START
SChunk g_astChunk_channel_0_out[1];
SChunk g_astChunk_channel_0_in[1];

SChunk g_astChunk_channel_1_out[1];
SChunk g_astChunk_channel_1_in[1];

SChunk g_astChunk_channel_2_out[1];
SChunk g_astChunk_channel_2_in[1];

SChunk g_astChunk_channel_3_out[1];
SChunk g_astChunk_channel_3_in[1];

SChunk g_astChunk_channel_4_out[1];
SChunk g_astChunk_channel_4_in[1];

SChunk g_astChunk_channel_5_out[1];
SChunk g_astChunk_channel_5_in[1];

SChunk g_astChunk_channel_6_out[1];
SChunk g_astChunk_channel_6_in[1];

SChunk g_astChunk_channel_7_out[1];
SChunk g_astChunk_channel_7_in[1];

SChunk g_astChunk_channel_8_out[1];
SChunk g_astChunk_channel_8_in[1];

SChunk g_astChunk_channel_9_out[1];
SChunk g_astChunk_channel_9_in[1];

SChunk g_astChunk_channel_10_out[1];
SChunk g_astChunk_channel_10_in[1];

SChunk g_astChunk_channel_11_out[1];
SChunk g_astChunk_channel_11_in[1];

SChunk g_astChunk_channel_12_out[1];
SChunk g_astChunk_channel_12_in[1];

SChunk g_astChunk_channel_13_out[1];
SChunk g_astChunk_channel_13_in[1];

SChunk g_astChunk_channel_14_out[1];
SChunk g_astChunk_channel_14_in[1];

SChunk g_astChunk_channel_15_out[1];
SChunk g_astChunk_channel_15_in[1];

SChunk g_astChunk_channel_16_out[1];
SChunk g_astChunk_channel_16_in[1];

SChunk g_astChunk_channel_17_out[1];
SChunk g_astChunk_channel_17_in[1];

SChunk g_astChunk_channel_18_out[1];
SChunk g_astChunk_channel_18_in[1];

SChunk g_astChunk_channel_19_out[1];
SChunk g_astChunk_channel_19_in[1];

SChunk g_astChunk_channel_20_out[1];
SChunk g_astChunk_channel_20_in[1];

SChunk g_astChunk_channel_21_out[1];
SChunk g_astChunk_channel_21_in[1];

SChunk g_astChunk_channel_22_out[1];
SChunk g_astChunk_channel_22_in[1];

SChunk g_astChunk_channel_23_out[1];
SChunk g_astChunk_channel_23_in[1];

SChunk g_astChunk_channel_24_out[1];
SChunk g_astChunk_channel_24_in[1];

SChunk g_astChunk_channel_25_out[1];
SChunk g_astChunk_channel_25_in[1];

// ##CHUNK_DEFINITION_TEMPLATE::END


//portSampleRateList
// ##PORT_SAMPLE_RATE_TEMPLATE::START
SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_color_R_color_colorFromOpenCR[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_color_O_color_color[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_wheel_O_wheelControl_direction[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_wheel_R_getDirection_direction[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_led_O_led_led[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_led_R_led_ledToOpenCR[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_control_Burger_1_GA_DTA_result[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_1_GA_DTA_result[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

// ##PORT_SAMPLE_RATE_TEMPLATE::END


// ##PORT_ARRAY_TEMPLATE::START
SPort g_astPortInfo[] = {
	{ // index number: 0
		3, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 1
		4, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 2
		5, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 3
		3, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 4
		7, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 5
		8, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 6
		9, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 7
		7, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 8
		12, // Task ID
		"colorFromOpenCR", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_color_R_color_colorFromOpenCR, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 9
		11, // Task ID
		"color", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_color_O_color_color, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 10
		15, // Task ID
		"direction", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_wheel_O_wheelControl_direction, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 11
		14, // Task ID
		"direction", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_wheel_R_getDirection_direction, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 12
		20, // Task ID
		"led", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_led_O_led_led, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 13
		19, // Task ID
		"ledToOpenCR", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_led_R_led_ledToOpenCR, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 14
		26, // Task ID
		"Burger_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 15
		1, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 16
		26, // Task ID
		"Burger_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 17
		2, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 18
		6, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[19], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 19
		3, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 20
		26, // Task ID
		"Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 21
		6, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[22], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 22
		3, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 23
		26, // Task ID
		"Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 24
		6, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[25], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 25
		3, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 26
		26, // Task ID
		"Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 27
		26, // Task ID
		"Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 28
		6, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[29], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 29
		3, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 30
		6, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[31], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 31
		3, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 32
		26, // Task ID
		"Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 33
		10, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[34], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 34
		7, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 35
		26, // Task ID
		"Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 36
		10, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[37], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 37
		7, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 38
		26, // Task ID
		"Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 39
		10, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[40], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 40
		7, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 41
		26, // Task ID
		"Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 42
		26, // Task ID
		"Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 43
		10, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[44], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 44
		7, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 45
		10, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[46], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 46
		7, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 47
		26, // Task ID
		"Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 48
		26, // Task ID
		"Burger_1_listen_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 49
		24, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 50
		26, // Task ID
		"Burger_1_listen_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 51
		24, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 52
		25, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 53
		26, // Task ID
		"Burger_1_report_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 54
		25, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 55
		26, // Task ID
		"Burger_1_report_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 56
		23, // Task ID
		"group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 57
		26, // Task ID
		"Burger_1_leader_group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 58
		22, // Task ID
		"mode", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_Burger_1_GA_DTA_mode, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 59
		26, // Task ID
		"Burger_1_GA_DTA_mode", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_GA_DTA_mode, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 60
		26, // Task ID
		"Burger_1_GA_DTA_result", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_1_control_Burger_1_GA_DTA_result, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 61
		22, // Task ID
		"result", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_Burger_1_GA_DTA_result, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
};
// ##PORT_ARRAY_TEMPLATE::END


// ##AVAILABLE_CHUNK_LIST_TEMPLATE::START
SAvailableChunk g_astAvailableInputChunk_channel_0[1];

SAvailableChunk g_astAvailableInputChunk_channel_1[1];

SAvailableChunk g_astAvailableInputChunk_channel_2[1];

SAvailableChunk g_astAvailableInputChunk_channel_3[1];

SAvailableChunk g_astAvailableInputChunk_channel_4[1];

SAvailableChunk g_astAvailableInputChunk_channel_5[1];

SAvailableChunk g_astAvailableInputChunk_channel_6[1];

SAvailableChunk g_astAvailableInputChunk_channel_7[1];

SAvailableChunk g_astAvailableInputChunk_channel_8[1];

SAvailableChunk g_astAvailableInputChunk_channel_9[1];

SAvailableChunk g_astAvailableInputChunk_channel_10[1];

SAvailableChunk g_astAvailableInputChunk_channel_11[1];

SAvailableChunk g_astAvailableInputChunk_channel_12[1];

SAvailableChunk g_astAvailableInputChunk_channel_13[1];

SAvailableChunk g_astAvailableInputChunk_channel_14[1];

SAvailableChunk g_astAvailableInputChunk_channel_15[1];

SAvailableChunk g_astAvailableInputChunk_channel_16[1];

SAvailableChunk g_astAvailableInputChunk_channel_17[1];

SAvailableChunk g_astAvailableInputChunk_channel_18[1];

SAvailableChunk g_astAvailableInputChunk_channel_19[1];

SAvailableChunk g_astAvailableInputChunk_channel_20[1];

SAvailableChunk g_astAvailableInputChunk_channel_21[1];

SAvailableChunk g_astAvailableInputChunk_channel_22[1];

SAvailableChunk g_astAvailableInputChunk_channel_23[1];

SAvailableChunk g_astAvailableInputChunk_channel_24[1];

SAvailableChunk g_astAvailableInputChunk_channel_25[1];

// ##AVAILABLE_CHUNK_LIST_TEMPLATE::END



SVirtualCommunicationAPI g_stSerialCommunication = {
	UKSerialCommunication_Create,
	UKSerialCommunication_Destroy,
	UKSerialCommunication_Connect,
	UKSerialCommunication_Disconnect,
	UKSerialCommunication_Listen,
	UKSerialCommunication_Accept,
	UKSerialCommunication_Send,
	UKSerialCommunication_Receive,
};





// ##INDIVIDUAL_CONNECTION_GENERATION_TEMPLATE::START
SIndividualConnectionInfo g_astIndividualConnectionInfo[] = {
};
// ##INDIVIDUAL_CONNECTION_GENERATION_TEMPLATE::END


// ##SERIAL_COMMUNICATION_GENERATION_TEMPLATE::START
SSerialInfo g_astSerialMasterInfo[] = {
	{
		{
			(HThread) NULL, // thread handle
			3, // max channel access number
			(HVirtualSocket) NULL, // socket handle
			&g_stSerialCommunication, // bluetooth communication API
			(HSerialCommunicationManager) NULL, // Serial communication manager handle
			FALSE, // initialized or not
		},
		{
			"/dev/ttyACM0", // serial port path
			PAIR_TYPE_MASTER,
		},
	},
};


SSerialInfo g_astSerialSlaveInfo[] = {
};
// ##SERIAL_COMMUNICATION_GENERATION_TEMPLATE::END


SAggregateConnectionInfo g_astAggregateConnectionInfo[] = {
	{
		4,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
	{
		5,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
	{
		6,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
};


SGenericMemoryAccess g_stHostMemory = {
	UKHostSystem_CreateMemory,
	UKHostSystem_CopyToMemory,
	UKHostSystem_CopyInMemory,
	UKHostSystem_CopyFromMemory,
	UKHostSystem_DestroyMemory,
};




// ##SPECIFIC_CHANNEL_LIST_TEMPLATE::START

SSharedMemoryChannel g_stSharedMemoryChannel_0 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_0_buffer, // Channel buffer pointer
	s_pChannel_0_buffer, // Channel data start
	s_pChannel_0_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_0_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_0_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_0, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_1 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_1_buffer, // Channel buffer pointer
	s_pChannel_1_buffer, // Channel data start
	s_pChannel_1_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_1_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_1_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_1, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_2 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_2_buffer, // Channel buffer pointer
	s_pChannel_2_buffer, // Channel data start
	s_pChannel_2_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_2_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_2_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_2, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_3 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_3_buffer, // Channel buffer pointer
	s_pChannel_3_buffer, // Channel data start
	s_pChannel_3_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_3_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_3_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_3, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};



SRemoteReaderChannel g_stRemoteReaderChannel_4 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	&g_stHostMemory, // SGenericMemoryAccess *pstReaderAccess - READER-part channel memory access API
};

SSharedMemoryChannel g_stSharedMemoryChannel_5 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_5_buffer, // Channel buffer pointer
	s_pChannel_5_buffer, // Channel data start
	s_pChannel_5_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_5_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_5_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_5, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

SRemoteWriterChannel g_stRemoteWriterChannel_5 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	(HThread) NULL, // receive handling thread
	(char *) NULL,
	0,
	&g_stSharedMemoryChannel_5, // SSharedMemoryChannel *pstInternalChannel;
};

SSharedMemoryChannel g_stSharedMemoryChannel_6 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_6_buffer, // Channel buffer pointer
	s_pChannel_6_buffer, // Channel data start
	s_pChannel_6_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_6_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_6_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_6, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

SRemoteWriterChannel g_stRemoteWriterChannel_6 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	(HThread) NULL, // receive handling thread
	(char *) NULL,
	0,
	&g_stSharedMemoryChannel_6, // SSharedMemoryChannel *pstInternalChannel;
};

SSharedMemoryChannel g_stSharedMemoryChannel_7 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_7_buffer, // Channel buffer pointer
	s_pChannel_7_buffer, // Channel data start
	s_pChannel_7_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_7_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_7_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_7, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_8 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_8_buffer, // Channel buffer pointer
	s_pChannel_8_buffer, // Channel data start
	s_pChannel_8_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_8_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_8_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_8, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_9 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_9_buffer, // Channel buffer pointer
	s_pChannel_9_buffer, // Channel data start
	s_pChannel_9_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_9_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_9_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_9, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_10 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_10_buffer, // Channel buffer pointer
	s_pChannel_10_buffer, // Channel data start
	s_pChannel_10_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_10_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_10_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_10, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_11 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_11_buffer, // Channel buffer pointer
	s_pChannel_11_buffer, // Channel data start
	s_pChannel_11_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_11_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_11_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_11, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_12 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_12_buffer, // Channel buffer pointer
	s_pChannel_12_buffer, // Channel data start
	s_pChannel_12_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_12_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_12_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_12, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_13 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_13_buffer, // Channel buffer pointer
	s_pChannel_13_buffer, // Channel data start
	s_pChannel_13_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_13_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_13_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_13, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_14 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_14_buffer, // Channel buffer pointer
	s_pChannel_14_buffer, // Channel data start
	s_pChannel_14_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_14_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_14_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_14, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_15 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_15_buffer, // Channel buffer pointer
	s_pChannel_15_buffer, // Channel data start
	s_pChannel_15_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_15_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_15_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_15, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_16 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_16_buffer, // Channel buffer pointer
	s_pChannel_16_buffer, // Channel data start
	s_pChannel_16_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_16_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_16_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_16, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_17 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_17_buffer, // Channel buffer pointer
	s_pChannel_17_buffer, // Channel data start
	s_pChannel_17_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_17_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_17_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_17, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_18 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_18_buffer, // Channel buffer pointer
	s_pChannel_18_buffer, // Channel data start
	s_pChannel_18_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_18_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_18_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_18, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_19 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_19_buffer, // Channel buffer pointer
	s_pChannel_19_buffer, // Channel data start
	s_pChannel_19_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_19_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_19_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_19, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_20 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_20_buffer, // Channel buffer pointer
	s_pChannel_20_buffer, // Channel data start
	s_pChannel_20_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_20_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_20_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_20, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_21 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_21_buffer, // Channel buffer pointer
	s_pChannel_21_buffer, // Channel data start
	s_pChannel_21_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_21_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_21_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_21, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_22 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_22_buffer, // Channel buffer pointer
	s_pChannel_22_buffer, // Channel data start
	s_pChannel_22_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_22_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_22_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_22, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_23 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_23_buffer, // Channel buffer pointer
	s_pChannel_23_buffer, // Channel data start
	s_pChannel_23_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_23_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_23_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_23, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_24 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_24_buffer, // Channel buffer pointer
	s_pChannel_24_buffer, // Channel data start
	s_pChannel_24_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_24_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_24_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_24, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_25 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_25_buffer, // Channel buffer pointer
	s_pChannel_25_buffer, // Channel data start
	s_pChannel_25_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_25_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_25_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_25, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

// ##SPECIFIC_CHANNEL_LIST_TEMPLATE::END

// ##CHANNEL_LIST_TEMPLATE::START
SChannel g_astChannels[] = {
	{
		0, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_0_SIZE, // Channel size
		&(g_astPortInfo[0]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[1]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_0, // specific shared memory channel structure pointer
	},
	{
		1, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_1_SIZE, // Channel size
		&(g_astPortInfo[2]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[3]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_1, // specific shared memory channel structure pointer
	},
	{
		2, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_2_SIZE, // Channel size
		&(g_astPortInfo[4]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[5]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_2, // specific shared memory channel structure pointer
	},
	{
		3, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_3_SIZE, // Channel size
		&(g_astPortInfo[6]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[7]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_3, // specific shared memory channel structure pointer
	},
	{
		4, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_READER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_4_SIZE, // Channel size
		&(g_astPortInfo[8]), // Outer-most input port information (port name: colorFromOpenCR)
		&(g_astPortInfo[9]), // Outer-most output port information (port name: color)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteReaderChannel_4, // specific bluetooth/serial channel structure pointer
	},
	{
		5, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_5_SIZE, // Channel size
		&(g_astPortInfo[10]), // Outer-most input port information (port name: direction)
		&(g_astPortInfo[11]), // Outer-most output port information (port name: direction)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteWriterChannel_5, // specific TCP socket channel structure pointer
	},
	{
		6, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_6_SIZE, // Channel size
		&(g_astPortInfo[12]), // Outer-most input port information (port name: led)
		&(g_astPortInfo[13]), // Outer-most output port information (port name: ledToOpenCR)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteWriterChannel_6, // specific TCP socket channel structure pointer
	},
	{
		7, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_7_SIZE, // Channel size
		&(g_astPortInfo[14]), // Outer-most input port information (port name: Burger_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command)
		&(g_astPortInfo[15]), // Outer-most output port information (port name: command)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_7, // specific shared memory channel structure pointer
	},
	{
		8, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_8_SIZE, // Channel size
		&(g_astPortInfo[16]), // Outer-most input port information (port name: Burger_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command)
		&(g_astPortInfo[17]), // Outer-most output port information (port name: command)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_8, // specific shared memory channel structure pointer
	},
	{
		9, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_9_SIZE, // Channel size
		&(g_astPortInfo[18]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[20]), // Outer-most output port information (port name: Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_9, // specific shared memory channel structure pointer
	},
	{
		10, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_10_SIZE, // Channel size
		&(g_astPortInfo[21]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[23]), // Outer-most output port information (port name: Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_10, // specific shared memory channel structure pointer
	},
	{
		11, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_11_SIZE, // Channel size
		&(g_astPortInfo[24]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[26]), // Outer-most output port information (port name: Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_11, // specific shared memory channel structure pointer
	},
	{
		12, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_12_SIZE, // Channel size
		&(g_astPortInfo[27]), // Outer-most input port information (port name: Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound)
		&(g_astPortInfo[28]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_12, // specific shared memory channel structure pointer
	},
	{
		13, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_13_SIZE, // Channel size
		&(g_astPortInfo[30]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[32]), // Outer-most output port information (port name: Burger_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_13, // specific shared memory channel structure pointer
	},
	{
		14, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_14_SIZE, // Channel size
		&(g_astPortInfo[33]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[35]), // Outer-most output port information (port name: Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_14, // specific shared memory channel structure pointer
	},
	{
		15, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_15_SIZE, // Channel size
		&(g_astPortInfo[36]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[38]), // Outer-most output port information (port name: Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_15, // specific shared memory channel structure pointer
	},
	{
		16, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_16_SIZE, // Channel size
		&(g_astPortInfo[39]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[41]), // Outer-most output port information (port name: Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_16, // specific shared memory channel structure pointer
	},
	{
		17, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_17_SIZE, // Channel size
		&(g_astPortInfo[42]), // Outer-most input port information (port name: Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound)
		&(g_astPortInfo[43]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_17, // specific shared memory channel structure pointer
	},
	{
		18, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_18_SIZE, // Channel size
		&(g_astPortInfo[45]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[47]), // Outer-most output port information (port name: Burger_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_18, // specific shared memory channel structure pointer
	},
	{
		19, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_19_SIZE, // Channel size
		&(g_astPortInfo[48]), // Outer-most input port information (port name: Burger_1_listen_ControlRobot_groupA_FINISH)
		&(g_astPortInfo[49]), // Outer-most output port information (port name: ControlRobot_groupA_FINISH)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_19, // specific shared memory channel structure pointer
	},
	{
		20, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_20_SIZE, // Channel size
		&(g_astPortInfo[50]), // Outer-most input port information (port name: Burger_1_listen_ControlRobot_groupB_FINISH)
		&(g_astPortInfo[51]), // Outer-most output port information (port name: ControlRobot_groupB_FINISH)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_20, // specific shared memory channel structure pointer
	},
	{
		21, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_21_SIZE, // Channel size
		&(g_astPortInfo[52]), // Outer-most input port information (port name: ControlRobot_groupA_FINISH)
		&(g_astPortInfo[53]), // Outer-most output port information (port name: Burger_1_report_ControlRobot_groupA_FINISH)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_21, // specific shared memory channel structure pointer
	},
	{
		22, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_22_SIZE, // Channel size
		&(g_astPortInfo[54]), // Outer-most input port information (port name: ControlRobot_groupB_FINISH)
		&(g_astPortInfo[55]), // Outer-most output port information (port name: Burger_1_report_ControlRobot_groupB_FINISH)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_22, // specific shared memory channel structure pointer
	},
	{
		23, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_23_SIZE, // Channel size
		&(g_astPortInfo[56]), // Outer-most input port information (port name: group_state)
		&(g_astPortInfo[57]), // Outer-most output port information (port name: Burger_1_leader_group_state)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_23, // specific shared memory channel structure pointer
	},
	{
		24, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_24_SIZE, // Channel size
		&(g_astPortInfo[58]), // Outer-most input port information (port name: mode)
		&(g_astPortInfo[59]), // Outer-most output port information (port name: Burger_1_GA_DTA_mode)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_24, // specific shared memory channel structure pointer
	},
	{
		25, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_25_SIZE, // Channel size
		&(g_astPortInfo[60]), // Outer-most input port information (port name: Burger_1_GA_DTA_result)
		&(g_astPortInfo[61]), // Outer-most output port information (port name: result)
		0, // Initial data length
		0, // Processor ID
		&g_stSharedMemoryChannel_25, // specific shared memory channel structure pointer
	},
};
// ##CHANNEL_LIST_TEMPLATE::END

SChannelAPI g_stRemoteWriterChannel = {
	UKRemoteChannel_Initialize,
	(FnChannelReadFromQueue) NULL,
	(FnChannelReadFromBuffer) NULL,
	UKRemoteChannel_WriteToQueue,
	UKRemoteChannel_WriteToBuffer,
	(FnChannelGetAvailableChunk) NULL,
	UKRemoteChannel_GetNumOfAvailableData,
	UKRemoteChannel_Clear,
	UKRemoteChannel_SetExit,
	UKRemoteChannel_ClearExit,
	UKRemoteChannel_FillInitialData,
	UKRemoteChannel_Finalize,
	UKRemoteChannel_APIInitialize, 
	UKRemoteChannel_APIFinalize,
};


SChannelAPI g_stRemoteReaderChannel = {
	UKRemoteChannel_Initialize,
	UKRemoteChannel_ReadFromQueue,
	UKRemoteChannel_ReadFromBuffer,
	(FnChannelWriteToQueue) NULL,
	(FnChannelWriteToBuffer) NULL,
	UKRemoteChannel_GetAvailableChunk,
	UKRemoteChannel_GetNumOfAvailableData,
	UKRemoteChannel_Clear,
	UKRemoteChannel_SetExit,
	UKRemoteChannel_ClearExit,
	(FnChannelFillInitialData) NULL,
	UKRemoteChannel_Finalize,
	(FnChannelAPIInitialize) NULL, 
	(FnChannelAPIFinalize) NULL,
};

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
	(FnChannelAPIFinalize) NULL,
};


SChannelAPI *g_astChannelAPIList[] = {
	&g_stSharedMemoryChannel,
	&g_stRemoteReaderChannel,
	&g_stRemoteWriterChannel,
};



FnChannelAPIInitialize g_aFnRemoteCommunicationModuleIntializeList[] = {
	UCSocket_Initialize, 
	UKSerialModule_Initialize,
};

FnChannelAPIFinalize g_aFnRemoteCommunicationModuleFinalizeList[] = {
	UKSerialModule_Finalize,
	UCSocket_Finalize, 
};




/*
SSocketAPI stUnixDomainSocketAPI = {
	UCUnixDomainSocket_Bind,
	UCUnixDomainSocket_Accept,
	UCUnixDomainSocket_Connect,
	(FnSocketCreate) NULL,
	UCUnixDomainSocket_Destroy,
};
*/

#ifdef __cplusplus
extern "C"
{
#endif

uem_result ChannelAPI_SetSocketAPIs()
{
	uem_result result = ERR_UEM_UNKNOWN;


	result = ERR_UEM_NOERROR;
	return result;
}

uem_result ChannelAPI_GetAPIStructureFromCommunicationType(IN ECommunicationType enType, OUT SChannelAPI **ppstChannelAPI)
{
	uem_result result = ERR_UEM_UNKNOWN;
	switch(enType)
	{
	case COMMUNICATION_TYPE_SHARED_MEMORY:
		*ppstChannelAPI = &g_stSharedMemoryChannel;
		break;
	case COMMUNICATION_TYPE_REMOTE_READER:
		*ppstChannelAPI = &g_stRemoteReaderChannel;
		break;
	case COMMUNICATION_TYPE_REMOTE_WRITER:
		*ppstChannelAPI = &g_stRemoteWriterChannel;
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



int g_nChannelNum = ARRAYLEN(g_astChannels);
int g_nChannelAPINum = ARRAYLEN(g_astChannelAPIList);
#ifndef AGGREGATE_TCP_CONNECTION
int g_nIndividualConnectionInfoNum = 0;
#else 
int g_nIndividualConnectionInfoNum = 0;
#endif

#ifdef AGGREGATE_TCP_CONNECTION
int g_nAggregateConnectionInfoNum = ARRAYLEN(g_astAggregateConnectionInfo);
#else
int g_nAggregateConnectionInfoNum = ARRAYLEN(g_astAggregateConnectionInfo);
#endif
	

#ifndef AGGREGATE_TCP_CONNECTION
int g_nTCPServerInfoNum = 0;
#else
int g_nTCPAggregateServerInfoNum = 0;
	
int g_nTCPAggregateClientInfoNum = 0;
#endif
	
#ifndef AGGREGATE_SECURETCP_CONNECTION
int g_nSecureTCPServerInfoNum = 0;
#else
int g_nSecureTCPAggregateServerInfoNum = 0;
	
int g_nSecureTCPAggregateClientInfoNum = 0;
#endif
	
int g_nBluetoothMasterNum = 0;

int g_nBluetoothSlaveNum = 0;

int g_nSerialMasterInfoNum = ARRAYLEN(g_astSerialMasterInfo);	
			
int g_nSerialSlaveInfoNum = 0;

int g_nRemoteCommunicationModuleNum = ARRAYLEN(g_aFnRemoteCommunicationModuleIntializeList);



