/*
 * Code for class DT_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fplr84q(EIF_REFERENCE);
extern void Fplnqld(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fplsw2c(EIF_REFERENCE);
extern void Fplodi_(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpl36u5(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpl4uss(EIF_REFERENCE);
extern EIF_UNION Fpluuv7(EIF_REFERENCE);
extern void Fplxfmp(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpltj_z(EIF_REFERENCE);
extern EIF_UNION Fplt6yl(EIF_REFERENCE);
extern EIF_UNION Fpl6sln(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpl54n0(EIF_REFERENCE, EIF_UNION);
extern void Fplpod8(EIF_REFERENCE, EIF_UNION);
extern void Fplz0c6(EIF_REFERENCE, EIF_UNION);
extern void Fpl2wzx(EIF_REFERENCE, EIF_UNION);
extern void Fpl_oat(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpl0a8f(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpl0y51(EIF_REFERENCE, EIF_UNION);
extern void Fpl1l3o(EIF_REFERENCE, EIF_UNION);
extern void Fplwso2(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fplvhtu(EIF_REFERENCE, EIF_UNION);
extern void Fplzdfk(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpl5hqe(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fplqy9h(EIF_REFERENCE);
extern EIF_UNION Fplrl63(EIF_REFERENCE);
extern EIF_UNION Fpl3jxj(EIF_REFERENCE, EIF_UNION);
extern void Fpl181a(EIF_REFERENCE, EIF_UNION);
extern void Fplx2kb(EIF_REFERENCE, EIF_UNION);
extern void Fplyqhy(EIF_REFERENCE, EIF_UNION);
extern void Fplv4rg(EIF_REFERENCE);
extern EIF_UNION Fplqbbv(EIF_REFERENCE);
extern void Fplo0gm(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpl7fi9(EIF_REFERENCE);
extern EIF_UNION Fpl72gw(EIF_REFERENCE);
extern void EIF_Minit2105(void);

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

/* second */

EIF_UNION Fplr84q (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2104,105, Dtype(Current)));
	return r;
}

/* make */

void Fplnqld (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
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
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2104), Current, 0, 3, 30946);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)arg3;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* millisecond */

EIF_UNION Fplsw2c (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2104,106, Dtype(Current)));
	return r;
}

/* make_precise */

void Fplodi_ (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make_precise", RTUD(2104), Current, 0, 4, 30947);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)arg3;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)arg4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* infix "-" */

EIF_UNION Fpl36u5 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"-\"", RTUD(2104), Current, 0, 1, 30973);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 88, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 103, "hour", arg1));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 104, "minute", arg1));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 105, "second", arg1));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 106, "millisecond", arg1));
	ui4_4 = (EIF_INTEGER_32)-ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2104, 119, "add_precise_hours_minutes_seconds", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("subtraction_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* prefix "-" */

EIF_UNION Fpl4uss (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("prefix \"-\"", RTUD(2104), Current, 0, 0, 30974);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 88, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
	ui4_4 = (EIF_INTEGER_32)-ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2104, 113, "set_precise_hour_minute_second", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("unary_minus_not_void", EX_POST);
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

/* hash_code */

EIF_UNION Fpluuv7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hash_code", RTUD(2104), Current, 0, 0, 30957);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);

	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(Result + ((EIF_INTEGER_32) 1L));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* set_precise_hour_minute_second */

void Fplxfmp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("set_precise_hour_minute_second", RTUD(2104), Current, 0, 4, 30961);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)arg3;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)arg4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* second_count */

EIF_UNION Fpltj_z (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("second_count", RTUD(2104), Current, 0, 0, 30955);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(Result * ti4_1) + ti4_2) * ti4_3) + ti4_4);

	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		Result += (EIF_INTEGER_32)(ti4_1 / ((EIF_INTEGER_32) 1000L));
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		Result -= ((EIF_INTEGER_32)((EIF_INTEGER_32)-ti4_1 / ((EIF_INTEGER_32) 1000L)));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 42, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ui4_1 = ti4_6;
		ui4_2 = ((EIF_INTEGER_32) 1000L);
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1995, 44, "div", tr1))(tr1, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ti4_2) + ti4_3) * ti4_4) + ti4_5) + ti4_6)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* millisecond_count */

