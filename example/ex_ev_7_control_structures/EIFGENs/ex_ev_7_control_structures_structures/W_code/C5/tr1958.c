/*
 * Code for class TRAFFIC_TRAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn6jx0z(EIF_REFERENCE);
extern EIF_UNION Fn6kkzl(EIF_REFERENCE);
extern EIF_UNION Fn6k7w7(EIF_REFERENCE);
extern void Fn6f1e8(EIF_REFERENCE);
extern EIF_UNION Fn6lvuu(EIF_REFERENCE, EIF_UNION);
extern void Fn6im5q(EIF_REFERENCE);
extern void Fn6fehm(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn6misg(EIF_REFERENCE);
extern EIF_UNION Fn6m5p2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn6hz73(EIF_REFERENCE);
extern void Fn6i93c(EIF_REFERENCE, EIF_UNION);
extern void Fn6erj_(EIF_REFERENCE, EIF_UNION);
extern void Fp0ury0(EIF_REFERENCE, int);
extern void EIF_Minit1958(void);

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

/* default_engine_capacity */

EIF_UNION Fn6jx0z (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 200L);
	return r;
}
/* default_wagon_limitation */

EIF_UNION Fn6kkzl (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	return r;
}
/* default_virtual_speed */

EIF_UNION Fn6k7w7 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = (EIF_REAL_32)11.f;
	return r;
}
/* register_in_place_schedule */

void Fn6f1e8 (EIF_REFERENCE Current)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(6,tr3);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(7,ur3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("register_in_place_schedule", RTUD(1957), Current, 1, 0, 27858);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("schedule_exists", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_offset", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 61, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 61, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 < ((EIF_INTEGER_32) 60L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1929, 99, "start", tr1))(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 141, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 3, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1885, 33, "start_time", tr1));
		RTNHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 63, "twin", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 61, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 87, "minute_add", loc1))(loc1, ui4_1x);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 3, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1885, 35, "line_section", tr2));
		RTNHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(loc1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 3, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr1 = *(EIF_REFERENCE *)(tr3 + RTVA(1885, 35, "line_section", tr3));
		RTNHOOK(7);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur3 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1973, 60, "register_in_schedule", tr2))(tr2, ur1x, ur2x, ur3x);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1929, 101, "forth", tr1))(tr1);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 141, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
}

/* is_insertable */

EIF_UNION Fn6lvuu (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("is_insertable", RTUD(1957), Current, 0, 1, 27865);
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

/* add_wagon */

void Fn6im5q (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("add_wagon", RTUD(1957), Current, 1, 0, 27860);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("wagons_not_full", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 95, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
		RTTE((EIF_BOOLEAN)(ti4_1 >= (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = RTLN(RTUD(1807));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1807, 31, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(161, 0, "force", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("wagon_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* make_with_schedule */

void Fn6fehm (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_schedule", RTUD(1957), Current, 0, 3, 27857);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("schedule_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_offset", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg3 < ((EIF_INTEGER_32) 60L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_line_type", EX_PRE);
		tc1 = '\01';
		tc2 = '\01';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 66, "type", arg1));
		RTNHOOK(4);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1894, 13, "name", tr1));
		RTNHOOK(4);
		tr1 = RTMS_EX_H("tram",4,1953653101);
		ur1 = tr1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		if (!tc3) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 66, "type", arg1));
			RTNHOOK(4);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1894, 13, "name", tr1));
			RTNHOOK(4);
			tr1 = RTMS_EX_H("rail",4,1918986604);
			ur1 = tr1;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 66, "type", arg1));
			RTNHOOK(4);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1894, 13, "name", tr1));
			RTNHOOK(4);
			tr1 = RTMS_EX_H("bus",3,6452595);
			ur1 = tr1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1957, 92, dtype))(Current, ur1x);
	RTHOOK(6);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(1957, 61, dtype)) = (EIF_INTEGER_32)arg3;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + RTWA(1957, 85, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1957, 94, dtype))(Current);
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 68, "first", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(10);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1885, 35, "line_section", tr2));
	RTNHOOK(10);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1957, 51, dtype))(Current, ur1x);
	RTHOOK(11);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1957, 43, dtype))(Current, uc1x);
	RTHOOK(12);
	tr1 = RTLNSMART(RTWCT(1957, 15, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(12);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1957, 15, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("schedule_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 2, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("schedule_offset_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 61, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* is_removable */

EIF_UNION Fn6misg (EIF_REFERENCE Current)
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
	RTEAA("is_removable", RTUD(1957), Current, 0, 0, 27866);
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

/* is_valid_line */

EIF_UNION Fn6m5p2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_valid_line", RTUD(1957), Current, 0, 1, 27867);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 66, "type", arg1));
	RTNHOOK(2);
	tr2 = RTLN(RTUD(1898));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1898, 32, Dtype(tr2)))(tr2);
	RTNHOOK(2);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1894, 5, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
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

/* capacity */

EIF_UNION Fn6hz73 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("capacity", RTUD(1957), Current, 1, 0, 27859);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 91, dtype));

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1807, 32, "capacity", tr2));
		loc1 += ti4_1;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(7);
	Result = (EIF_INTEGER_32)loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* remove_wagon */

void Fn6i93c (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_wagon", RTUD(1957), Current, 0, 1, 27861);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("wagons_not_empty", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
		RTTE((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(171, 3, "go_i_th", tr1))(tr1, ui4_1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(46, 4, "remove", tr1))(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("wagon_removed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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

/* make_with_line */

void Fn6erj_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_line", RTUD(1957), Current, 0, 1, 27856);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_line", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1957, 105, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1957, 54, dtype))(Current, ur1x);
	RTHOOK(4);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1957, 43, dtype))(Current, uc1x);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1957, 100, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1957, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1957, 101, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1957, 95, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	{
		static int16 typarr [] = {1957,1461,1807,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1461, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 95, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1957, 102, dtype))(Current)).value.EIF_REAL_32_value);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	*(EIF_REAL_64 *)(Current + RTWA(1957, 38, dtype)) = (EIF_REAL_64)tr8_1;
	RTHOOK(9);
	tr1 = RTLNSMART(RTWCT(1957, 15, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(9);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1957, 15, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp0ury0 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTIT("wagons_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("wagons_count_allowed", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1957, 95, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 96, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
	if ((EIF_BOOLEAN)(ti4_1 >= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_line_type", Current);
	tc1 = '\01';
	tc2 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 40, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 66, "type", tr1));
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
	tr2 = RTMS_EX_H("tram",4,1953653101);
	ur1 = tr2;
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (!tc3) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 40, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 66, "type", tr1));
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
		tr2 = RTMS_EX_H("rail",4,1918986604);
		ur1 = tr2;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1957, 40, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 66, "type", tr1));
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
		tr2 = RTMS_EX_H("bus",3,6452595);
		ur1 = tr2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1958 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

