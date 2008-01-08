/*
 * Code for class TRAFFIC_PATH_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn3ka_7(EIF_REFERENCE);
extern void Fn3l8t2(EIF_REFERENCE);
extern void Fn3mwrp(EIF_REFERENCE);
extern void Fn3i_4z(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3kyyu(EIF_REFERENCE);
extern void Fn3n6my(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3p4ft(EIF_REFERENCE, EIF_UNION);
extern void Fn3llwg(EIF_REFERENCE);
extern void Fn3njpb(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3phh6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn3jn2l(EIF_REFERENCE);
extern void EIF_Minit1941(void);

extern EIF_REFERENCE _fAabluwd();
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

/* default_highlight_color */

RTOID (Fn3ka_7)

EIF_UNION Fn3ka_7 (EIF_REFERENCE Current)
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
	RTOTDR(Fn3ka_7);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("default_highlight_color", RTUD(1940), Current, 0, 0, 27741);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 255L);
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

void Fn3l8t2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("highlight", RTUD(1940), Current, 2, 0, 27744);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(4);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = RTRV(RTUD(1938), loc1);
			RTHOOK(5);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTRV(RTUD(1937), loc2);

			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(7);
				tr1 = RTLN(RTUD(840));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
				ui4_1 = ti4_1;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
				ui4_2 = ti4_2;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
				ui4_3 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(7);
				RTCI2(tr1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				RTHOOK(8);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1940, 80, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_1 = (EIF_INTEGER_32)(ti4_1 + ti4_2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 45, "set_width", loc1))(loc1, ui4_1x);
			} else {
				RTHOOK(9);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(10);
				tr1 = RTLN(RTUD(840));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
				ui4_1 = ti4_1;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
				ui4_2 = ti4_2;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
				ui4_3 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(10);
				RTCI2(tr1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
			}}

			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
			RTHOOK(3);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	} else {

		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
		RTHOOK(13);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(14);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = RTRV(RTUD(1938), loc1);
			RTHOOK(15);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTRV(RTUD(1937), loc2);

			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(17);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				RTHOOK(18);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1940, 80, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_1 = (EIF_INTEGER_32)(ti4_1 + ti4_2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 45, "set_width", loc1))(loc1, ui4_1x);
			} else {
				RTHOOK(19);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
			}}

			RTHOOK(21);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
			RTHOOK(13);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}

	RTHOOK(22);
	*(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("highlighted", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype));
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(4);
	RTEE;
}

/* unhighlight */

void Fn3mwrp (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("unhighlight", RTUD(1940), Current, 2, 0, 27745);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(4);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = RTRV(RTUD(1938), loc1);
			RTHOOK(5);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTRV(RTUD(1937), loc2);

			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(7);
				tr1 = RTLN(RTUD(840));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
				ui4_1 = ti4_1;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
				ui4_2 = ti4_2;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
				ui4_3 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(7);
				RTCI2(tr1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				RTHOOK(8);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1940, 80, dtype));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 45, "set_width", loc1))(loc1, ui4_1x);
			} else {
				RTHOOK(9);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(10);
				tr1 = RTLN(RTUD(840));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
				ui4_1 = ti4_1;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
				ui4_2 = ti4_2;
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
				ui4_3 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(10);
				RTCI2(tr1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
			}}

			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
			RTHOOK(3);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	} else {

		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
		RTHOOK(13);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(14);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = RTRV(RTUD(1938), loc1);
			RTHOOK(15);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTRV(RTUD(1937), loc2);

			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(17);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				RTHOOK(18);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1940, 80, dtype));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 45, "set_width", loc1))(loc1, ui4_1x);
			} else {
				RTHOOK(19);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
			}}

			RTHOOK(21);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
			RTHOOK(13);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}

	RTHOOK(22);
	*(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("not_highlighted", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype));
		if ((EIF_BOOLEAN) !tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(4);
	RTEE;
}

/* make */

void Fn3i_4z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(8,tr3);
	RTLR(2,loc1);
	RTLR(5,loc2);
	RTLR(7,loc3);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("make", RTUD(1940), Current, 3, 1, 27739);
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 48, dtype))(Current);
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1940, 3, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 3, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1949, 41, "connections", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 30, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 53, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1940, 81, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc2))(loc2, ur1x);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1938, 47, "width", loc2));
		*(EIF_INTEGER_32 *)(Current + RTWA(1940, 80, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(10);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1940, 46, dtype))(Current, ur1x);
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 66, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1940, 82, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc3))(loc3, ur1x);
		RTHOOK(13);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1940, 46, dtype))(Current, ur1x);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(14);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 67, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1940, 82, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc3))(loc3, ur1x);
		RTHOOK(16);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1940, 46, dtype))(Current, ur1x);
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 51, "forth", loc1))(loc1);
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 53, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(18);
	*(EIF_BOOLEAN *)(Current + RTWA(1940, 5, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(19);
	*(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(20);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 3, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1949, 6, "changed_event", tr1));
	RTNHOOK(20);
	{
		static int16 typarr [] = {1940,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1940,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAabluwd, (EIF_POINTER)(0),1940, 75, 0, 0, 0, 1, 0, tr1, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("item_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 3, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("is_shown", EX_POST);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1940, 5, dtype));
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("not_highlighted", EX_POST);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype));
		if ((EIF_BOOLEAN) !tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* default_highlight_width_delta */

EIF_UNION Fn3kyyu (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	return r;
}
/* set_highlight_color */

void Fn3n6my (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(5,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("set_highlight_color", RTUD(1940), Current, 2, 1, 27747);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype));
	if (tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {

			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc1)) {
				RTHOOK(6);
				loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = RTRV(RTUD(1938), loc1);
				RTHOOK(7);
				loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc2 = RTRV(RTUD(1937), loc2);

				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(9);
					tr1 = RTLN(RTUD(840));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
					ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
					ui4_1 = ti4_1;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
					ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
					ui4_2 = ti4_2;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
					ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
					ui4_3 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(9);
					RTCI2(tr1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				} else {
					RTHOOK(10);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(11);
					tr1 = RTLN(RTUD(840));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
					ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
					ui4_1 = ti4_1;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
					ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
					ui4_2 = ti4_2;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 30, dtype));
					ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
					ui4_3 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(11);
					RTCI2(tr1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
				}}

				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
				RTHOOK(5);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

		} else {

			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
			RTHOOK(14);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc2)) {
				RTHOOK(15);
				loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = RTRV(RTUD(1938), loc1);
				RTHOOK(16);
				loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc2 = RTRV(RTUD(1937), loc2);

				RTHOOK(17);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(18);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				} else {
					RTHOOK(19);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(20);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 73, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
				}}

				RTHOOK(21);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
				RTHOOK(14);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* new_place_view */

