/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fobyt6m(EIF_REFERENCE);
extern void Fobx58_(EIF_REFERENCE);
extern void EIF_Minit1979(void);

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

/* prepare */

void Fobyt6m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("prepare", RTUD(1978), Current, 0, 0, 28157);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(1978, 99, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2043, 8, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1978, 99, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1978, 99, dtype));
	tr2 = RTLN(RTUD(2067));
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2043, 295, "set_example", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1978, 99, dtype));
	tr2 = RTMS_EX_H("Path building (chapter 6)",25,1403335209);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2043, 177, "set_title", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1978, 99, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 130, "show", tr1))(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make_and_launch */

void Fobx58_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_and_launch", RTUD(1978), Current, 0, 0, 28156);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1978, 7, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1978, 98, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1978, 5, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1979 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

