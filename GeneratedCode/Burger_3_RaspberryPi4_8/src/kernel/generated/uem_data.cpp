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
STimer g_stTimer_Burger_3_control[MAX_TIMER_SLOT_SIZE] = {
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
void Burger_3_camera_Init0(int nTaskId);
void Burger_3_camera_Go0(int nTaskId);
void Burger_3_camera_Wrapup0();

void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0(int nTaskId);
void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0(int nTaskId);
void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0();

void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0(int nTaskId);
void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0(int nTaskId);
void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0();

#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_3_report_Init0(int nTaskId);
void Burger_3_report_Go0(int nTaskId);
void Burger_3_report_Wrapup0();
#ifdef __cplusplus
}
#endif 

void Burger_3_GA_DTA_Init0(int nTaskId);
void Burger_3_GA_DTA_Go0(int nTaskId);
void Burger_3_GA_DTA_Wrapup0();

void Burger_3_color_R_color_Init0(int nTaskId);
void Burger_3_color_R_color_Go0(int nTaskId);
void Burger_3_color_R_color_Wrapup0();

void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0(int nTaskId);
void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0(int nTaskId);
void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0();



#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_3_control_Init0(int nTaskId);
void Burger_3_control_Go0(int nTaskId);
void Burger_3_control_Wrapup0();
#ifdef __cplusplus
}
#endif 

void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0(int nTaskId);
void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0(int nTaskId);
void Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0();

void Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Init0(int nTaskId);
void Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Go0(int nTaskId);
void Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Wrapup0();

#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_3_leader_Init0(int nTaskId);
void Burger_3_leader_Go0(int nTaskId);
void Burger_3_leader_Wrapup0();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void Burger_3_listen_Init0(int nTaskId);
void Burger_3_listen_Go0(int nTaskId);
void Burger_3_listen_Wrapup0();
#ifdef __cplusplus
}
#endif 

void Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0(int nTaskId);
void Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0(int nTaskId);
void Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0();

void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0(int nTaskId);
void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0(int nTaskId);
void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0();

void Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0(int nTaskId);
void Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0(int nTaskId);
void Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0();

void Burger_3_wheel_R_getDirection_Init0(int nTaskId);
void Burger_3_wheel_R_getDirection_Go0(int nTaskId);
void Burger_3_wheel_R_getDirection_Wrapup0();

void Burger_3_distance_Init0(int nTaskId);
void Burger_3_distance_Go0(int nTaskId);
void Burger_3_distance_Wrapup0();


void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0(int nTaskId);
void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0(int nTaskId);
void Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0();

void Burger_3_led_R_led_Init0(int nTaskId);
void Burger_3_led_R_led_Go0(int nTaskId);
void Burger_3_led_R_led_Wrapup0();




// ##TASK_CODE_TEMPLATE::END

// ##LIBRARY_INIT_WRAPUP_TEMPLATE::START
#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init();
void l_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_3_group_action_init();
void l_Burger_3_group_action_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init();
void l_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_3_leader_init();
void l_Burger_3_leader_wrapup();
#ifdef __cplusplus
}
#endif 

#ifdef __cplusplus
extern "C"
{
#endif 
void l_Burger_3_grouping_init();
void l_Burger_3_grouping_wrapup();
#ifdef __cplusplus
}
#endif 

// ##LIBRARY_INIT_WRAPUP_TEMPLATE::END

// ##TASK_LIST_DECLARATION_TEMPLATE::START
extern STask g_astTasks_Burger_3_led[];
extern STask g_astTasks_Burger_3[];
extern STask g_astTasks_top[];
extern STask g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[];
extern STask g_astTasks_Burger_3_color[];
extern STask g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[];
extern STask g_astTasks_Burger_3_wheel[];
// ##TASK_LIST_DECLARATION_TEMPLATE::END


// ##TASK_GRAPH_DECLARATION_TEMPLATE::START
extern STaskGraph g_stGraph_Burger_3_led;
extern STaskGraph g_stGraph_Burger_3;
extern STaskGraph g_stGraph_top;
extern STaskGraph g_stGraph_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3;
extern STaskGraph g_stGraph_Burger_3_color;
extern STaskGraph g_stGraph_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3;
extern STaskGraph g_stGraph_Burger_3_wheel;
// ##TASK_GRAPH_DECLARATION_TEMPLATE::END


