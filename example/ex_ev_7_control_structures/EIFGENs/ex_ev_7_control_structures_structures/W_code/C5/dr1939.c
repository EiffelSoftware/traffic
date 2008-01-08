/*
 * Code for class DRAWABLE_POLYLINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn2kfoq(EIF_REFERENCE);
extern void Fn2ihvv(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn2nocu(EIF_REFERENCE);
extern EIF_UNION Fn2pl5p(EIF_REFERENCE);
extern void Fn2jsq3(EIF_REFERENCE, EIF_UNION);
extern void Fn2i4th(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn2m0e7(EIF_REFERENCE);
extern void Fp0oala(EIF_REFERENCE, int);
extern void EIF_Minit1939(void);

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

/* enable_dashed_line */

void Fn2kfoq (EIF_REFERENCE Current)
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
	RTEAA("enable_dashed_line", RTUD(1938), Current, 0, 0, 27690);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1938, 49, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1938, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("dashed_true", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, 49, dtype));
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

/* make */

void Fn2ihvv (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1938), Current, 0, 2, 27687);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_point_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_void_element", EX_PRE);
		ur1 = NULL;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1938, 44, dtype))(Current, ur1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1938, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1938, 45, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1938, 47, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(1938, 48, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	*(EIF_REAL_32 *)(Current + RTWA(1938, 53, dtype)) = (EIF_REAL_32)arg2;
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current + RTWA(1938, 49, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(8);
	tr1 = RTLN(RTUD(840));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 1, Dtype(tr1)))(tr1, ur4_1x, ur4_2x, ur4_3x);
	RTNHOOK(8);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1938, 31, dtype))(Current, ur1x);
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current + RTWA(1938, 1, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_dashed", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, 49, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("points_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("width_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1938, 47, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1938, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("current_width_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1938, 48, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1938, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("reference_set", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1938, 53, dtype));
		if ((EIF_BOOLEAN)(tr4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("shown", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, 1, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* draw_object */

void Fn2nocu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 loc3 = (EIF_REAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(1,Current);
	RTLR(5,ur1);
	RTLR(3,loc4);
	RTLR(0,loc5);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REAL32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("draw_object", RTUD(1938), Current, 5, 0, 27693);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1938,1462,467,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		loc4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1938, 23, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(5);
		ur1 = RTCCL(loc4);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", loc5))(loc5, ur1x, ui4_1x);
		RTHOOK(6);
		loc1++;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
		;
	}

	RTHOOK(7);
	loc3 = *(EIF_REAL_32 *)(Current + RTWA(1938, 53, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 4, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1979, 264, "visible_area", tr1));
	RTNHOOK(7);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr2))(tr2)).value.EIF_REAL_32_value);
	loc3 = (EIF_REAL_32)(EIF_REAL_32)((EIF_REAL_64) (loc3) /  (EIF_REAL_64) (tr4_1));

	RTHOOK(8);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	if ((EIF_BOOLEAN)(loc3 > tr4_1)) {
		RTHOOK(9);
		tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
		loc3 = (EIF_REAL_32)tr4_1;
	}

	RTHOOK(10);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1938, 47, dtype));
	tr4_1 = (EIF_REAL_32) (ti4_2);
	tr1 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32)(tr4_1 * loc3);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc2 = (EIF_INTEGER_32)ti4_2;

	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	}

	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + RTWA(1938, 48, dtype)) = (EIF_INTEGER_32)loc2;
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 4, dtype));
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1979, 127, "set_line_width", tr1))(tr1, ui4_1x);

	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 38, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 38, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1979, 21, "set_foreground_color", tr1))(tr1, ur1x);
	}


	RTHOOK(17);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, 49, dtype));
	if (tc1) {
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 4, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1979, 52, "enable_dashed_line_style", tr1))(tr1);
	}

	RTHOOK(19);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 4, dtype));
	ur1 = RTCCL(loc5);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1979, 120, "draw_polyline", tr1))(tr1, ur1x, uc1x);

	RTHOOK(20);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, 49, dtype));
	if (tc1) {
		RTHOOK(21);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 4, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1979, 55, "disable_dashed_line_style", tr1))(tr1);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(7);
	RTEE;
}

