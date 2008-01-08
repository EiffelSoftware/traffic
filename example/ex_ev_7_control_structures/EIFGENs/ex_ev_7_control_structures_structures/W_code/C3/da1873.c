/*
 * Code for class DATE_TIME_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnn0bsb(EIF_REFERENCE);
extern EIF_UNION Fnn1mnk(EIF_REFERENCE);
extern EIF_UNION Fnn0zpy(EIF_REFERENCE);
extern void EIF_Minit1873(void);

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

/* date */

EIF_UNION Fnn0bsb (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(1872,62, Dtype(Current)));
	return r;
}

/* fractional_second */

EIF_UNION Fnn1mnk (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("fractional_second", RTUD(1872), Current, 0, 0, 26812);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1872, 63, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(1869, 44, "fractional_second", tr1));
	Result = (EIF_REAL_64)tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_fractional", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1872, 63, dtype));
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(1869, 44, "fractional_second", tr1));
		if ((EIF_BOOLEAN)(Result == tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* time */

EIF_UNION Fnn0zpy (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(1872,63, Dtype(Current)));
	return r;
}

void EIF_Minit1873 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

