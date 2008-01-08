/*
 * Code for class TRAFFIC_EVENT_CONTAINER [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fp0elqy(EIF_REFERENCE, int);
extern void EIF_Minit2197(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void Fp0elqy (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("inserted_initialized", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2196, 31, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("removed_initialized", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2196, 32, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

