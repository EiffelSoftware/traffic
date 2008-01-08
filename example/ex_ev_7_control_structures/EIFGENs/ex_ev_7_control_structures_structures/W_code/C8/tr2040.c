/*
 * Code for class TRAFFIC_BUILDING_ICON_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo8a4lb(EIF_REFERENCE);
extern void Fo8bsiy(EIF_REFERENCE);
extern void Fo78juu(EIF_REFERENCE);
extern void Fo8ahnp(EIF_REFERENCE, EIF_UNION);
extern void Fo77ww7(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo786sg(EIF_REFERENCE);
extern void Fo79up2(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2040(void);

extern EIF_REFERENCE _fAabpqks();
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

/* highlight */

void Fo8a4lb (EIF_REFERENCE Current)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("highlight", RTUD(2039), Current, 0, 0, 30299);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(2);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(3);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	}

	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(2039, 33, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("highlighted", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2039, 33, dtype));
		if (tc1) {
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

/* unhighlight */

void Fo8bsiy (EIF_REFERENCE Current)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("unhighlight", RTUD(2039), Current, 0, 0, 30300);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(2);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(3);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 78, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 78, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	}

	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(2039, 33, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_highlighted", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2039, 33, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

/* define */

void Fo78juu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("define", RTUD(2039), Current, 0, 0, 30295);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_highlight_color */

void Fo8ahnp (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(4,tr3);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_highlight_color", RTUD(2039), Current, 0, 1, 30298);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2126, 46, "is_spotlighted", tr1));
	if (tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(4);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 34, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(5);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
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

/* make_with_filename */

void Fo77ww7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_UNION ur8_3x = {0, SK_REAL64};
#undef ur8_3
#define ur8_3 ur8_3x.value.EIF_REAL_64_value
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
	EIF_REFERENCE tr5 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(2,tr1);
	RTLR(6,tr2);
	RTLR(4,arg1);
	RTLR(0,arg2);
	RTLR(10,tr5);
	RTLR(1,Current);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(5,loc1);
	RTLR(3,ur1);
	RTLR(9,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("make_with_filename", RTUD(2039), Current, 1, 2, 30294);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_filename_valid", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg2))(arg2)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_fileexists", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 70, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 42, "is_file_readable", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2039, 52, dtype))(Current);
	RTHOOK(5);
	tr1 = RTLN(RTUD(933));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1110, 9, "set_with_named_file", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(2039, 86, Current));
	ur1 = RTCCL(loc1);
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = *(EIF_REFERENCE *)(tr3 + RTVA(2126, 63, "center", tr3));
	RTNHOOK(7);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = *(EIF_REFERENCE *)(tr3 + RTVA(2126, 63, "center", tr3));
	RTNHOOK(7);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr4_2 = (EIF_REAL_32) (tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(7);
	RTCI2(tr2);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1961, 88, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2039, 86, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 5, "width", loc1))(loc1)).value.EIF_INTEGER_32_value);
	tr8_1 = (EIF_REAL_64) (ti4_1);
	ur8_1 = tr8_1;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(2126, 65, "height", tr2));
	ur8_2 = tr8_2;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(956, 6, "height", loc1))(loc1)).value.EIF_INTEGER_32_value);
	tr8_3 = (EIF_REAL_64) (ti4_1);
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2126, 74, "set_size", tr1))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTHOOK(9);
	tr1 = RTLNSMART(RTWCT(2039, 87, Current));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(9);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)(tr8_1 - tr8_2));
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(9);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)((EIF_REAL_64)-tr8_1 + tr8_2));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(9);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(9);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 47, "x", tr5));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)(tr8_1 + tr8_2));
	ur4_1 = tr4_1;
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(9);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 48, "y", tr5));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)((EIF_REAL_64)-tr8_1 - tr8_2));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(9);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1934, 43, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 78, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 78, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 86, dtype));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(12);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(12);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(12);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1961, 90, "set_position", tr1))(tr1, ur1x);
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2039, 50, dtype))(Current, ur1x);
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 86, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2039, 50, dtype))(Current, ur1x);
	RTHOOK(15);
	*(EIF_BOOLEAN *)(Current + RTWA(2039, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(16);
	*(EIF_BOOLEAN *)(Current + RTWA(2039, 33, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2126, 42, "changed_event", tr1));
	RTNHOOK(17);
	{
		static int16 typarr [] = {2039,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {2039,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAabpqks, (EIF_POINTER)(0),2039, 81, 0, 0, 0, 1, 0, tr1, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("internal_color_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 56, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* update */

void Fo786sg (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr5 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(6,tr5);
	RTLR(0,Current);
	RTLR(5,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update", RTUD(2039), Current, 0, 0, 30296);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2126, 46, "is_spotlighted", tr1));
	if (tc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2039, 84, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2039, 85, dtype))(Current);
	}

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)(tr8_1 - tr8_2));
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)((EIF_REAL_64)-tr8_1 + tr8_2));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(4);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 47, "x", tr5));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)(tr8_1 + tr8_2));
	ur4_1 = tr4_1;
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 48, "y", tr5));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)((EIF_REAL_64)-tr8_1 - tr8_2));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(4);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1934, 48, "set_points", tr1))(tr1, ur1x, ur2x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 86, dtype));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(5);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1961, 90, "set_position", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_color */

void Fo79up2 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(4,tr3);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_color", RTUD(2039), Current, 0, 1, 30297);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 2, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2126, 46, "is_spotlighted", tr1));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(4);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2039, 69, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(5);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 78, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2039, 87, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2039, 78, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
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

void EIF_Minit2040 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

