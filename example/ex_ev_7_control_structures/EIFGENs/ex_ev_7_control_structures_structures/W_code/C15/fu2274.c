/*
 * Code for class FUNCTION [REFERENCE, REFERENCE, REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fhqehhz(EIF_REFERENCE);
extern EIF_UNION Fhqfsc7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fhqjnzy(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fhqe4fl(EIF_REFERENCE, EIF_UNION);
extern void Fhqhp52(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fhqg18g(EIF_REFERENCE, EIF_UNION);
extern void Fhqgfau(EIF_REFERENCE);
extern EIF_UNION Fhqic3p(EIF_REFERENCE, EIF_UNION);
extern void Fhqi_1b(EIF_REFERENCE);
extern void EIF_Minit2274(void);

#ifdef __cplusplus
}
#endif

#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_FHQJNZY

static EIF_REAL_32 inline_Fhqjnzy (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_BOOLEAN arg7, EIF_BOOLEAN arg8, EIF_BOOLEAN arg9, EIF_INTEGER_32 arg10, EIF_INTEGER_32 arg11, EIF_POINTER arg12)
{
#ifdef WORKBENCH
	EIF_REAL_32 result;
	if (arg1 != 0) {
		return (FUNCTION_CAST(EIF_UNION, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4).value.EIF_REAL_32_value;
	} else {
		rout_obj_call_function_dynamic (
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg3,
			arg10,
			arg4,
			arg11,
			arg12, 
			&result);
		return result;
	}
#else
	return (FUNCTION_CAST(EIF_REAL_32, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
;
}
#define INLINE_FHQJNZY
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* last_result */

EIF_UNION Fhqehhz (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = *(EIF_REAL_32 *)(Current + RTWPA(9,0, Dtype(Current)));
	return r;
}

/* item */

EIF_UNION Fhqfsc7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION up4x = {0, SK_POINTER};
#undef up4
#define up4 up4x.value.EIF_POINTER_value
	EIF_UNION up5x = {0, SK_POINTER};
#undef up5
#define up5 up5x.value.EIF_POINTER_value
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_UNION uc3x = {0, SK_CHAR};
#undef uc3
#define uc3 uc3x.value.EIF_CHARACTER_value
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("item", RTUD(2273), Current, 1, 1, 28149);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(7, 7, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 14, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(5, 28, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWPA(7, 19, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWPA(7, 17, dtype));
	up2 = tp2;
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 14, dtype));
	up3 = tr1;
	up4 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 20, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 21, dtype));
	ui4_2 = ti4_2;
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 22, dtype));
	uc1 = tc1;
	tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 23, dtype));
	uc2 = tc2;
	tc3 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 25, dtype));
	uc3 = tc3;
	ui4_3 = loc1;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 9, dtype));
	ui4_4 = ti4_3;
	tr2 = *(EIF_REFERENCE *)(Current + RTWPA(7, 18, dtype));
	up5 = tr2;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(9, 4, dtype))(Current, up1x, up2x, up3x, up4x, ui4_1x, ui4_2x, uc1x, uc2x, uc3x, ui4_3x, ui4_4x, up5x)).value.EIF_REAL_32_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg1
}

/* fast_item */

EIF_UNION Fhqjnzy (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x, EIF_UNION arg6x, EIF_UNION arg7x, EIF_UNION arg8x, EIF_UNION arg9x, EIF_UNION arg10x, EIF_UNION arg11x, EIF_UNION arg12x)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg12x.type == SK_REF) arg12x.value.EIF_POINTER_value = * (EIF_POINTER *) arg12x.value.EIF_REFERENCE_value;
#define arg12 arg12x.value.EIF_POINTER_value
	if (arg11x.type == SK_REF) arg11x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg11x.value.EIF_REFERENCE_value;
#define arg11 arg11x.value.EIF_INTEGER_32_value
	if (arg10x.type == SK_REF) arg10x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg10x.value.EIF_REFERENCE_value;
#define arg10 arg10x.value.EIF_INTEGER_32_value
	if (arg9x.type == SK_REF) arg9x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg9x.value.EIF_REFERENCE_value;
#define arg9 arg9x.value.EIF_BOOLEAN_value
	if (arg8x.type == SK_REF) arg8x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg8x.value.EIF_REFERENCE_value;
#define arg8 arg8x.value.EIF_BOOLEAN_value
	if (arg7x.type == SK_REF) arg7x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg7x.value.EIF_REFERENCE_value;
#define arg7 arg7x.value.EIF_BOOLEAN_value
	if (arg6x.type == SK_REF) arg6x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg6x.value.EIF_REFERENCE_value;
#define arg6 arg6x.value.EIF_INTEGER_32_value
	if (arg5x.type == SK_REF) arg5x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_INTEGER_32_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_POINTER_value = * (EIF_POINTER *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_POINTER_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_POINTER_value = * (EIF_POINTER *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_POINTER_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_POINTER_value = * (EIF_POINTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_POINTER_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_BOOL,&arg7);
	RTLU(SK_BOOL,&arg8);
	RTLU(SK_BOOL,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_POINTER,&arg12);
	RTLU (SK_REF, &Current);
	RTEAA("fast_item", RTUD(2273), Current, 0, 12, 28155);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = inline_Fhqjnzy ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32) arg6, (EIF_BOOLEAN) arg7, (EIF_BOOLEAN) arg8, (EIF_BOOLEAN) arg9, (EIF_INTEGER_32) arg10, (EIF_INTEGER_32) arg11, (EIF_POINTER) arg12);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* call */

