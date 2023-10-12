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
#define CHANNEL_153_SIZE (4)
#define CHANNEL_154_SIZE (4)
#define CHANNEL_155_SIZE (4)
#define CHANNEL_156_SIZE (4)
#define CHANNEL_157_SIZE (16)
#define CHANNEL_158_SIZE (16)
#define CHANNEL_159_SIZE (16)
#define CHANNEL_160_SIZE (16)
#define CHANNEL_161_SIZE (16)
#define CHANNEL_162_SIZE (16)
#define CHANNEL_163_SIZE (16)
#define CHANNEL_164_SIZE (16)
#define CHANNEL_165_SIZE (16)
#define CHANNEL_166_SIZE (16)
#define CHANNEL_167_SIZE (16)
#define CHANNEL_168_SIZE (16)
#define CHANNEL_169_SIZE (16)
#define CHANNEL_170_SIZE (16)
#define CHANNEL_171_SIZE (16)
#define CHANNEL_172_SIZE (16)
#define CHANNEL_173_SIZE (192)
#define CHANNEL_174_SIZE (16)
#define CHANNEL_175_SIZE (16)
// ##CHANNEL_SIZE_DEFINITION_TEMPLATE::END


// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::START
char s_pChannel_153_buffer[CHANNEL_153_SIZE];
char s_pChannel_154_buffer[CHANNEL_154_SIZE];
char s_pChannel_155_buffer[CHANNEL_155_SIZE];
char s_pChannel_156_buffer[CHANNEL_156_SIZE];
char s_pChannel_157_buffer[CHANNEL_157_SIZE];
char s_pChannel_158_buffer[CHANNEL_158_SIZE];
char s_pChannel_159_buffer[CHANNEL_159_SIZE];
char s_pChannel_160_buffer[CHANNEL_160_SIZE];
char s_pChannel_161_buffer[CHANNEL_161_SIZE];
char s_pChannel_162_buffer[CHANNEL_162_SIZE];
char s_pChannel_163_buffer[CHANNEL_163_SIZE];
char s_pChannel_164_buffer[CHANNEL_164_SIZE];
char s_pChannel_165_buffer[CHANNEL_165_SIZE];
char s_pChannel_166_buffer[CHANNEL_166_SIZE];
char s_pChannel_167_buffer[CHANNEL_167_SIZE];
char s_pChannel_168_buffer[CHANNEL_168_SIZE];
char s_pChannel_169_buffer[CHANNEL_169_SIZE];
char s_pChannel_170_buffer[CHANNEL_170_SIZE];
char s_pChannel_171_buffer[CHANNEL_171_SIZE];
char s_pChannel_172_buffer[CHANNEL_172_SIZE];
char s_pChannel_173_buffer[CHANNEL_173_SIZE];
char s_pChannel_174_buffer[CHANNEL_174_SIZE];
char s_pChannel_175_buffer[CHANNEL_175_SIZE];
// ##CHANNEL_BUFFER_DEFINITION_TEMPLATE::END


// ##CHUNK_DEFINITION_TEMPLATE::START
SChunk g_astChunk_channel_153_out[1];
SChunk g_astChunk_channel_153_in[1];

SChunk g_astChunk_channel_154_out[1];
SChunk g_astChunk_channel_154_in[1];

SChunk g_astChunk_channel_155_out[1];
SChunk g_astChunk_channel_155_in[1];

SChunk g_astChunk_channel_156_out[1];
SChunk g_astChunk_channel_156_in[1];

SChunk g_astChunk_channel_157_out[1];
SChunk g_astChunk_channel_157_in[1];

SChunk g_astChunk_channel_158_out[1];
SChunk g_astChunk_channel_158_in[1];

SChunk g_astChunk_channel_159_out[1];
SChunk g_astChunk_channel_159_in[1];

SChunk g_astChunk_channel_160_out[1];
SChunk g_astChunk_channel_160_in[1];

SChunk g_astChunk_channel_161_out[1];
SChunk g_astChunk_channel_161_in[1];

SChunk g_astChunk_channel_162_out[1];
SChunk g_astChunk_channel_162_in[1];

SChunk g_astChunk_channel_163_out[1];
SChunk g_astChunk_channel_163_in[1];

SChunk g_astChunk_channel_164_out[1];
SChunk g_astChunk_channel_164_in[1];

SChunk g_astChunk_channel_165_out[1];
SChunk g_astChunk_channel_165_in[1];

SChunk g_astChunk_channel_166_out[1];
SChunk g_astChunk_channel_166_in[1];

