/*
 * Code for class KL_STRING_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn812sq(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn770vw(EIF_REFERENCE);
extern EIF_UNION Fn78oti(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8rfyj(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8n69f(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8ou61(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn76q_n(EIF_REFERENCE, EIF_UNION);
extern void Fn8_4zv(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn8zu3m(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8kzlb(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn8yj8d(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn84oi7(EIF_REFERENCE);
extern EIF_UNION Fn8uomn(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8c7cv(EIF_REFERENCE, EIF_UNION);
extern void Fn8y65_(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8kbnp(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn79bq4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8a9j_(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8hqw7(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn85bgu(EIF_REFERENCE);
extern void Fn81fu3(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn830ll(EIF_REFERENCE);
extern EIF_UNION Fn8cke8(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8dvah(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8eh73(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn82qqc(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn77dx9(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8iduu(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8g2zl(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8e45q(EIF_REFERENCE, EIF_UNION);
extern void Fn8xxar(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8fs3c(EIF_REFERENCE, EIF_UNION);
extern void Fn8sqts(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn80sxh(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn79zor(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8gf0z(EIF_REFERENCE, EIF_UNION);
extern void Fn8_h08(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8i0sg(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8vbj9(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8lmiy(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8l9gk(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8nkbt(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8ph4o(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8bxhm(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8r2v5(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fn8qs_x(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8mxd6(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8t0o0(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8w9c4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8vzhw(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8wmfi(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn8ammd(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn83dnz(EIF_REFERENCE);
extern EIF_UNION Fn8jop2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn8p42a(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fn8tdre(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void EIF_Minit1967(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
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

/* resize_buffer */

void Fn812sq (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("resize_buffer", RTUD(1966), Current, 1, 2, 27970);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg2 >= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg2 - ti4_1);
	RTHOOK(5);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 23, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(6);
	while (!((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(7);
		uc1 = (EIF_CHARACTER) '#';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
		RTHOOK(8);
		loc1--;
		RTHOOK(6);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* make_empty */

EIF_UNION Fn770vw (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(0,tr1);
	RTLR(4,tr2);
	RTLR(2,Current);
	RTLR(1,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("make_empty", RTUD(1966), Current, 0, 0, 27978);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(774));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(13, 1, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* make_filled */

EIF_UNION Fn78oti (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
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

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(6);
	RTLR(0,tr1);
	RTLR(4,tr2);
	RTLR(2,Current);
	RTLR(1,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_filled", RTUD(1966), Current, 0, 2, 27979);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(774));
	uc1 = arg1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(13, 2, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("filled", EX_POST);
		uc1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(140, 0, "occurrences", Result))(Result, uc1x)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* replaced_all_substrings */

EIF_UNION Fn8rfyj (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(7,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(5,Current);
	RTLR(6,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("replaced_all_substrings", RTUD(1966), Current, 4, 3, 27952);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = loc3;
	loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 57, dtype))(Current, ur1x, ur2x, ui4_1x)).value.EIF_INTEGER_32_value);

	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		loc2 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(9);
		ur1 = RTCCL(arg1);
		ui4_1 = loc1;
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 50, dtype))(Current, ur1x, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

		RTHOOK(10);
		while (!((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(11);
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg1);
			ui4_1 = loc3;
			ui4_2 = (EIF_INTEGER_32)(loc4 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 68, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(12);
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 67, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(13);
			loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 + loc2);

			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc3 > loc1)) {
				RTHOOK(15);
				loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(16);
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				ui4_1 = loc3;
				loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 57, dtype))(Current, ur1x, ur2x, ui4_1x)).value.EIF_INTEGER_32_value);
			}

			RTHOOK(10);
			;
		}

		RTHOOK(17);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = loc3;
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 68, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(18);
			RTCT("not_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(19);
		Result = (EIF_REFERENCE)RTCCL(arg1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("replaced_all_substrings_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* cloned_string */

EIF_UNION Fn8n69f (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cloned_string", RTUD(1966), Current, 0, 1, 28003);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("cloned_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* appended_string */

EIF_UNION Fn8ou61 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(2,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(6,tr3);
	RTLR(7,loc1);
	RTLR(8,Result);
	RTLR(3,ur1);
	RTLR(9,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("appended_string", RTUD(1966), Current, 1, 2, 28004);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		ti4_2 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_3 = ti4_4;
		ur1 = RTCCL(arg1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 66, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_4 = ti4_5;
		ur1 = RTCCL(arg2);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 66, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = tr3;
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(2006), loc1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 242, "append_string", loc1))(loc1, ur1x);
		RTHOOK(6);
		Result = (EIF_REFERENCE)RTCCL(loc1);
	} else {
		RTHOOK(7);
		loc1 = RTCCL(arg2);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 59, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		} else {
			RTHOOK(10);
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 64, "append_string", arg1))(arg1, ur1x);
			RTHOOK(11);
			Result = (EIF_REFERENCE)RTCCL(arg1);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("type_if_not_aliased", EX_POST);
		tc1 = '\01';
		if (!RTCEQ(Result, arg1)) {
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(13);
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr3))(tr3, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ti4_3;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("final", EX_POST);
		ui4_1 = (EIF_INTEGER_32)(ti4_4 + ((EIF_INTEGER_32) 1L));
		ti4_5 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ui4_2 = ti4_5;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* make */

EIF_UNION Fn76q_n (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(6);
	RTLR(0,tr1);
	RTLR(4,tr2);
	RTLR(2,Current);
	RTLR(1,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1966), Current, 0, 1, 27976);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(774));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("empty_string", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* remove_tail */

void Fn8_4zv (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("remove_tail", RTUD(1966), Current, 0, 2, 27967);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_2;
		ti4_2 = eif_min_int32 (arg2,ui4_2);
		ui4_2 = (EIF_INTEGER_32)(ti4_1 - ti4_2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 82, "remove_tail", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("removed", EX_POST);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* keep_tail */

void Fn8zu3m (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("keep_tail", RTUD(1966), Current, 0, 2, 27965);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_1 = ti4_2;
		ti4_2 = eif_min_int32 (arg2,ui4_1);
		ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L));
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 50, "keep_tail", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("kept", EX_POST);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* same_string */

EIF_UNION Fn8kzlb (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(7,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("same_string", RTUD(1966), Current, 3, 2, 27998);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(6);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(8);
			ur1 = RTCCL(arg2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 233, "same_unicode_string", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)tc1;
		} else {
			RTHOOK(9);
			loc1 = RTCCL(arg2);
			loc1 = RTRV(RTUD(2006), loc1);

			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(11);
				ur1 = RTCCL(arg1);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 233, "same_unicode_string", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
				Result = (EIF_BOOLEAN)tc1;
			} else {
				RTHOOK(12);
				tc1 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(12);
				ur1 = RTCCL(arg1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				ur2 = RTCCL(tr2);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				if (tc2) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(12);
					ur1 = RTCCL(arg2);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					ur2 = RTCCL(tr2);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					tc1 = tc2;
				}
			if (tc1) {
				RTHOOK(13);
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			} else {
				RTHOOK(14);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(15);
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(16);
				loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				RTHOOK(17);
				while (!((EIF_BOOLEAN)(loc2 > loc3))) {

					RTHOOK(18);
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
					ui4_1 = loc2;
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg2))(arg2, ui4_1x)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						RTHOOK(19);
						Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
						RTHOOK(20);
						loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(21);
						loc2++;
					}

					RTHOOK(17);
					;
				}

			}}

		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("definition", EX_POST);
		tc1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tc2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
				tc3 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg2))(arg2, ui4_1x)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					tc4 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
					if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 2L))) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ur1 = RTCCL(tr1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
						ui4_2 = ti4_1;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg2))(arg2, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ur2 = RTCCL(tr2);
						tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
						tc4 = tc5;
					}
					tc3 = tc4;
				}
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if ((EIF_BOOLEAN)(Result == tc1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("elks_same_string", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(24);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* right_adjust */

void Fn8yj8d (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("right_adjust", RTUD(1966), Current, 2, 1, 27963);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {

		RTHOOK(5);
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		switch (tc1) {
			case (EIF_CHARACTER) '\011':
			case (EIF_CHARACTER) '\012':
			case (EIF_CHARACTER) '\015':
			case (EIF_CHARACTER) ' ':
				RTHOOK(6);
				loc2--;
				break;
			default:
				RTHOOK(7);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				break;
		}
		RTHOOK(4);
		;
	}

	RTHOOK(8);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 48, "keep_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("right_adjusted", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			tc2 = '\0';
			tc3 = '\0';
			tc4 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) ' ');
			if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				ui4_1 = ti4_1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) '\011');
				tc4 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (tc4) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				ui4_1 = ti4_1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) '\015');
				tc3 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (tc3) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				ui4_1 = ti4_1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) '\012');
				tc2 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
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
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* min_negative_integer_64_digits */