void Fhqe4fl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION up4x = {0, SK_POINTER};
#undef up4
#define up4 up4x.value.EIF_POINTER_value
	EIF_UNION up5x = {0, SK_POINTER};
#undef up5
#define up5 up5x.value.EIF_POINTER_value
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_UNION uc3x = {0, SK_CHAR};
#undef uc3
#define uc3 uc3x.value.EIF_CHARACTER_value
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("call", RTUD(2273), Current, 1, 1, 28148);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(7, 7, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 14, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(5, 28, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWPA(7, 19, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWPA(7, 17, dtype));
	up2 = tp2;
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 14, dtype));
	up3 = tr1;
	up4 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 20, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 21, dtype));
	ui4_2 = ti4_2;
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 22, dtype));
	uc1 = tc1;
	tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 23, dtype));
	uc2 = tc2;
	tc3 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 25, dtype));
	uc3 = tc3;
	ui4_3 = loc1;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 9, dtype));
	ui4_4 = ti4_3;
	tr2 = *(EIF_REFERENCE *)(Current + RTWPA(7, 18, dtype));
	up5 = tr2;
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(9, 4, dtype))(Current, up1x, up2x, up3x, up4x, ui4_1x, ui4_2x, uc1x, uc2x, uc3x, ui4_3x, ui4_4x, up5x)).value.EIF_REAL_32_value);
	*(EIF_REAL_32 *)(Current + RTWPA(9, 0, dtype)) = (EIF_REAL_32)tr4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* copy */

void Fhqhp52 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("copy", RTUD(2273), Current, 0, 1, 28152);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(1, 3, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(1, 11, RTUD(1420)))(Current, ur1x);
	RTHOOK(4);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(9, 0, "last_result", arg1))(arg1)).value.EIF_REAL_32_value);
	*(EIF_REAL_32 *)(Current + RTWPA(9, 0, dtype)) = (EIF_REAL_32)tr4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(1, 4, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_call_status", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(7, 6, "callable", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(7, 6, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* is_equal */

EIF_UNION Fhqg18g (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);
	RTLR(3,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_equal", RTUD(2273), Current, 0, 1, 28151);
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
	Result = '\0';
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(1, 4, RTUD(1420)))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWPA(9, 0, dtype));
		ur1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)ur1 = tr4_1;
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(9, 0, "last_result", arg1))(arg1)).value.EIF_REAL_32_value);
		ur2 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)ur2 = tr4_2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(1, 6, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		Result = tc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(1, 5, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* apply */

void Fhqgfau (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION up4x = {0, SK_POINTER};
#undef up4
#define up4 up4x.value.EIF_POINTER_value
	EIF_UNION up5x = {0, SK_POINTER};
#undef up5
#define up5 up5x.value.EIF_POINTER_value
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_UNION uc3x = {0, SK_CHAR};
#undef uc3
#define uc3 uc3x.value.EIF_CHARACTER_value
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_32 tr4_1;
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
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("apply", RTUD(2273), Current, 1, 0, 28150);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 1, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(7, 7, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 14, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(5, 28, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWPA(7, 19, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWPA(7, 17, dtype));
	up2 = tp2;
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(7, 14, dtype));
	up3 = tr1;
	tr2 = *(EIF_REFERENCE *)(Current + RTWPA(7, 1, dtype));
	up4 = tr2;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 20, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 21, dtype));
	ui4_2 = ti4_2;
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 22, dtype));
	uc1 = tc1;
	tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 23, dtype));
	uc2 = tc2;
	tc3 = *(EIF_BOOLEAN *)(Current + RTWPA(7, 25, dtype));
	uc3 = tc3;
	ui4_3 = loc1;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(7, 9, dtype));
	ui4_4 = ti4_3;
	tr3 = *(EIF_REFERENCE *)(Current + RTWPA(7, 18, dtype));
	up5 = tr3;
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(9, 4, dtype))(Current, up1x, up2x, up3x, up4x, ui4_1x, ui4_2x, uc1x, uc2x, uc3x, ui4_3x, ui4_4x, up5x)).value.EIF_REAL_32_value);
	*(EIF_REAL_32 *)(Current + RTWPA(9, 0, dtype)) = (EIF_REAL_32)tr4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
}

/* eval */

EIF_UNION Fhqic3p (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_CHARACTER tc1;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("eval", RTUD(2273), Current, 0, 1, 28153);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(7, 7, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(9, 1, dtype))(Current, ur1x)).value.EIF_REAL_32_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg1
}

/* clear_last_result */

void Fhqi_1b (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL32, &loc1);
	RTEAA("clear_last_result", RTUD(2273), Current, 1, 0, 28154);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_32 *)(Current + RTWPA(9, 0, Dtype(Current))) = (EIF_REAL_32)loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
}

void EIF_Minit2274 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

