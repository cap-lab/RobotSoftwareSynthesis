/* uem_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_data.h>
#include <UKTask.h>
#include <UKModeTransition.h>
#include <UKHostSystem.h>
#include <UKLoopModelController.h>
#include <UKModeTransitionModelController.h>


SExecutionTime g_stExecutionTime = { 1000000000, TIME_METRIC_MILLISEC } ;


#define MAX_TIMER_SLOT_SIZE (10)


// ##TIMER_CODE_TEMPLATE::START
STimer g_stTimer_Burger_6_control[MAX_TIMER_SLOT_SIZE] = {
	{
		0, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		1, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		2, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		3, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		4, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		5, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		6, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		7, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		8, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
	{
		9, // Slot ID 
		INVALID_TIME_VALUE, // Timer value
		FALSE, // Alarm checked
		0, // Alarm time
	},
};

// ##TIMER_CODE_TEMPLATE::END


// ##TASK_CODE_TEMPLATE::START
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0(int nTaskId);
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0(int nTaskId);
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0();

void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0(int nTaskId);
void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0(int nTaskId);
void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0();

void Burger_6_camera_Init0(int nTaskId);
void Burger_6_camera_Go0(int nTaskId);
void Burger_6_camera_Wrapup0();

void Burger_6_led_R_led_Init0(int nTaskId);
void Burger_6_led_R_led_Go0(int nTaskId);
void Burger_6_led_R_led_Wrapup0();

void Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Init0(int nTaskId);
void Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Go0(int nTaskId);
void Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Wrapup0();


#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_6_leader_Init0(int nTaskId);
void Burger_6_leader_Go0(int nTaskId);
void Burger_6_leader_Wrapup0();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_6_listen_Init0(int nTaskId);
void Burger_6_listen_Go0(int nTaskId);
void Burger_6_listen_Wrapup0();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_6_report_Init0(int nTaskId);
void Burger_6_report_Go0(int nTaskId);
void Burger_6_report_Wrapup0();
#ifdef __cplusplus
}
#endif 

void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0(int nTaskId);
void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0(int nTaskId);
void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0();

void Burger_6_color_R_color_Init0(int nTaskId);
void Burger_6_color_R_color_Go0(int nTaskId);
void Burger_6_color_R_color_Wrapup0();

void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0(int nTaskId);
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0(int nTaskId);
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0();


void Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0(int nTaskId);
void Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0(int nTaskId);
void Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0();

void Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0(int nTaskId);
void Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0(int nTaskId);
void Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0();

#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_6_control_Init0(int nTaskId);
void Burger_6_control_Go0(int nTaskId);
void Burger_6_control_Wrapup0();
#ifdef __cplusplus
}
#endif 


void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0(int nTaskId);
void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0(int nTaskId);
void Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0();

void Burger_6_distance_Init0(int nTaskId);
void Burger_6_distance_Go0(int nTaskId);
void Burger_6_distance_Wrapup0();

void Burger_6_wheel_R_getDirection_Init0(int nTaskId);
void Burger_6_wheel_R_getDirection_Go0(int nTaskId);
void Burger_6_wheel_R_getDirection_Wrapup0();

void Burger_6_GA_DTA_Init0(int nTaskId);
void Burger_6_GA_DTA_Go0(int nTaskId);
void Burger_6_GA_DTA_Wrapup0();




void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0(int nTaskId);
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0(int nTaskId);
void Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0();

// ##TASK_CODE_TEMPLATE::END

// ##LIBRARY_INIT_WRAPUP_TEMPLATE::START
#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_6_leader_init();
void l_Burger_6_leader_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_6_group_action_init();
void l_Burger_6_group_action_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_6_grouping_init();
void l_Burger_6_grouping_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init();
void l_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init();
void l_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup();
#ifdef __cplusplus
}
#endif 

// ##LIBRARY_INIT_WRAPUP_TEMPLATE::END

// ##TASK_LIST_DECLARATION_TEMPLATE::START
extern STask g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[];
extern STask g_astTasks_top[];
extern STask g_astTasks_Burger_6_wheel[];
extern STask g_astTasks_Burger_6[];
extern STask g_astTasks_Burger_6_color[];
extern STask g_astTasks_Burger_6_led[];
extern STask g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[];
// ##TASK_LIST_DECLARATION_TEMPLATE::END


// ##TASK_GRAPH_DECLARATION_TEMPLATE::START
extern STaskGraph g_stGraph_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3;
extern STaskGraph g_stGraph_top;
extern STaskGraph g_stGraph_Burger_6_wheel;
extern STaskGraph g_stGraph_Burger_6;
extern STaskGraph g_stGraph_Burger_6_color;
extern STaskGraph g_stGraph_Burger_6_led;
extern STaskGraph g_stGraph_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3;
// ##TASK_GRAPH_DECLARATION_TEMPLATE::END


// ##LIBRARY_INFO_TEMPLATE::START
SLibrary g_stLibraryInfo[] = {
	{
		"Burger_6_leader",
		l_Burger_6_leader_init,
		l_Burger_6_leader_wrapup,
	},
	{
		"Burger_6_group_action",
		l_Burger_6_group_action_init,
		l_Burger_6_group_action_wrapup,
	},
	{
		"Burger_6_grouping",
		l_Burger_6_grouping_init,
		l_Burger_6_grouping_wrapup,
	},
	{
		"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0",
		l_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init,
		l_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup,
	},
	{
		"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0",
		l_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init,
		l_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup,
	},
};

// ##LIBRARY_INFO_TEMPLATE::END


// ##SCHEDULED_COMPOSITE_TASK_FUNCTION_IMPLEMENTATION::START
// ##SCHEDULED_COMPOSITE_TASK_FUNCTION_IMPLEMENTATION::END






// ##LOOP_STRUCTURE_TEMPLATE::START
// ##LOOP_STRUCTURE_TEMPLATE::END

// ##MODE_TRANSITION_TEMPLATE::START
// ##MODE_TRANSITION_TEMPLATE::END


// ##TASK_PARAMETER_TEMPLATE::START
// ##TASK_PARAMETER_TEMPLATE::END

// ##TASK_FUNCTION_LIST::START
STaskFunctions g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions[] = {
	{
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0, // Task init function
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0, // Task go function
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions[] = {
	{
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0, // Task init function
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0, // Task go function
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_camera_functions[] = {
	{
		Burger_6_camera_Init0, // Task init function
		Burger_6_camera_Go0, // Task go function
		Burger_6_camera_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_led_R_led_functions[] = {
	{
		Burger_6_led_R_led_Init0, // Task init function
		Burger_6_led_R_led_Go0, // Task go function
		Burger_6_led_R_led_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_functions[] = {
	{
		Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Init0, // Task init function
		Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Go0, // Task go function
		Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_leader_functions[] = {
	{
		Burger_6_leader_Init0, // Task init function
		Burger_6_leader_Go0, // Task go function
		Burger_6_leader_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_listen_functions[] = {
	{
		Burger_6_listen_Init0, // Task init function
		Burger_6_listen_Go0, // Task go function
		Burger_6_listen_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_report_functions[] = {
	{
		Burger_6_report_Init0, // Task init function
		Burger_6_report_Go0, // Task go function
		Burger_6_report_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions[] = {
	{
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0, // Task init function
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0, // Task go function
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_color_R_color_functions[] = {
	{
		Burger_6_color_R_color_Init0, // Task init function
		Burger_6_color_R_color_Go0, // Task go function
		Burger_6_color_R_color_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions[] = {
	{
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0, // Task init function
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0, // Task go function
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions[] = {
	{
		Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0, // Task init function
		Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0, // Task go function
		Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions[] = {
	{
		Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0, // Task init function
		Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0, // Task go function
		Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_control_functions[] = {
	{
		Burger_6_control_Init0, // Task init function
		Burger_6_control_Go0, // Task go function
		Burger_6_control_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions[] = {
	{
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0, // Task init function
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0, // Task go function
		Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_distance_functions[] = {
	{
		Burger_6_distance_Init0, // Task init function
		Burger_6_distance_Go0, // Task go function
		Burger_6_distance_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_wheel_R_getDirection_functions[] = {
	{
		Burger_6_wheel_R_getDirection_Init0, // Task init function
		Burger_6_wheel_R_getDirection_Go0, // Task go function
		Burger_6_wheel_R_getDirection_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_GA_DTA_functions[] = {
	{
		Burger_6_GA_DTA_Init0, // Task init function
		Burger_6_GA_DTA_Go0, // Task go function
		Burger_6_GA_DTA_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions[] = {
	{
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0, // Task init function
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0, // Task go function
		Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0, // Task wrapup function
	},
};

// ##TASK_FUNCTION_LIST::END

// ##TASK_THREAD_CONTEXT_LIST::START
STaskThreadContext g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_camera_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_led_R_led_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_leader_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_listen_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_report_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_color_R_color_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_control_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_distance_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_wheel_R_getDirection_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_GA_DTA_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

// ##TASK_THREAD_CONTEXT_LIST::END

// ##TASK_ITERATION_TEMPLATE::START
STaskIteration g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_camera[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_led_R_led[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_leader[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_listen[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_report[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_color_R_color[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_control[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_distance[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_wheel_R_getDirection[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_GA_DTA[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_wheel[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_color[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_led[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

// ##TASK_ITERATION_TEMPLATE::END


// ##TASK_LIST_TEMPLATE::START
STask g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{ 	119, // Task ID
		"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions, // Task function array
		g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		200, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	120, // Task ID
		"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions, // Task function array
		g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	121, // Task ID
		"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions, // Task function array
		g_ast_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_top[] = {
	{ 	139, // Task ID
		"Burger_6", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_6, // Subgraph
		&g_stGraph_top, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_6_wheel[] = {
	{ 	123, // Task ID
		"Burger_6_wheel_R_getDirection", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_wheel_R_getDirection_functions, // Task function array
		g_ast_Burger_6_wheel_R_getDirection_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_wheel, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_wheel_R_getDirection, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_6[] = {
	{ 	112, // Task ID
		"Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_functions, // Task function array
		g_ast_Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		100, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	113, // Task ID
		"Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions, // Task function array
		g_ast_Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		100, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	114, // Task ID
		"Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions, // Task function array
		g_ast_Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		100, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	118, // Task ID
		"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	122, // Task ID
		"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	125, // Task ID
		"Burger_6_wheel", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_6_wheel, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_wheel, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	128, // Task ID
		"Burger_6_color", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_6_color, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_color, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	129, // Task ID
		"Burger_6_distance", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_distance_functions, // Task function array
		g_ast_Burger_6_distance_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		200, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_distance, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	130, // Task ID
		"Burger_6_camera", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_camera_functions, // Task function array
		g_ast_Burger_6_camera_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_camera, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	133, // Task ID
		"Burger_6_led", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_6_led, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_led, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	136, // Task ID
		"Burger_6_listen", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_listen_functions, // Task function array
		g_ast_Burger_6_listen_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		20, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_listen, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	137, // Task ID
		"Burger_6_report", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_report_functions, // Task function array
		g_ast_Burger_6_report_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_report, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	138, // Task ID
		"Burger_6_control", // Task name
		TASK_TYPE_CONTROL, // Task Type
		g_ast_Burger_6_control_functions, // Task function array
		g_ast_Burger_6_control_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		20, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_control, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		g_stTimer_Burger_6_control, // Timer slot (used by control task)
	},
	{ 	135, // Task ID
		"Burger_6_leader", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_leader_functions, // Task function array
		g_ast_Burger_6_leader_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		2, // Period
		TIME_METRIC_SEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_leader, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	134, // Task ID
		"Burger_6_GA_DTA", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_GA_DTA_functions, // Task function array
		g_ast_Burger_6_GA_DTA_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		500, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_GA_DTA, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_6_color[] = {
	{ 	127, // Task ID
		"Burger_6_color_R_color", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_color_R_color_functions, // Task function array
		g_ast_Burger_6_color_R_color_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_color, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_color_R_color, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_6_led[] = {
	{ 	131, // Task ID
		"Burger_6_led_R_led", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_led_R_led_functions, // Task function array
		g_ast_Burger_6_led_R_led_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_led, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_led_R_led, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{ 	115, // Task ID
		"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions, // Task function array
		g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		200, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	116, // Task ID
		"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions, // Task function array
		g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	117, // Task ID
		"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions, // Task function array
		g_ast_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};


// ##TASK_LIST_TEMPLATE::END


SModelControllerFunctionSet g_stDynamicModeTransitionFunctions = {
	UKModeTransitionMachineController_HandleModelGeneral,
	UKModeTransitionMachineController_Clear,
	UKModeTransitionMachineController_ChangeSubGraphTaskState,
	UKModeTransitionMachineController_HandleModelGeneralDuringStopping,
};

SModelControllerFunctionSet g_stStaticModeTransitionFunctions = {
	UKModeTransitionMachineController_HandleModelComposite,
	UKModeTransitionMachineController_Clear,
	UKModeTransitionMachineController_ChangeTaskThreadState,
	(FnHandleModel) NULL,
};

SModelControllerFunctionSet g_stDynamicConvergentLoopFunctions = {
	(FnHandleModel ) UKLoopModelController_HandleConvergentLoop,
	(FnControllerClear) NULL,
	(FnChangeTaskThreadState) NULL,
	(FnHandleModel) UKLoopModelController_HandleConvergentLoopDuringStopping,
};

SModelControllerFunctionSet g_stDynamicDataLoopFunctions = {
	(FnHandleModel ) NULL,
	(FnControllerClear) NULL,
	(FnChangeTaskThreadState) NULL,
	(FnHandleModel) NULL,
};

SModelControllerFunctionSet g_stStaticConvergentLoopFunctions = {
	(FnHandleModel ) NULL,
	(FnControllerClear) NULL,
	(FnChangeTaskThreadState) NULL,
	(FnHandleModel) NULL,
};

SModelControllerFunctionSet g_stStaticDataLoopFunctions = {
	(FnHandleModel ) NULL,
	(FnControllerClear) NULL,
	(FnChangeTaskThreadState) NULL,
	(FnHandleModel) NULL,
};


// ##TASK_GRAPH_TEMPLATE::START
STaskGraph g_stGraph_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // current task graph's task list
		3, // number of tasks
		&g_astTasks_Burger_6[4], // parent task
};

STaskGraph g_stGraph_top = {
		GRAPH_TYPE_PROCESS_NETWORK, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_top, // current task graph's task list
		1, // number of tasks
		(STask *) NULL, // parent task
};

STaskGraph g_stGraph_Burger_6_wheel = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_6_wheel, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_6[5], // parent task
};

SModelControllerCommon g_stController_Burger_6 = {
	(HThreadMutex) NULL,
	0, // throughput constraint
	0, // current iteration number
	(SModelControllerFunctionSet *) NULL,
};

STaskGraph g_stGraph_Burger_6 = {
		GRAPH_TYPE_PROCESS_NETWORK, // Task graph type
		CONTROLLER_TYPE_CONTROL_TASK_INCLUDED, // graph controller type
		&g_stController_Burger_6, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_6, // current task graph's task list
		15, // number of tasks
		&g_astTasks_top[0], // parent task
};

STaskGraph g_stGraph_Burger_6_color = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_6_color, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_6[6], // parent task
};

STaskGraph g_stGraph_Burger_6_led = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_6_led, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_6[9], // parent task
};

STaskGraph g_stGraph_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // current task graph's task list
		3, // number of tasks
		&g_astTasks_Burger_6[3], // parent task
};

// ##TASK_GRAPH_TEMPLATE::END

// ##TASK_ID_TO_TASK_MAP_TEMPLATE::START
STaskIdToTaskMap g_astTaskIdToTask[] = {
		{ 	116, // Task ID
			"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
			&g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task structure pointer
		},
		{ 	120, // Task ID
			"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
			&g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task structure pointer
		},
		{ 	130, // Task ID
			"Burger_6_camera", // Task name
			&g_astTasks_Burger_6[8], // Task structure pointer
		},
		{ 	131, // Task ID
			"Burger_6_led_R_led", // Task name
			&g_astTasks_Burger_6_led[0], // Task structure pointer
		},
		{ 	112, // Task ID
			"Burger_6_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl", // Task name
			&g_astTasks_Burger_6[0], // Task structure pointer
		},
		{ 	122, // Task ID
			"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
			&g_astTasks_Burger_6[4], // Task structure pointer
		},
		{ 	135, // Task ID
			"Burger_6_leader", // Task name
			&g_astTasks_Burger_6[13], // Task structure pointer
		},
		{ 	136, // Task ID
			"Burger_6_listen", // Task name
			&g_astTasks_Burger_6[10], // Task structure pointer
		},
		{ 	137, // Task ID
			"Burger_6_report", // Task name
			&g_astTasks_Burger_6[11], // Task structure pointer
		},
		{ 	121, // Task ID
			"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
			&g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task structure pointer
		},
		{ 	127, // Task ID
			"Burger_6_color_R_color", // Task name
			&g_astTasks_Burger_6_color[0], // Task structure pointer
		},
		{ 	115, // Task ID
			"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
			&g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task structure pointer
		},
		{ 	139, // Task ID
			"Burger_6", // Task name
			&g_astTasks_top[0], // Task structure pointer
		},
		{ 	113, // Task ID
			"Burger_6_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
			&g_astTasks_Burger_6[1], // Task structure pointer
		},
		{ 	114, // Task ID
			"Burger_6_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
			&g_astTasks_Burger_6[2], // Task structure pointer
		},
		{ 	138, // Task ID
			"Burger_6_control", // Task name
			&g_astTasks_Burger_6[12], // Task structure pointer
		},
		{ 	118, // Task ID
			"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
			&g_astTasks_Burger_6[3], // Task structure pointer
		},
		{ 	119, // Task ID
			"Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
			&g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task structure pointer
		},
		{ 	129, // Task ID
			"Burger_6_distance", // Task name
			&g_astTasks_Burger_6[7], // Task structure pointer
		},
		{ 	123, // Task ID
			"Burger_6_wheel_R_getDirection", // Task name
			&g_astTasks_Burger_6_wheel[0], // Task structure pointer
		},
		{ 	134, // Task ID
			"Burger_6_GA_DTA", // Task name
			&g_astTasks_Burger_6[14], // Task structure pointer
		},
		{ 	125, // Task ID
			"Burger_6_wheel", // Task name
			&g_astTasks_Burger_6[5], // Task structure pointer
		},
		{ 	128, // Task ID
			"Burger_6_color", // Task name
			&g_astTasks_Burger_6[6], // Task structure pointer
		},
		{ 	133, // Task ID
			"Burger_6_led", // Task name
			&g_astTasks_Burger_6[9], // Task structure pointer
		},
		{ 	117, // Task ID
			"Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
			&g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task structure pointer
		},
};
// ##TASK_ID_TO_TASK_MAP_TEMPLATE::END


// ##PROCESSOR_INFO_TEMPLATE::START
SProcessor g_astProcessorInfo[] = {

	{ 	11, // Processor ID
		TRUE, // Processor is CPU?			
		"EngineeringKit_2_RaspberryPi4_ek_i7", // Processor name
		4, // Processor pool size
	},
	{ 	7, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_5_OpenCR_ARM_cortex-m7", // Processor name
		1, // Processor pool size
	},
	{ 	9, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_6_OpenCR_ARM_cortex-m7", // Processor name
		1, // Processor pool size
	},
	{ 	1, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_1_OpenCR_ARM_cortex-m7", // Processor name
		1, // Processor pool size
	},
	{ 	5, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_3_OpenCR_ARM_cortex-m7", // Processor name
		1, // Processor pool size
	},
	{ 	0, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_1_RaspberryPi4_8_i7", // Processor name
		4, // Processor pool size
	},
	{ 	3, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_2_OpenCR_ARM_cortex-m7", // Processor name
		1, // Processor pool size
	},
	{ 	10, // Processor ID
		TRUE, // Processor is CPU?			
		"EngineeringKit_1_RaspberryPi4_ek_i7", // Processor name
		4, // Processor pool size
	},
	{ 	2, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_2_RaspberryPi4_8_i7", // Processor name
		4, // Processor pool size
	},
	{ 	4, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_3_RaspberryPi4_8_i7", // Processor name
		4, // Processor pool size
	},
	{ 	8, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_6_RaspberryPi4_8_i7", // Processor name
		4, // Processor pool size
	},
	{ 	6, // Processor ID
		TRUE, // Processor is CPU?			
		"Burger_5_RaspberryPi4_8_i7", // Processor name
		4, // Processor pool size
	},
};
// ##PROCESSOR_INFO_TEMPLATE::END


// ##SCHEDULED_COMPOSITE_TASKS_TEMPLATE::START
// ##SCHEDULED_COMPOSITE_TASKS_TEMPLATE::END



SScheduledTasks g_astScheduledTaskList[] = {
};

SGenericMapProcessor g_stCPUProcessor = {
	UKHostSystem_MapCPU,
	UKHostSystem_MapPriority,
};


// ##MAPPING_SCHEDULING_INFO_TEMPLATE::START

SMappedGeneralTaskInfo g_astGeneralTaskMappingInfo[] = {
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[8], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_led[0], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[0], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[1], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[2], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_CONTROL, // Task type
		&g_astTasks_Burger_6[12], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[7], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[13], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_wheel[0], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[14], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[10], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6[11], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_color[0], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_6_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task ID or composite task information
		8, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
};


SMappedCompositeTaskInfo g_astCompositeTaskMappingInfo[] = {
};


SMappedTaskInfo g_stMappingInfo = {
	g_astGeneralTaskMappingInfo, // general task array
	ARRAYLEN(g_astGeneralTaskMappingInfo), // size of general task array
	(SMappedCompositeTaskInfo *) NULL, // composite task array
	0, // size of composite task array
};

// ##MAPPING_SCHEDULING_INFO_TEMPLATE::END


int g_nNumOfTasks_top = ARRAYLEN(g_astTasks_top);
int g_nTaskIdToTaskNum = ARRAYLEN(g_astTaskIdToTask);
int g_nProcessorInfoNum = ARRAYLEN(g_astProcessorInfo);
int g_nLibraryInfoNum = ARRAYLEN(g_stLibraryInfo);
int g_nTimerSlotNum = MAX_TIMER_SLOT_SIZE;
int g_nDeviceId = 8;
int g_nScheduler = SCHEDULER_OTHER; // 0: SCHED_OTHER, 1: SCHED_FIFO, 2: SCHED_RR

