/*
 * Code for class DRAWABLE_PIXMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn693b6(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn7co2o(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn7aq9t(EIF_REFERENCE);
extern EIF_UNION Fn7dzyx(EIF_REFERENCE, EIF_UNION);
extern void Fn7b041(EIF_REFERENCE);
extern EIF_UNION Fn7e9t5(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn7emwj(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn7fxrs(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn7db0a(EIF_REFERENCE, EIF_UNION);
extern void Fn7bd7f(EIF_REFERENCE, EIF_UNION);
extern void Fp0xcpm(EIF_REFERENCE, int);
extern void EIF_Minit1962(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

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

void Fn693b6 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ur4_3x = {0, SK_REAL32};
#undef ur4_3
#define ur4_3 ur4_3x.value.EIF_REAL_32_value
	EIF_UNION ur4_4x = {0, SK_REAL32};
#undef ur4_4
#define ur4_4 ur4_4x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(1,arg1);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1961), Current, 0, 2, 27898);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_pixmap_position_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_sub_pixmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(1961, 89, Current));
	tr4_1 = *(EIF_REAL_32 *)(arg2 + RTVA(1925, 48, "x", arg2));
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(arg2 + RTVA(1925, 49, "y", arg2));
	ur4_2 = tr4_2;
	tr4_3 = *(EIF_REAL_32 *)(arg2 + RTVA(1925, 48, "x", arg2));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr4_4 = (EIF_REAL_32) (ti4_1);
	ur4_3 = (EIF_REAL_32)(tr4_3 + tr4_4);
	tr4_5 = *(EIF_REAL_32 *)(arg2 + RTVA(1925, 49, "y", arg2));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr4_6 = (EIF_REAL_32) (ti4_1);
	ur4_4 = (EIF_REAL_32)(tr4_5 + tr4_6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1809, 31, Dtype(tr1)))(tr1, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLN(RTUD(840));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 1, Dtype(tr1)))(tr1, ur4_1x, ur4_2x, ur4_3x);
	RTNHOOK(5);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 72, dtype))(Current, ur1x);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(1961, 99, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current + RTWA(1961, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("bounding_box_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("pixmap_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("shown", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1961, 9, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* integer_to_real_x */

EIF_UNION Fn7co2o (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("integer_to_real_x", RTUD(1961), Current, 0, 1, 27902);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) (arg1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr1))(tr1)).value.EIF_REAL_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_3 = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32)(EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr4_1 = (EIF_REAL_32) (arg1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr1))(tr1)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_3 = (EIF_REAL_32) (ti4_1);
		if ((EIF_BOOLEAN)(Result == (EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3)))) {
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
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg1
}

/* bounding_box */

EIF_UNION Fn7aq9t (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(1961,89, Dtype(Current)));
	return r;
}

/* real_to_integer_x_floor */

EIF_UNION Fn7dzyx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("real_to_integer_x_floor", RTUD(1961), Current, 0, 1, 27904);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr1))(tr1)).value.EIF_REAL_32_value);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr1))(tr1)).value.EIF_REAL_32_value);
		tr1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* draw_object */