/* default_width */

EIF_UNION Fn2pl5p (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	return r;
}
/* set_width */

void Fn2jsq3 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_width", RTUD(1938), Current, 0, 1, 27689);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(1938, 47, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1938, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_width", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1938, 47, dtype));
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

/* set_points */

void Fn2i4th (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_points", RTUD(1938), Current, 0, 1, 27688);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("new_points_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1938, 32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_points", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
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

EIF_UNION Fn2m0e7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(9);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(2,Current);
	RTLR(8,Result);
	RTLR(0,loc2);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("bounding_box", RTUD(1938), Current, 3, 0, 27692);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 48, "x", tr3));
	ur4_1 = tr4_1;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr4_2 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 49, "y", tr3));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr4_1 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 48, "x", tr3));
	ur4_1 = tr4_1;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr4_2 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 49, "y", tr3));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
		tr4_2 = *(EIF_REAL_32 *)(loc2 + RTVA(1925, 48, "x", loc2));
		if ((EIF_BOOLEAN)(tr4_1 > tr4_2)) {
			RTHOOK(6);
			tr1 = RTLN(RTUD(1925));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
			ui4_1 = loc1;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr4_1 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 48, "x", tr3));
			ur4_1 = tr4_1;
			tr4_2 = *(EIF_REAL_32 *)(loc2 + RTVA(1925, 49, "y", loc2));
			ur4_2 = tr4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
			RTNHOOK(6);
			RTCI2(tr1);
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
		}


		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
		tr4_2 = *(EIF_REAL_32 *)(loc2 + RTVA(1925, 49, "y", loc2));
		if ((EIF_BOOLEAN)(tr4_1 > tr4_2)) {
			RTHOOK(8);
			tr1 = RTLN(RTUD(1925));
			tr4_1 = *(EIF_REAL_32 *)(loc2 + RTVA(1925, 48, "x", loc2));
			ur4_1 = tr4_1;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
			ui4_1 = loc1;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr4_2 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 49, "y", tr3));
			ur4_2 = tr4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
			RTNHOOK(8);
			RTCI2(tr1);
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
		}


		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
		tr4_2 = *(EIF_REAL_32 *)(loc3 + RTVA(1925, 48, "x", loc3));
		if ((EIF_BOOLEAN)(tr4_1 <= tr4_2)) {
			RTHOOK(10);
			tr1 = RTLN(RTUD(1925));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
			ui4_1 = loc1;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			tr4_1 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 48, "x", tr3));
			ur4_1 = tr4_1;
			tr4_2 = *(EIF_REAL_32 *)(loc3 + RTVA(1925, 49, "y", loc3));
			ur4_2 = tr4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
			RTNHOOK(10);
			RTCI2(tr1);
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
		}


		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
		tr4_2 = *(EIF_REAL_32 *)(loc3 + RTVA(1925, 49, "y", loc3));
		if ((EIF_BOOLEAN)(tr4_1 <= tr4_2)) {
			RTHOOK(12);
			tr1 = RTLN(RTUD(1925));
			tr4_1 = *(EIF_REAL_32 *)(loc3 + RTVA(1925, 48, "x", loc3));
			ur4_1 = tr4_1;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
			ui4_1 = loc1;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 3, "entry", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr4_2 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 49, "y", tr3));
			ur4_2 = tr4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
			RTNHOOK(12);
			RTCI2(tr1);
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
		}

		RTHOOK(13);
		loc1++;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
		;
	}

	RTHOOK(14);
	tr1 = RTLN(RTUD(1809));
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1809, 30, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(14);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("bounding_box_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

void Fp0oala (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("points_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1938, 52, Dtype(Current)));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1939 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

