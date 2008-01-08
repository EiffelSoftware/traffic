/*
 * Code for class XM_TREE_CALLBACKS_PIPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fokyz3l(EIF_REFERENCE);
extern EIF_UNION Fok1vqb(EIF_REFERENCE);
extern EIF_UNION Fok07sp(EIF_REFERENCE);
extern void Fp09agc(EIF_REFERENCE, int);
extern void EIF_Minit2010(void);

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

void Fokyz3l (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("make", RTUD(2009), Current, 1, 0, 28572);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2009, 24, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2009, 47, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2009, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2009, 48, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(2009, 49, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1910, 38, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2009, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 49, dtype));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2009, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	{
		static int16 typarr [] = {2009,1462,1907,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 3L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2009, 47, dtype));
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2009, 48, dtype));
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2009, 49, dtype));
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	ur1 = RTCCL(tr1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2009, 30, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
}

/* last_error */

EIF_UNION Fok1vqb (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("last_error", RTUD(2009), Current, 0, 0, 28574);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("error", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 48, dtype));
		tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1911, 39, "has_error", tr1));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 48, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1911, 40, "last_error", tr1));
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_error_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* document */

EIF_UNION Fok07sp (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("document", RTUD(2009), Current, 0, 0, 28573);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_error", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 48, dtype));
		tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1911, 39, "has_error", tr1));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 49, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1910, 41, "document", tr1));
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

void Fp09agc (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("tree_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 49, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("error_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2009, 48, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2010 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

