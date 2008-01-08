/*
 * Code for class TRAFFIC_PASSENGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn5q5z8(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn5ok8r(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn5o76d(EIF_REFERENCE);
extern void Fn5kpm0(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn5rtxv(EIF_REFERENCE);
extern void Fn5qi1m(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void EIF_Minit1953(void);

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

/* board */

void Fn5q5z8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("board", RTUD(1952), Current, 0, 1, 27832);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("inteded_line", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1955, 80, "line", arg1));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1952, 77, dtype));
		RTTE(RTCEQ(tr1, tr2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1953, 77, "load", tr1))(tr1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("vehicle_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* is_insertable */

EIF_UNION Fn5ok8r (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_insertable", RTUD(1952), Current, 0, 1, 27829);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_removable */

EIF_UNION Fn5o76d (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_removable", RTUD(1952), Current, 0, 0, 27830);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make_with_path */

void Fn5kpm0 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,loc1);
	RTLR(4,loc2);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("make_with_path", RTUD(1952), Current, 2, 2, 27828);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 76, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1949, 39, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 51, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1949, 41, "connections", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	{
		static int16 typarr [] = {1952,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2190, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2144, 88, "count", loc2));
	ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 30, "start", loc2))(loc2);
	RTHOOK(7);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1958, 68, "polypoints", tr1));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 123, "append_last", loc1))(loc1, ur1x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 51, "forth", loc2))(loc2);
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(10);
	tr1 = RTLNSMART(RTWCT(1952, 50, Current));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(10);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 50, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1952, 47, dtype))(Current);
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1952, 48, dtype))(Current);
	RTHOOK(14);
	*(EIF_REAL_64 *)(Current + RTWA(1952, 34, dtype)) = (EIF_REAL_64)arg2;
	RTHOOK(15);
	tr1 = RTLNSMART(RTWCT(1952, 14, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(15);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 14, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* deboard */

void Fn5rtxv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("deboard", RTUD(1952), Current, 0, 0, 27833);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCS(EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1953, 78, "unload", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("current_transportatoin_not_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 78, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_intended_line_info */

void Fn5qi1m (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("set_intended_line_info", RTUD(1952), Current, 0, 3, 27831);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("line_not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_stop", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1975, 59, "connection_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(arg2 <= ti4_1);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_stop", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg3 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1975, 59, "connection_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(arg3 <= ti4_1);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1952, 77, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(1952, 79, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(1952, 80, dtype)) = (EIF_INTEGER_32)arg3;

	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg3 < arg2)) {
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current + RTWA(1952, 83, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(9);
		*(EIF_BOOLEAN *)(Current + RTWA(1952, 83, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("line_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1952, 77, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("stop_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1952, 79, dtype));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("stop_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1952, 80, dtype));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1953 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

