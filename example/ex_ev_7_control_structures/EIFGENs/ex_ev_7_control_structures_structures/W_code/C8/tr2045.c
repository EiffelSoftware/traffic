/*
 * Code for class TRAFFIC_ERROR_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo9tr1x(EIF_REFERENCE);
extern EIF_UNION Fo9rt81(EIF_REFERENCE);
extern EIF_UNION Fo9qjdt(EIF_REFERENCE);
extern EIF_UNION Fo9wcte(EIF_REFERENCE);
extern EIF_UNION Fo9vpvs(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo9sg6o(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo9ue_j(EIF_REFERENCE);
extern void Fo9s34a(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fp1t_e6(EIF_REFERENCE, int);
extern void EIF_Minit2045(void);

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

/* reset_error */

void Fo9tr1x (EIF_REFERENCE Current)
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
	RTEAA("reset_error", RTUD(2044), Current, 0, 0, 30357);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("no_error", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("no_slots", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* has_error */

EIF_UNION Fo9rt81 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("has_error", RTUD(2044), Current, 0, 0, 30354);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, Dtype(Current)));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* error_description */

EIF_UNION Fo9qjdt (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("error_description", RTUD(2044), Current, 0, 0, 30362);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 48, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_not_empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", Result))(Result)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* full_message */

EIF_UNION Fo9wcte (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(5,loc4);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("full_message", RTUD(2044), Current, 4, 0, 30360);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype));
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2044, 40, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	ur1 = RTCCL(Result);
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2044, 47, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 37, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2044, 37, dtype));
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 84, "basename", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H(": ",2,14880);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 56, "prepend", Result))(Result, ur1x);
	}


	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(4, 4, "lower", tr1));
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(4, 4, "lower", tr1));
	while (!((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32)(ti4_1 + loc3)))) {
		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 45, dtype))(Current)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 14, "index_of", Result))(Result, uc1x, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_2;
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCT("character_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc4 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 51, "left_adjust", loc4))(loc4);
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 52, "right_adjust", loc4))(loc4);
		RTHOOK(13);
		ur1 = RTCCL(loc4);
		ui4_1 = loc2;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(13, 40, "replace_substring", Result))(Result, ur1x, ui4_1x, ui4_2x);
		RTHOOK(14);
		loc1++;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(4, 4, "lower", tr1));
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("result_not_empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", Result))(Result)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("no_unfilled_slots", EX_POST);
		ur1 = RTCCL(Result);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2044, 47, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* slot_count */

EIF_UNION Fo9vpvs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("slot_count", RTUD(2044), Current, 0, 1, 30359);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 45, dtype))(Current)).value.EIF_CHARACTER_value);
	uc1 = tc1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(140, 0, "occurrences", arg1))(arg1, uc1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* is_complete */

EIF_UNION Fo9sg6o (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("is_complete", RTUD(2044), Current, 0, 2, 30355);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("code_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("array_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg2))(arg2)).value.EIF_BOOLEAN_value);
		Result = (EIF_BOOLEAN)tc1;
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", arg2))(arg2)).value.EIF_INTEGER_32_value);
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2044, 40, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2044, 47, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 >= ti4_2);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* slot_character */

EIF_UNION Fo9ue_j (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '$';
	return r;
}
/* set_error */

void Fo9s34a (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("set_error", RTUD(2044), Current, 0, 2, 30356);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("error_code_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("array_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("complete", EX_PRE);
		ui4_1 = arg1;
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2044, 42, dtype))(Current, ui4_1x, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(5);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("error_code_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("slots_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

void Fp1t_e6 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTIT("error_constraint", Current);
	tc1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slot_constraint", Current);
	tc1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		tc2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype));
			ui4_1 = ti4_1;
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2044, 46, dtype));
			ur1 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2044, 42, dtype))(Current, ui4_1x, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("error_code_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2044, 36, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_empty_description", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tc2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2044, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2045 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

