#ifndef __EngineeringKit_2_SERVICE_HEADER__
#define __EngineeringKit_2_SERVICE_HEADER__

#include "semo_common.h"
#include "EngineeringKit_2_group.h"

typedef enum _SERVICE_ID {
    ID_SERVICE_Robot_REMOTE_CONTROL_RemoteControl,
    ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator,
    ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator,
    ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search,
    ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search,
} SERVICE_ID;

// DECLARE EXTERN FUNCTION
void service_init();
void execute_service();
void run_service(SERVICE_ID service_id, GROUP_ID group);
void stop_service(SERVICE_ID service_id);

#endif