RTOID (Fn84oi7)

EIF_UNION Fn84oi7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDD;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fn84oi7);
	dftype = Dftype(Current);
	dtype = Dtype(Current);
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("min_negative_integer_64_digits", RTUD(1966), Current, 0, 0, 27974);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1966,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 19L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	Result = (EIF_REFERENCE)tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("ninteen_digits", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 19L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* to_lower */

EIF_UNION Fn8uomn (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(7,tr3);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("to_lower", RTUD(1966), Current, 0, 1, 27957);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 87, "as_lower", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("lower_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("lower_string_same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("anchor", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc3;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1829, 37, "as_lower", tr1))(tr1, uc1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 87, "as_lower", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr3);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_base64 */

EIF_UNION Fn8c7cv (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTEAA("is_base64", RTUD(1966), Current, 3, 1, 27986);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(8);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			loc3 = (EIF_CHARACTER)tc1;

			RTHOOK(9);
			if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) '0') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) '9')) && (EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) 'a') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) 'z'))) && (EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) 'A') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) 'Z'))) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) '+')) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) '/')) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) '=')) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) ' ')) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) '\011')) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) '\015')) && (EIF_BOOLEAN)(loc3 != (EIF_CHARACTER) '\012'))) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}

			RTHOOK(7);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* keep_head */

void Fn8y65_ (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("keep_head", RTUD(1966), Current, 0, 2, 27964);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_1;
		ti4_1 = eif_min_int32 (arg2,ui4_2);
		ui4_2 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 48, "keep_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("kept", EX_POST);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* elks_same_string */

EIF_UNION Fn8kbnp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("elks_same_string", RTUD(1966), Current, 0, 2, 27997);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {

		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(arg2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(7);
			ur1 = RTCCL(arg2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 22, "same_string", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)tc1;
		} else {
			RTHOOK(8);
			ur1 = RTCCL(arg1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 22, "same_string", arg2))(arg2, ur1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)tc1;
		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 17, "string", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 17, "string", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(Result == tc1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* make_buffer */

EIF_UNION Fn79bq4 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(6);
	RTLR(0,tr1);
	RTLR(4,tr2);
	RTLR(2,Current);
	RTLR(1,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_buffer", RTUD(1966), Current, 0, 1, 27980);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(774));
	uc1 = (EIF_CHARACTER) '\000';
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(13, 2, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_decimal */

EIF_UNION Fn8a9j_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTEAA("is_decimal", RTUD(1966), Current, 3, 1, 27983);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(8);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			loc3 = (EIF_CHARACTER)tc1;

			RTHOOK(9);
			if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) '0') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) '9'))) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}

			RTHOOK(7);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* substring */

EIF_UNION Fn8hqw7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("substring", RTUD(1966), Current, 0, 3, 27993);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 <= (EIF_INTEGER_32)(arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ui4_1 = arg2;
	ui4_2 = arg3;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("substring_same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("substring_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)((EIF_INTEGER_32)(arg3 - arg2) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("first_item", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
			ui4_1 = arg2;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* code_zero */

RTOID (Fn85bgu)

EIF_UNION Fn85bgu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, Fn85bgu);
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("code_zero", RTUD(1966), Current, 0, 0, 27975);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) '0');
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }

#undef Result
}

/* wipe_out */

void Fn81fu3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(1966), Current, 0, 1, 27969);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", arg1))(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* max_integer_64_digits */

RTOID (Fn830ll)

EIF_UNION Fn830ll (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDD;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fn830ll);
	dftype = Dftype(Current);
	dtype = Dtype(Current);
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("max_integer_64_digits", RTUD(1966), Current, 0, 0, 27973);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1966,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 19L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	Result = (EIF_REFERENCE)tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("ninteen_digits", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 19L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* is_hexadecimal */

EIF_UNION Fn8cke8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTEAA("is_hexadecimal", RTUD(1966), Current, 3, 1, 27985);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(8);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			loc3 = (EIF_CHARACTER)tc1;

			RTHOOK(9);
			if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) '0') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) '9')) && (EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) 'a') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) 'f'))) && (EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) 'A') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) 'F')))) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}

			RTHOOK(7);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* new_empty_string */

EIF_UNION Fn8dvah (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,loc1);
	RTLR(6,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("new_empty_string", RTUD(1966), Current, 1, 2, 27987);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		tr1 = RTLN(RTUD(774));
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(7);
			ui4_1 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 216, "new_empty_string", loc1))(loc1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
		} else {
			RTHOOK(8);
			ur1 = RTCCL(arg1);
			Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 66, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "wipe_out", Result))(Result);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* to_utf16_be */

