/*
 * Code for class TRAFFIC_TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnhmj9z(EIF_REFERENCE, EIF_UNION);
extern void Fnhlxcc(EIF_REFERENCE, EIF_UNION);
extern void Fnhnu47(EIF_REFERENCE);
extern void Fng8zmx(EIF_REFERENCE, EIF_UNION);
extern void Fnhm67l(EIF_REFERENCE);
extern EIF_UNION Fnhhds_(EIF_REFERENCE);
extern EIF_UNION Fnhbkde(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fnhf2xr(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnhcu8n(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnhgqvd(EIF_REFERENCE);
extern void Fp_5jdn(EIF_REFERENCE, int);
extern void EIF_Minit1842(void);

extern EIF_REFERENCE _fAaa40hj();
#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* add_callback_tour */

void Fnhmj9z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_callback_tour", RTUD(1841), Current, 0, 1, 26539);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_procedure_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(161, 0, "force", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_callback_procedure */

void Fnhlxcc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_callback_procedure", RTUD(1841), Current, 0, 1, 26538);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_procedure_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(161, 0, "force", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* call_procedure */

void Fnhnu47 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
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
	RTEAA("call_procedure", RTUD(1841), Current, 0, 0, 26530);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
	while (!(tc1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		{
			static int16 typarr [] = {1841,-7,1,726,-2,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

			tr1 = RTLNTS(typres, 2, 0);

		}
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(7, 11, "call", tr2))(tr2, ur1x);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype));
		tc1 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make_with_speedup */

void Fng8zmx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_speedup", RTUD(1841), Current, 0, 1, 26531);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_speedup_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(1841, 31, Current));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2097, 69, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(1841, 33, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(1841, 44, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1841, 44, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1841, 45, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(1841, 32, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	{
		static int16 typarr [] = {1841,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1841,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr2 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa40hj, (EIF_POINTER)(0),1841, 49, 0, 0, 0, 1, 0, tr1, 0);

	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1841, 48, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("speedup_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1841, 33, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* call_tours */

void Fnhm67l (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
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
	RTEAA("call_tours", RTUD(1841), Current, 0, 0, 26529);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
	while (!(tc1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		{
			static int16 typarr [] = {1841,-7,1,726,-2,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

			tr1 = RTLNTS(typres, 2, 0);

		}
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(7, 11, "call", tr2))(tr2, ur1x);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 45, dtype));
		tc1 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* out */

EIF_UNION Fnhhds_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(4,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("out", RTUD(1841), Current, 0, 0, 26537);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
	RTNHOOK(1);
	tr1 = c_outi(ti4_1);
	tr2 = RTMS_EX_H(":",1,58);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
	RTNHOOK(1);
	tr1 = c_outi(ti4_1);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = RTMS_EX_H(":",1,58);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", tr1))(tr1)).value.EIF_INTEGER_32_value);
	RTNHOOK(1);
	tr1 = c_outi(ti4_1);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* duration */

EIF_UNION Fnhbkde (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(4,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("duration", RTUD(1841), Current, 0, 2, 26532);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("both_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 19, "infix \">=\"", arg2))(arg2, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		tr1 = RTLN(RTUD(1923));
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", arg2))(arg2)).value.EIF_REAL_64_value);
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", arg1))(arg1)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)(tr8_1 - tr8_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1923, 67, Dtype(tr1)))(tr1, ur8_1x);
		RTNHOOK(3);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(4);
		tr1 = RTLN(RTUD(1923));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 24, "seconds_in_day", arg1))(arg1)).value.EIF_INTEGER_32_value);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", arg1))(arg1)).value.EIF_REAL_64_value);
		tr8_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", arg2))(arg2)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)(tr8_1 - (EIF_REAL_64)(tr8_2 - tr8_3));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1923, 67, Dtype(tr1)))(tr1, ur8_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_positive", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1923, 79, "is_positive", Result))(Result)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* set */

void Fnhf2xr (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("set", RTUD(1841), Current, 0, 3, 26535);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_time", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 13, "set_hour", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 14, "set_minute", tr1))(tr1, ui4_1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 38, "set_second", tr1))(tr1, ui4_1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 81, "seconds", tr1))(tr1)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1841, 47, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 1000L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* set_speedup */

void Fnhcu8n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_speedup", RTUD(1841), Current, 0, 1, 26533);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_speedup_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1841, 35, dtype));
	if (tc1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1841, 38, dtype))(Current);
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current + RTWA(1841, 33, dtype)) = (EIF_INTEGER_32)arg1;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1841, 39, dtype))(Current);
	} else {
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current + RTWA(1841, 33, dtype)) = (EIF_INTEGER_32)arg1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("speedup_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1841, 33, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* default_scale_factor */

EIF_UNION Fnhgqvd (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = (EIF_REAL_64)5.5199999999999996;
	return r;
}
void Fp_5jdn (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIS(Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIS(Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1841, 31, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1842 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

