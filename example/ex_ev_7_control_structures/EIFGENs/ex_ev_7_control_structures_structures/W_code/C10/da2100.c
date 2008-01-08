/*
 * Code for class DATE_TIME_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpjwd2g(EIF_REFERENCE);
extern void Fpjnzxd(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpjsigq(EIF_REFERENCE);
extern EIF_UNION Fpjuf9l(EIF_REFERENCE);
extern EIF_UNION Fpju267(EIF_REFERENCE);
extern EIF_UNION Fpjvq4u(EIF_REFERENCE);
extern EIF_UNION Fpjw0_2(EIF_REFERENCE);
extern void Fpjzmrk(EIF_REFERENCE, EIF_UNION);
extern void Fpjxoyp(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpjs5ec(EIF_REFERENCE);
extern void Fpjyzty(EIF_REFERENCE, EIF_UNION);
extern void Fpjybwb(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpjo9sm(EIF_REFERENCE);
extern EIF_UNION Fpjpxp8(EIF_REFERENCE);
extern EIF_UNION Fpjq7lh(EIF_REFERENCE);
extern EIF_UNION Fpjqknv(EIF_REFERENCE);
extern EIF_UNION Fpjrvi3(EIF_REFERENCE);
extern void Fpjz9o6(EIF_REFERENCE);
extern void Fp1y5yn(EIF_REFERENCE, int);
extern void EIF_Minit2100(void);

#ifdef __cplusplus
}
#endif

#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* is_date_time */

EIF_UNION Fpjwd2g (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
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
	EIF_UNION ui4_5x = {0, SK_INT32};
#undef ui4_5
#define ui4_5 ui4_5x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_date_time", RTUD(2099), Current, 0, 0, 30862);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 149, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 150, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 151, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_3 = ti4_3;
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 152, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_4 = ti4_4;
	ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 153, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_5 = ti4_5;
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 154, dtype))(Current)).value.EIF_REAL_64_value);
	ur8_1 = tr8_1;
	uc1 = (EIF_BOOLEAN) 0;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2099, 117, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ur8_1x, uc1x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make */