EIF_UNION Fn8eh73 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,Result);
	RTLR(5,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTEAA("to_utf16_be", RTUD(1966), Current, 7, 1, 27988);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc7 = RTCCL(arg1);
	loc7 = RTRV(RTUD(2006), loc7);

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2006, 271, "to_utf16_be", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc2 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(6);
		tr1 = RTLN(RTUD(774));
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(9);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc3 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 11, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 155, "is_bmp_code", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(11);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 / ((EIF_INTEGER_32) 256L));
				RTHOOK(12);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 % ((EIF_INTEGER_32) 256L));
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(13);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(14);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(15);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1965, 104, "supplementary_to_high_surrogate", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc6 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(16);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(17);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(18);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(19);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(20);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1965, 105, "supplementary_to_low_surrogate", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc6 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(21);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(22);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(23);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(23);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(24);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(24);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			}

			RTHOOK(25);
			loc1++;
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("to_utf16_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(27);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("valid_utf16", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(28);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1965, 91, "valid_utf16", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* to_integer_64 */

EIF_UNION Fn82qqc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_64 Result = (EIF_INTEGER_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_INT64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("to_integer_64", RTUD(1966), Current, 0, 1, 27971);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("integer_64_string", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 47, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 99, "to_integer_64", arg1))(arg1)).value.EIF_INTEGER_64_value);
	Result = (EIF_INTEGER_64)ti8_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT64; r.value.EIF_INTEGER_64_value = Result; return r; }
#undef arg1
}

/* make_from_string */

EIF_UNION Fn77dx9 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(7,loc4);
	RTLR(1,Current);
	RTLR(6,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("make_from_string", RTUD(1966), Current, 4, 1, 27977);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		tr1 = RTLN(RTUD(774));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 3, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc3 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(5);
		tr1 = RTLN(RTUD(774));
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		loc4 = RTCCL(arg1);
		loc4 = RTRV(RTUD(2006), loc4);

		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2006, 221, "byte_count", loc4));
			loc3 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(9);
			loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(10);
			while (!((EIF_BOOLEAN)(loc2 > loc3))) {
				RTHOOK(11);
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 281, "character_item_at_byte_index", loc4))(loc4, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(12);
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 282, "next_byte_index", loc4))(loc4, ui4_1x)).value.EIF_INTEGER_32_value);
				loc2 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(10);
				;
			}

		} else {

			RTHOOK(13);
			loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(14);
			while (!((EIF_BOOLEAN)(loc1 > loc3))) {
				RTHOOK(15);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(16);
				loc1++;
				RTHOOK(14);
				;
			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("new_string", EX_POST);
		if (!RTCEQ(Result, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(19);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("initialized", EX_POST);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* substring_index */

EIF_UNION Fn8iduu (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(7,loc5);
	RTLR(2,Current);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTEAA("substring_index", RTUD(1966), Current, 10, 3, 27994);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 1L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			tc1 = (EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	if (RTCEQ(arg2, arg1)) {

		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(6);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		}

	} else {
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		loc10 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32)arg3;
		} else {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			loc7 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - loc10) + ((EIF_INTEGER_32) 1L));

			RTHOOK(11);
			if ((EIF_BOOLEAN)(arg3 <= loc7)) {

				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(12);
				ur1 = RTCCL(arg1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
				ur2 = RTCCL(tr2);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				if (tc1) {

					RTHOOK(13);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(13);
					ur1 = RTCCL(arg2);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					ur2 = RTCCL(tr2);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					if (tc1) {
						RTHOOK(14);
						ur1 = RTCCL(arg2);
						ui4_1 = arg3;
						ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 19, "substring_index", arg1))(arg1, ur1x, ui4_1x)).value.EIF_INTEGER_32_value);
						Result = (EIF_INTEGER_32)ti4_1;
					} else {
						RTHOOK(15);
						loc5 = RTCCL(arg2);
						loc5 = RTRV(RTUD(2006), loc5);

						RTHOOK(16);
						if ((EIF_BOOLEAN)(loc5 != NULL)) {
							RTHOOK(17);
							ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(2006, 221, "byte_count", loc5));
							loc3 = (EIF_INTEGER_32)ti4_1;
							RTHOOK(18);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 24, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(18);
							ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1928, 91, "maximum_character_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
							loc9 = (EIF_INTEGER_32)ti4_1;

							RTHOOK(19);
							loc6 = (EIF_INTEGER_32)arg3;
							RTHOOK(20);
							while (!((EIF_BOOLEAN)(loc6 > loc7))) {
								RTHOOK(21);
								loc2 = (EIF_INTEGER_32)loc6;
								RTHOOK(22);
								loc8 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

								RTHOOK(23);
								loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
								RTHOOK(24);
								while (!((EIF_BOOLEAN)(loc1 > loc3))) {
									RTHOOK(25);
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 280, "item_code_at_byte_index", loc5))(loc5, ui4_1x)).value.EIF_INTEGER_32_value);
									loc4 = (EIF_INTEGER_32)ti4_1;

									RTHOOK(26);
									if ((EIF_BOOLEAN)(loc4 > loc9)) {
										RTHOOK(27);
										loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
									}


									RTHOOK(28);
									ui4_1 = loc2;
									ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
									if ((EIF_BOOLEAN)(ti4_1 != loc4)) {
										RTHOOK(29);
										loc8 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
										RTHOOK(30);
										loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
									} else {
										RTHOOK(31);
										loc2++;
										RTHOOK(32);
										ui4_1 = loc1;
										ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 282, "next_byte_index", loc5))(loc5, ui4_1x)).value.EIF_INTEGER_32_value);
										loc1 = (EIF_INTEGER_32)ti4_1;
									}

									RTHOOK(24);
									;
								}


								RTHOOK(33);
								if (loc8) {
									RTHOOK(34);
									Result = (EIF_INTEGER_32)loc6;
									RTHOOK(35);
									loc6 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(36);
									loc6++;
								}

								RTHOOK(20);
								;
							}

						} else {
							RTHOOK(37);
							loc3 = (EIF_INTEGER_32)loc10;

							RTHOOK(38);
							loc6 = (EIF_INTEGER_32)arg3;
							RTHOOK(39);
							while (!((EIF_BOOLEAN)(loc6 > loc7))) {
								RTHOOK(40);
								loc2 = (EIF_INTEGER_32)loc6;
								RTHOOK(41);
								loc8 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

								RTHOOK(42);
								loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
								RTHOOK(43);
								while (!((EIF_BOOLEAN)(loc1 > loc3))) {

									RTHOOK(44);
									ui4_1 = loc2;
									tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
									ui4_1 = loc1;
									tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg2))(arg2, ui4_1x)).value.EIF_CHARACTER_value);
									if ((EIF_BOOLEAN)(tc1 != tc2)) {
										RTHOOK(45);
										loc8 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
										RTHOOK(46);
										loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
									} else {
										RTHOOK(47);
										loc2++;
										RTHOOK(48);
										loc1++;
									}

									RTHOOK(43);
									;
								}


								RTHOOK(49);
								if (loc8) {
									RTHOOK(50);
									Result = (EIF_INTEGER_32)loc6;
									RTHOOK(51);
									loc6 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(52);
									loc6++;
								}

								RTHOOK(39);
								;
							}

						}

					}

				} else {
					RTHOOK(53);
					ur1 = RTCCL(arg2);
					ui4_1 = arg3;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 19, "substring_index", arg1))(arg1, ur1x, ui4_1x)).value.EIF_INTEGER_32_value);
					Result = (EIF_INTEGER_32)ti4_1;
				}

			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(54);
		RTCT("valid_result", EX_POST);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tc2 = '\0';
			if ((EIF_BOOLEAN)(arg3 <= Result)) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
				tc2 = (EIF_BOOLEAN)(Result <= (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(55);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg3;
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 44, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tc1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(56);
		RTCT("at_this_index", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)(Result >= arg3)) {
			ur1 = RTCCL(arg2);
			ui4_1 = Result;
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
			ui4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(Result + ti4_1) - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(57);
		RTCT("none_before", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)(Result > arg3)) {
			ui4_1 = arg3;
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
			ui4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(Result + ti4_1) - ((EIF_INTEGER_32) 2L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 44, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(58);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* string */

EIF_UNION Fn8g2zl (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(7,tr3);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("string", RTUD(1966), Current, 0, 1, 27992);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 17, "string", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("first_item", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 17, "string", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr3);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* to_utf16_le */

EIF_UNION Fn8e45q (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(8,tr3);
	RTLR(3,Result);
	RTLR(5,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTEAA("to_utf16_le", RTUD(1966), Current, 7, 1, 27989);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc7 = RTCCL(arg1);
	loc7 = RTRV(RTUD(2006), loc7);

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2006, 272, "to_utf16_le", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc2 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(6);
		tr1 = RTLN(RTUD(774));
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(9);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc3 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 11, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 155, "is_bmp_code", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(11);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 / ((EIF_INTEGER_32) 256L));
				RTHOOK(12);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 % ((EIF_INTEGER_32) 256L));
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(13);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(14);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(15);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1965, 104, "supplementary_to_high_surrogate", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc6 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(16);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(17);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(18);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(19);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(20);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1965, 105, "supplementary_to_low_surrogate", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc6 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(21);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(22);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(23);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(23);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(24);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(24);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			}

			RTHOOK(25);
			loc1++;
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("to_utf16_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(27);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("valid_utf16", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(28);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 16, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(28);
		tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1965, 93, "bom_le", tr2))(tr2)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(Result);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr3))(tr3, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1965, 91, "valid_utf16", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* left_adjust */

void Fn8xxar (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("left_adjust", RTUD(1966), Current, 2, 1, 27962);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {

		RTHOOK(5);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		switch (tc1) {
			case (EIF_CHARACTER) '\011':
			case (EIF_CHARACTER) '\012':
			case (EIF_CHARACTER) '\015':
			case (EIF_CHARACTER) ' ':
				RTHOOK(6);
				loc1++;
				break;
			default:
				RTHOOK(7);
				loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
				break;
		}
		RTHOOK(4);
		;
	}

	RTHOOK(8);
	ui4_1 = (EIF_INTEGER_32)(loc1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 80, "remove_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("left_adjusted", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			tc2 = '\0';
			tc3 = '\0';
			tc4 = '\0';
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) ' ');
			if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) '\011');
				tc4 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (tc4) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) '\015');
				tc3 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (tc3) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER) '\012');
				tc2 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
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
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* to_utf32_be */