EIF_UNION Fplt6yl (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("millisecond_count", RTUD(2104), Current, 0, 0, 30956);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
	ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(Result * ti4_1) + ti4_2) * ti4_3) + ti4_4)) * ((EIF_INTEGER_32) 1000L)) + ti4_5);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32)((EIF_INTEGER_32)(((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ti4_2) + ti4_3) * ti4_4) + ti4_5)) * ((EIF_INTEGER_32) 1000L)) + ti4_6)))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* same_time_duration */

EIF_UNION Fpl6sln (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("same_time_duration", RTUD(2104), Current, 0, 1, 30977);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2104, 108, "millisecond_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2104, 108, "millisecond_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_equal */

EIF_UNION Fpl54n0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_equal", RTUD(2104), Current, 0, 1, 30976);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 84, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(Current);
	ur2 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2104, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2104, 128, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2104, 27, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = Result;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* make_precise_canonical */

void Fplpod8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	RTLU(SK_INT32, &loc1);
	RTEAA("make_precise_canonical", RTUD(2104), Current, 1, 1, 30949);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)-arg1;
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 % ((EIF_INTEGER_32) 1000L));
		RTHOOK(4);
		loc1 /= ((EIF_INTEGER_32) 1000L);
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 /= ti4_1;
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 / ti4_1);
	} else {
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 % ((EIF_INTEGER_32) 1000L));
		RTHOOK(10);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 / ((EIF_INTEGER_32) 1000L));
		RTHOOK(11);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 /= ti4_1;
		RTHOOK(13);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 / ti4_1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("is_canonical", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 102, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("millisecond_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* set_millisecond */

void Fplz0c6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTEAA("set_millisecond", RTUD(2104), Current, 0, 1, 30965);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_hour", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_minute", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_second", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("millisecond_set", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_milliseconds */

void Fpl2wzx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("add_milliseconds", RTUD(2104), Current, 0, 1, 30971);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("millisecond_added", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_hours_minutes_seconds */

void Fpl_oat (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("add_hours_minutes_seconds", RTUD(2104), Current, 0, 3, 30966);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype))) += arg1;
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype))) += arg2;
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype))) += arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("hour_added", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minute_added", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_2 + arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("second_added", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_3 + arg3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* add_precise_hours_minutes_seconds */

void Fpl0a8f (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("add_precise_hours_minutes_seconds", RTUD(2104), Current, 0, 4, 30967);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_3 = ti4_4;
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_4 = ti4_5;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype))) += arg1;
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype))) += arg2;
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype))) += arg3;
	RTHOOK(4);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype))) += arg4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_added", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_added", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_2 + arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_added", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_3 + arg3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_added", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_4 + arg4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* add_hours */

void Fpl0y51 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("add_hours", RTUD(2104), Current, 0, 1, 30968);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("hour_added", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_minutes */

void Fpl1l3o (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("add_minutes", RTUD(2104), Current, 0, 1, 30969);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minute_added", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_hour_minute_second */

void Fplwso2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
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
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("set_hour_minute_second", RTUD(2104), Current, 0, 3, 30960);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)arg3;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* time */

EIF_UNION Fplvhtu (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("time", RTUD(2104), Current, 0, 1, 30958);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_time_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2140, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("absolute_time_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2138, 41, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2138, 20, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* set_second */

void Fplzdfk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTEAA("set_second", RTUD(2104), Current, 0, 1, 30964);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("second_set", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_hour", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_minute", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_millisecond", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* infix "<" */

EIF_UNION Fpl5hqe (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"<\"", RTUD(2104), Current, 0, 1, 30975);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2104, 108, "millisecond_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 < ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* hour */

EIF_UNION Fplqy9h (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2104,103, Dtype(Current)));
	return r;
}

/* minute */

EIF_UNION Fplrl63 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2104,104, Dtype(Current)));
	return r;
}

