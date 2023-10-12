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
#define CHANNEL_52_SIZE (4)
#define CHANNEL_53_SIZE (4)
#define CHANNEL_54_SIZE (4)
#define CHANNEL_55_SIZE (4)
#define CHANNEL_56_SIZE (4)
#define CHANNEL_57_SIZE (4)
#define CHANNEL_58_SIZE (8)
#define CHANNEL_59_SIZE (16)
#define CHANNEL_60_SIZE (16)
#define CHANNEL_61_SIZE (16)
#define CHANNEL_62_SIZE (16)
#define CHANNEL_63_SIZE (16)
#define CHANNEL_64_SIZE (16)
#define CHANNEL_65_SIZE (16)
#define CHANNEL_66_SIZE (16)
#define CHANNEL_67_SIZE (16)
#define CHANNEL_68_SIZE (16)
#define CHANNEL_69_SIZE (16)
#define CHANNEL_70_SIZE (16)
#define CHANNEL_71_SIZE (16)
#define CHANNEL_72_SIZE (16)
#define CHANNEL_73_SIZE (16)
#define CHANNEL_74_SIZE (16)
#define CHANNEL_75_SIZE (192)
#define CHANNEL_76_SIZE (16)
#define CHANNEL_77_SIZE (16)
// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::END


// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::START
char s_pChannel_52_buffer[CHANNEL_52_SIZE];
char s_pChannel_53_buffer[CHANNEL_53_SIZE];
char s_pChannel_54_buffer[CHANNEL_54_SIZE];
char s_pChannel_55_buffer[CHANNEL_55_SIZE];
char s_pChannel_56_buffer[CHANNEL_56_SIZE];
char s_pChannel_57_buffer[CHANNEL_57_SIZE];
char s_pChannel_58_buffer[CHANNEL_58_SIZE];
char s_pChannel_59_buffer[CHANNEL_59_SIZE];
char s_pChannel_60_buffer[CHANNEL_60_SIZE];
char s_pChannel_61_buffer[CHANNEL_61_SIZE];
char s_pChannel_62_buffer[CHANNEL_62_SIZE];
char s_pChannel_63_buffer[CHANNEL_63_SIZE];
char s_pChannel_64_buffer[CHANNEL_64_SIZE];
char s_pChannel_65_buffer[CHANNEL_65_SIZE];
char s_pChannel_66_buffer[CHANNEL_66_SIZE];
char s_pChannel_67_buffer[CHANNEL_67_SIZE];
char s_pChannel_68_buffer[CHANNEL_68_SIZE];
char s_pChannel_69_buffer[CHANNEL_69_SIZE];
char s_pChannel_70_buffer[CHANNEL_70_SIZE];
char s_pChannel_71_buffer[CHANNEL_71_SIZE];
char s_pChannel_72_buffer[CHANNEL_72_SIZE];
char s_pChannel_73_buffer[CHANNEL_73_SIZE];
char s_pChannel_74_buffer[CHANNEL_74_SIZE];
char s_pChannel_75_buffer[CHANNEL_75_SIZE];
char s_pChannel_76_buffer[CHANNEL_76_SIZE];
char s_pChannel_77_buffer[CHANNEL_77_SIZE];
// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::END


// ##CHUNK_DEFINITION_TEMPLATE::START
SChunk g_astChunk_channel_52_out[1];
SChunk g_astChunk_channel_52_in[1];

SChunk g_astChunk_channel_53_out[1];
SChunk g_astChunk_channel_53_in[1];

SChunk g_astChunk_channel_54_out[1];
SChunk g_astChunk_channel_54_in[1];

SChunk g_astChunk_channel_55_out[1];
SChunk g_astChunk_channel_55_in[1];

SChunk g_astChunk_channel_56_out[1];
SChunk g_astChunk_channel_56_in[1];

SChunk g_astChunk_channel_57_out[1];
SChunk g_astChunk_channel_57_in[1];

SChunk g_astChunk_channel_58_out[1];
SChunk g_astChunk_channel_58_in[1];

SChunk g_astChunk_channel_59_out[1];
SChunk g_astChunk_channel_59_in[1];

SChunk g_astChunk_channel_60_out[1];
SChunk g_astChunk_channel_60_in[1];

SChunk g_astChunk_channel_61_out[1];
SChunk g_astChunk_channel_61_in[1];

SChunk g_astChunk_channel_62_out[1];
SChunk g_astChunk_channel_62_in[1];

SChunk g_astChunk_channel_63_out[1];
SChunk g_astChunk_channel_63_in[1];