EIF_UNION Fn8fs3c (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,loc8);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(5,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTEAA("to_utf32_be", RTUD(1966), Current, 8, 1, 27990);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc8 = RTCCL(arg1);
	loc8 = RTRV(RTUD(2006), loc8);

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2006, 273, "to_utf32_be", loc8))(loc8)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc6 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(6);
		tr1 = RTLN(RTUD(774));
		ui4_1 = (EIF_INTEGER_32)(((EIF_INTEGER_32) 4L) * loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 > loc6))) {
			RTHOOK(9);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc7 = (EIF_INTEGER_32)ti4_1;
			RTHOOK(10);
			loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(11);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(14);
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 / ((EIF_INTEGER_32) 256L));
			RTHOOK(15);
			loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(18);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(19);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(20);
			loc1++;
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("to_utf32_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(22);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("valid_utf32", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(23);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1964, 92, "valid_utf32", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* fill_with */

void Fn8sqts (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_CHARACTER_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_CHAR,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("fill_with", RTUD(1966), Current, 0, 2, 27954);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	uc1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 44, "fill_with", arg1))(arg1, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("filled", EX_POST);
		uc1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(140, 0, "occurrences", arg1))(arg1, uc1x)).value.EIF_INTEGER_32_value);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* remove_substring */

