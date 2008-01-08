/*
 * Code for class DS_ARRAYED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo2qsav(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo2l8ri(EIF_REFERENCE);
extern void Fo2i_2e(EIF_REFERENCE, EIF_UNION);
extern void Fo2xwlp(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo2jn_0(EIF_REFERENCE, EIF_UNION);
extern void Fo2kayn(EIF_REFERENCE);
extern EIF_UNION Fo2mwo4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo2njmr(EIF_REFERENCE);
extern void Fo2wlqg(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo2kyv9(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo2p4c8(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo2lltw(EIF_REFERENCE, EIF_UNION);
extern void Fo2re8h(EIF_REFERENCE, EIF_UNION);
extern void Fo2sp3q(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo2ouh_(EIF_REFERENCE, EIF_UNION);
extern void Fo2unxl(EIF_REFERENCE, EIF_UNION);
extern void Fo2vau7(EIF_REFERENCE, EIF_UNION);
extern void Fo2tc1c(EIF_REFERENCE, EIF_UNION);
extern void Fo2t_zz(EIF_REFERENCE);
extern EIF_UNION Fo2n6kd(EIF_REFERENCE);
extern void Fo2vysu(EIF_REFERENCE);
extern void Fo2phfm(EIF_REFERENCE, EIF_UNION);
extern void Fo2r153(EIF_REFERENCE, EIF_UNION);
extern void Fp1pg2j(EIF_REFERENCE, int);
extern void EIF_Minit2330(void);

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

/* put */

void Fo2qsav (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put", RTUD(2329), Current, 0, 1, 29693);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 44, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype)))++;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	uc1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, uc1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("added", EX_POST);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 43, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("pushed", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 45, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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

/* item */

EIF_UNION Fo2l8ri (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("item", RTUD(2329), Current, 0, 0, 29710);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_1 = ti4_1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make */

void Fo2i_2e (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2329), Current, 0, 1, 29705);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2329, 64, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2329, 64, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 64, dtype));
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2188, 31, "make", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype)) = (EIF_REFERENCE)tr2;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* clear_items */

void Fo2xwlp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("clear_items", RTUD(2329), Current, 2, 2, 29703);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_bound", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 <= (EIF_INTEGER_32)(arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	loc2 = (EIF_INTEGER_32)arg1;
	RTHOOK(5);
	while (!((EIF_BOOLEAN)(loc2 > arg2))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
		uc1 = loc1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, uc1x, ui4_1x);
		RTHOOK(7);
		loc2++;
		RTHOOK(5);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* make_equal */

void Fo2jn_0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_equal", RTUD(2329), Current, 0, 1, 29706);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 40, dtype))(Current, ui4_1x);
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(2329, 25, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2329, 25, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* make_default */

void Fo2kayn (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_default", RTUD(2329), Current, 0, 0, 29707);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 29, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 40, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 29, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* i_th */

EIF_UNION Fo2mwo4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("i_th", RTUD(2329), Current, 0, 1, 29711);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* count */

EIF_UNION Fo2njmr (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2329,47, Dtype(Current)));
	return r;
}

/* resize */

void Fo2wlqg (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("resize", RTUD(2329), Current, 0, 1, 29702);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 64, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	ur1 = tr2;
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2188, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype)) = (EIF_REFERENCE)tr2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* has */

EIF_UNION Fo2kyv9 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has", RTUD(2329), Current, 2, 1, 29708);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2329, 25, dtype));

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {

		RTHOOK(4);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			uc1 = tc1;
			uc2 = arg1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc2))(loc2, uc1x, uc2x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(6);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(7);
				loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(8);
				loc1--;
			}

			RTHOOK(4);
			;
		}

	} else {

		RTHOOK(9);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(11);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(12);
				loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(13);
				loc1--;
			}

			RTHOOK(9);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_equal */

