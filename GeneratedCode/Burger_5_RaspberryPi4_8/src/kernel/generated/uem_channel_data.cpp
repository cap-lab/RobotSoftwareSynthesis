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
#define CHANNEL_78_SIZE (4)
#define CHANNEL_79_SIZE (4)
#define CHANNEL_80_SIZE (4)
#define CHANNEL_81_SIZE (4)
#define CHANNEL_82_SIZE (4)
#define CHANNEL_83_SIZE (4)
#define CHANNEL_84_SIZE (8)
#define CHANNEL_85_SIZE (16)
#define CHANNEL_86_SIZE (16)
#define CHANNEL_87_SIZE (16)
#define CHANNEL_88_SIZE (16)
#define CHANNEL_89_SIZE (16)
#define CHANNEL_90_SIZE (16)
#define CHANNEL_91_SIZE (16)
#define CHANNEL_92_SIZE (16)
#define CHANNEL_93_SIZE (16)
#define CHANNEL_94_SIZE (16)
#define CHANNEL_95_SIZE (16)
#define CHANNEL_96_SIZE (16)
#define CHANNEL_97_SIZE (16)
#define CHANNEL_98_SIZE (16)
#define CHANNEL_99_SIZE (16)
#define CHANNEL_100_SIZE (16)
#define CHANNEL_101_SIZE (192)
#define CHANNEL_102_SIZE (16)
#define CHANNEL_103_SIZE (16)
// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::END


// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::START
char s_pChannel_78_buffer[CHANNEL_78_SIZE];
char s_pChannel_79_buffer[CHANNEL_79_SIZE];
char s_pChannel_80_buffer[CHANNEL_80_SIZE];
char s_pChannel_81_buffer[CHANNEL_81_SIZE];
char s_pChannel_82_buffer[CHANNEL_82_SIZE];
char s_pChannel_83_buffer[CHANNEL_83_SIZE];
char s_pChannel_84_buffer[CHANNEL_84_SIZE];
char s_pChannel_85_buffer[CHANNEL_85_SIZE];
char s_pChannel_86_buffer[CHANNEL_86_SIZE];
char s_pChannel_87_buffer[CHANNEL_87_SIZE];
char s_pChannel_88_buffer[CHANNEL_88_SIZE];
char s_pChannel_89_buffer[CHANNEL_89_SIZE];
char s_pChannel_90_buffer[CHANNEL_90_SIZE];
char s_pChannel_91_buffer[CHANNEL_91_SIZE];
char s_pChannel_92_buffer[CHANNEL_92_SIZE];
char s_pChannel_93_buffer[CHANNEL_93_SIZE];
char s_pChannel_94_buffer[CHANNEL_94_SIZE];
char s_pChannel_95_buffer[CHANNEL_95_SIZE];
char s_pChannel_96_buffer[CHANNEL_96_SIZE];
char s_pChannel_97_buffer[CHANNEL_97_SIZE];
char s_pChannel_98_buffer[CHANNEL_98_SIZE];
char s_pChannel_99_buffer[CHANNEL_99_SIZE];
char s_pChannel_100_buffer[CHANNEL_100_SIZE];
char s_pChannel_101_buffer[CHANNEL_101_SIZE];
char s_pChannel_102_buffer[CHANNEL_102_SIZE];
char s_pChannel_103_buffer[CHANNEL_103_SIZE];
// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::END


// ##CHUNK_DEFINITION_TEMPLATE::START
SChunk g_astChunk_channel_78_out[1];
SChunk g_astChunk_channel_78_in[1];

SChunk g_astChunk_channel_79_out[1];
SChunk g_astChunk_channel_79_in[1];

SChunk g_astChunk_channel_80_out[1];
SChunk g_astChunk_channel_80_in[1];

SChunk g_astChunk_channel_81_out[1];
SChunk g_astChunk_channel_81_in[1];

SChunk g_astChunk_channel_82_out[1];
SChunk g_astChunk_channel_82_in[1];

SChunk g_astChunk_channel_83_out[1];
SChunk g_astChunk_channel_83_in[1];

SChunk g_astChunk_channel_84_out[1];
SChunk g_astChunk_channel_84_in[1];

SChunk g_astChunk_channel_85_out[1];
SChunk g_astChunk_channel_85_in[1];

SChunk g_astChunk_channel_86_out[1];
SChunk g_astChunk_channel_86_in[1];

SChunk g_astChunk_channel_87_out[1];
SChunk g_astChunk_channel_87_in[1];

SChunk g_astChunk_channel_88_out[1];
SChunk g_astChunk_channel_88_in[1];