/* infix "+" */

EIF_UNION Fpl3jxj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"+\"", RTUD(2104), Current, 0, 1, 30972);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 88, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 103, "hour", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 104, "minute", arg1));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 105, "second", arg1));
	ui4_3 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 106, "millisecond", arg1));
	ui4_4 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2104, 119, "add_precise_hours_minutes_seconds", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("addition_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* add_seconds */

void Fpl181a (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("add_seconds", RTUD(2104), Current, 0, 1, 30970);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("second_added", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_hour */

void Fplx2kb (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTEAA("set_hour", RTUD(2104), Current, 0, 1, 30962);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("hour_set", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_minute", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_second", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_millisecond", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_minute */

void Fplyqhy (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTEAA("set_minute", RTUD(2104), Current, 0, 1, 30963);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minute_set", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_hour", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_second", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_millisecond", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_canonical */

void Fplv4rg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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

	RTLI(4);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("set_canonical", RTUD(2104), Current, 0, 0, 30959);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 88, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2104, 101, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_canonical", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 102, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_duration", EX_POST);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2104, 128, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
}

/* is_canonical */

EIF_UNION Fplqbbv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_canonical", RTUD(2104), Current, 0, 0, 30950);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 < ti4_4)) && (EIF_BOOLEAN)(ti4_5 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 < ti4_7)) && (EIF_BOOLEAN)(ti4_8 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_9 < ((EIF_INTEGER_32) 1000L)));
	} else {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 > (EIF_INTEGER_32)-ti4_4)) && (EIF_BOOLEAN)(ti4_5 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 > (EIF_INTEGER_32)-ti4_7)) && (EIF_BOOLEAN)(ti4_8 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_9 > ((EIF_INTEGER_32) -1000L)));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("positive_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
				ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
				ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
				ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 < ti4_4)) && (EIF_BOOLEAN)(ti4_5 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 < ti4_7)) && (EIF_BOOLEAN)(ti4_8 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_9 < ((EIF_INTEGER_32) 1000L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("negative_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
				ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
				ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
				ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 > (EIF_INTEGER_32)-ti4_4)) && (EIF_BOOLEAN)(ti4_5 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 > (EIF_INTEGER_32)-ti4_7)) && (EIF_BOOLEAN)(ti4_8 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_9 > ((EIF_INTEGER_32) -1000L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make_canonical */

void Fplo0gm (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	RTLU(SK_INT32, &loc1);
	RTEAA("make_canonical", RTUD(2104), Current, 1, 1, 30948);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)-arg1;
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 /= ti4_1;
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc1 / ti4_1);
	} else {
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 % ti4_1);
		RTHOOK(8);
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 / loc1);
		RTHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 % ti4_1);
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 81, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 / ti4_1);
	}

	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("is_canonical", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 102, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("second_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* to_date_time_duration */

EIF_UNION Fpl7fi9 (EIF_REFERENCE Current)
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
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_5x = {0, SK_INT32};
#undef ui4_5
#define ui4_5 ui4_5x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_6x = {0, SK_INT32};
#undef ui4_6
#define ui4_6 ui4_6x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_7x = {0, SK_INT32};
#undef ui4_7
#define ui4_7 ui4_7x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("to_date_time_duration", RTUD(2104), Current, 0, 0, 30978);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2106));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
	ui4_4 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
	ui4_5 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
	ui4_6 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
	ui4_7 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 145, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x, ui4_7x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("date_time_duration_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 96, "year", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 95, "month", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 102, "day", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 107, "hour", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 103, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 104, "minute", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 32, "second", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 105, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 11, "millisecond", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2104, 106, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* to_canonical */

EIF_UNION Fpl72gw (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("to_canonical", RTUD(2104), Current, 0, 0, 30979);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2104, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2104, 101, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("canonical_duration_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_duration", EX_POST);
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2104, 128, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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

void EIF_Minit2105 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

