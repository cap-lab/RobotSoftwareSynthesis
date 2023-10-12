/* uem_channel_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_common.h>

#include <UCSocket.h>
#include <UCDynamicSocket.h>
#include <UCFixedSizeQueue.h>

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



// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::START
#define CHANNEL_130_SIZE (4)
#define CHANNEL_131_SIZE (4)
#define CHANNEL_132_SIZE (4)
#define CHANNEL_133_SIZE (4)
#define CHANNEL_134_SIZE (16)
#define CHANNEL_135_SIZE (16)
#define CHANNEL_136_SIZE (16)
#define CHANNEL_137_SIZE (16)
#define CHANNEL_138_SIZE (16)
#define CHANNEL_139_SIZE (16)
#define CHANNEL_140_SIZE (16)
#define CHANNEL_141_SIZE (16)
#define CHANNEL_142_SIZE (16)
#define CHANNEL_143_SIZE (16)
#define CHANNEL_144_SIZE (16)
#define CHANNEL_145_SIZE (16)
#define CHANNEL_146_SIZE (16)
#define CHANNEL_147_SIZE (16)
#define CHANNEL_148_SIZE (16)
#define CHANNEL_149_SIZE (16)
#define CHANNEL_150_SIZE (192)
#define CHANNEL_151_SIZE (16)
#define CHANNEL_152_SIZE (16)
// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::END


// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::START
char s_pChannel_130_buffer[CHANNEL_130_SIZE];
char s_pChannel_131_buffer[CHANNEL_131_SIZE];
char s_pChannel_132_buffer[CHANNEL_132_SIZE];
char s_pChannel_133_buffer[CHANNEL_133_SIZE];
char s_pChannel_134_buffer[CHANNEL_134_SIZE];
char s_pChannel_135_buffer[CHANNEL_135_SIZE];
char s_pChannel_136_buffer[CHANNEL_136_SIZE];
char s_pChannel_137_buffer[CHANNEL_137_SIZE];
char s_pChannel_138_buffer[CHANNEL_138_SIZE];
char s_pChannel_139_buffer[CHANNEL_139_SIZE];
char s_pChannel_140_buffer[CHANNEL_140_SIZE];
char s_pChannel_141_buffer[CHANNEL_141_SIZE];
char s_pChannel_142_buffer[CHANNEL_142_SIZE];
char s_pChannel_143_buffer[CHANNEL_143_SIZE];
char s_pChannel_144_buffer[CHANNEL_144_SIZE];
char s_pChannel_145_buffer[CHANNEL_145_SIZE];
char s_pChannel_146_buffer[CHANNEL_146_SIZE];
char s_pChannel_147_buffer[CHANNEL_147_SIZE];
char s_pChannel_148_buffer[CHANNEL_148_SIZE];
char s_pChannel_149_buffer[CHANNEL_149_SIZE];
char s_pChannel_150_buffer[CHANNEL_150_SIZE];
char s_pChannel_151_buffer[CHANNEL_151_SIZE];
char s_pChannel_152_buffer[CHANNEL_152_SIZE];
// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::END


// ##CHUNK_DEFINITION_TEMPLATE::START
SChunk g_astChunk_channel_130_out[1];
SChunk g_astChunk_channel_130_in[1];

SChunk g_astChunk_channel_131_out[1];
SChunk g_astChunk_channel_131_in[1];

SChunk g_astChunk_channel_132_out[1];
SChunk g_astChunk_channel_132_in[1];

SChunk g_astChunk_channel_133_out[1];
SChunk g_astChunk_channel_133_in[1];

SChunk g_astChunk_channel_134_out[1];
SChunk g_astChunk_channel_134_in[1];

SChunk g_astChunk_channel_135_out[1];
SChunk g_astChunk_channel_135_in[1];

SChunk g_astChunk_channel_136_out[1];
SChunk g_astChunk_channel_136_in[1];

SChunk g_astChunk_channel_137_out[1];
SChunk g_astChunk_channel_137_in[1];

SChunk g_astChunk_channel_138_out[1];
SChunk g_astChunk_channel_138_in[1];

SChunk g_astChunk_channel_139_out[1];
SChunk g_astChunk_channel_139_in[1];

SChunk g_astChunk_channel_140_out[1];
SChunk g_astChunk_channel_140_in[1];

SChunk g_astChunk_channel_141_out[1];
SChunk g_astChunk_channel_141_in[1];

SChunk g_astChunk_channel_142_out[1];
SChunk g_astChunk_channel_142_in[1];

SChunk g_astChunk_channel_143_out[1];
SChunk g_astChunk_channel_143_in[1];

SChunk g_astChunk_channel_144_out[1];
SChunk g_astChunk_channel_144_in[1];

SChunk g_astChunk_channel_145_out[1];
SChunk g_astChunk_channel_145_in[1];

SChunk g_astChunk_channel_146_out[1];
SChunk g_astChunk_channel_146_in[1];

SChunk g_astChunk_channel_147_out[1];
SChunk g_astChunk_channel_147_in[1];

SChunk g_astChunk_channel_148_out[1];
SChunk g_astChunk_channel_148_in[1];

SChunk g_astChunk_channel_149_out[1];
SChunk g_astChunk_channel_149_in[1];

SChunk g_astChunk_channel_150_out[1];
SChunk g_astChunk_channel_150_in[1];

SChunk g_astChunk_channel_151_out[1];
SChunk g_astChunk_channel_151_in[1];

SChunk g_astChunk_channel_152_out[1];
SChunk g_astChunk_channel_152_in[1];

// ##CHUNK_DEFINITION_TEMPLATE::END


//portSampleRateList
// ##PORT_SAMPLE_RATE_TEMPLATE::START
SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_GA_DTA_result[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_1_GA_DTA_result[] = {
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
		143, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 1
		144, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 2
		145, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 3
		143, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 4
		147, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 5
		148, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 6
		149, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 7
		147, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 8
		160, // Task ID
		"EngineeringKit_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 9
		141, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 10
		160, // Task ID
		"EngineeringKit_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 11
		142, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 12
		146, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[13], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 13
		143, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 14
		160, // Task ID
		"EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 15
		146, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[16], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 16
		143, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 17
		160, // Task ID
		"EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 18
		146, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[19], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 19
		143, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 20
		160, // Task ID
		"EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 21
		160, // Task ID
		"EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 22
		146, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[23], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 23
		143, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 24
		146, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[25], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 25
		143, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 26
		160, // Task ID
		"EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 27
		150, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[28], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 28
		147, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 29
		160, // Task ID
		"EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 30
		150, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[31], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 31
		147, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 32
		160, // Task ID
		"EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 33
		150, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[34], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 34
		147, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 35
		160, // Task ID
		"EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 36
		160, // Task ID
		"EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 37
		150, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[38], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 38
		147, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 39
		150, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[40], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 40
		147, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 41
		160, // Task ID
		"EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 42
		160, // Task ID
		"EngineeringKit_1_listen_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 43
		158, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 44
		160, // Task ID
		"EngineeringKit_1_listen_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 45
		158, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 46
		159, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 47
		160, // Task ID
		"EngineeringKit_1_report_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 48
		159, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 49
		160, // Task ID
		"EngineeringKit_1_report_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 50
		157, // Task ID
		"group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 51
		160, // Task ID
		"EngineeringKit_1_leader_group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 52
		156, // Task ID
		"mode", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_GA_DTA_mode, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 53
		160, // Task ID
		"EngineeringKit_1_GA_DTA_mode", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_GA_DTA_mode, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 54
		160, // Task ID
		"EngineeringKit_1_GA_DTA_result", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_control_EngineeringKit_1_GA_DTA_result, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 55
		156, // Task ID
		"result", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_1_GA_DTA_result, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
};
// ##PORT_ARRAY_TEMPLATE::END


// ##AVAILABLE_CHUNK_LIST_TEMPLATE::START
SAvailableChunk g_astAvailableInputChunk_channel_130[1];

SAvailableChunk g_astAvailableInputChunk_channel_131[1];

SAvailableChunk g_astAvailableInputChunk_channel_132[1];

SAvailableChunk g_astAvailableInputChunk_channel_133[1];

SAvailableChunk g_astAvailableInputChunk_channel_134[1];

SAvailableChunk g_astAvailableInputChunk_channel_135[1];

SAvailableChunk g_astAvailableInputChunk_channel_136[1];

SAvailableChunk g_astAvailableInputChunk_channel_137[1];

SAvailableChunk g_astAvailableInputChunk_channel_138[1];

SAvailableChunk g_astAvailableInputChunk_channel_139[1];

SAvailableChunk g_astAvailableInputChunk_channel_140[1];

SAvailableChunk g_astAvailableInputChunk_channel_141[1];

SAvailableChunk g_astAvailableInputChunk_channel_142[1];

SAvailableChunk g_astAvailableInputChunk_channel_143[1];

SAvailableChunk g_astAvailableInputChunk_channel_144[1];

SAvailableChunk g_astAvailableInputChunk_channel_145[1];

SAvailableChunk g_astAvailableInputChunk_channel_146[1];

SAvailableChunk g_astAvailableInputChunk_channel_147[1];

SAvailableChunk g_astAvailableInputChunk_channel_148[1];

SAvailableChunk g_astAvailableInputChunk_channel_149[1];

SAvailableChunk g_astAvailableInputChunk_channel_150[1];

SAvailableChunk g_astAvailableInputChunk_channel_151[1];

SAvailableChunk g_astAvailableInputChunk_channel_152[1];

// ##AVAILABLE_CHUNK_LIST_TEMPLATE::END







// ##INDIVIDUAL_CONNECTION_GENERATION_TEMPLATE::START
SIndividualConnectionInfo g_astIndividualConnectionInfo[] = {
};
// ##INDIVIDUAL_CONNECTION_GENERATION_TEMPLATE::END




SAggregateConnectionInfo g_astAggregateConnectionInfo[] = {
};


SGenericMemoryAccess g_stHostMemory = {
	UKHostSystem_CreateMemory,
	UKHostSystem_CopyToMemory,
	UKHostSystem_CopyInMemory,
	UKHostSystem_CopyFromMemory,
	UKHostSystem_DestroyMemory,
};




// ##SPECIFIC_CHANNEL_LIST_TEMPLATE::START

SSharedMemoryChannel g_stSharedMemoryChannel_130 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_130_buffer, // Channel buffer pointer
	s_pChannel_130_buffer, // Channel data start
	s_pChannel_130_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_130_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_130_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_130, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_131 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_131_buffer, // Channel buffer pointer
	s_pChannel_131_buffer, // Channel data start
	s_pChannel_131_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_131_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_131_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_131, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_132 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_132_buffer, // Channel buffer pointer
	s_pChannel_132_buffer, // Channel data start
	s_pChannel_132_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_132_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_132_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_132, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_133 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_133_buffer, // Channel buffer pointer
	s_pChannel_133_buffer, // Channel data start
	s_pChannel_133_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_133_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_133_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_133, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_134 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_134_buffer, // Channel buffer pointer
	s_pChannel_134_buffer, // Channel data start
	s_pChannel_134_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_134_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_134_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_134, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_135 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_135_buffer, // Channel buffer pointer
	s_pChannel_135_buffer, // Channel data start
	s_pChannel_135_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_135_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_135_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_135, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_136 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_136_buffer, // Channel buffer pointer
	s_pChannel_136_buffer, // Channel data start
	s_pChannel_136_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_136_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_136_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_136, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_137 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_137_buffer, // Channel buffer pointer
	s_pChannel_137_buffer, // Channel data start
	s_pChannel_137_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_137_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_137_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_137, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_138 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_138_buffer, // Channel buffer pointer
	s_pChannel_138_buffer, // Channel data start
	s_pChannel_138_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_138_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_138_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_138, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_139 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_139_buffer, // Channel buffer pointer
	s_pChannel_139_buffer, // Channel data start
	s_pChannel_139_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_139_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_139_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_139, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_140 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_140_buffer, // Channel buffer pointer
	s_pChannel_140_buffer, // Channel data start
	s_pChannel_140_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_140_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_140_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_140, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_141 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_141_buffer, // Channel buffer pointer
	s_pChannel_141_buffer, // Channel data start
	s_pChannel_141_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_141_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_141_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_141, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_142 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_142_buffer, // Channel buffer pointer
	s_pChannel_142_buffer, // Channel data start
	s_pChannel_142_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_142_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_142_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_142, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_143 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_143_buffer, // Channel buffer pointer
	s_pChannel_143_buffer, // Channel data start
	s_pChannel_143_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_143_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_143_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_143, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_144 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_144_buffer, // Channel buffer pointer
	s_pChannel_144_buffer, // Channel data start
	s_pChannel_144_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_144_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_144_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_144, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_145 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_145_buffer, // Channel buffer pointer
	s_pChannel_145_buffer, // Channel data start
	s_pChannel_145_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_145_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_145_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_145, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_146 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_146_buffer, // Channel buffer pointer
	s_pChannel_146_buffer, // Channel data start
	s_pChannel_146_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_146_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_146_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_146, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_147 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_147_buffer, // Channel buffer pointer
	s_pChannel_147_buffer, // Channel data start
	s_pChannel_147_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_147_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_147_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_147, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_148 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_148_buffer, // Channel buffer pointer
	s_pChannel_148_buffer, // Channel data start
	s_pChannel_148_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_148_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_148_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_148, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_149 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_149_buffer, // Channel buffer pointer
	s_pChannel_149_buffer, // Channel data start
	s_pChannel_149_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_149_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_149_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_149, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_150 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_150_buffer, // Channel buffer pointer
	s_pChannel_150_buffer, // Channel data start
	s_pChannel_150_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_150_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_150_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_150, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_151 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_151_buffer, // Channel buffer pointer
	s_pChannel_151_buffer, // Channel data start
	s_pChannel_151_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_151_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_151_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_151, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_152 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_152_buffer, // Channel buffer pointer
	s_pChannel_152_buffer, // Channel data start
	s_pChannel_152_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_152_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_152_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_152, // Available chunk list
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
		130, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_130_SIZE, // Channel size
		&(g_astPortInfo[0]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[1]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_130, // specific shared memory channel structure pointer
	},
	{
		131, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_131_SIZE, // Channel size
		&(g_astPortInfo[2]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[3]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_131, // specific shared memory channel structure pointer
	},
	{
		132, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_132_SIZE, // Channel size
		&(g_astPortInfo[4]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[5]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_132, // specific shared memory channel structure pointer
	},
	{
		133, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_133_SIZE, // Channel size
		&(g_astPortInfo[6]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[7]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_133, // specific shared memory channel structure pointer
	},
	{
		134, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_134_SIZE, // Channel size
		&(g_astPortInfo[8]), // Outer-most input port information (port name: EngineeringKit_1_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command)
		&(g_astPortInfo[9]), // Outer-most output port information (port name: command)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_134, // specific shared memory channel structure pointer
	},
	{
		135, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_135_SIZE, // Channel size
		&(g_astPortInfo[10]), // Outer-most input port information (port name: EngineeringKit_1_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command)
		&(g_astPortInfo[11]), // Outer-most output port information (port name: command)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_135, // specific shared memory channel structure pointer
	},
	{
		136, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_136_SIZE, // Channel size
		&(g_astPortInfo[12]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[14]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_136, // specific shared memory channel structure pointer
	},
	{
		137, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_137_SIZE, // Channel size
		&(g_astPortInfo[15]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[17]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_137, // specific shared memory channel structure pointer
	},
	{
		138, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_138_SIZE, // Channel size
		&(g_astPortInfo[18]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[20]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_138, // specific shared memory channel structure pointer
	},
	{
		139, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_139_SIZE, // Channel size
		&(g_astPortInfo[21]), // Outer-most input port information (port name: EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound)
		&(g_astPortInfo[22]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_139, // specific shared memory channel structure pointer
	},
	{
		140, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_140_SIZE, // Channel size
		&(g_astPortInfo[24]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[26]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_140, // specific shared memory channel structure pointer
	},
	{
		141, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_141_SIZE, // Channel size
		&(g_astPortInfo[27]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[29]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_141, // specific shared memory channel structure pointer
	},
	{
		142, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_142_SIZE, // Channel size
		&(g_astPortInfo[30]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[32]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_142, // specific shared memory channel structure pointer
	},
	{
		143, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_143_SIZE, // Channel size
		&(g_astPortInfo[33]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[35]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_143, // specific shared memory channel structure pointer
	},
	{
		144, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_144_SIZE, // Channel size
		&(g_astPortInfo[36]), // Outer-most input port information (port name: EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound)
		&(g_astPortInfo[37]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_144, // specific shared memory channel structure pointer
	},
	{
		145, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_145_SIZE, // Channel size
		&(g_astPortInfo[39]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[41]), // Outer-most output port information (port name: EngineeringKit_1_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_145, // specific shared memory channel structure pointer
	},
	{
		146, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_146_SIZE, // Channel size
		&(g_astPortInfo[42]), // Outer-most input port information (port name: EngineeringKit_1_listen_ControlRobot_groupA_FINISH)
		&(g_astPortInfo[43]), // Outer-most output port information (port name: ControlRobot_groupA_FINISH)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_146, // specific shared memory channel structure pointer
	},
	{
		147, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_147_SIZE, // Channel size
		&(g_astPortInfo[44]), // Outer-most input port information (port name: EngineeringKit_1_listen_ControlRobot_groupB_FINISH)
		&(g_astPortInfo[45]), // Outer-most output port information (port name: ControlRobot_groupB_FINISH)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_147, // specific shared memory channel structure pointer
	},
	{
		148, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_148_SIZE, // Channel size
		&(g_astPortInfo[46]), // Outer-most input port information (port name: ControlRobot_groupA_FINISH)
		&(g_astPortInfo[47]), // Outer-most output port information (port name: EngineeringKit_1_report_ControlRobot_groupA_FINISH)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_148, // specific shared memory channel structure pointer
	},
	{
		149, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_149_SIZE, // Channel size
		&(g_astPortInfo[48]), // Outer-most input port information (port name: ControlRobot_groupB_FINISH)
		&(g_astPortInfo[49]), // Outer-most output port information (port name: EngineeringKit_1_report_ControlRobot_groupB_FINISH)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_149, // specific shared memory channel structure pointer
	},
	{
		150, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_150_SIZE, // Channel size
		&(g_astPortInfo[50]), // Outer-most input port information (port name: group_state)
		&(g_astPortInfo[51]), // Outer-most output port information (port name: EngineeringKit_1_leader_group_state)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_150, // specific shared memory channel structure pointer
	},
	{
		151, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_151_SIZE, // Channel size
		&(g_astPortInfo[52]), // Outer-most input port information (port name: mode)
		&(g_astPortInfo[53]), // Outer-most output port information (port name: EngineeringKit_1_GA_DTA_mode)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_151, // specific shared memory channel structure pointer
	},
	{
		152, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_152_SIZE, // Channel size
		&(g_astPortInfo[54]), // Outer-most input port information (port name: EngineeringKit_1_GA_DTA_result)
		&(g_astPortInfo[55]), // Outer-most output port information (port name: result)
		0, // Initial data length
		10, // Processor ID
		&g_stSharedMemoryChannel_152, // specific shared memory channel structure pointer
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
};

FnChannelAPIFinalize g_aFnRemoteCommunicationModuleFinalizeList[] = {
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
int g_nAggregateConnectionInfoNum = 0;
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

int g_nSerialMasterInfoNum = 0;
			
int g_nSerialSlaveInfoNum = 0;

int g_nRemoteCommunicationModuleNum = ARRAYLEN(g_aFnRemoteCommunicationModuleIntializeList);



