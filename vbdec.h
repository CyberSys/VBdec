#pragma once

#include "mss/mss.h"

void RegisterVBInterface();
void UnregisterVBInterface();

U32 AILCALL FAR PROVIDER_query_attribute(HATTRIB index);
ASIRESULT AILCALL FAR ASI_startup(void);
ASIRESULT AILCALL FAR ASI_shutdown(void);
C8 FAR* AILCALL FAR ASI_error(void);

HASISTREAM AILCALL FAR ASI_stream_open(U32 user, AILASIFETCHCB fetch_CB, U32 total_size);