/*
 * Code for class TRAFFIC_ROAD_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn3sp6b(EIF_REFERENCE);
extern void Fn3rfa2(EIF_REFERENCE);
extern void Fn3qsdg(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3r18p(EIF_REFERENCE);
extern void EIF_Minit1942(void);

extern EIF_REFERENCE _fAabfdi6();
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

/* default_highlight_color */

RTOID (Fn3sp6b)

EIF_UNION Fn3sp6b (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fn3sp6b);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("default_highlight_color", RTUD(1941), Current, 0, 0, 27753);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ui4_2 = ((EIF_INTEGER_32) 255L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* update */

void Fn3rfa2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(5,tr3);
	RTLR(0,Current);
	RTLR(4,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("update", RTUD(1941), Current, 2, 0, 27751);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1948, 15, "is_highlighted", tr1));
	if (tc1) {

		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 26, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(3);
			tr1 = RTLN(RTUD(840));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 26, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
			ui4_1 = ti4_1;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 26, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
			ui4_2 = ti4_2;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 26, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(3);
			RTCI2(tr1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1941, 62, dtype))(Current, ur1x);
		} else {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1941, 67, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1941, 62, dtype))(Current, ur1x);
		}

	} else {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 57, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(6);
			tr1 = RTLN(RTUD(840));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 57, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
			ui4_1 = ti4_1;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 57, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
			ui4_2 = ti4_2;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 57, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(6);
			RTCI2(tr1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1941, 62, dtype))(Current, ur1x);
		} else {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1941, 66, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1941, 62, dtype))(Current, ur1x);
		}

	}

	RTHOOK(8);
	{
		static int16 typarr [] = {1941,1462,1925,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1948, 40, "one_way", tr2));
	RTNHOOK(8);
	tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1960, 27, "polypoints", tr3));
	RTNHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2190, 99, "count", tr2));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(8);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(9);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1948, 40, "one_way", tr1));
	RTNHOOK(10);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1960, 27, "polypoints", tr2));
	RTNHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
	while (!((EIF_BOOLEAN)(loc2 > ti4_1))) {
		RTHOOK(11);
		tr1 = RTLN(RTUD(1925));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1948, 40, "one_way", tr2));
		RTNHOOK(11);
		tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1960, 27, "polypoints", tr3));
		RTNHOOK(11);
		ui4_1 = loc2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 95, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		tr4_1 = (EIF_REAL_32) (tr8_1);
		ur4_1 = tr4_1;
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1948, 40, "one_way", tr2));
		RTNHOOK(11);
		tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1960, 27, "polypoints", tr3));
		RTNHOOK(11);
		ui4_1 = loc2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 95, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
		ur4_2 = tr4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
		RTNHOOK(11);
		RTCI2(tr1);
		ur1 = RTCCL(tr1);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ur1x, ui4_1x);
		RTHOOK(12);
		loc2++;
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1948, 40, "one_way", tr1));
		RTNHOOK(10);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1960, 27, "polypoints", tr2));
		RTNHOOK(10);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
		;
	}

	RTHOOK(13);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1941, 2, dtype))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(4);
	RTEE;
}

/* make */

void Fn3qsdg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(2,loc1);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("make", RTUD(1941), Current, 2, 1, 27750);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_item_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	{
		static int16 typarr [] = {1941,1462,1925,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1948, 40, "one_way", tr2));
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1960, 27, "polypoints", tr3));
	RTNHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2190, 99, "count", tr2));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1948, 40, "one_way", tr1));
	RTNHOOK(5);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1960, 27, "polypoints", tr2));
	RTNHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
	while (!((EIF_BOOLEAN)(loc2 > ti4_1))) {
		RTHOOK(6);
		tr1 = RTLN(RTUD(1925));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1948, 40, "one_way", tr2));
		RTNHOOK(6);
		tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1960, 27, "polypoints", tr3));
		RTNHOOK(6);
		ui4_1 = loc2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 95, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		tr4_1 = (EIF_REAL_32) (tr8_1);
		ur4_1 = tr4_1;
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1948, 40, "one_way", tr2));
		RTNHOOK(6);
		tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1960, 27, "polypoints", tr3));
		RTNHOOK(6);
		ui4_1 = loc2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 95, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
		ur4_2 = tr4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
		RTNHOOK(6);
		RTCI2(tr1);
		ur1 = RTCCL(tr1);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ur1x, ui4_1x);
		RTHOOK(7);
		loc2++;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1948, 40, "one_way", tr1));
		RTNHOOK(5);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1960, 27, "polypoints", tr2));
		RTNHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
		;
	}

	RTHOOK(8);
	ur1 = RTCCL(loc1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 634.0);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1941, 56, dtype))(Current, ur1x, ur4_1x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1941, 66, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1941, 62, dtype))(Current, ur1x);
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current + RTWA(1941, 4, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current + RTWA(1941, 25, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1948, 7, "changed_event", tr1));
	RTNHOOK(12);
	{
		static int16 typarr [] = {1941,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1941,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAabfdi6, (EIF_POINTER)(0),1941, 65, 0, 0, 0, 1, 0, tr1, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("item_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 1, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("is_shown", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1941, 4, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("not_highlighted", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1941, 25, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("internal_color_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1941, 44, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* default_color */

RTOID (Fn3r18p)

EIF_UNION Fn3r18p (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fn3r18p);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("default_color", RTUD(1941), Current, 0, 0, 27752);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 200L);
	ui4_2 = ((EIF_INTEGER_32) 200L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

void EIF_Minit1942 (void)
{
	GTCX
	RTOTS (29254,Fn3r18p)
	RTOTS (29255,Fn3sp6b)
}


#ifdef __cplusplus
}
#endif

