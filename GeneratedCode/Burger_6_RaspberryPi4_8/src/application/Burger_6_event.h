#ifndef __Burger_6_EVENT_HEADER__
#define __Burger_6_EVENT_HEADER__

#include "semo_common.h"

// EVENT DEFINE
typedef enum _EVENT_ID {
    ID_EVENT_RC,
    ID_EVENT_START,
    ID_EVENT_FINISH,
    ID_EVENT_LAST
} EVENT_ID;

extern semo_int8 event_list[3];
extern semo_int8 event_occured;

void event_list_init();
void event_polling();

#endif