void Fn7b041 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
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
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_5x = {0, SK_INT32};
#undef ui4_5
#define ui4_5 ui4_5x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_6x = {0, SK_INT32};
#undef ui4_6
#define ui4_6 ui4_6x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	EIF_REAL_32 tr4_7;
	EIF_REAL_32 tr4_8;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(9);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(0,Current);
	RTLR(8,loc1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTEAA("draw_object", RTUD(1961), Current, 10, 0, 27901);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1961, 9, dtype));
	if (tc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(2);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", tr2))(tr2)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", tr1))(tr1)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 94, dtype))(Current, ur4_1x)).value.EIF_INTEGER_32_value);
		RTNHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_2 = eif_max_int32 (ti4_1,ui4_1);
		loc5 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(3);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", tr2))(tr2)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", tr1))(tr1)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 96, dtype))(Current, ur4_1x)).value.EIF_INTEGER_32_value);
		RTNHOOK(3);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_2 = eif_max_int32 (ti4_1,ui4_1);
		loc6 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(4);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 44, "right_bound", tr2))(tr2)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", tr1))(tr1)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 95, dtype))(Current, ur4_1x)).value.EIF_INTEGER_32_value);
		RTNHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		ti4_2 = eif_min_int32 (ti4_1,ui4_1);
		loc7 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(5);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 41, "upper_bound", tr2))(tr2)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", tr1))(tr1)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 97, dtype))(Current, ur4_1x)).value.EIF_INTEGER_32_value);
		RTNHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		ti4_2 = eif_min_int32 (ti4_1,ui4_1);
		loc8 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(6);
		loc9 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 - loc5);
		RTHOOK(7);
		loc10 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc8 - loc6);
		RTHOOK(8);
		tr1 = RTLN(RTUD(1925));
		tr4_1 = (EIF_REAL_32) (loc5);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr2))(tr2)).value.EIF_REAL_32_value);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr2))(tr2)).value.EIF_INTEGER_32_value);
		tr4_3 = (EIF_REAL_32) (ti4_1);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", tr2))(tr2)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3))) + tr4_4);
		tr4_5 = (EIF_REAL_32) (loc8);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr2))(tr2)).value.EIF_REAL_32_value);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr2))(tr2)).value.EIF_INTEGER_32_value);
		tr4_7 = (EIF_REAL_32) (ti4_1);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", tr2))(tr2)).value.EIF_REAL_32_value);
		ur4_2 = (EIF_REAL_32)(((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_5 * tr4_6)) /  (EIF_REAL_64) (tr4_7))) + tr4_8);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
		RTNHOOK(8);
		RTCI2(tr1);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(956, 18, "clear", tr1))(tr1);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = eif_max_int32 (loc9,ui4_1);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 1L);
		ti4_2 = eif_max_int32 (loc10,ui4_2);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1110, 10, "set_size", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ur1 = RTCCL(tr2);
		tr3 = RTLN(RTUD(468));
		ui4_3 = loc5;
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr4))(tr4)).value.EIF_INTEGER_32_value);
		ui4_4 = (EIF_INTEGER_32)(ti4_1 - loc8);
		ti4_2 = eif_abs_int32 (loc9);
		ui4_5 = ti4_2;
		ti4_3 = eif_abs_int32 (loc10);
		ui4_6 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(984, 0, Dtype(tr3)))(tr3, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTNHOOK(11);
		RTCI2(tr3);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(956, 28, "draw_sub_pixmap", tr1))(tr1, ui4_1x, ui4_2x, ur1x, ur2x);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 63, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		ui4_1 = loc9;
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 92, dtype))(Current, ui4_1x)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(12);
		tr4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr2))(tr2)).value.EIF_REAL_32_value);
		tr1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTNHOOK(12);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = eif_max_int32 (ti4_1,ui4_1);
		loc3 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1979, 162, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		ui4_1 = loc10;
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 93, dtype))(Current, ui4_1x)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
		RTNHOOK(13);
		tr4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr2))(tr2)).value.EIF_REAL_32_value);
		tr1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTNHOOK(13);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = eif_max_int32 (ti4_1,ui4_1);
		loc4 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		ui4_1 = loc3;
		ui4_2 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1110, 12, "stretch", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1961, 44, dtype))(Current);
		RTHOOK(16);
		ur1 = RTCCL(loc2);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1961, 18, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 65, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_2 = ti4_2;
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		ur1 = RTCCL(tr2);
		tr3 = RTLN(RTUD(468));
		ui4_3 = ((EIF_INTEGER_32) 0L);
		ui4_4 = ((EIF_INTEGER_32) 0L);
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr4))(tr4)).value.EIF_INTEGER_32_value);
		ui4_5 = ti4_3;
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr4))(tr4)).value.EIF_INTEGER_32_value);
		ui4_6 = ti4_4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(984, 0, Dtype(tr3)))(tr3, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTNHOOK(17);
		RTCI2(tr3);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1979, 68, "draw_sub_pixmap", tr1))(tr1, ui4_1x, ui4_2x, ur1x, ur2x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(12);
	RTEE;
}

/* real_to_integer_y_floor */

EIF_UNION Fn7e9t5 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("real_to_integer_y_floor", RTUD(1961), Current, 0, 1, 27906);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr1))(tr1)).value.EIF_REAL_32_value);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr1))(tr1)).value.EIF_REAL_32_value);
		tr1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* real_to_integer_x_ceiling */

EIF_UNION Fn7emwj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("real_to_integer_x_ceiling", RTUD(1961), Current, 0, 1, 27905);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr1))(tr1)).value.EIF_REAL_32_value);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 8, "ceiling", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr1))(tr1)).value.EIF_REAL_32_value);
		tr1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 8, "ceiling", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* real_to_integer_y_ceiling */

EIF_UNION Fn7fxrs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("real_to_integer_y_ceiling", RTUD(1961), Current, 0, 1, 27907);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr1))(tr1)).value.EIF_REAL_32_value);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 8, "ceiling", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr1))(tr1)).value.EIF_REAL_32_value);
		tr1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(arg1 * tr4_1)) /  (EIF_REAL_64) (tr4_2)));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 8, "ceiling", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* integer_to_real_y */

EIF_UNION Fn7db0a (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("integer_to_real_y", RTUD(1961), Current, 0, 1, 27903);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) (arg1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr1))(tr1)).value.EIF_REAL_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_3 = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32)(EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr4_1 = (EIF_REAL_32) (arg1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr1))(tr1)).value.EIF_REAL_32_value);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr4_3 = (EIF_REAL_32) (ti4_1);
		if ((EIF_BOOLEAN)(Result == (EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 * tr4_2)) /  (EIF_REAL_64) (tr4_3)))) {
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
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg1
}

/* set_position */

void Fn7bd7f (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ur4_3x = {0, SK_REAL32};
#undef ur4_3
#define ur4_3 ur4_3x.value.EIF_REAL_32_value
	EIF_UNION ur4_4x = {0, SK_REAL32};
#undef ur4_4
#define ur4_4 ur4_4x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_position", RTUD(1961), Current, 0, 1, 27900);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_coordinate_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(1961, 89, Current));
	tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 48, "x", arg1));
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 49, "y", arg1));
	ur4_2 = tr4_2;
	tr4_3 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 48, "x", arg1));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr4_4 = (EIF_REAL_32) (ti4_1);
	ur4_3 = (EIF_REAL_32)(tr4_3 + tr4_4);
	tr4_5 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 49, "y", arg1));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr4_6 = (EIF_REAL_32) (ti4_1);
	ur4_4 = (EIF_REAL_32)(tr4_5 + tr4_6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1809, 31, Dtype(tr1)))(tr1, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp0xcpm (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("pixmap_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 98, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("stretched_pixmap_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 99, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("bounding_box_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1961, 89, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1962 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

