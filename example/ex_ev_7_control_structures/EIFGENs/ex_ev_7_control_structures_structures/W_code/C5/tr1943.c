/*
 * Code for class TRAFFIC_LINE_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn3unz7(EIF_REFERENCE);
extern void Fn3vyvg(EIF_REFERENCE);
extern void Fn3wls2(EIF_REFERENCE);
extern void Fn3tc3z(EIF_REFERENCE, EIF_UNION);
extern void Fn3yjly(EIF_REFERENCE, EIF_UNION);
extern void Fn3xwob(EIF_REFERENCE, EIF_UNION);
extern void Fn3vaxu(EIF_REFERENCE);
extern void Fn3y6jk(EIF_REFERENCE, EIF_UNION);
extern void Fn3w8qp(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3zug6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3t_1l(EIF_REFERENCE);
extern void EIF_Minit1943(void);

extern EIF_REFERENCE _fAabo2kj_2();
extern EIF_REFERENCE _fAabofmx_2();
extern EIF_REFERENCE _fAabk6yt();
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

/* default_highlight_color */

RTOID (Fn3unz7)

EIF_UNION Fn3unz7 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fn3unz7);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("default_highlight_color", RTUD(1942), Current, 0, 0, 27759);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* highlight */

void Fn3vyvg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("highlight", RTUD(1942), Current, 0, 0, 27761);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 30, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(4);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1942, 30, dtype));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
			RTHOOK(3);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	} else {

		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
		RTHOOK(7);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr2 = RTLN(RTUD(1814));
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 73, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 15, "red_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 73, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 16, "green_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_2 = ti4_2;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 73, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 17, "blue_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(8);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
			RTHOOK(7);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}

	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("highlighted", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype));
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(2);
	RTEE;
}

/* unhighlight */

void Fn3wls2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("unhighlight", RTUD(1942), Current, 0, 0, 27762);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 64, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(4);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1942, 64, dtype));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
			RTHOOK(3);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	} else {

		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
		RTHOOK(7);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr2 = RTLN(RTUD(1814));
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 15, "red_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 16, "green_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_2 = ti4_2;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 17, "blue_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(8);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
			RTHOOK(7);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}

	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("not_highlighted", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype));
		if ((EIF_BOOLEAN) !tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make */

void Fn3tc3z (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLR(1,Current);
	RTLR(7,tr3);
	RTLR(6,loc1);
	RTLR(2,loc2);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("make", RTUD(1942), Current, 2, 1, 27757);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_item_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 48, dtype))(Current);
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(4);
	tr1 = RTLN(RTUD(1813));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc2))(loc2);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = RTLN(RTUD(1939));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1939, 63, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1942, 46, dtype))(Current, ur1x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc2))(loc2);
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 70, "color", tr1));
	if ((EIF_BOOLEAN)(tr2 != NULL)) {

		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
		RTHOOK(12);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(13);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 70, "color", tr2));
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
			RTHOOK(12);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	} else {

		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
		RTHOOK(16);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc3)) {
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			tr2 = RTLN(RTUD(1814));
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 15, "red_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 16, "green_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_2 = ti4_2;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 17, "blue_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_3 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(17);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
			RTHOOK(18);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
			RTHOOK(16);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}

	RTHOOK(19);
	*(EIF_BOOLEAN *)(Current + RTWA(1942, 5, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(20);
	*(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(21);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 10, "changed_event", tr1));
	RTNHOOK(21);
	{
		static int16 typarr [] = {1942,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1942,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAabk6yt, (EIF_POINTER)(0),1942, 74, 0, 0, 0, 1, 0, tr1, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	RTHOOK(22);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 11, "element_inserted_event", tr1));
	RTNHOOK(22);
	{
		static int16 typarr [] = {1942,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1942,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr3 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 1L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	tr4 = * (EIF_REFERENCE *) tr3;
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	{
		static int16 typarr [] = {1942,1419,0,-7,1,726,1974,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabofmx_2, (EIF_POINTER)(0),1942, 79, tr3, 0, 0, 1, 0, tr1, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	RTHOOK(23);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 12, "element_removed_event", tr1));
	RTNHOOK(23);
	{
		static int16 typarr [] = {1942,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1942,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr3 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 1L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	tr4 = * (EIF_REFERENCE *) tr3;
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	{
		static int16 typarr [] = {1942,1419,0,-7,1,726,1974,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabo2kj_2, (EIF_POINTER)(0),1942, 80, tr3, 0, 0, 1, 0, tr1, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("item_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("is_shown", EX_POST);
		tc4 = *(EIF_BOOLEAN *)(Current + RTWA(1942, 5, dtype));
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("not_highlighted", EX_POST);
		tc4 = *(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype));
		if ((EIF_BOOLEAN) !tc4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* add_connection_view */

void Fn3yjly (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(5,tr2);
	RTLR(2,arg1);
	RTLR(4,Current);
	RTLR(0,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("add_connection_view", RTUD(1942), Current, 1, 1, 27754);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1939));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1939, 63, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1942, 46, dtype))(Current, ur1x);

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 70, "color", tr1));
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 3, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 70, "color", tr1));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", loc1))(loc1, ur1x);
	} else {
		RTHOOK(5);
		tr1 = RTLN(RTUD(1814));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 15, "red_8_bit", tr2))(tr2)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 16, "green_8_bit", tr2))(tr2)).value.EIF_INTEGER_32_value);
		ui4_2 = ti4_2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 17, "blue_8_bit", tr2))(tr2)).value.EIF_INTEGER_32_value);
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(5);
		RTCI2(tr1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", loc1))(loc1, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* set_highlight_color */

void Fn3xwob (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_highlight_color", RTUD(1942), Current, 0, 1, 27764);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1942, 30, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype));
	if (tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 30, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {

			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc1)) {
				RTHOOK(6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(6);
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1942, 30, dtype));
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
				RTHOOK(7);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
				RTHOOK(5);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

		} else {

			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
			RTHOOK(9);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc2)) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				tr2 = RTLN(RTUD(1814));
				tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 73, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 15, "red_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 73, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 16, "green_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
				ui4_2 = ti4_2;
				tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 73, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 17, "blue_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
				ui4_3 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(10);
				RTCI2(tr2);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
				RTHOOK(11);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
				RTHOOK(9);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

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