SChunk g_astChunk_channel_64_out[1];
SChunk g_astChunk_channel_64_in[1];

SChunk g_astChunk_channel_65_out[1];
SChunk g_astChunk_channel_65_in[1];

SChunk g_astChunk_channel_66_out[1];
SChunk g_astChunk_channel_66_in[1];

SChunk g_astChunk_channel_67_out[1];
SChunk g_astChunk_channel_67_in[1];

SChunk g_astChunk_channel_68_out[1];
SChunk g_astChunk_channel_68_in[1];

SChunk g_astChunk_channel_69_out[1];
SChunk g_astChunk_channel_69_in[1];

SChunk g_astChunk_channel_70_out[1];
SChunk g_astChunk_channel_70_in[1];

SChunk g_astChunk_channel_71_out[1];
SChunk g_astChunk_channel_71_in[1];

SChunk g_astChunk_channel_72_out[1];
SChunk g_astChunk_channel_72_in[1];

SChunk g_astChunk_channel_73_out[1];
SChunk g_astChunk_channel_73_in[1];

SChunk g_astChunk_channel_74_out[1];
SChunk g_astChunk_channel_74_in[1];

SChunk g_astChunk_channel_75_out[1];
SChunk g_astChunk_channel_75_in[1];

SChunk g_astChunk_channel_76_out[1];
SChunk g_astChunk_channel_76_in[1];

SChunk g_astChunk_channel_77_out[1];
SChunk g_astChunk_channel_77_in[1];

// ##CHUNK_DEFINITION_TEMPLATE::END


