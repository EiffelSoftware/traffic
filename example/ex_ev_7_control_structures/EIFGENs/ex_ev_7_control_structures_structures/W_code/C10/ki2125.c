/*
 * Code for class KI_PATHNAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpp6xwj(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpp1rek(EIF_REFERENCE);
extern EIF_UNION Fpp59yx(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2125(void);

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

/* is_equal */

EIF_UNION Fpp6xwj (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_equal", RTUD(2124), Current, 0, 1, 31174);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(Current);
	ur2 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2124, 44, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 28, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = Result;
		}
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_canonical */

EIF_UNION Fpp1rek (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("is_canonical", RTUD(2124), Current, 2, 0, 31172);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 41, dtype))(Current)).value.EIF_INTEGER_32_value);

	RTHOOK(2);
	tc1 = '\0';
	tc2 = '\0';
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 34, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 33, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(5);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {

			RTHOOK(7);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 34, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(8);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(9);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 35, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {

				RTHOOK(11);
				tc1 = '\0';
				if ((EIF_BOOLEAN)(loc1 > ((EIF_INTEGER_32) 1L))) {
					ui4_1 = (EIF_INTEGER_32)(loc1 - ((EIF_INTEGER_32) 1L));
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 35, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
					tc1 = (EIF_BOOLEAN) !tc2;
				}
				if (tc1) {
					RTHOOK(12);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(13);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				}

			}}

			RTHOOK(14);
			loc1++;
			RTHOOK(6);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* same_pathname */

EIF_UNION Fpp59yx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_CHARACTER tc6;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("same_pathname", RTUD(2124), Current, 2, 1, 31173);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_pathname_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	if (RTCEQ(arg1, Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 41, dtype))(Current)).value.EIF_INTEGER_32_value);

		RTHOOK(5);
		tc1 = '\0';
		tc2 = '\0';
		tc3 = '\0';
		tc4 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 41, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 33, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 33, "is_relative", arg1))(arg1)).value.EIF_BOOLEAN_value);
			tc4 = (EIF_BOOLEAN)(tc5 == tc6);
		}
		if (tc4) {
			tc4 = '\01';
			tc5 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 38, "drive", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc5 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (!(tc5)) {
				tc5 = '\0';
				tc6 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 38, "drive", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					tc6 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tc6) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 27, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(5);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 38, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr2);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 38, "drive", arg1))(arg1)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
					ur2 = RTCCL(tr3);
					tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					tc5 = tc6;
				}
				tc4 = tc5;
			}
			tc3 = tc4;
		}
		if (tc3) {
			tc3 = '\01';
			tc4 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 39, "hostname", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc4 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (!(tc4)) {
				tc4 = '\0';
				tc5 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 39, "hostname", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					tc5 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tc5) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 27, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(5);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 39, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr2);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 39, "hostname", arg1))(arg1)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
					ur2 = RTCCL(tr3);
					tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					tc4 = tc5;
				}
				tc3 = tc4;
			}
			tc2 = tc3;
		}
		if (tc2) {
			tc2 = '\01';
			tc3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 40, "sharename", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc3 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (!(tc3)) {
				tc3 = '\0';
				tc4 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 40, "sharename", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					tc4 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tc4) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 27, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(5);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 40, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr2);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2124, 40, "sharename", arg1))(arg1)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
					ur2 = RTCCL(tr3);
					tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					tc3 = tc4;
				}
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(6);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

			RTHOOK(7);
			loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(8);
			while (!((EIF_BOOLEAN)(loc1 > loc2))) {

				RTHOOK(9);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2124, 27, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(9);
				ui4_1 = loc1;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2124, 37, dtype))(Current, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr2);
				ui4_1 = loc1;
				tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2124, 37, "item", arg1))(arg1, ui4_1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
				ur2 = RTCCL(tr3);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				if ((EIF_BOOLEAN) !tc1) {
					RTHOOK(10);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(11);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				}

				RTHOOK(12);
				loc1++;
				RTHOOK(8);
				;
			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void EIF_Minit2125 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