void Fpjnzxd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2099), Current, 0, 1, 30851);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("code_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2099, 174, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("code_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 174, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* fine_second */

EIF_UNION Fpjsigq (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("fine_second", RTUD(2099), Current, 0, 0, 30857);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REAL_64 *)(Current + RTWA(2099, 172, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* is_set_up */

EIF_UNION Fpjuf9l (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_set_up", RTUD(2099), Current, 0, 0, 30859);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 176, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2099, 175, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))) {
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 148, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 148, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		Result = tc1;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_date */

EIF_UNION Fpju267 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_date", RTUD(2099), Current, 0, 0, 30860);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 149, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 150, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 151, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_3 = ti4_3;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2099, 46, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_time */

EIF_UNION Fpjvq4u (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_time", RTUD(2099), Current, 0, 0, 30861);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 152, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 153, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_2;
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 154, dtype))(Current)).value.EIF_REAL_64_value);
	ur8_1 = tr8_1;
	uc1 = (EIF_BOOLEAN) 0;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2099, 121, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, uc1x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_value_valid */

EIF_UNION Fpjw0_2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("is_value_valid", RTUD(2099), Current, 0, 0, 30863);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
	if (tc1) {
		tc1 = '\01';
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 158, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc3) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 159, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (!tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 160, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		Result = tc1;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* set_base_century */

void Fpjzmrk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTEAA("set_base_century", RTUD(2099), Current, 0, 1, 30867);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("base_century_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32)(arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2099, 177, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("base_century_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 177, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* set_source_string */

void Fpjxoyp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_source_string", RTUD(2099), Current, 0, 1, 30864);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2099, 148, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("source_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 148, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_parsed", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

/* day_text */

EIF_UNION Fpjs5ec (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("day_text", RTUD(2099), Current, 0, 0, 30858);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REFERENCE *)(Current + RTWA(2099, 173, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_month_array */

void Fpjyzty (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_month_array", RTUD(2099), Current, 0, 1, 30866);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2099, 175, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("months_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 175, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* set_day_array */

void Fpjybwb (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_day_array", RTUD(2099), Current, 0, 1, 30865);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2099, 176, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("days_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 176, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* year */

EIF_UNION Fpjo9sm (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("year", RTUD(2099), Current, 0, 0, 30852);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* month */

EIF_UNION Fpjpxp8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("month", RTUD(2099), Current, 0, 0, 30853);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 168, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* hour */

EIF_UNION Fpjq7lh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hour", RTUD(2099), Current, 0, 0, 30855);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* day */

EIF_UNION Fpjqknv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("day", RTUD(2099), Current, 0, 0, 30854);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 169, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* minute */

EIF_UNION Fpjrvi3 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("minute", RTUD(2099), Current, 0, 0, 30856);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 171, dtype));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* parse */

void Fpjz9o6 (EIF_REFERENCE Current)
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
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
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
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(2,loc7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_BOOL, &loc12);
	RTEAA("parse", RTUD(2099), Current, 12, 0, 30868);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("setup_complete", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 157, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1843));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1843, 30, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1843, 34, "year_now", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc9 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 148, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc7 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(2099, 168, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(2099, 169, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + RTWA(2099, 171, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(2099, 172, dtype)) = (EIF_REAL_64)tr8_1;
	RTHOOK(10);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(11);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(12);
	ur1 = RTCCL(loc7);
	loc8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2099, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);

	RTHOOK(13);
	loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(14);
	ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(15);
		if (loc8) {
			RTHOOK(16);
			ur1 = RTCCL(loc7);
			ui4_1 = loc1;
			loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2099, 34, dtype))(Current, ur1x, ui4_1x)).value.EIF_INTEGER_32_value);
		} else {
			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 174, dtype));
			ui4_1 = loc3;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1875, 60, "count_max", tr2));
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 + ti4_2) - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
		}

		RTHOOK(18);
		ur1 = RTCCL(loc7);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2099, 35, dtype))(Current, ur1x, ui4_1x, ui4_2x);
		RTHOOK(19);
		ui4_1 = loc2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2099, 126, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_2;

		RTHOOK(20);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 174, dtype));
		ui4_1 = loc3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if ((EIF_BOOLEAN)(tr2 == NULL)) {
			RTHOOK(21);
			ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 174, dtype));
			ui4_1 = loc3;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(22);
			ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(1875, 65, "type", tr2));
			loc5 = (EIF_INTEGER_32)ti4_2;

			RTHOOK(23);
			switch (loc5) {
				case 1L:
				case 2L:
					RTHOOK(24);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2099, 169, dtype)) = (EIF_INTEGER_32)ti4_2;
					break;
				case 3L:
					RTHOOK(25);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(2099, 173, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
					break;
				case 4L:
					RTHOOK(26);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype)) = (EIF_INTEGER_32)ti4_2;
					break;
				case 5L:

					RTHOOK(27);
					ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 177, dtype));
					if ((EIF_BOOLEAN)(ti4_2 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(28);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
						ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 177, dtype));
						*(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_2 - ti4_3);

						RTHOOK(29);
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype));
						if ((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_2 - loc9) > ((EIF_INTEGER_32) 50L))) {
							RTHOOK(30);
							(*(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype))) -= ((EIF_INTEGER_32) 100L);
						} else {
							RTHOOK(31);
							ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype));
						if ((EIF_BOOLEAN)((EIF_INTEGER_32)(loc9 - ti4_2) > ((EIF_INTEGER_32) 50L))) {
							RTHOOK(32);
							(*(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype))) += ((EIF_INTEGER_32) 100L);
						}}

					} else {
						RTHOOK(33);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
						ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 177, dtype));
						*(EIF_INTEGER_32 *)(Current + RTWA(2099, 167, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_2 - ti4_3);
					}

					break;
				case 6L:
				case 7L:
					RTHOOK(34);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2099, 168, dtype)) = (EIF_INTEGER_32)ti4_2;
					break;
				case 8L:

					RTHOOK(35);
					loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
					RTHOOK(36);
					while (!((EIF_BOOLEAN)(loc4 > ((EIF_INTEGER_32) 12L)))) {

						RTHOOK(37);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 175, dtype));
						ui4_1 = loc4;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(37);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
						ur1 = RTCCL(tr1);
						tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
						if (tc1) {
							RTHOOK(38);
							*(EIF_INTEGER_32 *)(Current + RTWA(2099, 168, dtype)) = (EIF_INTEGER_32)loc4;
						}

						RTHOOK(39);
						loc4++;
						RTHOOK(36);
						;
					}

					break;
				case 9L:
				case 10L:
					RTHOOK(40);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)ti4_2;
					break;
				case 11L:
					RTHOOK(41);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)ti4_2;

					RTHOOK(42);
					if (loc11) {

						RTHOOK(43);
						if (loc10) {
							RTHOOK(44);
							(*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype))) += ((EIF_INTEGER_32) 12L);

							RTHOOK(45);
							ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype));
							if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 24L))) {
								RTHOOK(46);
								*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
							}

						} else {
							RTHOOK(47);
							ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype));
						if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 12L))) {
							RTHOOK(48);
							*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
						}}

					} else {
						RTHOOK(49);
						loc12 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					}

					break;
				case 23L:
					RTHOOK(50);
					loc11 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					RTHOOK(51);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(51);
					tr2 = RTMS_EX_H("PM",2,20557);
					ur1 = tr2;
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
					loc10 = (EIF_BOOLEAN)tc1;
					break;
				case 12L:
				case 13L:
					RTHOOK(52);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2099, 171, dtype)) = (EIF_INTEGER_32)ti4_2;
					break;
				case 14L:
				case 15L:
					RTHOOK(53);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
					loc6 = (EIF_INTEGER_32)ti4_2;
					break;
				case 16L:
					RTHOOK(54);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 106, "to_double", tr1))(tr1)).value.EIF_REAL_64_value);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2099, 36, dtype));
					ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
					tr8_2 = (EIF_REAL_64) ((ti4_2));
					*(EIF_REAL_64 *)(Current + RTWA(2099, 172, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2))));
					break;
				default:
					RTEC(EN_WHEN);
			}

			RTHOOK(55);
			if (loc8) {
				RTHOOK(56);
				loc3 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(57);
				loc3++;
			}

			RTHOOK(58);
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
		}

		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
		;
	}


	RTHOOK(59);
	if (loc12) {

		RTHOOK(60);
		if ((EIF_BOOLEAN) !loc11) {

			RTHOOK(61);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype));
			if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 12L))) {
				RTHOOK(62);
				*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			}

		} else {
			RTHOOK(63);
		if (loc10) {
			RTHOOK(64);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype))) += ((EIF_INTEGER_32) 12L);

			RTHOOK(65);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype));
			if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 24L))) {
				RTHOOK(66);
				*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
			}

		} else {
			RTHOOK(67);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 12L))) {
			RTHOOK(68);
			*(EIF_INTEGER_32 *)(Current + RTWA(2099, 170, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		}}}

	}

	RTHOOK(69);
	tr8_2 = (EIF_REAL_64) (loc6);
	(*(EIF_REAL_64 *)(Current + RTWA(2099, 172, dtype))) += tr8_2;
	RTHOOK(70);
	*(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(71);
		RTCT("string_parsed", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(72);
	RTLE;
	RTLO(14);
	RTEE;
}

void Fp1y5yn (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("valid_value_definition", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 161, dtype))(Current)).value.EIF_BOOLEAN_value);
	tc2 = '\0';
	tc3 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
	if (tc3) {
		tc3 = '\01';
		tc4 = '\01';
		tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 158, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc5) {
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 159, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc4 = tc5;
		}
		if (!tc4) {
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 160, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		tc2 = tc3;
	}
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_value_implies_parsing", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2099, 161, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2099, 156, dtype));
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2100 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

