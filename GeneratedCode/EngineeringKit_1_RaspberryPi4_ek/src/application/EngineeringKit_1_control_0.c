
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#define TASK_STATUS_RUN 0
#define TASK_STATUS_STOP 1
#define TASK_STATUS_WAIT 2

#define TASK_CODE_BEGIN
#define TASK_CODE_END
#define TASK_NAME "EngineeringKit_1_control"
#define THIS_TASK_ID (160)
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

#include <UFTimer.h>
#include <UFTimer_deprecated.h>

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_group_action(f, ...) l_EngineeringKit_1_group_action_##f(__VA_ARGS__)
#include "EngineeringKit_1_group_action.cicl.h"
#define SYS_REQ(x, ...) SYS_REQ_##x(THIS_TASK_ID, ## __VA_ARGS__)

#define TASK_INIT void EngineeringKit_1_control_Init0(int TASK_ID)
#define TASK_GO void EngineeringKit_1_control_Go0(int nTaskId)
#define TASK_WRAPUP void EngineeringKit_1_control_Wrapup0()

#define STATIC static

#include "semo_communication.h"
#include "EngineeringKit_1_resource.h"
#include "EngineeringKit_1_variable.h"
#include "EngineeringKit_1_common.h"
#include "EngineeringKit_1_action.h"
#include "EngineeringKit_1_service.h"
#include "semo_leader.h"
#include "semo_logger.h"
#include "EngineeringKit_1_event.h"
#include "EngineeringKit_1_timer.h"
#include "semo_port.h"
#include "EngineeringKit_1_port.h"
#include "semo_common.h"
#include "semo_variable.h"
#include "EngineeringKit_1_transition.h"
#include "EngineeringKit_1_mode.h"
#include "EngineeringKit_1_team.h"


#include "control.cic"