void Fn80sxh (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(5,Current);
	RTLR(3,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("remove_substring", RTUD(1966), Current, 0, 3, 27968);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 <= (EIF_INTEGER_32)(arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32)(arg2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		ui4_1 = (EIF_INTEGER_32)(arg3 + ((EIF_INTEGER_32) 1L));
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_1;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = tr3;
		in_assertion = 0;
	}
	RTHOOK(5);
	ui4_1 = arg2;
	ui4_2 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 81, "remove_substring", arg1))(arg1, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("removed", EX_POST);
		ur1 = RTCCL(tr2);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* has_substring */

EIF_UNION Fn79zor (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(5,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("has_substring", RTUD(1966), Current, 0, 2, 27981);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 <= ti4_2)) {
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 57, dtype))(Current, ur1x, ur2x, ui4_1x)).value.EIF_INTEGER_32_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("false_if_too_small", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
			tc1 = (EIF_BOOLEAN) !Result;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("true_if_initial", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		if ((EIF_BOOLEAN)(ti4_1 >= ti4_2)) {
			ur1 = RTCCL(arg2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			tc1 = Result;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		if ((EIF_BOOLEAN)(ti4_1 >= ti4_2)) {
			ur1 = RTCCL(arg2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (tc2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 44, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(Result == tc2);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* to_utf32_le */

EIF_UNION Fn8gf0z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(1,loc8);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(2,tr1);
	RTLR(8,tr3);
	RTLR(3,Result);
	RTLR(5,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTEAA("to_utf32_le", RTUD(1966), Current, 8, 1, 27991);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc8 = RTCCL(arg1);
	loc8 = RTRV(RTUD(2006), loc8);

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2006, 274, "to_utf32_le", loc8))(loc8)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc6 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(6);
		tr1 = RTLN(RTUD(774));
		ui4_1 = (EIF_INTEGER_32)(((EIF_INTEGER_32) 4L) * loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 > loc6))) {
			RTHOOK(9);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc7 = (EIF_INTEGER_32)ti4_1;
			RTHOOK(10);
			loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(11);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(14);
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 / ((EIF_INTEGER_32) 256L));
			RTHOOK(15);
			loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(18);
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(19);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
			RTHOOK(20);
			loc1++;
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("to_utf32_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(22);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("valid_utf32", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(23);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 17, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(23);
		tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1964, 94, "bom_le", tr2))(tr2)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(Result);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr3))(tr3, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1964, 92, "valid_utf32", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* remove_head */

void Fn8_h08 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("remove_head", RTUD(1966), Current, 0, 2, 27966);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_1 = ti4_1;
		ti4_1 = eif_min_int32 (arg2,ui4_1);
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 80, "remove_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("removed", EX_POST);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* case_insensitive_hash_code */

EIF_UNION Fn8i0sg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("case_insensitive_hash_code", RTUD(1966), Current, 3, 1, 27995);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc3 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc3 > ((EIF_INTEGER_32) 5L))) {
		RTHOOK(4);
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		RTNHOOK(4);
		tc2 = (EIF_CHARACTER) tolower(tc1);
		RTNHOOK(4);
		ti4_1 = (EIF_INTEGER_32) (tc2);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 * ti4_1);
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	} else {
		RTHOOK(6);
		loc2 = (EIF_INTEGER_32)loc3;
	}


	RTHOOK(7);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {
		RTHOOK(9);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		RTNHOOK(9);
		tc2 = (EIF_CHARACTER) tolower(tc1);
		RTNHOOK(9);
		ti4_1 = (EIF_INTEGER_32) (tc2);
		Result += ti4_1;
		RTHOOK(10);
		loc1++;
		RTHOOK(8);
		;
	}

	RTHOOK(11);
	Result *= loc3;

	RTHOOK(12);
	if ((EIF_BOOLEAN)(Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(Result + ((EIF_INTEGER_32) 1L));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("hash_code_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* to_upper */

EIF_UNION Fn8vbj9 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(7,tr3);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("to_upper", RTUD(1966), Current, 0, 1, 27958);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("upper_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("upper_string_same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("anchor", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc3;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1829, 38, "as_upper", tr1))(tr1, uc1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr3);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* same_unicode_string */

EIF_UNION Fn8lmiy (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("same_unicode_string", RTUD(1966), Current, 0, 2, 27999);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tc1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tc2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
				tc3 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg2))(arg2, ui4_1x)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					tc4 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
					if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 2L))) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ur1 = RTCCL(tr1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
						ui4_2 = ti4_1;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg2))(arg2, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ur2 = RTCCL(tr2);
						tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
						tc4 = tc5;
					}
					tc3 = tc4;
				}
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if ((EIF_BOOLEAN)(Result == tc1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("elks_same_string", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 60, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* same_case_insensitive */

EIF_UNION Fn8l9gk (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_CHARACTER loc1 = (EIF_CHARACTER) 0;
	EIF_CHARACTER loc2 = (EIF_CHARACTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR, &loc1);
	RTLU(SK_CHAR, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTEAA("same_case_insensitive", RTUD(1966), Current, 6, 2, 28000);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s1_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s2_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (RTCEQ(arg1, arg2)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc6 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(7);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(8);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ur1 = RTCCL(arg2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if ((EIF_BOOLEAN) !tc1) {

			RTHOOK(9);
			loc5 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(10);
			while (!((EIF_BOOLEAN)(loc5 > loc6))) {
				RTHOOK(11);
				ui4_1 = loc5;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(12);
				ui4_1 = loc5;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg2))(arg2, ui4_1x)).value.EIF_INTEGER_32_value);
				loc4 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc3 == loc4)) {
					RTHOOK(14);
					loc5++;
				} else {
					RTHOOK(15);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 11, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(15);
					ui4_1 = loc3;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 35, "lower_code", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 11, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(15);
					ui4_1 = loc4;
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 35, "lower_code", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(16);
					loc5++;
				} else {
					RTHOOK(17);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(18);
					loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 + ((EIF_INTEGER_32) 1L));
				}}

				RTHOOK(10);
				;
			}

		} else {

			RTHOOK(19);
			loc5 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(20);
			while (!((EIF_BOOLEAN)(loc5 > loc6))) {
				RTHOOK(21);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				loc1 = (EIF_CHARACTER)tc1;
				RTHOOK(22);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg2))(arg2, ui4_1x)).value.EIF_CHARACTER_value);
				loc2 = (EIF_CHARACTER)tc1;

				RTHOOK(23);
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					RTHOOK(24);
					loc5++;
				} else {
					RTHOOK(25);
					tc1 = (EIF_CHARACTER) tolower(loc1);
					tc2 = (EIF_CHARACTER) tolower(loc2);
				if ((EIF_BOOLEAN)(tc1 == tc2)) {
					RTHOOK(26);
					loc5++;
				} else {
					RTHOOK(27);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(28);
					loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 + ((EIF_INTEGER_32) 1L));
				}}

				RTHOOK(20);
				;
			}

		}

	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* three_way_case_insensitive_comparison */

