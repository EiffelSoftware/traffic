/*
 * Code for class TRAFFIC_BUILDING_SIMPLE_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn4ahbg(EIF_REFERENCE);
extern void Fn4a382(EIF_REFERENCE);
extern void Fn39udu(EIF_REFERENCE, EIF_UNION);
extern void Fn38jil(EIF_REFERENCE);
extern void Fn386f7(EIF_REFERENCE, EIF_UNION);
extern void Fn37wkz(EIF_REFERENCE);
extern void EIF_Minit1946(void);

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

void Fn4ahbg (EIF_REFERENCE Current)
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
	RTEAA("highlight", RTUD(1945), Current, 0, 0, 27781);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(2);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(3);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	}

	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(1945, 30, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("highlighted", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1945, 30, dtype));
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

void Fn4a382 (EIF_REFERENCE Current)
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
	RTEAA("unhighlight", RTUD(1945), Current, 0, 0, 27782);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(2);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = RTLN(RTUD(840));
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
		ui4_1 = ti4_1;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
		ui4_2 = ti4_2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(3);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	}

	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(1945, 30, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_highlighted", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1945, 30, dtype));
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

/* set_highlight_color */

void Fn39udu (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_highlight_color", RTUD(1945), Current, 0, 1, 27780);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2126, 46, "is_spotlighted", tr1));
	if (tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(4);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(5);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
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

/* update */

void Fn38jil (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
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

	RTLI(8);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(0,Current);
	RTLR(4,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update", RTUD(1945), Current, 0, 0, 27778);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2126, 46, "is_spotlighted", tr1));
	if (tc1) {

		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(3);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 31, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(4);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		} else {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		}

	} else {

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(8);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(9);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		} else {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		}

	}

	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(12);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(12);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(12);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(12);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 47, "x", tr5));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(12);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 48, "y", tr5));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(12);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1934, 48, "set_points", tr1))(tr1, ur1x, ur2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_color */

void Fn386f7 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_color", RTUD(1945), Current, 0, 1, 27779);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2126, 46, "is_spotlighted", tr1));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(4);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = RTLN(RTUD(840));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 34, "red", tr3));
			ui4_1 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 35, "green", tr3));
			ui4_2 = ti4_2;
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 64, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1814, 36, "blue", tr3));
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(5);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
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

/* define */

void Fn37wkz (EIF_REFERENCE Current)
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
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
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
	RTEAA("define", RTUD(1945), Current, 0, 0, 27777);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(1945, 80, Current));
	tr2 = RTLN(RTUD(1925));
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 69, "corner_1", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 47, "x", tr5));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1945, 2, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2126, 71, "corner_3", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr5 + RTVA(2010, 48, "y", tr5));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1934, 43, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1945, 46, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 49, "set_edge_color", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1945, 80, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1945, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1934, 33, "set_color", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1946 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

