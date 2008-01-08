/*
 * Code for class DRAWABLE_CIRCLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn13mci(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn18suh(EIF_REFERENCE);
extern void Fn10doe(EIF_REFERENCE, EIF_UNION);
extern void Fn17hy8(EIF_REFERENCE);
extern EIF_UNION Fn174wv(EIF_REFERENCE);
extern void Fn14w7r(EIF_REFERENCE, EIF_UNION);
extern void Fn16u0m(EIF_REFERENCE);
extern void Fn13894(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn12zew(EIF_REFERENCE);
extern void Fn1562_(EIF_REFERENCE);
extern void Fp0m_p_(EIF_REFERENCE, int);
extern void EIF_Minit1937(void);

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

/* set_diameter */

void Fn13mci (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	RTEAA("set_diameter", RTUD(1936), Current, 0, 1, 27669);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1936, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_diameter", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* default_diameter */

EIF_UNION Fn18suh (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	return r;
}
/* make */

void Fn10doe (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
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
	RTEAA("make", RTUD(1936), Current, 0, 1, 27667);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_center_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1936, 55, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1936, 50, dtype))(Current, ui4_1x);
	RTHOOK(3);
	tr1 = RTLN(RTUD(840));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 1, Dtype(tr1)))(tr1, ur4_1x, ur4_2x, ur4_3x);
	RTNHOOK(3);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1936, 31, dtype))(Current, ur1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1936, 56, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1936, 48, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1936, 49, dtype))(Current, ur1x);
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(1936, 1, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("width_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 44, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1936, 55, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("diameter_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1936, 56, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("center_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("shown", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1936, 1, dtype));
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* draw_object */

void Fn17hy8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(1,Current);
	RTLR(0,loc1);
	RTLR(5,loc2);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("draw_object", RTUD(1936), Current, 2, 0, 27674);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1936, 47, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 36, "upper_left", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1936, 23, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1936, 47, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 39, "lower_right", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1936, 23, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 4, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 44, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1979, 127, "set_line_width", tr1))(tr1, ui4_1x);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 38, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1936, 38, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1979, 21, "set_foreground_color", tr1))(tr1, ur1x);
	}


	RTHOOK(6);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1936, 51, dtype));
	if (tc1) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 4, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_2 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_3 = (EIF_INTEGER_32)(ti4_3 - ti4_4);
		ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_4 = (EIF_INTEGER_32)(ti4_5 - ti4_6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1979, 71, "fill_ellipse", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 4, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_2 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 6, "x", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_3 = (EIF_INTEGER_32)(ti4_3 - ti4_4);
		ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1102, 8, "y", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_4 = (EIF_INTEGER_32)(ti4_5 - ti4_6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1979, 72, "draw_ellipse", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(4);
	RTEE;
}

/* default_width */

EIF_UNION Fn174wv (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* set_width */

void Fn14w7r (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	RTEAA("set_width", RTUD(1936), Current, 0, 1, 27671);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(1936, 44, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1936, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_width", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* disable_filled */

void Fn16u0m (EIF_REFERENCE Current)
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
	RTEAA("disable_filled", RTUD(1936), Current, 0, 0, 27673);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1936, 51, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1936, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_filled", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1936, 51, dtype));
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

/* set_center */

void Fn13894 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_center", RTUD(1936), Current, 0, 1, 27670);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_center_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1936, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_center", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype));
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

/* bounding_box */

EIF_UNION Fn12zew (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
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

	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(3,tr3);
	RTLR(5,tr4);
	RTLR(2,Current);
	RTLR(7,Result);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("bounding_box", RTUD(1936), Current, 0, 0, 27668);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1809));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 48, "x", tr3));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype));
	tr4_2 = (EIF_REAL_32) (((EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)))));
	ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype));
	tr4_3 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 49, "y", tr3));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype));
	tr4_4 = (EIF_REAL_32) (((EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)))));
	ur4_2 = (EIF_REAL_32)(tr4_3 - tr4_4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr4 + RTVA(1925, 48, "x", tr4));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype));
	tr4_2 = (EIF_REAL_32) (((EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)))));
	ur4_1 = (EIF_REAL_32)(tr4_1 + tr4_2);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, dtype));
	tr4_3 = *(EIF_REAL_32 *)(tr4 + RTVA(1925, 49, "y", tr4));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1936, 45, dtype));
	tr4_4 = (EIF_REAL_32) (((EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)))));
	ur4_2 = (EIF_REAL_32)(tr4_3 + tr4_4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1809, 30, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bounding_box_not_void", EX_POST);
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

/* enable_filled */

void Fn1562_ (EIF_REFERENCE Current)
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
	RTEAA("enable_filled", RTUD(1936), Current, 0, 0, 27672);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1936, 51, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1936, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_filled", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1936, 51, dtype));
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

void Fp0m_p_ (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("center_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1936, 46, Dtype(Current)));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1937 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

