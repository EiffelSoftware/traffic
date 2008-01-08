/*
 * Code for class TRAFFIC_TYPE_BUS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnq5r7v(EIF_REFERENCE);
extern void EIF_Minit1897(void);

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

void Fnq5r7v (EIF_REFERENCE Current)
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
	RTEAA("make", RTUD(1896), Current, 0, 0, 26946);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("bus",3,6452595);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1896, 14, Dtype(Current))) = (EIF_REFERENCE)tr1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1897 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