EIF_UNION Fn8nkbt (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc5 = (EIF_CHARACTER) 0;
	EIF_CHARACTER loc6 = (EIF_CHARACTER) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR, &loc5);
	RTLU(SK_CHAR, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTEAA("three_way_case_insensitive_comparison", RTUD(1966), Current, 9, 2, 28002);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			ur1 = RTCCL(arg2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
	if (tc1) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc3 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		loc4 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc3 < loc4)) {
			RTHOOK(9);
			loc2 = (EIF_INTEGER_32)loc3;
		} else {
			RTHOOK(10);
			loc2 = (EIF_INTEGER_32)loc4;
		}


		RTHOOK(11);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(12);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(13);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			loc5 = (EIF_CHARACTER)tc1;
			RTHOOK(14);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg2))(arg2, ui4_1x)).value.EIF_CHARACTER_value);
			loc6 = (EIF_CHARACTER)tc1;

			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc5 == loc6)) {
				RTHOOK(16);
				loc1++;
			} else {
				RTHOOK(17);
				tc1 = (EIF_CHARACTER) tolower(loc5);
				loc5 = (EIF_CHARACTER)tc1;
				RTHOOK(18);
				tc1 = (EIF_CHARACTER) tolower(loc6);
				loc6 = (EIF_CHARACTER)tc1;

				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(20);
					loc1++;
				} else {
					RTHOOK(21);
				if ((EIF_BOOLEAN)(loc5 < loc6)) {
					RTHOOK(22);
					loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					RTHOOK(23);
					Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
					RTHOOK(24);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(25);
					loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					RTHOOK(26);
					Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
					RTHOOK(27);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				}}

			}

			RTHOOK(12);
			;
		}


		RTHOOK(28);
		if ((EIF_BOOLEAN) !loc9) {

			RTHOOK(29);
			if ((EIF_BOOLEAN)(loc3 < loc4)) {
				RTHOOK(30);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(31);
			if ((EIF_BOOLEAN)(loc3 != loc4)) {
				RTHOOK(32);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			}}

		}

	} else {
		RTHOOK(33);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc3 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(34);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		loc4 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(35);
		if ((EIF_BOOLEAN)(loc3 < loc4)) {
			RTHOOK(36);
			loc2 = (EIF_INTEGER_32)loc3;
		} else {
			RTHOOK(37);
			loc2 = (EIF_INTEGER_32)loc4;
		}


		RTHOOK(38);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(39);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(40);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc7 = (EIF_INTEGER_32)ti4_1;
			RTHOOK(41);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg2))(arg2, ui4_1x)).value.EIF_INTEGER_32_value);
			loc8 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(42);
			if ((EIF_BOOLEAN)(loc7 == loc8)) {
				RTHOOK(43);
				loc1++;
			} else {
				RTHOOK(44);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 11, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(44);
				ui4_1 = loc7;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 35, "lower_code", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc7 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(45);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 11, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(45);
				ui4_1 = loc8;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 35, "lower_code", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc8 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(46);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(47);
					loc1++;
				} else {
					RTHOOK(48);
				if ((EIF_BOOLEAN)(loc7 < loc8)) {
					RTHOOK(49);
					loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					RTHOOK(50);
					Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
					RTHOOK(51);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(52);
					loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					RTHOOK(53);
					Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
					RTHOOK(54);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				}}

			}

			RTHOOK(39);
			;
		}


		RTHOOK(55);
		if ((EIF_BOOLEAN) !loc9) {

			RTHOOK(56);
			if ((EIF_BOOLEAN)(loc3 < loc4)) {
				RTHOOK(57);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(58);
			if ((EIF_BOOLEAN)(loc3 != loc4)) {
				RTHOOK(59);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			}}

		}

	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg2
#undef arg1
}

/* appended_substring */

EIF_UNION Fn8ph4o (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(2,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(6,tr3);
	RTLR(7,loc1);
	RTLR(8,Result);
	RTLR(3,ur1);
	RTLR(9,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("appended_substring", RTUD(1966), Current, 2, 4, 27949);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		RTTE((EIF_BOOLEAN)(arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)(arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_2 = ti4_3;
		ur1 = RTCCL(arg1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 66, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_3 = ti4_4;
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg2))(arg2, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = tr3;
		in_assertion = 0;
	}
	RTHOOK(6);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(2006), loc1);

	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(8);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2006, 243, "append_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(9);
		Result = (EIF_REFERENCE)RTCCL(loc1);
	} else {
		RTHOOK(10);
		loc1 = RTCCL(arg2);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(12);
			ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_4 + arg4) - arg3) + ((EIF_INTEGER_32) 1L));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 216, "new_empty_string", loc1))(loc1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr3);
			RTHOOK(13);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 242, "append_string", loc1))(loc1, ur1x);
			RTHOOK(14);
			ur1 = RTCCL(arg2);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2006, 243, "append_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(15);
			Result = (EIF_REFERENCE)RTCCL(loc1);
		} else {

			RTHOOK(16);
			loc2 = (EIF_INTEGER_32)arg3;
			RTHOOK(17);
			while (!((EIF_BOOLEAN)(loc2 > arg4))) {
				RTHOOK(18);
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg2))(arg2, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
				RTHOOK(19);
				loc2++;
				RTHOOK(17);
				;
			}

			RTHOOK(20);
			Result = (EIF_REFERENCE)RTCCL(arg1);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("type_if_not_aliased", EX_POST);
		tc1 = '\01';
		if (!RTCEQ(Result, arg1)) {
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(22);
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr3))(tr3, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 + arg4) - arg3) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ti4_2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("final", EX_POST);
		ui4_1 = (EIF_INTEGER_32)(ti4_3 + ((EIF_INTEGER_32) 1L));
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ui4_2 = ti4_4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* is_integer_64 */

EIF_UNION Fn8bxhm (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER loc7 = (EIF_CHARACTER) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_CHAR, &loc7);
	RTEAA("is_integer_64", RTUD(1966), Current, 7, 1, 27984);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc1 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		loc7 = (EIF_CHARACTER)tc1;

		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc7 == (EIF_CHARACTER) '+')) {
			RTHOOK(7);
			loc3++;
		} else {
			RTHOOK(8);
		if ((EIF_BOOLEAN)(loc7 == (EIF_CHARACTER) '-')) {
			RTHOOK(9);
			loc3++;
			RTHOOK(10);
			loc6 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}}


		RTHOOK(11);
		loc2 = (EIF_INTEGER_32)loc3;
		RTHOOK(12);
		while (!((EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 != loc2) || (EIF_BOOLEAN)(loc2 > loc1)))) {

			RTHOOK(13);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '0')) {
				RTHOOK(14);
				loc3++;
			}

			RTHOOK(15);
			loc2++;
			RTHOOK(12);
			;
		}

		RTHOOK(16);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - loc3) + ((EIF_INTEGER_32) 1L));

		RTHOOK(17);
		if ((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 20L))) {
			RTHOOK(18);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

			RTHOOK(19);
			loc4 = (EIF_INTEGER_32)loc3;
			RTHOOK(20);
			while (!((EIF_BOOLEAN)(loc4 > (EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 + loc3) - ((EIF_INTEGER_32) 1L))))) {
				RTHOOK(21);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				loc7 = (EIF_CHARACTER)tc1;

				RTHOOK(22);
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc7 < (EIF_CHARACTER) '0') || (EIF_BOOLEAN)(loc7 > (EIF_CHARACTER) '9'))) {
					RTHOOK(23);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(24);
					loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 + loc3) + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(25);
					loc4++;
				}

				RTHOOK(20);
				;
			}


			RTHOOK(26);
			if ((EIF_BOOLEAN)(Result && (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 19L)))) {

				RTHOOK(27);
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				loc4 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(28);
				loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 - loc1);
				RTHOOK(29);
				while (!((EIF_BOOLEAN)((EIF_BOOLEAN) !Result || (EIF_BOOLEAN)(loc3 > loc4)))) {
					RTHOOK(30);
					ui4_1 = loc3;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 94, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 - loc2);

					RTHOOK(31);
					if (loc6) {
						RTHOOK(32);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 93, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(32);
						ui4_1 = (EIF_INTEGER_32)(loc3 - loc5);
						ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc1 = (EIF_INTEGER_32)ti4_1;
					} else {
						RTHOOK(33);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 92, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(33);
						ui4_1 = (EIF_INTEGER_32)(loc3 - loc5);
						ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc1 = (EIF_INTEGER_32)ti4_1;
					}


					RTHOOK(34);
					if ((EIF_BOOLEAN)(loc2 < loc1)) {
						RTHOOK(35);
						Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
						RTHOOK(36);
						loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(37);
						Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(loc2 == loc1);
						RTHOOK(38);
						loc3++;
					}

					RTHOOK(29);
					;
				}

			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* replaced_first_substring */