EIF_UNION Fn3p4ft (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
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
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,arg1);
	RTLR(5,tr4);
	RTLR(8,Current);
	RTLR(3,tr3);
	RTLR(7,Result);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("new_place_view", RTUD(1940), Current, 0, 1, 27749);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1937));
	tr2 = RTLN(RTUD(1925));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(1973, 48, "width", arg1));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	ur8_1 = tr8_4;
	tr8_4 = eif_max_real64 ((EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)),ur8_1);
	tr4_1 = (EIF_REAL_32) (((EIF_REAL_64)(tr8_1 - tr8_4)));
	ur4_1 = tr4_1;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(1973, 49, "breadth", arg1));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	ur8_1 = tr8_4;
	tr8_4 = eif_max_real64 ((EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)),ur8_1);
	tr4_2 = (EIF_REAL_32) (((EIF_REAL_64)((EIF_REAL_64)-tr8_1 - tr8_4)));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(1973, 48, "width", arg1));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	ur8_1 = tr8_4;
	tr8_4 = eif_max_real64 ((EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)),ur8_1);
	tr4_1 = (EIF_REAL_32) (((EIF_REAL_64)(tr8_1 + tr8_4)));
	ur4_1 = tr4_1;
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(1973, 49, "breadth", arg1));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	ur8_1 = tr8_4;
	tr8_4 = eif_max_real64 ((EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)),ur8_1);
	tr4_2 = (EIF_REAL_32) (((EIF_REAL_64)((EIF_REAL_64)-tr8_1 + tr8_4)));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1937, 43, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* update */

void Fn3llwg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("update", RTUD(1940), Current, 0, 0, 27743);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 3, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1949, 23, "is_illuminated", tr1));
	if (tc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 76, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 77, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_color */

void Fn3njpb (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(5,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("set_color", RTUD(1940), Current, 2, 1, 27746);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1940, 29, dtype));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {

			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc1)) {
				RTHOOK(6);
				loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = RTRV(RTUD(1938), loc1);
				RTHOOK(7);
				loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc2 = RTRV(RTUD(1937), loc2);

				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(9);
					tr1 = RTLN(RTUD(840));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
					ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
					ui4_1 = ti4_1;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
					ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
					ui4_2 = ti4_2;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
					ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
					ui4_3 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(9);
					RTCI2(tr1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				} else {
					RTHOOK(10);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(11);
					tr1 = RTLN(RTUD(840));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
					ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 34, "red", tr2));
					ui4_1 = ti4_1;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
					ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 35, "green", tr2));
					ui4_2 = ti4_2;
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(1940, 64, dtype));
					ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1814, 36, "blue", tr2));
					ui4_3 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(11);
					RTCI2(tr1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
				}}

				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
				RTHOOK(5);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

		} else {

			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 49, dtype))(Current);
			RTHOOK(14);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
			while (!(tc2)) {
				RTHOOK(15);
				loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = RTRV(RTUD(1938), loc1);
				RTHOOK(16);
				loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc2 = RTRV(RTUD(1937), loc2);

				RTHOOK(17);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(18);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1938, 31, "set_color", loc1))(loc1, ur1x);
				} else {
					RTHOOK(19);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(20);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1937, 31, "set_color", loc2))(loc2, ur1x);
				}}

				RTHOOK(21);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1940, 52, dtype))(Current);
				RTHOOK(14);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1940, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
				;
			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* new_connection_view */

EIF_UNION Fn3phh6 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("new_connection_view", RTUD(1940), Current, 2, 1, 27748);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1940,1462,1925,-1};
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

RTOID (Fn3jn2l)

EIF_UNION Fn3jn2l (EIF_REFERENCE Current)
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
	RTOTDR(Fn3jn2l);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("default_color", RTUD(1940), Current, 0, 0, 27740);
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

void EIF_Minit1941 (void)
{
	GTCX
	RTOTS (29241,Fn3jn2l)
	RTOTS (29242,Fn3ka_7)
}


#ifdef __cplusplus
}
#endif

