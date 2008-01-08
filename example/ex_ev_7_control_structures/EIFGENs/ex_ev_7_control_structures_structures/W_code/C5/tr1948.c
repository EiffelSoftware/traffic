/*
 * Code for class TRAFFIC_TAXI_OFFICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn4iwhl(EIF_REFERENCE);
extern void Fn4pcut(EIF_REFERENCE, EIF_UNION);
extern void Fn4p_sf(EIF_REFERENCE);
extern EIF_UNION Fn4n1zk(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn4opw6(EIF_REFERENCE);
extern void Fn4jje7(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fn4ne0y(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn4qnp1(EIF_REFERENCE, EIF_UNION);
extern void Fn4rano(EIF_REFERENCE, EIF_UNION);
extern void Fp0p8ee(EIF_REFERENCE, int);
extern void EIF_Minit1948(void);

#ifdef __cplusplus
}
#endif

#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* default_create */

void Fn4iwhl (EIF_REFERENCE Current)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("default_create", RTUD(1947), Current, 0, 0, 27788);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(1947, 56, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2195, 126, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(1947, 57, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2195, 126, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(1947, 58, Current));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ui4_2 = ((EIF_INTEGER_32) 255L);
	ui4_3 = ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(3);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 58, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(1947, 9, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 9, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("taxis_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("available_taxis_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("color_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 58, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(2);
	RTEE;
}

/* add_to_map */

void Fn4pcut (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_to_map", RTUD(1947), Current, 0, 1, 27793);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_map_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1947, 23, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("insertable", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1947, 62, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1947, 23, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 53, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 34, "start", tr1))(tr1);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 88, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 53, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1954, 8, "add_to_map", tr2))(tr2, ur1x);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 88, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("is_in_map", EX_POST);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1947, 23, dtype));
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 53, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_from_map */

void Fn4p_sf (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_from_map", RTUD(1947), Current, 0, 0, 27794);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1947, 23, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_removable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1947, 63, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 34, "start", tr1))(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 73, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1954, 9, "remove_from_map", tr2))(tr2);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 73, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current + RTWA(1947, 23, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(8);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 53, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_in_map", EX_POST);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1947, 23, dtype));
		if ((EIF_BOOLEAN) !tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("map_unset", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 53, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
}

/* is_insertable */

EIF_UNION Fn4n1zk (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("is_insertable", RTUD(1947), Current, 0, 1, 27791);
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

EIF_UNION Fn4opw6 (EIF_REFERENCE Current)
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
	RTEAA("is_removable", RTUD(1947), Current, 0, 0, 27792);
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

/* make_with_color */

void Fn4jje7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	RTEAA("make_with_color", RTUD(1947), Current, 0, 3, 27789);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("r_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("g_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg2 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("b_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg3 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1947, 54, dtype))(Current);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1947, 58, Current));
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 58, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(1947, 9, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1947, 9, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
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

/* call */

void Fn4ne0y (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_32 loc2 = (EIF_REAL_32) 0;
	EIF_REAL_32 loc3 = (EIF_REAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(7,ur1);
	RTLR(4,loc1);
	RTLR(6,loc4);
	RTLR(8,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL32, &loc2);
	RTLU(SK_REAL32, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("call", RTUD(1947), Current, 4, 2, 27790);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("from_location_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("to_location_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2195, 35, "count", tr1));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 55, "first", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(5);
		loc4 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 55, "first", loc4))(loc4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1954, 52, "position", tr1));
		loc4 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(6);
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
		tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(2010, 47, "x", loc4));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
		tr8_5 = *(EIF_REAL_64 *)(loc4 + RTVA(2010, 48, "y", loc4));
		tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 - tr8_2)), (EIF_REAL_64) (tr8_3)) + (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64)(tr8_4 - tr8_5)), (EIF_REAL_64) (tr8_6)));
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1947, 29, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		tr4_1 = (EIF_REAL_32) (tr8_1);
		loc2 = (EIF_REAL_32)tr4_1;

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 34, "start", tr1))(tr1);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 88, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(10);
			loc4 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", loc4))(loc4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1954, 52, "position", tr1));
			loc4 = (EIF_REFERENCE)RTCCL(tr2);
			RTHOOK(11);
			tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
			tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(2010, 47, "x", loc4));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
			tr8_5 = *(EIF_REAL_64 *)(loc4 + RTVA(2010, 48, "y", loc4));
			tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 - tr8_2)), (EIF_REAL_64) (tr8_3)) + (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64)(tr8_4 - tr8_5)), (EIF_REAL_64) (tr8_6)));
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1947, 29, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			tr4_1 = (EIF_REAL_32) (tr8_1);
			loc3 = (EIF_REAL_32)tr4_1;

			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc2 > loc3)) {
				RTHOOK(13);
				loc2 = (EIF_REAL_32)loc3;
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = (EIF_REFERENCE)RTCCL(tr2);
			}

			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 88, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
			;
		}

		RTHOOK(16);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1954, 85, "take", loc1))(loc1, ur1x, ur2x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg2
#undef arg1
}

/* enlist */

void Fn4qnp1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
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
	RTEAA("enlist", RTUD(1947), Current, 0, 1, 27795);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_taxi_not_busy", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(1954, 84, "busy", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN) 0), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2195, 35, "count", tr1));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2195, 145, "force_last", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("a_taxi_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2195, 35, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
#undef arg1
}

/* delist */

void Fn4rano (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
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
	RTEAA("delist", RTUD(1947), Current, 0, 1, 27796);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_taxi_not_available", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(1954, 84, "busy", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN) 1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2195, 89, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2195, 152, "delete", tr1))(tr1, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp0p8ee (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("taxis_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 57, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("available_taxis_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 56, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("color_set", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1947, 58, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1948 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