SChunk g_astChunk_channel_89_out[1];
SChunk g_astChunk_channel_89_in[1];

SChunk g_astChunk_channel_90_out[1];
SChunk g_astChunk_channel_90_in[1];

SChunk g_astChunk_channel_91_out[1];
SChunk g_astChunk_channel_91_in[1];

SChunk g_astChunk_channel_92_out[1];
SChunk g_astChunk_channel_92_in[1];

SChunk g_astChunk_channel_93_out[1];
SChunk g_astChunk_channel_93_in[1];

SChunk g_astChunk_channel_94_out[1];
SChunk g_astChunk_channel_94_in[1];

SChunk g_astChunk_channel_95_out[1];
SChunk g_astChunk_channel_95_in[1];

SChunk g_astChunk_channel_96_out[1];
SChunk g_astChunk_channel_96_in[1];

SChunk g_astChunk_channel_97_out[1];
SChunk g_astChunk_channel_97_in[1];

SChunk g_astChunk_channel_98_out[1];
SChunk g_astChunk_channel_98_in[1];

SChunk g_astChunk_channel_99_out[1];
SChunk g_astChunk_channel_99_in[1];

SChunk g_astChunk_channel_100_out[1];
SChunk g_astChunk_channel_100_in[1];

SChunk g_astChunk_channel_101_out[1];
SChunk g_astChunk_channel_101_in[1];

SChunk g_astChunk_channel_102_out[1];
SChunk g_astChunk_channel_102_in[1];

SChunk g_astChunk_channel_103_out[1];
SChunk g_astChunk_channel_103_in[1];

// ##CHUNK_DEFINITION_TEMPLATE::END


