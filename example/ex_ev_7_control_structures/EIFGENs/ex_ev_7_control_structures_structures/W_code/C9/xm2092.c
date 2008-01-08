/*
 * Code for class XM_CANONICAL_PRETTY_PRINT_FILTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fphmyc1(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fphn78a(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fphnlao(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2092(void);

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

/* on_comment */

void Fphmyc1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
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
	RTEAA("on_comment", RTUD(2091), Current, 0, 1, 30741);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_content_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2091, 45, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1904, 36, "on_comment", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* escaped_char */

EIF_UNION Fphn78a (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("escaped_char", RTUD(2091), Current, 0, 1, 30743);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_escaped", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2091, 108, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2091, 90, dtype))(Current)).value.EIF_CHARACTER_value);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(3);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2091, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	} else {
		RTHOOK(4);
		ui4_1 = arg1;
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 105, RTUD(2089)))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_escaped */

EIF_UNION Fphnlao (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_escaped", RTUD(2091), Current, 0, 1, 30742);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tc1 = '\01';
	tc2 = '\01';
	tc3 = '\01';
	tc4 = '\01';
	tc5 = '\01';
	tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2091, 62, dtype))(Current)).value.EIF_CHARACTER_value);
	ti4_1 = (EIF_INTEGER_32) (tc6);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2091, 89, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc6);
		tc5 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc5) {
		tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2091, 37, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc5);
		tc4 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc4) {
		tc3 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 9L));
	}
	if (!tc3) {
		tc2 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 10L));
	}
	if (!tc2) {
		tc1 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L));
	}
	if (!tc1) {
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2091, 90, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		Result = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void EIF_Minit2092 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