EIF_UNION Fn8r2v5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(7,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(5,Current);
	RTLR(6,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("replaced_first_substring", RTUD(1966), Current, 3, 3, 27953);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 57, dtype))(Current, ur1x, ur2x, ui4_1x)).value.EIF_INTEGER_32_value);

	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		loc2 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(8);
		ur1 = RTCCL(arg1);
		ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVPA(13, 118, "count", arg3));
		ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - loc2) + ti4_1);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 50, dtype))(Current, ur1x, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(9);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32)(loc3 - ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 68, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 67, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(11);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + loc2);
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1966, 68, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(12);
			RTCT("not_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(13);
		Result = (EIF_REFERENCE)RTCCL(arg1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("replaced_first_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* append_substring_to_string */

void Fn8qs_x (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(7,tr3);
	RTLR(8,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("append_substring_to_string", RTUD(1966), Current, 2, 4, 27951);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("same_type", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		ur1 = RTCCL(arg2);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		RTTE((EIF_BOOLEAN)(arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)(arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 66, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg2))(arg2, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = tr3;
		in_assertion = 0;
	}
	RTHOOK(7);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(2006), loc1);

	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(9);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2006, 243, "append_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
	} else {

		RTHOOK(10);
		loc2 = (EIF_INTEGER_32)arg3;
		RTHOOK(11);
		while (!((EIF_BOOLEAN)(loc2 > arg4))) {
			RTHOOK(12);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg2))(arg2, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(13);
			loc2++;
			RTHOOK(11);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("appended", EX_POST);
		ur1 = RTCCL(tr2);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(8);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* three_way_comparison */

EIF_UNION Fn8mxd6 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc6 = (EIF_CHARACTER) 0;
	EIF_CHARACTER loc7 = (EIF_CHARACTER) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(7,loc1);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_CHAR, &loc6);
	RTLU(SK_CHAR, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTEAA("three_way_comparison", RTUD(1966), Current, 10, 2, 28001);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			ur1 = RTCCL(arg2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
	if (tc1) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc4 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		loc5 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc4 < loc5)) {
			RTHOOK(9);
			loc3 = (EIF_INTEGER_32)loc4;
		} else {
			RTHOOK(10);
			loc3 = (EIF_INTEGER_32)loc5;
		}


		RTHOOK(11);
		loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(12);
		while (!((EIF_BOOLEAN)(loc2 > loc3))) {
			RTHOOK(13);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			loc6 = (EIF_CHARACTER)tc1;
			RTHOOK(14);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg2))(arg2, ui4_1x)).value.EIF_CHARACTER_value);
			loc7 = (EIF_CHARACTER)tc1;

			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc6 == loc7)) {
				RTHOOK(16);
				loc2++;
			} else {
				RTHOOK(17);
			if ((EIF_BOOLEAN)(loc6 < loc7)) {
				RTHOOK(18);
				loc10 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(19);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
				RTHOOK(20);
				loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(21);
				loc10 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(22);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				RTHOOK(23);
				loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
			}}

			RTHOOK(12);
			;
		}


		RTHOOK(24);
		if ((EIF_BOOLEAN) !loc10) {

			RTHOOK(25);
			if ((EIF_BOOLEAN)(loc4 < loc5)) {
				RTHOOK(26);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(27);
			if ((EIF_BOOLEAN)(loc4 != loc5)) {
				RTHOOK(28);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			}}

		}

	} else {
		RTHOOK(29);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(30);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(31);
			ur1 = RTCCL(arg2);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 235, "three_way_unicode_comparison", loc1))(loc1, ur1x)).value.EIF_INTEGER_32_value);
			Result = (EIF_INTEGER_32)ti4_1;
		} else {
			RTHOOK(32);
			loc1 = RTCCL(arg2);
			loc1 = RTRV(RTUD(2006), loc1);

			RTHOOK(33);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(34);
				ur1 = RTCCL(arg1);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 235, "three_way_unicode_comparison", loc1))(loc1, ur1x)).value.EIF_INTEGER_32_value);
				Result = (EIF_INTEGER_32)(EIF_INTEGER_32)-ti4_1;
			} else {
				RTHOOK(35);
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				loc4 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(36);
				ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
				loc5 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(37);
				if ((EIF_BOOLEAN)(loc4 < loc5)) {
					RTHOOK(38);
					loc3 = (EIF_INTEGER_32)loc4;
				} else {
					RTHOOK(39);
					loc3 = (EIF_INTEGER_32)loc5;
				}


				RTHOOK(40);
				loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				RTHOOK(41);
				while (!((EIF_BOOLEAN)(loc2 > loc3))) {
					RTHOOK(42);
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc8 = (EIF_INTEGER_32)ti4_1;
					RTHOOK(43);
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg2))(arg2, ui4_1x)).value.EIF_INTEGER_32_value);
					loc9 = (EIF_INTEGER_32)ti4_1;

					RTHOOK(44);
					if ((EIF_BOOLEAN)(loc8 == loc9)) {
						RTHOOK(45);
						loc2++;
					} else {
						RTHOOK(46);
					if ((EIF_BOOLEAN)(loc8 < loc9)) {
						RTHOOK(47);
						loc10 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
						RTHOOK(48);
						Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
						RTHOOK(49);
						loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(50);
						loc10 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
						RTHOOK(51);
						Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
						RTHOOK(52);
						loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
					}}

					RTHOOK(41);
					;
				}


				RTHOOK(53);
				if ((EIF_BOOLEAN) !loc10) {

					RTHOOK(54);
					if ((EIF_BOOLEAN)(loc4 < loc5)) {
						RTHOOK(55);
						Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
					} else {
						RTHOOK(56);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(57);
						Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
					}}

				}

			}

		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(58);
		RTCT("equal_zero", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == tc1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg2
#undef arg1
}

/* as_string */

