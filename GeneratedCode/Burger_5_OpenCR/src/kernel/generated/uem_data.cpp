/* uem_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_data.h>

#include <UKTaskControl.h>

#define MAX_TIMER_SLOT_SIZE (3)

// ##TIMER_CODE_TEMPLATE::START
// ##TIMER_CODE_TEMPLATE::END


// ##TASK_CODE_TEMPLATE::START


void Burger_5_led_O_led_Init0(int nTaskId);
void Burger_5_led_O_led_Go0(int nTaskId);
void Burger_5_led_O_led_Wrapup0();


void Burger_5_wheel_O_wheelControl_Init0(int nTaskId);
void Burger_5_wheel_O_wheelControl_Go0(int nTaskId);
void Burger_5_wheel_O_wheelControl_Wrapup0();

void Burger_5_color_O_color_Init0(int nTaskId);
void Burger_5_color_O_color_Go0(int nTaskId);
void Burger_5_color_O_color_Wrapup0();


// ##TASK_CODE_TEMPLATE::END

// ##LIBRARY_INIT_WRAPUP_TEMPLATE::START
// ##LIBRARY_INIT_WRAPUP_TEMPLATE::END

// ##TASK_LIST_DECLARATION_TEMPLATE::START
extern STask g_astTasks_Burger_5[];
extern STask g_astTasks_Burger_5_wheel[];
extern STask g_astTasks_top[];
extern STask g_astTasks_Burger_5_led[];
extern STask g_astTasks_Burger_5_color[];
// ##TASK_LIST_DECLARATION_TEMPLATE::END


// ##TASK_GRAPH_DECLARATION_TEMPLATE::START
extern STaskGraph g_stGraph_Burger_5;
extern STaskGraph g_stGraph_Burger_5_wheel;
extern STaskGraph g_stGraph_top;
extern STaskGraph g_stGraph_Burger_5_led;
extern STaskGraph g_stGraph_Burger_5_color;
// ##TASK_GRAPH_DECLARATION_TEMPLATE::END


// ##LIBRARY_INFO_TEMPLATE::START
SLibrary g_stLibraryInfo[] = {
};

// ##LIBRARY_INFO_TEMPLATE::END


// ##SCHEDULED_COMPOSITE_TASK_FUNCTION_IMPLEMENTATION::START
// ##SCHEDULED_COMPOSITE_TASK_FUNCTION_IMPLEMENTATION::END






// ##TASK_PARAMETER_TEMPLATE::START
// ##TASK_PARAMETER_TEMPLATE::END


// ##TASK_LIST_TEMPLATE::START
STask g_astTasks_Burger_5[] = {
	{ 	97, // Task ID
		"Burger_5_color", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			NULL, // Task init function
			NULL, // Task go function
			NULL, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_5_color, // Subgraph
		&g_stGraph_Burger_5, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	100, // Task ID
		"Burger_5_wheel", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			NULL, // Task init function
			NULL, // Task go function
			NULL, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_5_wheel, // Subgraph
		&g_stGraph_Burger_5, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
	{ 	105, // Task ID
		"Burger_5_led", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			NULL, // Task init function
			NULL, // Task go function
			NULL, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		&g_stGraph_Burger_5_led, // Subgraph
		&g_stGraph_Burger_5, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_5_wheel[] = {
	{ 	99, // Task ID
		"Burger_5_wheel_O_wheelControl", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			Burger_5_wheel_O_wheelControl_Init0, // Task init function
			Burger_5_wheel_O_wheelControl_Go0, // Task go function
			Burger_5_wheel_O_wheelControl_Wrapup0, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_5_wheel, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_top[] = {
	{ 	111, // Task ID
		"Burger_5", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			NULL, // Task init function
			NULL, // Task go function
			NULL, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		1, // Period
		TIME_METRIC_MICROSEC, // Period metric
		&g_stGraph_Burger_5, // Subgraph
		&g_stGraph_top, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_5_led[] = {
	{ 	104, // Task ID
		"Burger_5_led_O_led", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			Burger_5_led_O_led_Init0, // Task init function
			Burger_5_led_O_led_Go0, // Task go function
			Burger_5_led_O_led_Wrapup0, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_DATA_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_5_led, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
};

STask g_astTasks_Burger_5_color[] = {
	{ 	95, // Task ID
		"Burger_5_color_O_color", // Task name
		TASK_TYPE_COMPUTATIONAL, // Task Type
		{
			Burger_5_color_O_color_Init0, // Task init function
			Burger_5_color_O_color_Go0, // Task go function
			Burger_5_color_O_color_Wrapup0, // Task wrapup function
		}, // Task function array
		RUN_CONDITION_TIME_DRIVEN, // Run condition
		50, // Period
		TIME_METRIC_MILLISEC, // Period metric
		(STaskGraph *) NULL, // Subgraph
		&g_stGraph_Burger_5_color, // Parent task graph
		(STaskParameter *) NULL, // Task parameter information
		0, // Task parameter number
		FALSE, // Statically scheduled or not
		(STimer *) NULL, // Timer slot (used by control task)
	},
};


// ##TASK_LIST_TEMPLATE::END

// ##TASK_GRAPH_TEMPLATE::START
STaskGraph g_stGraph_Burger_5 = {
		GRAPH_TYPE_PROCESS_NETWORK, // Task graph type
		g_astTasks_Burger_5, // current task graph's task list
		3, // number of tasks
		&g_astTasks_top[0], // parent task
};

STaskGraph g_stGraph_Burger_5_wheel = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		g_astTasks_Burger_5_wheel, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_5[6], // parent task
};

STaskGraph g_stGraph_top = {
		GRAPH_TYPE_PROCESS_NETWORK, // Task graph type
		g_astTasks_top, // current task graph's task list
		1, // number of tasks
		(STask *) NULL, // parent task
};

STaskGraph g_stGraph_Burger_5_led = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		g_astTasks_Burger_5_led, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_5[9], // parent task
};

STaskGraph g_stGraph_Burger_5_color = {
		GRAPH_TYPE_DATAFLOW, // Task graph type
		g_astTasks_Burger_5_color, // current task graph's task list
		1, // number of tasks
		&g_astTasks_Burger_5[5], // parent task
};

// ##TASK_GRAPH_TEMPLATE::END


// ##TASK_ID_TO_TASK_MAP_TEMPLATE::START
STaskIdToTaskMap g_astTaskIdToTask[] = {
	{ 	&g_astTasks_top[0], // Task structure pointer
	},
	{ 	&g_astTasks_Burger_5[6], // Task structure pointer
	},
	{ 	&g_astTasks_Burger_5_led[0], // Task structure pointer
	},
	{ 	&g_astTasks_Burger_5[9], // Task structure pointer
	},
	{ 	&g_astTasks_Burger_5_wheel[0], // Task structure pointer
	},
	{ 	&g_astTasks_Burger_5_color[0], // Task structure pointer
	},
	{ 	&g_astTasks_Burger_5[5], // Task structure pointer
	},
};
// ##TASK_ID_TO_TASK_MAP_TEMPLATE::END


SScheduledTasks g_astScheduledTaskList[] = {
};

// Target general task: control task
SGeneralTaskRuntimeInfo g_astControlTaskRuntimeInfo[] = {
};


// Target general task: not static scheduled, no child task, not control task
SGeneralTaskRuntimeInfo g_astGeneralTaskRuntimeInfo[] = {
	{	&g_astTasks_Burger_5_led[0], // task structure pointer
		0, // next run time
		1, // remained run count inside millisec
		TRUE,	// running
	},
	{	&g_astTasks_Burger_5_wheel[0], // task structure pointer
		0, // next run time
		1, // remained run count inside millisec
		TRUE,	// running
	},
	{	&g_astTasks_Burger_5_color[0], // task structure pointer
		0, // next run time
		1, // remained run count inside millisec
		TRUE,	// running
	},
};

SCompositeTaskRuntimeInfo g_astCompositeTaskRuntimeInfo[] = {
};

int g_nControlTaskNum = ARRAYLEN(g_astControlTaskRuntimeInfo);
int g_nGeneralTaskNum = ARRAYLEN(g_astGeneralTaskRuntimeInfo);
int g_nCompositeTaskNum = ARRAYLEN(g_astCompositeTaskRuntimeInfo);


int g_nNumOfTasks_top = ARRAYLEN(g_astTasks_top);
int g_nTaskIdToTaskNum = ARRAYLEN(g_astTaskIdToTask);
int g_nLibraryInfoNum = 0;
int g_nTimerSlotNum = MAX_TIMER_SLOT_SIZE;
int g_nScheduledTaskListNum = ARRAYLEN(g_astScheduledTaskList);


