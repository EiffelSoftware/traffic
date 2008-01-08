/*
 * Code for class DRAWABLE_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn1imja(EIF_REFERENCE, EIF_UNION);
extern void Fn1kkb5(EIF_REFERENCE);
extern EIF_UNION Fn1hbn1(EIF_REFERENCE, EIF_UNION);
extern void Fn1df1b(EIF_REFERENCE);
extern void Fn1cs3p(EIF_REFERENCE);
extern EIF_UNION Fn1hzlo(EIF_REFERENCE, EIF_UNION);
extern void Fn1b452(EIF_REFERENCE, EIF_UNION);
extern void Fn1jxej(EIF_REFERENCE);
extern void Fp0k1w1(EIF_REFERENCE, int);
extern void EIF_Minit1934(void);

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

/* draw */

void Fn1imja (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("draw", RTUD(1933), Current, 0, 1, 27644);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("color_not_void", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 37, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1933, 34, dtype));
	if (tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1933, 37, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1979, 21, "set_foreground_color", tr1))(tr1, ur1x);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1933, 42, dtype))(Current);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1933, 44, dtype))(Current);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("canvas_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* validate */

void Fn1kkb5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("validate", RTUD(1933), Current, 0, 0, 27646);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1933, 35, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(2);
		*(EIF_BOOLEAN *)(Current + RTWA(1933, 35, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* real_to_integer_coordinate */

EIF_UNION Fn1hbn1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("real_to_integer_coordinate", RTUD(1933), Current, 2, 1, 27642);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_real_coordinate_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("canvas_visible_area_width_not_zero", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(2);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr2))(tr2)).value.EIF_REAL_32_value);
		tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
		RTTE((EIF_BOOLEAN)(tr4_1 != tr4_2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("canvas_visible_area_height_not_zero", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(3);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr2))(tr2)).value.EIF_REAL_32_value);
		tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
		RTTE((EIF_BOOLEAN)(tr4_1 != tr4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 48, "x", arg1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(4);
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", tr2))(tr2)).value.EIF_REAL_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 63, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_3 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(4);
	tr4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr2))(tr2)).value.EIF_REAL_32_value);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) (((EIF_REAL_32)((EIF_REAL_32)(tr4_1 - tr4_2) * tr4_3))) /  (EIF_REAL_64) (tr4_4)));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 162, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(5);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", tr2))(tr2)).value.EIF_REAL_32_value);
	tr4_2 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 49, "y", arg1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 162, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_3 = (EIF_REAL_32) (ti4_2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(5);
	tr4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr2))(tr2)).value.EIF_REAL_32_value);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) (((EIF_REAL_32)((EIF_REAL_32)(tr4_1 - tr4_2) * tr4_3))) /  (EIF_REAL_64) (tr4_4)));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + ti4_2);
	RTHOOK(6);
	tr1 = RTLN(RTUD(467));
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(1102, 1, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(6);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* show */

void Fn1df1b (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("show", RTUD(1933), Current, 0, 0, 27640);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1933, 34, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1933, 43, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("shown", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1933, 34, dtype));
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

/* hide */

void Fn1cs3p (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("hide", RTUD(1933), Current, 0, 0, 27639);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1933, 34, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1933, 43, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("hidden", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1933, 34, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

/* integer_to_real_coordinate */

EIF_UNION Fn1hzlo (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REAL_32 loc2 = (EIF_REAL_32) 0;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL32, &loc1);
	RTLU(SK_REAL32, &loc2);
	RTEAA("integer_to_real_coordinate", RTUD(1933), Current, 2, 1, 27643);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_integer_coordinate_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("canvas_width_not_zero", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 63, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("canvas_height_not_zero", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 162, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", arg1))(arg1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(4);
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr2))(tr2)).value.EIF_REAL_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 63, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_3 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(4);
	tr4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", tr2))(tr2)).value.EIF_REAL_32_value);
	loc1 = (EIF_REAL_32)(EIF_REAL_32)(((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3))) + tr4_4);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", arg1))(arg1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(5);
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr2))(tr2)).value.EIF_REAL_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 162, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_3 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(5);
	tr4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", tr2))(tr2)).value.EIF_REAL_32_value);
	loc2 = (EIF_REAL_32)(EIF_REAL_32)(((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3))) + tr4_4);
	RTHOOK(6);
	tr1 = RTLN(RTUD(1925));
	ur4_1 = loc1;
	ur4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(6);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* set_color */

void Fn1b452 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_color", RTUD(1933), Current, 0, 1, 27638);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_color_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1933, 37, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1933, 43, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("color_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 37, dtype));
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

/* invalidate */

void Fn1jxej (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("invalidate", RTUD(1933), Current, 0, 0, 27645);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1933, 35, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 36, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1979, 263, "redraw", tr1))(tr1);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

void Fp0k1w1 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("color_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1933, 37, Dtype(Current)));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1934 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

