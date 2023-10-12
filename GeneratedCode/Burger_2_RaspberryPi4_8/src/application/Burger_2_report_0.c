
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#define TASK_STATUS_RUN 0
#define TASK_STATUS_STOP 1
#define TASK_STATUS_WAIT 2

#define TASK_CODE_BEGIN
#define TASK_CODE_END
#define TASK_NAME "Burger_2_report"
#define THIS_TASK_ID (53)
#define THIS_THREAD_ID (0)


#include <UFMulticastPort.h>

#include <UFPort.h> 
#include <UFPort_deprecated.h>

#include <UFTask.h>
#include <UFTask_deprecated.h>

#include <UFControl.h>
#include <UFControl_deprecated.h>

#include <UFSystem.h>
#include <UFSystem_deprecated.h>

#include <UFLoop.h>


#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_leader(f, ...) l_Burger_2_leader_##f(__VA_ARGS__)
#include "Burger_2_leader_lib.cicl.h"
#define LIBCALL_group_action(f, ...) l_Burger_2_group_action_##f(__VA_ARGS__)
#include "Burger_2_group_action.cicl.h"
#define LIBCALL_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0(f, ...) l_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_##f(__VA_ARGS__)
#include "Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0.cicl.h"
#define LIBCALL_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0(f, ...) l_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_##f(__VA_ARGS__)
#include "Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0.cicl.h"
#define LIBCALL_grouping(f, ...) l_Burger_2_grouping_##f(__VA_ARGS__)
#include "Burger_2_grouping.cicl.h"
#define SYS_REQ(x, ...) SYS_REQ_##x(THIS_TASK_ID, ## __VA_ARGS__)

#define TASK_INIT void Burger_2_report_Init0(int TASK_ID)
#define TASK_GO void Burger_2_report_Go0(int nTaskId)
#define TASK_WRAPUP void Burger_2_report_Wrapup0()

#define STATIC static

#include "Burger_2_common.h"
#include "Burger_2_variable.h"
#include "semo_communication.h"
#include "semo_logger.h"
#include "semo_port.h"
#include "semo_common.h"


#include "Burger_2_report.cic"



