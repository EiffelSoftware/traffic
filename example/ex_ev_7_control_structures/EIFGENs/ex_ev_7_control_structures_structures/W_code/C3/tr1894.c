/*
 * Code for class TRAFFIC_TYPE_LIGHTRAIL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnq26ha(EIF_REFERENCE);
extern void EIF_Minit1894(void);

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

/* make */

void Fnq26ha (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1893), Current, 0, 0, 26942);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("lightrail",9,230803820);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1893, 15, Dtype(Current))) = (EIF_REFERENCE)tr1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1894 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