SChunk g_astChunk_channel_167_out[1];
SChunk g_astChunk_channel_167_in[1];

SChunk g_astChunk_channel_168_out[1];
SChunk g_astChunk_channel_168_in[1];

SChunk g_astChunk_channel_169_out[1];
SChunk g_astChunk_channel_169_in[1];

SChunk g_astChunk_channel_170_out[1];
SChunk g_astChunk_channel_170_in[1];

SChunk g_astChunk_channel_171_out[1];
SChunk g_astChunk_channel_171_in[1];

SChunk g_astChunk_channel_172_out[1];
SChunk g_astChunk_channel_172_in[1];

SChunk g_astChunk_channel_173_out[1];
SChunk g_astChunk_channel_173_in[1];

SChunk g_astChunk_channel_174_out[1];
SChunk g_astChunk_channel_174_in[1];

SChunk g_astChunk_channel_175_out[1];
SChunk g_astChunk_channel_175_in[1];

// ##CHUNK_DEFINITION_TEMPLATE::END


//portSampleRateList
// ##PORT_SAMPLE_RATE_TEMPLATE::START
SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_listen_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_listen_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_report_ControlRobot_groupA_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_report_ControlRobot_groupB_FINISH[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_leader_group_state[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_GA_DTA_mode[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_GA_DTA_result[] = {
	{	DEFAULT_STRING_NAME, // Mode name
		1, // Sample rate
		1, // Available number of data
	},
};

SPortSampleRate g_astPortSampleRate_EngineeringKit_2_GA_DTA_result[] = {
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
		165, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 1
		166, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 2
		167, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 3
		165, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 4
		169, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 5
		170, // Task ID
		"isFrontMember", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_detectFrontMember_isFrontMember, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 6
		171, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_leader_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 7
		169, // Task ID
		"isLeader", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isLeader, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 8
		182, // Task ID
		"EngineeringKit_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 9
		163, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 10
		182, // Task ID
		"EngineeringKit_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 11
		164, // Task ID
		"command", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 12
		168, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[13], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 13
		165, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 14
		182, // Task ID
		"EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 15
		168, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[16], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 16
		165, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 17
		182, // Task ID
		"EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 18
		168, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[19], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 19
		165, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 20
		182, // Task ID
		"EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 21
		182, // Task ID
		"EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 22
		168, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[23], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 23
		165, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 24
		168, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[25], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 25
		165, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 26
		182, // Task ID
		"EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 27
		172, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[28], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 28
		169, // Task ID
		"target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 29
		182, // Task ID
		"EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 30
		172, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[31], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 31
		169, // Task ID
		"target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 32
		182, // Task ID
		"EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 33
		172, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[34], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 34
		169, // Task ID
		"area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 35
		182, // Task ID
		"EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 36
		182, // Task ID
		"EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 37
		172, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[38], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 38
		169, // Task ID
		"isFound", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_isFound, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 39
		172, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		&g_astPortInfo[40], // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 40
		169, // Task ID
		"group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_R_controlAndReport_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 41
		182, // Task ID
		"EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_BUFFER, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 42
		182, // Task ID
		"EngineeringKit_2_listen_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 43
		180, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_listen_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 44
		182, // Task ID
		"EngineeringKit_2_listen_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 45
		180, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_listen_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 46
		181, // Task ID
		"ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 47
		182, // Task ID
		"EngineeringKit_2_report_ControlRobot_groupA_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_report_ControlRobot_groupA_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 48
		181, // Task ID
		"ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 49
		182, // Task ID
		"EngineeringKit_2_report_ControlRobot_groupB_FINISH", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_report_ControlRobot_groupB_FINISH, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 50
		179, // Task ID
		"group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 51
		182, // Task ID
		"EngineeringKit_2_leader_group_state", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_leader_group_state, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		8, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 52
		178, // Task ID
		"mode", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_GA_DTA_mode, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 53
		182, // Task ID
		"EngineeringKit_2_GA_DTA_mode", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_GA_DTA_mode, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 54
		182, // Task ID
		"EngineeringKit_2_GA_DTA_result", // Port name
		PORT_SAMPLE_RATE_FIXED, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_control_EngineeringKit_2_GA_DTA_result, // Array of sample rate list
		1, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
	{ // index number: 55
		178, // Task ID
		"result", // Port name
		PORT_SAMPLE_RATE_MULTIPLE, // Port sample rate type
		g_astPortSampleRate_EngineeringKit_2_GA_DTA_result, // Array of sample rate list
		2, // Array element number of sample rate list
		0, //Selected sample rate index
		4, // Sample size
		PORT_TYPE_QUEUE, // Port type
		(SPort *) NULL, // Pointer to Subgraph port
	}, // Port information		
};
// ##PORT_ARRAY_TEMPLATE::END


// ##AVAILABLE_CHUNK_LIST_TEMPLATE::START
SAvailableChunk g_astAvailableInputChunk_channel_153[1];

SAvailableChunk g_astAvailableInputChunk_channel_154[1];

SAvailableChunk g_astAvailableInputChunk_channel_155[1];

SAvailableChunk g_astAvailableInputChunk_channel_156[1];

SAvailableChunk g_astAvailableInputChunk_channel_157[1];

SAvailableChunk g_astAvailableInputChunk_channel_158[1];

SAvailableChunk g_astAvailableInputChunk_channel_159[1];

SAvailableChunk g_astAvailableInputChunk_channel_160[1];

SAvailableChunk g_astAvailableInputChunk_channel_161[1];

SAvailableChunk g_astAvailableInputChunk_channel_162[1];

SAvailableChunk g_astAvailableInputChunk_channel_163[1];

SAvailableChunk g_astAvailableInputChunk_channel_164[1];

SAvailableChunk g_astAvailableInputChunk_channel_165[1];

SAvailableChunk g_astAvailableInputChunk_channel_166[1];

SAvailableChunk g_astAvailableInputChunk_channel_167[1];

SAvailableChunk g_astAvailableInputChunk_channel_168[1];

SAvailableChunk g_astAvailableInputChunk_channel_169[1];

SAvailableChunk g_astAvailableInputChunk_channel_170[1];

SAvailableChunk g_astAvailableInputChunk_channel_171[1];

SAvailableChunk g_astAvailableInputChunk_channel_172[1];

SAvailableChunk g_astAvailableInputChunk_channel_173[1];

SAvailableChunk g_astAvailableInputChunk_channel_174[1];

SAvailableChunk g_astAvailableInputChunk_channel_175[1];

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

SSharedMemoryChannel g_stSharedMemoryChannel_153 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_153_buffer, // Channel buffer pointer
	s_pChannel_153_buffer, // Channel data start
	s_pChannel_153_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_153_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_153_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_153, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_154 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_154_buffer, // Channel buffer pointer
	s_pChannel_154_buffer, // Channel data start
	s_pChannel_154_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_154_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_154_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_154, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_155 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_155_buffer, // Channel buffer pointer
	s_pChannel_155_buffer, // Channel data start
	s_pChannel_155_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_155_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_155_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_155, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_156 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_156_buffer, // Channel buffer pointer
	s_pChannel_156_buffer, // Channel data start
	s_pChannel_156_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_156_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_156_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_156, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_157 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_157_buffer, // Channel buffer pointer
	s_pChannel_157_buffer, // Channel data start
	s_pChannel_157_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_157_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_157_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_157, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_158 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_158_buffer, // Channel buffer pointer
	s_pChannel_158_buffer, // Channel data start
	s_pChannel_158_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_158_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_158_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_158, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_159 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_159_buffer, // Channel buffer pointer
	s_pChannel_159_buffer, // Channel data start
	s_pChannel_159_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_159_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_159_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_159, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_160 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_160_buffer, // Channel buffer pointer
	s_pChannel_160_buffer, // Channel data start
	s_pChannel_160_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_160_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_160_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_160, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_161 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_161_buffer, // Channel buffer pointer
	s_pChannel_161_buffer, // Channel data start
	s_pChannel_161_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_161_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_161_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_161, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_162 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_162_buffer, // Channel buffer pointer
	s_pChannel_162_buffer, // Channel data start
	s_pChannel_162_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_162_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_162_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_162, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_163 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_163_buffer, // Channel buffer pointer
	s_pChannel_163_buffer, // Channel data start
	s_pChannel_163_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_163_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_163_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_163, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_164 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_164_buffer, // Channel buffer pointer
	s_pChannel_164_buffer, // Channel data start
	s_pChannel_164_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_164_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_164_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_164, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_165 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_165_buffer, // Channel buffer pointer
	s_pChannel_165_buffer, // Channel data start
	s_pChannel_165_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_165_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_165_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_165, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_166 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_166_buffer, // Channel buffer pointer
	s_pChannel_166_buffer, // Channel data start
	s_pChannel_166_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_166_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_166_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_166, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_167 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_167_buffer, // Channel buffer pointer
	s_pChannel_167_buffer, // Channel data start
	s_pChannel_167_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_167_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_167_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_167, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_168 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_168_buffer, // Channel buffer pointer
	s_pChannel_168_buffer, // Channel data start
	s_pChannel_168_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_168_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_168_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_168, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_169 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_169_buffer, // Channel buffer pointer
	s_pChannel_169_buffer, // Channel data start
	s_pChannel_169_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_169_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_169_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_169, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_170 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_170_buffer, // Channel buffer pointer
	s_pChannel_170_buffer, // Channel data start
	s_pChannel_170_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_170_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_170_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_170, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_171 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_171_buffer, // Channel buffer pointer
	s_pChannel_171_buffer, // Channel data start
	s_pChannel_171_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_171_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_171_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_171, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_172 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_172_buffer, // Channel buffer pointer
	s_pChannel_172_buffer, // Channel data start
	s_pChannel_172_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_172_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_172_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_172, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_173 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_173_buffer, // Channel buffer pointer
	s_pChannel_173_buffer, // Channel data start
	s_pChannel_173_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_173_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_173_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_173, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_174 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_174_buffer, // Channel buffer pointer
	s_pChannel_174_buffer, // Channel data start
	s_pChannel_174_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_174_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_174_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_174, // Available chunk list
	1, // maximum chunk size for all port sample rate cases (output port)
	1, // maximum input port chunk size for all port sample rate cases (input port)
	(SAvailableChunk *) NULL, // Chunk list head
	(SAvailableChunk *) NULL, // Chunk list tail
	&g_stHostMemory, // Host memory access API
	TRUE, // memory is statically allocated
	TRUE, // initial data is updated
};


SSharedMemoryChannel g_stSharedMemoryChannel_175 = {
	ACCESS_TYPE_CPU_ONLY,
	s_pChannel_175_buffer, // Channel buffer pointer
	s_pChannel_175_buffer, // Channel data start
	s_pChannel_175_buffer, // Channel data end
	0, // Channel data length
	0, // Read reference count
	0, // Write reference count
	FALSE, // Read exit setting
	FALSE, // Write exit setting
	(HThreadMutex) NULL, // Mutex
	(HThreadEvent) NULL, // Read available notice event
	(HThreadEvent) NULL, // Write available notice event
	{
		g_astChunk_channel_175_in, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Input chunk information
	{
		g_astChunk_channel_175_out, // Array of chunk
		1, // Chunk number
		1, // Chunk size
	}, // Output chunk information
	CHUNK_NUM_NOT_INITIALIZED, // Written output chunk number
	g_astAvailableInputChunk_channel_175, // Available chunk list
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
		153, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_153_SIZE, // Channel size
		&(g_astPortInfo[0]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[1]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_153, // specific shared memory channel structure pointer
	},
	{
		154, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_154_SIZE, // Channel size
		&(g_astPortInfo[2]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[3]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_154, // specific shared memory channel structure pointer
	},
	{
		155, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_155_SIZE, // Channel size
		&(g_astPortInfo[4]), // Outer-most input port information (port name: isFrontMember)
		&(g_astPortInfo[5]), // Outer-most output port information (port name: isFrontMember)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_155, // specific shared memory channel structure pointer
	},
	{
		156, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_156_SIZE, // Channel size
		&(g_astPortInfo[6]), // Outer-most input port information (port name: isLeader)
		&(g_astPortInfo[7]), // Outer-most output port information (port name: isLeader)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_156, // specific shared memory channel structure pointer
	},
	{
		157, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_157_SIZE, // Channel size
		&(g_astPortInfo[8]), // Outer-most input port information (port name: EngineeringKit_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command)
		&(g_astPortInfo[9]), // Outer-most output port information (port name: command)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_157, // specific shared memory channel structure pointer
	},
	{
		158, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_158_SIZE, // Channel size
		&(g_astPortInfo[10]), // Outer-most input port information (port name: EngineeringKit_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_EngineeringKit_getModeTransferCommand_command)
		&(g_astPortInfo[11]), // Outer-most output port information (port name: command)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_158, // specific shared memory channel structure pointer
	},
	{
		159, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_159_SIZE, // Channel size
		&(g_astPortInfo[12]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[14]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_159, // specific shared memory channel structure pointer
	},
	{
		160, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_160_SIZE, // Channel size
		&(g_astPortInfo[15]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[17]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_160, // specific shared memory channel structure pointer
	},
	{
		161, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_161_SIZE, // Channel size
		&(g_astPortInfo[18]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[20]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_161, // specific shared memory channel structure pointer
	},
	{
		162, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_162_SIZE, // Channel size
		&(g_astPortInfo[21]), // Outer-most input port information (port name: EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound)
		&(g_astPortInfo[22]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_162, // specific shared memory channel structure pointer
	},
	{
		163, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_163_SIZE, // Channel size
		&(g_astPortInfo[24]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[26]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_163, // specific shared memory channel structure pointer
	},
	{
		164, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_164_SIZE, // Channel size
		&(g_astPortInfo[27]), // Outer-most input port information (port name: target2)
		&(g_astPortInfo[29]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target2)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_164, // specific shared memory channel structure pointer
	},
	{
		165, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_165_SIZE, // Channel size
		&(g_astPortInfo[30]), // Outer-most input port information (port name: target1)
		&(g_astPortInfo[32]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_target1)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_165, // specific shared memory channel structure pointer
	},
	{
		166, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_166_SIZE, // Channel size
		&(g_astPortInfo[33]), // Outer-most input port information (port name: area)
		&(g_astPortInfo[35]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_area)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_166, // specific shared memory channel structure pointer
	},
	{
		167, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_167_SIZE, // Channel size
		&(g_astPortInfo[36]), // Outer-most input port information (port name: EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_isFound)
		&(g_astPortInfo[37]), // Outer-most output port information (port name: isFound)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_167, // specific shared memory channel structure pointer
	},
	{
		168, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_168_SIZE, // Channel size
		&(g_astPortInfo[39]), // Outer-most input port information (port name: group)
		&(g_astPortInfo[41]), // Outer-most output port information (port name: EngineeringKit_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_EngineeringKit_searchV3_group)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_168, // specific shared memory channel structure pointer
	},
	{
		169, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_169_SIZE, // Channel size
		&(g_astPortInfo[42]), // Outer-most input port information (port name: EngineeringKit_2_listen_ControlRobot_groupA_FINISH)
		&(g_astPortInfo[43]), // Outer-most output port information (port name: ControlRobot_groupA_FINISH)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_169, // specific shared memory channel structure pointer
	},
	{
		170, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_170_SIZE, // Channel size
		&(g_astPortInfo[44]), // Outer-most input port information (port name: EngineeringKit_2_listen_ControlRobot_groupB_FINISH)
		&(g_astPortInfo[45]), // Outer-most output port information (port name: ControlRobot_groupB_FINISH)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_170, // specific shared memory channel structure pointer
	},
	{
		171, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_171_SIZE, // Channel size
		&(g_astPortInfo[46]), // Outer-most input port information (port name: ControlRobot_groupA_FINISH)
		&(g_astPortInfo[47]), // Outer-most output port information (port name: EngineeringKit_2_report_ControlRobot_groupA_FINISH)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_171, // specific shared memory channel structure pointer
	},
	{
		172, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_172_SIZE, // Channel size
		&(g_astPortInfo[48]), // Outer-most input port information (port name: ControlRobot_groupB_FINISH)
		&(g_astPortInfo[49]), // Outer-most output port information (port name: EngineeringKit_2_report_ControlRobot_groupB_FINISH)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_172, // specific shared memory channel structure pointer
	},
	{
		173, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_173_SIZE, // Channel size
		&(g_astPortInfo[50]), // Outer-most input port information (port name: group_state)
		&(g_astPortInfo[51]), // Outer-most output port information (port name: EngineeringKit_2_leader_group_state)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_173, // specific shared memory channel structure pointer
	},
	{
		174, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_174_SIZE, // Channel size
		&(g_astPortInfo[52]), // Outer-most input port information (port name: mode)
		&(g_astPortInfo[53]), // Outer-most output port information (port name: EngineeringKit_2_GA_DTA_mode)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_174, // specific shared memory channel structure pointer
	},
	{
		175, // Channel ID
		-1, // Next channel index (which is used for single port is connecting to multiple channels)
		COMMUNICATION_TYPE_SHARED_MEMORY, // Channel communication type
		CHANNEL_TYPE_GENERAL, // Channel type
		CHANNEL_175_SIZE, // Channel size
		&(g_astPortInfo[54]), // Outer-most input port information (port name: EngineeringKit_2_GA_DTA_result)
		&(g_astPortInfo[55]), // Outer-most output port information (port name: result)
		0, // Initial data length
		11, // Processor ID
		&g_stSharedMemoryChannel_175, // specific shared memory channel structure pointer
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



