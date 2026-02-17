#include "qtypes.h"

#ifdef _MSC_VER
typedef __int64 ogg_int64_t;
#else
typedef long long ogg_int64_t;
#endif

void SCR_CaptureVideo_Ogg_Init(void);
qbool SCR_CaptureVideo_Ogg_Available(void);
void SCR_CaptureVideo_Ogg_BeginVideo(void);
void SCR_CaptureVideo_Ogg_CloseDLL(void);
