
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#define TASK_STATUS_RUN 0
#define TASK_STATUS_STOP 1
#define TASK_STATUS_WAIT 2

#define TASK_CODE_BEGIN
#define TASK_CODE_END
#define TASK_NAME "EngineeringKit_1_leader"
#define THIS_TASK_ID (157)
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
#define LIBCALL_leader(f, ...) l_EngineeringKit_1_leader_##f(__VA_ARGS__)
#include "EngineeringKit_1_leader_lib.cicl.h"
#define SYS_REQ(x, ...) SYS_REQ_##x(THIS_TASK_ID, ## __VA_ARGS__)

#define TASK_INIT void EngineeringKit_1_leader_Init0(int TASK_ID)
#define TASK_GO void EngineeringKit_1_leader_Go0(int nTaskId)
#define TASK_WRAPUP void EngineeringKit_1_leader_Wrapup0()

#define STATIC static

#include "semo_leader.h"
#include "semo_logger.h"
#include "EngineeringKit_1_common.h"
#include "semo_common.h"


#include "leader_selection.cic"