//portSampleRateList
// ##PORT_SAMPLE_RATE_TEMPLATE::START
SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_color_R_color_colorFromOpenCR[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_color_O_color_color[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_wheel_O_wheelControl_direction[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_wheel_R_getDirection_direction[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_led_O_led_led[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_led_R_led_ledToOpenCR[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_control_Burger_5_GA_DTA_result[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_5_GA_DTA_result[] = {
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
		87, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 1
		88, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 2
		89, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 3
		87, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 4
		91, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 5
		92, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 6
		93, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 7
		91, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 8
		96, // Task ID
		"colorFromOpenCR", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_color_R_color_colorFromOpenCR, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 9
		95, // Task ID
		"color", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_color_O_color_color, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 10
		99, // Task ID
		"direction", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_wheel_O_wheelControl_direction, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 11
		98, // Task ID
		"direction", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_wheel_R_getDirection_direction, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 12
		104, // Task ID
		"led", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_led_O_led_led, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 13
		103, // Task ID
		"ledToOpenCR", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_led_R_led_ledToOpenCR, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 14
		110, // Task ID
		"Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 15
		85, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 16
		110, // Task ID
		"Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 17
		86, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 18
		90, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[19], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 19
		87, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 20
		110, // Task ID
		"Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 21
		90, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[22], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 22
		87, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 23
		110, // Task ID
		"Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 24
		90, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[25], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 25
		87, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 26
		110, // Task ID
		"Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 27
		110, // Task ID
		"Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 28
		90, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[29], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 29
		87, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 30
		90, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[31], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 31
		87, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 32
		110, // Task ID
		"Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 33
		94, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[34], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 34
		91, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 35
		110, // Task ID
		"Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 36
		94, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[37], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 37
		91, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 38
		110, // Task ID
		"Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 39
		94, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[40], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 40
		91, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 41
		110, // Task ID
		"Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 42
		110, // Task ID
		"Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 43
		94, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[44], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 44
		91, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 45
		94, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[46], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 46
		91, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 47
		110, // Task ID
		"Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 48
		110, // Task ID
		"Burger_5_listen_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 49
		108, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 50
		110, // Task ID
		"Burger_5_listen_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 51
		108, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 52
		109, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 53
		110, // Task ID
		"Burger_5_report_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 54
		109, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 55
		110, // Task ID
		"Burger_5_report_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 56
		107, // Task ID
		"group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 57
		110, // Task ID
		"Burger_5_leader_group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 58
		106, // Task ID
		"mode", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_Burger_5_GA_DTA_mode, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 59
		110, // Task ID
		"Burger_5_GA_DTA_mode", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_GA_DTA_mode, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 60
		110, // Task ID
		"Burger_5_GA_DTA_result", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_5_control_Burger_5_GA_DTA_result, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 61
		106, // Task ID
		"result", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_Burger_5_GA_DTA_result, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
};
// ##PORT_ARRAY_TEMPLATE::END


// ##AVAILABLE_CHUNK_LIST_TEMPLATE::START
SAvailableChunk g_astAvailableInputChunk_channel_78[1];

SAvailableChunk g_astAvailableInputChunk_channel_79[1];

SAvailableChunk g_astAvailableInputChunk_channel_80[1];

SAvailableChunk g_astAvailableInputChunk_channel_81[1];

SAvailableChunk g_astAvailableInputChunk_channel_82[1];

SAvailableChunk g_astAvailableInputChunk_channel_83[1];

SAvailableChunk g_astAvailableInputChunk_channel_84[1];

SAvailableChunk g_astAvailableInputChunk_channel_85[1];

SAvailableChunk g_astAvailableInputChunk_channel_86[1];

SAvailableChunk g_astAvailableInputChunk_channel_87[1];

SAvailableChunk g_astAvailableInputChunk_channel_88[1];

SAvailableChunk g_astAvailableInputChunk_channel_89[1];

SAvailableChunk g_astAvailableInputChunk_channel_90[1];

SAvailableChunk g_astAvailableInputChunk_channel_91[1];

SAvailableChunk g_astAvailableInputChunk_channel_92[1];

SAvailableChunk g_astAvailableInputChunk_channel_93[1];

SAvailableChunk g_astAvailableInputChunk_channel_94[1];

SAvailableChunk g_astAvailableInputChunk_channel_95[1];

SAvailableChunk g_astAvailableInputChunk_channel_96[1];

SAvailableChunk g_astAvailableInputChunk_channel_97[1];

SAvailableChunk g_astAvailableInputChunk_channel_98[1];

SAvailableChunk g_astAvailableInputChunk_channel_99[1];

SAvailableChunk g_astAvailableInputChunk_channel_100[1];

SAvailableChunk g_astAvailableInputChunk_channel_101[1];

SAvailableChunk g_astAvailableInputChunk_channel_102[1];

SAvailableChunk g_astAvailableInputChunk_channel_103[1];

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
		82,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
	{
		83,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
	{
		84,
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

SSharedMemoryChannel g_stSharedMemoryChannel_78 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_78_buffer, // Channel buffer pointer
	s_pChannel_78_buffer, // Channel data start
	s_pChannel_78_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_78_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_78_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_78, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_79 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_79_buffer, // Channel buffer pointer
	s_pChannel_79_buffer, // Channel data start
	s_pChannel_79_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_79_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_79_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_79, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_80 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_80_buffer, // Channel buffer pointer
	s_pChannel_80_buffer, // Channel data start
	s_pChannel_80_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_80_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_80_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_80, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_81 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_81_buffer, // Channel buffer pointer
	s_pChannel_81_buffer, // Channel data start
	s_pChannel_81_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_81_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_81_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_81, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};



SRemoteReaderChannel g_stRemoteReaderChannel_82 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	&g_stHostMemory, // SGenericMemoryAccess *pstReaderAccess - READER-part channel memory access API
};

SSharedMemoryChannel g_stSharedMemoryChannel_83 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_83_buffer, // Channel buffer pointer
	s_pChannel_83_buffer, // Channel data start
	s_pChannel_83_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_83_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_83_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_83, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

SRemoteWriterChannel g_stRemoteWriterChannel_83 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	(HThread) NULL, // receive handling thread
	(char *) NULL,
	0,
	&g_stSharedMemoryChannel_83, // SSharedMemoryChannel *pstInternalChannel;
};

SSharedMemoryChannel g_stSharedMemoryChannel_84 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_84_buffer, // Channel buffer pointer
	s_pChannel_84_buffer, // Channel data start
	s_pChannel_84_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_84_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_84_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_84, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

SRemoteWriterChannel g_stRemoteWriterChannel_84 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	(HThread) NULL, // receive handling thread
	(char *) NULL,
	0,
	&g_stSharedMemoryChannel_84, // SSharedMemoryChannel *pstInternalChannel;
};

SSharedMemoryChannel g_stSharedMemoryChannel_85 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_85_buffer, // Channel buffer pointer
	s_pChannel_85_buffer, // Channel data start
	s_pChannel_85_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_85_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_85_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_85, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_86 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_86_buffer, // Channel buffer pointer
	s_pChannel_86_buffer, // Channel data start
	s_pChannel_86_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_86_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_86_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_86, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_87 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_87_buffer, // Channel buffer pointer
	s_pChannel_87_buffer, // Channel data start
	s_pChannel_87_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_87_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_87_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_87, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_88 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_88_buffer, // Channel buffer pointer
	s_pChannel_88_buffer, // Channel data start
	s_pChannel_88_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_88_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_88_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_88, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_89 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_89_buffer, // Channel buffer pointer
	s_pChannel_89_buffer, // Channel data start
	s_pChannel_89_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_89_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_89_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_89, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_90 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_90_buffer, // Channel buffer pointer
	s_pChannel_90_buffer, // Channel data start
	s_pChannel_90_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_90_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_90_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_90, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_91 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_91_buffer, // Channel buffer pointer
	s_pChannel_91_buffer, // Channel data start
	s_pChannel_91_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_91_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_91_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_91, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_92 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_92_buffer, // Channel buffer pointer
	s_pChannel_92_buffer, // Channel data start
	s_pChannel_92_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_92_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_92_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_92, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_93 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_93_buffer, // Channel buffer pointer
	s_pChannel_93_buffer, // Channel data start
	s_pChannel_93_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_93_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_93_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_93, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_94 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_94_buffer, // Channel buffer pointer
	s_pChannel_94_buffer, // Channel data start
	s_pChannel_94_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_94_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_94_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_94, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_95 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_95_buffer, // Channel buffer pointer
	s_pChannel_95_buffer, // Channel data start
	s_pChannel_95_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_95_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_95_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_95, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_96 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_96_buffer, // Channel buffer pointer
	s_pChannel_96_buffer, // Channel data start
	s_pChannel_96_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_96_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_96_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_96, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_97 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_97_buffer, // Channel buffer pointer
	s_pChannel_97_buffer, // Channel data start
	s_pChannel_97_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_97_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_97_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_97, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_98 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_98_buffer, // Channel buffer pointer
	s_pChannel_98_buffer, // Channel data start
	s_pChannel_98_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_98_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_98_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_98, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_99 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_99_buffer, // Channel buffer pointer
	s_pChannel_99_buffer, // Channel data start
	s_pChannel_99_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_99_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_99_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_99, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_100 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_100_buffer, // Channel buffer pointer
	s_pChannel_100_buffer, // Channel data start
	s_pChannel_100_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_100_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_100_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_100, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_101 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_101_buffer, // Channel buffer pointer
	s_pChannel_101_buffer, // Channel data start
	s_pChannel_101_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_101_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_101_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_101, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_102 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_102_buffer, // Channel buffer pointer
	s_pChannel_102_buffer, // Channel data start
	s_pChannel_102_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_102_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_102_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_102, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_103 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_103_buffer, // Channel buffer pointer
	s_pChannel_103_buffer, // Channel data start
	s_pChannel_103_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_103_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_103_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_103, // Available chunk list
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
		78, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_78_SIZE, // Channel size
		&(g_astPortInfo[0]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[1]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_78, // specific shared memory channel structure pointer
	},
	{
		79, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_79_SIZE, // Channel size
		&(g_astPortInfo[2]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[3]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_79, // specific shared memory channel structure pointer
	},
	{
		80, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_80_SIZE, // Channel size
		&(g_astPortInfo[4]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[5]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_80, // specific shared memory channel structure pointer
	},
	{
		81, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_81_SIZE, // Channel size
		&(g_astPortInfo[6]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[7]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_81, // specific shared memory channel structure pointer
	},
	{
		82, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_READER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_82_SIZE, // Channel size
		&(g_astPortInfo[8]), // Outer-most input port information (port name: colorFromOpenCR)
		&(g_astPortInfo[9]), // Outer-most output port information (port name: color)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteReaderChannel_82, // specific bluetooth/serial channel structure pointer
	},
	{
		83, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_83_SIZE, // Channel size
		&(g_astPortInfo[10]), // Outer-most input port information (port name: direction)
		&(g_astPortInfo[11]), // Outer-most output port information (port name: direction)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteWriterChannel_83, // specific TCP socket channel structure pointer
	},
	{
		84, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_84_SIZE, // Channel size
		&(g_astPortInfo[12]), // Outer-most input port information (port name: led)
		&(g_astPortInfo[13]), // Outer-most output port information (port name: ledToOpenCR)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteWriterChannel_84, // specific TCP socket channel structure pointer
	},
	{
		85, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_85_SIZE, // Channel size
		&(g_astPortInfo[14]), // Outer-most input port information (port name: Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command)
		&(g_astPortInfo[15]), // Outer-most output port information (port name: command)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_85, // specific shared memory channel structure pointer
	},
	{
		86, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_86_SIZE, // Channel size
		&(g_astPortInfo[16]), // Outer-most input port information (port name: Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command)
		&(g_astPortInfo[17]), // Outer-most output port information (port name: command)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_86, // specific shared memory channel structure pointer
	},
	{
		87, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_87_SIZE, // Channel size
		&(g_astPortInfo[18]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[20]), // Outer-most output port information (port name: Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_87, // specific shared memory channel structure pointer
	},
	{
		88, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_88_SIZE, // Channel size
		&(g_astPortInfo[21]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[23]), // Outer-most output port information (port name: Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_88, // specific shared memory channel structure pointer
	},
	{
		89, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_89_SIZE, // Channel size
		&(g_astPortInfo[24]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[26]), // Outer-most output port information (port name: Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_89, // specific shared memory channel structure pointer
	},
	{
		90, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_90_SIZE, // Channel size
		&(g_astPortInfo[27]), // Outer-most input port information (port name: Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound)
		&(g_astPortInfo[28]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_90, // specific shared memory channel structure pointer
	},
	{
		91, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_91_SIZE, // Channel size
		&(g_astPortInfo[30]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[32]), // Outer-most output port information (port name: Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_91, // specific shared memory channel structure pointer
	},
	{
		92, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_92_SIZE, // Channel size
		&(g_astPortInfo[33]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[35]), // Outer-most output port information (port name: Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_92, // specific shared memory channel structure pointer
	},
	{
		93, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_93_SIZE, // Channel size
		&(g_astPortInfo[36]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[38]), // Outer-most output port information (port name: Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_93, // specific shared memory channel structure pointer
	},
	{
		94, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_94_SIZE, // Channel size
		&(g_astPortInfo[39]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[41]), // Outer-most output port information (port name: Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_94, // specific shared memory channel structure pointer
	},
	{
		95, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_95_SIZE, // Channel size
		&(g_astPortInfo[42]), // Outer-most input port information (port name: Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound)
		&(g_astPortInfo[43]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_95, // specific shared memory channel structure pointer
	},
	{
		96, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_96_SIZE, // Channel size
		&(g_astPortInfo[45]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[47]), // Outer-most output port information (port name: Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_96, // specific shared memory channel structure pointer
	},
	{
		97, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_97_SIZE, // Channel size
		&(g_astPortInfo[48]), // Outer-most input port information (port name: Burger_5_listen_ControlRobot_groupA_FINISH)
		&(g_astPortInfo[49]), // Outer-most output port information (port name: ControlRobot_groupA_FINISH)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_97, // specific shared memory channel structure pointer
	},
	{
		98, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_98_SIZE, // Channel size
		&(g_astPortInfo[50]), // Outer-most input port information (port name: Burger_5_listen_ControlRobot_groupB_FINISH)
		&(g_astPortInfo[51]), // Outer-most output port information (port name: ControlRobot_groupB_FINISH)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_98, // specific shared memory channel structure pointer
	},
	{
		99, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_99_SIZE, // Channel size
		&(g_astPortInfo[52]), // Outer-most input port information (port name: ControlRobot_groupA_FINISH)
		&(g_astPortInfo[53]), // Outer-most output port information (port name: Burger_5_report_ControlRobot_groupA_FINISH)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_99, // specific shared memory channel structure pointer
	},
	{
		100, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_100_SIZE, // Channel size
		&(g_astPortInfo[54]), // Outer-most input port information (port name: ControlRobot_groupB_FINISH)
		&(g_astPortInfo[55]), // Outer-most output port information (port name: Burger_5_report_ControlRobot_groupB_FINISH)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_100, // specific shared memory channel structure pointer
	},
	{
		101, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_101_SIZE, // Channel size
		&(g_astPortInfo[56]), // Outer-most input port information (port name: group_state)
		&(g_astPortInfo[57]), // Outer-most output port information (port name: Burger_5_leader_group_state)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_101, // specific shared memory channel structure pointer
	},
	{
		102, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_102_SIZE, // Channel size
		&(g_astPortInfo[58]), // Outer-most input port information (port name: mode)
		&(g_astPortInfo[59]), // Outer-most output port information (port name: Burger_5_GA_DTA_mode)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_102, // specific shared memory channel structure pointer
	},
	{
		103, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_103_SIZE, // Channel size
		&(g_astPortInfo[60]), // Outer-most input port information (port name: Burger_5_GA_DTA_result)
		&(g_astPortInfo[61]), // Outer-most output port information (port name: result)
		0, // Initial data length
		6, // Processor ID
		&g_stSharedMemoryChannel_103, // specific shared memory channel structure pointer
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