EIF_UNION Fo2p4c8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,loc3);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("is_equal", RTUD(2329), Current, 3, 1, 29692);
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
	if (RTCEQ(Current, arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2329, 47, "count", arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
			tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
	if (tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2329, 62, "storage", arg1));
		loc3 = (EIF_REFERENCE)tr1;

		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		RTHOOK(8);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(9);
		while (!((EIF_BOOLEAN)((EIF_BOOLEAN) !Result || (EIF_BOOLEAN)(loc1 > loc2)))) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			ui4_1 = loc1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", loc3))(loc3, ui4_1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(tc1 == tc2);
			RTHOOK(11);
			loc1++;
			RTHOOK(9);
			;
		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2329, 51, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 21, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(14);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* extendible */

EIF_UNION Fo2lltw (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("extendible", RTUD(2329), Current, 0, 1, 29709);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 >= (EIF_INTEGER_32)(ti4_2 + arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("enough_space", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((!(Result) || ((EIF_BOOLEAN)(ti4_1 >= (EIF_INTEGER_32)(ti4_2 + arg1))))) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* force */

void Fo2re8h (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("force", RTUD(2329), Current, 0, 1, 29694);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 44, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(2);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ui4_1 = (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 17, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 61, dtype))(Current, ui4_1x);
	}

	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype)))++;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	uc1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, uc1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("added", EX_POST);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 43, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("pushed", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 45, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
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

/* extend */

void Fo2sp3q (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
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
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("extend", RTUD(2329), Current, 2, 1, 29696);
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
		RTCT("extendible", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2170, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 44, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2170, 46, "new_cursor", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2176, 42, "start", loc2))(loc2);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2176, 41, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2176, 1, "item", loc2))(loc2)).value.EIF_BOOLEAN_value);
		uc1 = tc2;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, uc1x, ui4_1x);
		RTHOOK(8);
		loc1++;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2176, 43, "forth", loc2))(loc2);
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2176, 41, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(10);
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2170, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype))) += ti4_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2170, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* occurrences */

EIF_UNION Fo2ouh_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("occurrences", RTUD(2329), Current, 2, 1, 29714);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2329, 25, dtype));

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {

		RTHOOK(4);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			uc1 = tc1;
			uc2 = arg1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc2))(loc2, uc1x, uc2x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(6);
				Result++;
			}

			RTHOOK(7);
			loc1--;
			RTHOOK(4);
			;
		}

	} else {

		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(10);
				Result++;
			}

			RTHOOK(11);
			loc1--;
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("has", EX_POST);
		tc1 = '\01';
		uc1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 43, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* prune */

void Fo2unxl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	RTEAA("prune", RTUD(2329), Current, 0, 1, 29699);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_2 - arg1) + ((EIF_INTEGER_32) 1L));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_2 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2329, 63, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype))) -= arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - arg1))) {
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

/* keep */

void Fo2vau7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
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
	RTEAA("keep", RTUD(2329), Current, 0, 1, 29700);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2329, 63, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* append */

void Fo2tc1c (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("append", RTUD(2329), Current, 1, 1, 29697);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2170, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_2;

	RTHOOK(3);
	ui4_1 = loc1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 44, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ui4_1 = (EIF_INTEGER_32)(ti4_2 + loc1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 17, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 61, dtype))(Current, ui4_1x);
	}

	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 55, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2170, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* remove */

void Fo2t_zz (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTLU(SK_BOOL, &loc1);
	RTEAA("remove", RTUD(2329), Current, 1, 0, 29698);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	uc1 = loc1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype)))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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
}

/* capacity */

EIF_UNION Fo2n6kd (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2329,48, Dtype(Current)));
	return r;
}

/* wipe_out */

void Fo2vysu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(2329), Current, 0, 0, 29701);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2329, 63, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
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

/* copy */

void Fo2phfm (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
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
	RTEAA("copy", RTUD(2329), Current, 0, 1, 29715);
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
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 13, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 34, dtype))(Current, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype)) = (EIF_REFERENCE)tr2;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2329, 51, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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

/* replace */

void Fo2r153 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("replace", RTUD(2329), Current, 0, 1, 29695);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 28, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	uc1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, uc1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 47, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("replaced", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2329, 45, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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

void Fp1pg2j (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("storage_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("capacity_definition", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2329, 48, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 62, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_routines_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2329, 64, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2330 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