EIF_UNION Fn8t0o0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,loc1);
	RTLR(6,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("as_string", RTUD(1966), Current, 1, 1, 27956);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 91, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		Result = (EIF_REFERENCE)RTCCL(arg1);
	} else {
		RTHOOK(4);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2006, 275, "as_string", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
		} else {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 17, "string", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("as_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("aliasing", EX_POST);
		tc1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = RTCEQ(Result, arg1);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* hexadecimal_to_integer */

EIF_UNION Fn8w9c4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("hexadecimal_to_integer", RTUD(1966), Current, 2, 1, 27961);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("hexadecimal", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1966, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(4);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {
		RTHOOK(6);
		Result *= ((EIF_INTEGER_32) 16L);

		RTHOOK(7);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		switch (tc1) {
			case (EIF_CHARACTER) '0':
				break;
			case (EIF_CHARACTER) '1':
				RTHOOK(8);
				Result++;
				break;
			case (EIF_CHARACTER) '2':
				RTHOOK(9);
				Result += ((EIF_INTEGER_32) 2L);
				break;
			case (EIF_CHARACTER) '3':
				RTHOOK(10);
				Result += ((EIF_INTEGER_32) 3L);
				break;
			case (EIF_CHARACTER) '4':
				RTHOOK(11);
				Result += ((EIF_INTEGER_32) 4L);
				break;
			case (EIF_CHARACTER) '5':
				RTHOOK(12);
				Result += ((EIF_INTEGER_32) 5L);
				break;
			case (EIF_CHARACTER) '6':
				RTHOOK(13);
				Result += ((EIF_INTEGER_32) 6L);
				break;
			case (EIF_CHARACTER) '7':
				RTHOOK(14);
				Result += ((EIF_INTEGER_32) 7L);
				break;
			case (EIF_CHARACTER) '8':
				RTHOOK(15);
				Result += ((EIF_INTEGER_32) 8L);
				break;
			case (EIF_CHARACTER) '9':
				RTHOOK(16);
				Result += ((EIF_INTEGER_32) 9L);
				break;
			case (EIF_CHARACTER) 'A':
			case (EIF_CHARACTER) 'a':
				RTHOOK(17);
				Result += ((EIF_INTEGER_32) 10L);
				break;
			case (EIF_CHARACTER) 'B':
			case (EIF_CHARACTER) 'b':
				RTHOOK(18);
				Result += ((EIF_INTEGER_32) 11L);
				break;
			case (EIF_CHARACTER) 'C':
			case (EIF_CHARACTER) 'c':
				RTHOOK(19);
				Result += ((EIF_INTEGER_32) 12L);
				break;
			case (EIF_CHARACTER) 'D':
			case (EIF_CHARACTER) 'd':
				RTHOOK(20);
				Result += ((EIF_INTEGER_32) 13L);
				break;
			case (EIF_CHARACTER) 'E':
			case (EIF_CHARACTER) 'e':
				RTHOOK(21);
				Result += ((EIF_INTEGER_32) 14L);
				break;
			case (EIF_CHARACTER) 'F':
			case (EIF_CHARACTER) 'f':
				RTHOOK(22);
				Result += ((EIF_INTEGER_32) 15L);
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(23);
		loc1++;
		RTHOOK(5);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* as_lower */

EIF_UNION Fn8vzhw (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(7,tr3);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("as_lower", RTUD(1966), Current, 0, 1, 27959);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 87, "as_lower", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_lower_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("as_lower_same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("anchor", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc3;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1829, 37, "as_lower", tr1))(tr1, uc1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 87, "as_lower", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr3);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* as_upper */

EIF_UNION Fn8wmfi (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(7,tr3);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("as_upper", RTUD(1966), Current, 0, 1, 27960);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_upper_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("as_upper_same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("anchor", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc3;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1829, 38, "as_upper", tr1))(tr1, uc1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr3);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_integer */

EIF_UNION Fn8ammd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTEAA("is_integer", RTUD(1966), Current, 3, 1, 27982);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		while (!((EIF_BOOLEAN)(loc1 > loc2))) {
			RTHOOK(8);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			loc3 = (EIF_CHARACTER)tc1;

			RTHOOK(9);
			if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc3 < (EIF_CHARACTER) '0') || (EIF_BOOLEAN)(loc3 > (EIF_CHARACTER) '9'))) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}

			RTHOOK(7);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* dummy_string */

RTOID (Fn83dnz)

EIF_UNION Fn83dnz (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fn83dnz,27973,RTMS_EX_H("",0,0));
}
/* concat */

EIF_UNION Fn8jop2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(7,Current);
	RTLR(2,loc1);
	RTLR(5,Result);
	RTLR(3,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("concat", RTUD(1966), Current, 1, 2, 27996);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(2006), loc1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 210, "infix \"+\"", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(6);
		loc1 = RTCCL(arg2);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(8);
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 211, "prefixed_string", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
		} else {
			RTHOOK(9);
			ur1 = RTCCL(arg2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("concat_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("concat_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(13, 118, "count", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("final", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", Result))(Result, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* replaced_substring */

EIF_UNION Fn8p42a (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(6,Current);
	RTLR(7,tr3);
	RTLR(9,loc1);
	RTLR(8,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("replaced_substring", RTUD(1966), Current, 1, 4, 27950);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg3), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)(arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32)(arg3 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 67, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ui4_1 = (EIF_INTEGER_32)(arg4 + ((EIF_INTEGER_32) 1L));
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_1;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 67, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}

	RTHOOK(6);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1966, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(6);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr2))(tr2, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(7);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(13, 40, "replace_substring", arg1))(arg1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(8);
		Result = (EIF_REFERENCE)RTCCL(arg1);
	} else {
		RTHOOK(9);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(RTUD(2006), loc1);

		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(11);
			ur1 = RTCCL(arg2);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2006, 254, "replace_substring_by_string", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(12);
			Result = (EIF_REFERENCE)RTCCL(loc1);
		} else {
			RTHOOK(13);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32)(arg3 - ((EIF_INTEGER_32) 1L));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			ur2 = RTCCL(arg2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 67, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			ui4_1 = (EIF_INTEGER_32)(arg4 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			ui4_2 = ti4_1;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr3);
			Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 67, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("replaced_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("replaced", EX_POST);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1966, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTLO(7);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* insert_character */

void Fn8tdre (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_CHARACTER_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(5,Current);
	RTLR(3,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_CHAR,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("insert_character", RTUD(1966), Current, 0, 3, 27955);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg3)) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			tc1 = (EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_1 = ti4_2;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32)(arg3 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		ui4_1 = arg3;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = tr3;
		in_assertion = 0;
	}
	RTHOOK(3);
	uc1 = arg2;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 79, "insert_character", arg1))(arg1, uc1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("one_more_character", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		ui4_1 = arg3;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(tc1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_before_i", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32)(arg3 - ((EIF_INTEGER_32) 1L));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr3))(tr3, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("stable_after_i", EX_POST);
		ui4_1 = (EIF_INTEGER_32)(arg3 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ui4_2 = ti4_2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr3))(tr3, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1967 (void)
{
	GTCX
	RTOTS (29559,Fn83dnz)
	RTOTS (29560,Fn830ll)
	RTOTS (29561,Fn84oi7)
	RTOTS (29562,Fn85bgu)
}


#ifdef __cplusplus
}
#endif