//portSampleRateList
// ##PORT_SAMPLE_RATE_TEMPLATE::START
SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_color_R_color_colorFromOpenCR[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_color_O_color_color[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_wheel_O_wheelControl_direction[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_wheel_R_getDirection_direction[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_led_O_led_led[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_led_R_led_ledToOpenCR[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_control_Burger_3_GA_DTA_result[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_Burger_3_GA_DTA_result[] = {
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
		59, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 1
		60, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 2
		61, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 3
		59, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 4
		63, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 5
		64, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 6
		65, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 7
		63, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 8
		68, // Task ID
		"colorFromOpenCR", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_color_R_color_colorFromOpenCR, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 9
		67, // Task ID
		"color", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_color_O_color_color, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 10
		71, // Task ID
		"direction", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_wheel_O_wheelControl_direction, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 11
		70, // Task ID
		"direction", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_wheel_R_getDirection_direction, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 12
		76, // Task ID
		"led", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_led_O_led_led, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 13
		75, // Task ID
		"ledToOpenCR", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_led_R_led_ledToOpenCR, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 14
		82, // Task ID
		"Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 15
		57, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 16
		82, // Task ID
		"Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 17
		58, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 18
		62, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[19], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 19
		59, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 20
		82, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 21
		62, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[22], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 22
		59, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 23
		82, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 24
		62, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[25], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 25
		59, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 26
		82, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 27
		82, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 28
		62, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[29], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 29
		59, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 30
		62, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[31], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 31
		59, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 32
		82, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 33
		66, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[34], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 34
		63, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 35
		82, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 36
		66, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[37], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 37
		63, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 38
		82, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 39
		66, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[40], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 40
		63, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 41
		82, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 42
		82, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 43
		66, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[44], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 44
		63, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 45
		66, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[46], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 46
		63, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 47
		82, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 48
		82, // Task ID
		"Burger_3_listen_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 49
		80, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 50
		82, // Task ID
		"Burger_3_listen_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 51
		80, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 52
		81, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 53
		82, // Task ID
		"Burger_3_report_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 54
		81, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 55
		82, // Task ID
		"Burger_3_report_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 56
		79, // Task ID
		"group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 57
		82, // Task ID
		"Burger_3_leader_group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 58
		78, // Task ID
		"mode", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_Burger_3_GA_DTA_mode, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 59
		82, // Task ID
		"Burger_3_GA_DTA_mode", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_GA_DTA_mode, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 60
		82, // Task ID
		"Burger_3_GA_DTA_result", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_Burger_3_control_Burger_3_GA_DTA_result, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 61
		78, // Task ID
		"result", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_Burger_3_GA_DTA_result, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
};
// ##PORT_ARRAY_TEMPLATE::END


// ##AVAILABLE_CHUNK_LIST_TEMPLATE::START
SAvailableChunk g_astAvailableInputChunk_channel_52[1];

SAvailableChunk g_astAvailableInputChunk_channel_53[1];

SAvailableChunk g_astAvailableInputChunk_channel_54[1];

SAvailableChunk g_astAvailableInputChunk_channel_55[1];

SAvailableChunk g_astAvailableInputChunk_channel_56[1];

SAvailableChunk g_astAvailableInputChunk_channel_57[1];

SAvailableChunk g_astAvailableInputChunk_channel_58[1];

SAvailableChunk g_astAvailableInputChunk_channel_59[1];

SAvailableChunk g_astAvailableInputChunk_channel_60[1];

SAvailableChunk g_astAvailableInputChunk_channel_61[1];

SAvailableChunk g_astAvailableInputChunk_channel_62[1];

SAvailableChunk g_astAvailableInputChunk_channel_63[1];

SAvailableChunk g_astAvailableInputChunk_channel_64[1];

SAvailableChunk g_astAvailableInputChunk_channel_65[1];

SAvailableChunk g_astAvailableInputChunk_channel_66[1];

SAvailableChunk g_astAvailableInputChunk_channel_67[1];

SAvailableChunk g_astAvailableInputChunk_channel_68[1];

SAvailableChunk g_astAvailableInputChunk_channel_69[1];

SAvailableChunk g_astAvailableInputChunk_channel_70[1];

SAvailableChunk g_astAvailableInputChunk_channel_71[1];

SAvailableChunk g_astAvailableInputChunk_channel_72[1];

SAvailableChunk g_astAvailableInputChunk_channel_73[1];

SAvailableChunk g_astAvailableInputChunk_channel_74[1];

SAvailableChunk g_astAvailableInputChunk_channel_75[1];

SAvailableChunk g_astAvailableInputChunk_channel_76[1];

SAvailableChunk g_astAvailableInputChunk_channel_77[1];

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
		56,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
	{
		57,
		{
			(HFixedSizeQueue) NULL,
		},			
		&(g_astSerialMasterInfo[0].stAggregateInfo),
	},
	{
		58,
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

SSharedMemoryChannel g_stSharedMemoryChannel_52 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_52_buffer, // Channel buffer pointer
	s_pChannel_52_buffer, // Channel data start
	s_pChannel_52_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_52_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_52_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_52, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_53 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_53_buffer, // Channel buffer pointer
	s_pChannel_53_buffer, // Channel data start
	s_pChannel_53_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_53_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_53_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_53, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_54 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_54_buffer, // Channel buffer pointer
	s_pChannel_54_buffer, // Channel data start
	s_pChannel_54_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_54_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_54_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_54, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_55 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_55_buffer, // Channel buffer pointer
	s_pChannel_55_buffer, // Channel data start
	s_pChannel_55_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_55_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_55_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_55, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};



SRemoteReaderChannel g_stRemoteReaderChannel_56 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	&g_stHostMemory, // SGenericMemoryAccess *pstReaderAccess - READER-part channel memory access API
};

SSharedMemoryChannel g_stSharedMemoryChannel_57 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_57_buffer, // Channel buffer pointer
	s_pChannel_57_buffer, // Channel data start
	s_pChannel_57_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_57_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_57_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_57, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

SRemoteWriterChannel g_stRemoteWriterChannel_57 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	(HThread) NULL, // receive handling thread
	(char *) NULL,
	0,
	&g_stSharedMemoryChannel_57, // SSharedMemoryChannel *pstInternalChannel;
};

SSharedMemoryChannel g_stSharedMemoryChannel_58 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_58_buffer, // Channel buffer pointer
	s_pChannel_58_buffer, // Channel data start
	s_pChannel_58_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_58_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_58_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_58, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};

SRemoteWriterChannel g_stRemoteWriterChannel_58 = {
	{ 
		CONNECTION_METHOD_AGGREGATE,
		NULL, // will be set to SIndividualServiceInfo or SAggregateServiceInfo
		(HThreadMutex) NULL,
		FALSE, // bChannelExit
	},
	(HThread) NULL, // receive handling thread
	(char *) NULL,
	0,
	&g_stSharedMemoryChannel_58, // SSharedMemoryChannel *pstInternalChannel;
};

SSharedMemoryChannel g_stSharedMemoryChannel_59 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_59_buffer, // Channel buffer pointer
	s_pChannel_59_buffer, // Channel data start
	s_pChannel_59_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_59_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_59_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_59, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_60 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_60_buffer, // Channel buffer pointer
	s_pChannel_60_buffer, // Channel data start
	s_pChannel_60_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_60_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_60_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_60, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_61 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_61_buffer, // Channel buffer pointer
	s_pChannel_61_buffer, // Channel data start
	s_pChannel_61_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_61_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_61_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_61, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_62 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_62_buffer, // Channel buffer pointer
	s_pChannel_62_buffer, // Channel data start
	s_pChannel_62_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_62_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_62_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_62, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_63 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_63_buffer, // Channel buffer pointer
	s_pChannel_63_buffer, // Channel data start
	s_pChannel_63_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_63_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_63_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_63, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_64 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_64_buffer, // Channel buffer pointer
	s_pChannel_64_buffer, // Channel data start
	s_pChannel_64_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_64_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_64_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_64, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_65 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_65_buffer, // Channel buffer pointer
	s_pChannel_65_buffer, // Channel data start
	s_pChannel_65_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_65_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_65_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_65, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_66 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_66_buffer, // Channel buffer pointer
	s_pChannel_66_buffer, // Channel data start
	s_pChannel_66_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_66_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_66_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_66, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_67 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_67_buffer, // Channel buffer pointer
	s_pChannel_67_buffer, // Channel data start
	s_pChannel_67_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_67_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_67_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_67, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_68 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_68_buffer, // Channel buffer pointer
	s_pChannel_68_buffer, // Channel data start
	s_pChannel_68_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_68_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_68_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_68, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_69 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_69_buffer, // Channel buffer pointer
	s_pChannel_69_buffer, // Channel data start
	s_pChannel_69_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_69_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_69_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_69, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_70 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_70_buffer, // Channel buffer pointer
	s_pChannel_70_buffer, // Channel data start
	s_pChannel_70_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_70_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_70_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_70, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_71 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_71_buffer, // Channel buffer pointer
	s_pChannel_71_buffer, // Channel data start
	s_pChannel_71_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_71_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_71_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_71, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_72 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_72_buffer, // Channel buffer pointer
	s_pChannel_72_buffer, // Channel data start
	s_pChannel_72_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_72_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_72_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_72, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_73 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_73_buffer, // Channel buffer pointer
	s_pChannel_73_buffer, // Channel data start
	s_pChannel_73_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_73_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_73_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_73, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_74 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_74_buffer, // Channel buffer pointer
	s_pChannel_74_buffer, // Channel data start
	s_pChannel_74_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_74_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_74_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_74, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_75 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_75_buffer, // Channel buffer pointer
	s_pChannel_75_buffer, // Channel data start
	s_pChannel_75_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_75_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_75_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_75, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_76 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_76_buffer, // Channel buffer pointer
	s_pChannel_76_buffer, // Channel data start
	s_pChannel_76_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_76_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_76_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_76, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_77 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_77_buffer, // Channel buffer pointer
	s_pChannel_77_buffer, // Channel data start
	s_pChannel_77_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_77_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_77_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_77, // Available chunk list
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
		52, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_52_SIZE, // Channel size
		&(g_astPortInfo[0]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[1]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_52, // specific shared memory channel structure pointer
	},
	{
		53, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_53_SIZE, // Channel size
		&(g_astPortInfo[2]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[3]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_53, // specific shared memory channel structure pointer
	},
	{
		54, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_54_SIZE, // Channel size
		&(g_astPortInfo[4]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[5]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_54, // specific shared memory channel structure pointer
	},
	{
		55, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_55_SIZE, // Channel size
		&(g_astPortInfo[6]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[7]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_55, // specific shared memory channel structure pointer
	},
	{
		56, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_READER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_56_SIZE, // Channel size
		&(g_astPortInfo[8]), // Outer-most input port information (port name: colorFromOpenCR)
		&(g_astPortInfo[9]), // Outer-most output port information (port name: color)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteReaderChannel_56, // specific bluetooth/serial channel structure pointer
	},
	{
		57, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_57_SIZE, // Channel size
		&(g_astPortInfo[10]), // Outer-most input port information (port name: direction)
		&(g_astPortInfo[11]), // Outer-most output port information (port name: direction)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteWriterChannel_57, // specific TCP socket channel structure pointer
	},
	{
		58, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_REMOTE_WRITER, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_58_SIZE, // Channel size
		&(g_astPortInfo[12]), // Outer-most input port information (port name: led)
		&(g_astPortInfo[13]), // Outer-most output port information (port name: ledToOpenCR)
		0, // Initial data length
		0, // Processor ID
		&g_stRemoteWriterChannel_58, // specific TCP socket channel structure pointer
	},
	{
		59, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_59_SIZE, // Channel size
		&(g_astPortInfo[14]), // Outer-most input port information (port name: Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command)
		&(g_astPortInfo[15]), // Outer-most output port information (port name: command)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_59, // specific shared memory channel structure pointer
	},
	{
		60, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_60_SIZE, // Channel size
		&(g_astPortInfo[16]), // Outer-most input port information (port name: Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command)
		&(g_astPortInfo[17]), // Outer-most output port information (port name: command)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_60, // specific shared memory channel structure pointer
	},
	{
		61, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_61_SIZE, // Channel size
		&(g_astPortInfo[18]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[20]), // Outer-most output port information (port name: Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_61, // specific shared memory channel structure pointer
	},
	{
		62, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_62_SIZE, // Channel size
		&(g_astPortInfo[21]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[23]), // Outer-most output port information (port name: Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_62, // specific shared memory channel structure pointer
	},
	{
		63, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_63_SIZE, // Channel size
		&(g_astPortInfo[24]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[26]), // Outer-most output port information (port name: Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_63, // specific shared memory channel structure pointer
	},
	{
		64, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_64_SIZE, // Channel size
		&(g_astPortInfo[27]), // Outer-most input port information (port name: Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound)
		&(g_astPortInfo[28]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_64, // specific shared memory channel structure pointer
	},
	{
		65, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_65_SIZE, // Channel size
		&(g_astPortInfo[30]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[32]), // Outer-most output port information (port name: Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_65, // specific shared memory channel structure pointer
	},
	{
		66, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_66_SIZE, // Channel size
		&(g_astPortInfo[33]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[35]), // Outer-most output port information (port name: Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_66, // specific shared memory channel structure pointer
	},
	{
		67, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_67_SIZE, // Channel size
		&(g_astPortInfo[36]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[38]), // Outer-most output port information (port name: Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_67, // specific shared memory channel structure pointer
	},
	{
		68, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_68_SIZE, // Channel size
		&(g_astPortInfo[39]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[41]), // Outer-most output port information (port name: Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_68, // specific shared memory channel structure pointer
	},
	{
		69, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_69_SIZE, // Channel size
		&(g_astPortInfo[42]), // Outer-most input port information (port name: Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound)
		&(g_astPortInfo[43]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_69, // specific shared memory channel structure pointer
	},
	{
		70, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_70_SIZE, // Channel size
		&(g_astPortInfo[45]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[47]), // Outer-most output port information (port name: Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_70, // specific shared memory channel structure pointer
	},
	{
		71, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_71_SIZE, // Channel size
		&(g_astPortInfo[48]), // Outer-most input port information (port name: Burger_3_listen_ControlRobot_groupA_FINISH)
		&(g_astPortInfo[49]), // Outer-most output port information (port name: ControlRobot_groupA_FINISH)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_71, // specific shared memory channel structure pointer
	},
	{
		72, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_72_SIZE, // Channel size
		&(g_astPortInfo[50]), // Outer-most input port information (port name: Burger_3_listen_ControlRobot_groupB_FINISH)
		&(g_astPortInfo[51]), // Outer-most output port information (port name: ControlRobot_groupB_FINISH)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_72, // specific shared memory channel structure pointer
	},
	{
		73, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_73_SIZE, // Channel size
		&(g_astPortInfo[52]), // Outer-most input port information (port name: ControlRobot_groupA_FINISH)
		&(g_astPortInfo[53]), // Outer-most output port information (port name: Burger_3_report_ControlRobot_groupA_FINISH)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_73, // specific shared memory channel structure pointer
	},
	{
		74, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_74_SIZE, // Channel size
		&(g_astPortInfo[54]), // Outer-most input port information (port name: ControlRobot_groupB_FINISH)
		&(g_astPortInfo[55]), // Outer-most output port information (port name: Burger_3_report_ControlRobot_groupB_FINISH)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_74, // specific shared memory channel structure pointer
	},
	{
		75, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_75_SIZE, // Channel size
		&(g_astPortInfo[56]), // Outer-most input port information (port name: group_state)
		&(g_astPortInfo[57]), // Outer-most output port information (port name: Burger_3_leader_group_state)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_75, // specific shared memory channel structure pointer
	},
	{
		76, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_76_SIZE, // Channel size
		&(g_astPortInfo[58]), // Outer-most input port information (port name: mode)
		&(g_astPortInfo[59]), // Outer-most output port information (port name: Burger_3_GA_DTA_mode)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_76, // specific shared memory channel structure pointer
	},
	{
		77, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_77_SIZE, // Channel size
		&(g_astPortInfo[60]), // Outer-most input port information (port name: Burger_3_GA_DTA_result)
		&(g_astPortInfo[61]), // Outer-most output port information (port name: result)
		0, // Initial data length
		4, // Processor ID
		&g_stSharedMemoryChannel_77, // specific shared memory channel structure pointer
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