// ##LIBRARY_INFO_TEMPLATE::START
SLibrary g_stLibraryInfo[] = {
	{
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0",
		l_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init,
		l_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup,
	},
	{
		"Burger_3_group_action",
		l_Burger_3_group_action_init,
		l_Burger_3_group_action_wrapup,
	},
	{
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0",
		l_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_init,
		l_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_wrapup,
	},
	{
		"Burger_3_leader",
		l_Burger_3_leader_init,
		l_Burger_3_leader_wrapup,
	},
	{
		"Burger_3_grouping",
		l_Burger_3_grouping_init,
		l_Burger_3_grouping_wrapup,
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
STaskFunctions g_ast_Burger_3_camera_functions[] = {
	{
		Burger_3_camera_Init0, // Task init function
		Burger_3_camera_Go0, // Task go function
		Burger_3_camera_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions[] = {
	{
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0, // Task init function
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0, // Task go function
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions[] = {
	{
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Init0, // Task init function
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Go0, // Task go function
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_report_functions[] = {
	{
		Burger_3_report_Init0, // Task init function
		Burger_3_report_Go0, // Task go function
		Burger_3_report_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_GA_DTA_functions[] = {
	{
		Burger_3_GA_DTA_Init0, // Task init function
		Burger_3_GA_DTA_Go0, // Task go function
		Burger_3_GA_DTA_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_color_R_color_functions[] = {
	{
		Burger_3_color_R_color_Init0, // Task init function
		Burger_3_color_R_color_Go0, // Task go function
		Burger_3_color_R_color_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions[] = {
	{
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0, // Task init function
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0, // Task go function
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_control_functions[] = {
	{
		Burger_3_control_Init0, // Task init function
		Burger_3_control_Go0, // Task go function
		Burger_3_control_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions[] = {
	{
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0, // Task init function
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0, // Task go function
		Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_functions[] = {
	{
		Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Init0, // Task init function
		Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Go0, // Task go function
		Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_leader_functions[] = {
	{
		Burger_3_leader_Init0, // Task init function
		Burger_3_leader_Go0, // Task go function
		Burger_3_leader_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_listen_functions[] = {
	{
		Burger_3_listen_Init0, // Task init function
		Burger_3_listen_Go0, // Task go function
		Burger_3_listen_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions[] = {
	{
		Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0, // Task init function
		Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0, // Task go function
		Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions[] = {
	{
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Init0, // Task init function
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Go0, // Task go function
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions[] = {
	{
		Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Init0, // Task init function
		Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Go0, // Task go function
		Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_wheel_R_getDirection_functions[] = {
	{
		Burger_3_wheel_R_getDirection_Init0, // Task init function
		Burger_3_wheel_R_getDirection_Go0, // Task go function
		Burger_3_wheel_R_getDirection_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_distance_functions[] = {
	{
		Burger_3_distance_Init0, // Task init function
		Burger_3_distance_Go0, // Task go function
		Burger_3_distance_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions[] = {
	{
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Init0, // Task init function
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Go0, // Task go function
		Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_Wrapup0, // Task wrapup function
	},
};

STaskFunctions g_ast_Burger_3_led_R_led_functions[] = {
	{
		Burger_3_led_R_led_Init0, // Task init function
		Burger_3_led_R_led_Go0, // Task go function
		Burger_3_led_R_led_Wrapup0, // Task wrapup function
	},
};

// ##TASK_FUNCTION_LIST::END

// ##TASK_THREAD_CONTEXT_LIST::START
STaskThreadContext g_ast_Burger_3_camera_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_report_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_GA_DTA_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_color_R_color_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_control_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_leader_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_listen_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_wheel_R_getDirection_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_distance_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

STaskThreadContext g_ast_Burger_3_led_R_led_thread_context[] = {
	{
		0, // current run index used for getting loop task iteration
		0, // current run count of thread
		0, // target run count of thread
	},
};

// ##TASK_THREAD_CONTEXT_LIST::END

// ##TASK_ITERATION_TEMPLATE::START
STaskIteration g_astTaskIteration_Burger_3_camera[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_report[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_GA_DTA[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_color_R_color[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_wheel[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_led[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_control[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_leader[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_listen[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_wheel_R_getDirection[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_distance[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_led_R_led[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_color[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

STaskIteration g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{
		0, // Mode ID
		1, // iteration count
	},
};

// ##TASK_ITERATION_TEMPLATE::END


// ##TASK_LIST_TEMPLATE::START
STask g_astTasks_Burger_3_led[] = {
	{ 	75, // Task ID
		"Burger_3_led_R_led", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_led_R_led_functions, // Task function array
		g_ast_Burger_3_led_R_led_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_led, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_led_R_led, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_3[] = {
	{ 	56, // Task ID
		"Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_functions, // Task function array
		g_ast_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		100, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	57, // Task ID
		"Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions, // Task function array
		g_ast_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		100, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	58, // Task ID
		"Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_functions, // Task function array
		g_ast_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		100, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	62, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	66, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	69, // Task ID
		"Burger_3_color", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_3_color, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_color, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	72, // Task ID
		"Burger_3_wheel", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_3_wheel, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_wheel, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	73, // Task ID
		"Burger_3_distance", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_distance_functions, // Task function array
		g_ast_Burger_3_distance_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		200, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_distance, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	74, // Task ID
		"Burger_3_camera", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_camera_functions, // Task function array
		g_ast_Burger_3_camera_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_camera, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	77, // Task ID
		"Burger_3_led", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_3_led, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_led, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	80, // Task ID
		"Burger_3_listen", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_listen_functions, // Task function array
		g_ast_Burger_3_listen_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		20, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_listen, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	81, // Task ID
		"Burger_3_report", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_report_functions, // Task function array
		g_ast_Burger_3_report_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_report, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	82, // Task ID
		"Burger_3_control", // Task name
		TASK_TYPE_CONTROL, // Task Type
		g_ast_Burger_3_control_functions, // Task function array
		g_ast_Burger_3_control_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		20, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_control, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		g_stTimer_Burger_3_control, // Timer slot (used by control task)
	},
	{ 	79, // Task ID
		"Burger_3_leader", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_leader_functions, // Task function array
		g_ast_Burger_3_leader_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		2, // Period
		TIME_METRIC_SEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_leader, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	78, // Task ID
		"Burger_3_GA_DTA", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_GA_DTA_functions, // Task function array
		g_ast_Burger_3_GA_DTA_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		500, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_GA_DTA, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_top[] = {
	{ 	83, // Task ID
		"Burger_3", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		(STaskFunctions *) NULL, // Task function array
		(STaskThreadContext *) NULL, // Task thread context
		0, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_3, // Subgraph
		&g_stGraph_top, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{ 	59, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions, // Task function array
		g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		200, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	60, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions, // Task function array
		g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	61, // Task ID
		"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions, // Task function array
		g_ast_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_3_color[] = {
	{ 	68, // Task ID
		"Burger_3_color_R_color", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_color_R_color_functions, // Task function array
		g_ast_Burger_3_color_R_color_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_color, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_color_R_color, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[] = {
	{ 	63, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_functions, // Task function array
		g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		200, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	64, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_functions, // Task function array
		g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	65, // Task ID
		"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_functions, // Task function array
		g_ast_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader, // Task iteration count (only used when the parent task graph is data flow)
		1, // Array size of task iteration count
		0, // current run count in iteration
		0, // current iteration
		0, // target iteration (this variable is used for calling delayed stop task)
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_3_wheel[] = {
	{ 	70, // Task ID
		"Burger_3_wheel_R_getDirection", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		g_ast_Burger_3_wheel_R_getDirection_functions, // Task function array
		g_ast_Burger_3_wheel_R_getDirection_thread_context, // Task thread context
		1, // Task function array number
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_3_wheel, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		0,	  // Throughput constraint
		(HThreadMutex) NULL, // Mutex
		(HThreadEvent) NULL, // Conditional variable
		g_astTaskIteration_Burger_3_wheel_R_getDirection, // Task iteration count (only used when the parent task graph is data flow)
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
STaskGraph g_stGraph_Burger_3_led = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_3_led, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_3[9], // parent task
};

SModelControllerCommon g_stController_Burger_3 = {
	(HThreadMutex) NULL,
	0, // throughput constraint
	0, // current iteration number
	(SModelControllerFunctionSet *) NULL,
};

STaskGraph g_stGraph_Burger_3 = {
		GRAPH_TYPE_PROCESS_NETWORK, // Task graph type
		CONTROLLER_TYPE_CONTROL_TASK_INCLUDED, // graph controller type
		&g_stController_Burger_3, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_3, // current task graph's task list
		15, // number of tasks
		&g_astTasks_top[0], // parent task
};

STaskGraph g_stGraph_top = {
		GRAPH_TYPE_PROCESS_NETWORK, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_top, // current task graph's task list
		1, // number of tasks
		(STask *) NULL, // parent task
};

STaskGraph g_stGraph_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // current task graph's task list
		3, // number of tasks
		&g_astTasks_Burger_3[3], // parent task
};

STaskGraph g_stGraph_Burger_3_color = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_3_color, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_3[5], // parent task
};

STaskGraph g_stGraph_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // current task graph's task list
		3, // number of tasks
		&g_astTasks_Burger_3[4], // parent task
};

STaskGraph g_stGraph_Burger_3_wheel = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		CONTROLLER_TYPE_VOID, // graph controller type
		(void *) NULL, // task graph controller (SLoopController, SModeTransitionController, or SModelControllerCommon)
		g_astTasks_Burger_3_wheel, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_3[6], // parent task
};

// ##TASK_GRAPH_TEMPLATE::END

// ##TASK_ID_TO_TASK_MAP_TEMPLATE::START
STaskIdToTaskMap g_astTaskIdToTask[] = {
		{ 	74, // Task ID
			"Burger_3_camera", // Task name
			&g_astTasks_Burger_3[8], // Task structure pointer
		},
		{ 	64, // Task ID
			"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
			&g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task structure pointer
		},
		{ 	60, // Task ID
			"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember", // Task name
			&g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task structure pointer
		},
		{ 	81, // Task ID
			"Burger_3_report", // Task name
			&g_astTasks_Burger_3[11], // Task structure pointer
		},
		{ 	78, // Task ID
			"Burger_3_GA_DTA", // Task name
			&g_astTasks_Burger_3[14], // Task structure pointer
		},
		{ 	68, // Task ID
			"Burger_3_color_R_color", // Task name
			&g_astTasks_Burger_3_color[0], // Task structure pointer
		},
		{ 	61, // Task ID
			"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
			&g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task structure pointer
		},
		{ 	72, // Task ID
			"Burger_3_wheel", // Task name
			&g_astTasks_Burger_3[6], // Task structure pointer
		},
		{ 	77, // Task ID
			"Burger_3_led", // Task name
			&g_astTasks_Burger_3[9], // Task structure pointer
		},
		{ 	82, // Task ID
			"Burger_3_control", // Task name
			&g_astTasks_Burger_3[12], // Task structure pointer
		},
		{ 	59, // Task ID
			"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
			&g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task structure pointer
		},
		{ 	56, // Task ID
			"Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl", // Task name
			&g_astTasks_Burger_3[0], // Task structure pointer
		},
		{ 	79, // Task ID
			"Burger_3_leader", // Task name
			&g_astTasks_Burger_3[13], // Task structure pointer
		},
		{ 	80, // Task ID
			"Burger_3_listen", // Task name
			&g_astTasks_Burger_3[10], // Task structure pointer
		},
		{ 	57, // Task ID
			"Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
			&g_astTasks_Burger_3[1], // Task structure pointer
		},
		{ 	65, // Task ID
			"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader", // Task name
			&g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task structure pointer
		},
		{ 	58, // Task ID
			"Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // Task name
			&g_astTasks_Burger_3[2], // Task structure pointer
		},
		{ 	70, // Task ID
			"Burger_3_wheel_R_getDirection", // Task name
			&g_astTasks_Burger_3_wheel[0], // Task structure pointer
		},
		{ 	73, // Task ID
			"Burger_3_distance", // Task name
			&g_astTasks_Burger_3[7], // Task structure pointer
		},
		{ 	83, // Task ID
			"Burger_3", // Task name
			&g_astTasks_top[0], // Task structure pointer
		},
		{ 	63, // Task ID
			"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport", // Task name
			&g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task structure pointer
		},
		{ 	75, // Task ID
			"Burger_3_led_R_led", // Task name
			&g_astTasks_Burger_3_led[0], // Task structure pointer
		},
		{ 	62, // Task ID
			"Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
			&g_astTasks_Burger_3[3], // Task structure pointer
		},
		{ 	69, // Task ID
			"Burger_3_color", // Task name
			&g_astTasks_Burger_3[5], // Task structure pointer
		},
		{ 	66, // Task ID
			"Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // Task name
			&g_astTasks_Burger_3[4], // Task structure pointer
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
		&g_astTasks_Burger_3[7], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[8], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[11], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[14], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_color[0], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_CONTROL, // Task type
		&g_astTasks_Burger_3[12], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[0], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[0], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[13], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_led[0], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[10], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[1], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[2], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3[2], // Task ID or composite task information
		4, // Processor ID
		-1, // Processor local ID
		1, // Priority
		&g_stCPUProcessor, // CPU Processor API
		DEFAULT_STRING_NAME, // Mapping set
	},
	{	TASK_TYPE_COMPUTATIONAL, // Task type
		&g_astTasks_Burger_3_wheel[0], // Task ID or composite task information
		4, // Processor ID
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
int g_nDeviceId = 4;
int g_nScheduler = SCHEDULER_OTHER; // 0: SCHED_OTHER, 1: SCHED_FIFO, 2: SCHED_RR