/* update */

void Fn3vaxu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update", RTUD(1942), Current, 0, 0, 27760);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1939, 65, "update", tr1))(tr1);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
		RTHOOK(2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* remove_connection_view */

void Fn3y6jk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
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
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("remove_connection_view", RTUD(1942), Current, 1, 1, 27755);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
	RTHOOK(2);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc1 = loc1;
	}
	while (!(tc1)) {

		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1939, 1, "item", tr1));
		RTNHOOK(3);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 21, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(4);
			loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1942, 11, dtype))(Current, ur1x);
		} else {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
		}

		RTHOOK(2);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc1 = loc1;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* set_color */

void Fn3w8qp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_color", RTUD(1942), Current, 0, 1, 27763);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1942, 64, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1942, 29, dtype));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1942, 64, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {

			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc1)) {
				RTHOOK(6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(6);
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1942, 64, dtype));
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
				RTHOOK(7);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
				RTHOOK(5);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

		} else {

			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 49, dtype))(Current);
			RTHOOK(9);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc2)) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				tr2 = RTLN(RTUD(1814));
				tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 15, "red_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 16, "green_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
				ui4_2 = ti4_2;
				tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 72, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				RTNHOOK(10);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1111, 17, "blue_8_bit", tr3))(tr3)).value.EIF_INTEGER_32_value);
				ui4_3 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr2)))(tr2, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(10);
				RTCI2(tr2);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1939, 53, "set_color", tr1))(tr1, ur1x);
				RTHOOK(11);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1942, 52, dtype))(Current);
				RTHOOK(9);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1942, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

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

/* new_connection_view */

EIF_UNION Fn3zug6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(3,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(0,loc1);
	RTLR(7,Result);
	RTLR(6,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("new_connection_view", RTUD(1942), Current, 2, 1, 27756);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1942,1462,1925,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 68, "polypoints", arg1));
	RTNHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2190, 99, "count", tr2));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 68, "polypoints", arg1));
	RTNHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
	while (!((EIF_BOOLEAN)(loc2 > ti4_1))) {
		RTHOOK(4);
		tr1 = RTLN(RTUD(1925));
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 68, "polypoints", arg1));
		RTNHOOK(4);
		ui4_1 = loc2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 95, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		tr4_1 = (EIF_REAL_32) (tr8_1);
		ur4_1 = tr4_1;
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 68, "polypoints", arg1));
		RTNHOOK(4);
		ui4_1 = loc2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 95, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
		ur4_2 = tr4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
		RTNHOOK(4);
		RTCI2(tr1);
		ur1 = RTCCL(tr1);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ur1x, ui4_1x);
		RTHOOK(5);
		loc2++;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 68, "polypoints", arg1));
		RTNHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
		;
	}

	RTHOOK(6);
	tr1 = RTLN(RTUD(1938));
	ur1 = RTCCL(loc1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 634.0);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1938, 43, Dtype(tr1)))(tr1, ur1x, ur4_1x);
	RTNHOOK(6);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_exists", EX_POST);
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

/* default_color */

RTOID (Fn3t_1l)

EIF_UNION Fn3t_1l (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fn3t_1l);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("default_color", RTUD(1942), Current, 0, 0, 27758);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 100L);
	ui4_2 = ((EIF_INTEGER_32) 100L);
	ui4_3 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

void EIF_Minit1943 (void)
{
	GTCX
	RTOTS (29257,Fn3t_1l)
	RTOTS (29258,Fn3unz7)
}


#ifdef __cplusplus
}
#endif

