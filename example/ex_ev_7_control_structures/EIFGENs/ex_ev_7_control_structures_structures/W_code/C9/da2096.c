/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpipef2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpip1dp(EIF_REFERENCE, EIF_UNION);
extern void Fpimtpl(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpivvta(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpixtl5(EIF_REFERENCE);
extern void Fpism36(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpis91t(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpiy3he(EIF_REFERENCE);
extern EIF_UNION Fpin3ku(EIF_REFERENCE);
extern EIF_UNION Fpiw5oj(EIF_REFERENCE, EIF_UNION);
extern void Fpi1b5i(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpiukx1(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpiqpbb(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpirb8y(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpiwiqx(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpitx_f(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpiu7vo(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpiygjs(EIF_REFERENCE);
extern void EIF_Minit2096(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* is_date */

EIF_UNION Fpipef2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_date", RTUD(2095), Current, 0, 1, 30800);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 93, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 158, "is_date", tr1))(tr1)).value.EIF_BOOLEAN_value);
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

/* is_time */

EIF_UNION Fpip1dp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_time", RTUD(2095), Current, 0, 1, 30801);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 93, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 159, "is_time", tr1))(tr1)).value.EIF_BOOLEAN_value);
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

/* make */

void Fpimtpl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	RTLR(7,tr3);
	RTLR(6,loc1);
	RTLR(5,ur1);
	RTLR(3,loc5);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("make", RTUD(2095), Current, 5, 1, 30798);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2095, 70, Current));
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(87, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	tr1 = RTLN(RTUD(1870));
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1870, 42, "days_text", loc5))(loc5)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(6);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2095, 90, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1870, 43, "months_text", loc5))(loc5)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(7);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2095, 91, dtype)) = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(8);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(9);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	while (!((EIF_BOOLEAN)(loc3 >= ti4_1))) {
		RTHOOK(10);
		ur1 = RTCCL(arg1);
		ui4_1 = loc3;
		loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2095, 1, dtype))(Current, ur1x, ui4_1x)).value.EIF_INTEGER_32_value);
		RTHOOK(11);
		ur1 = RTCCL(arg1);
		ui4_1 = loc3;
		ui4_2 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2095, 38, dtype))(Current, ur1x, ui4_1x, ui4_2x);
		RTHOOK(12);
		ui4_1 = loc4;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 30, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		loc4 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 93, "to_lower", tr1))(tr1);

		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(15);
			tr1 = RTLN(RTUD(1875));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(15);
			RTCI2(tr1);
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
			ur1 = RTCCL(loc1);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
			RTHOOK(17);
			loc2++;
		}


		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 4, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(19);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
			tr2 = RTLN(RTUD(1875));
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(2095, 4, dtype));
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr2)))(tr2, ur1x);
			RTNHOOK(19);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
			RTHOOK(20);
			loc2++;
			RTHOOK(21);
			*(EIF_BOOLEAN *)(Current + RTWA(2095, 77, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

		RTHOOK(22);
		loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		;
	}

	RTHOOK(23);
	tr1 = RTLN(RTUD(1843));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1843, 30, Dtype(tr1)))(tr1);
	RTNHOOK(23);
	RTCI2(tr1);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1843, 34, "year_now", tr1))(tr1)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2095, 72, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("base_century_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2095, 72, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2095, 72, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_2 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L)))) {
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
#undef arg1
}

/* create_date_time */

EIF_UNION Fpivvta (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(6,tr3);
	RTLR(5,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("create_date_time", RTUD(2095), Current, 1, 1, 30809);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2095, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 79, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 76, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current + RTWA(2095, 92, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 93, dtype))(Current, ur1x);
	RTHOOK(7);
	tr1 = RTLN(RTUD(2100));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 149, "year", tr2))(tr2)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 150, "month", tr2))(tr2)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_2;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 151, "day", tr2))(tr2)).value.EIF_INTEGER_32_value);
	ui4_3 = ti4_3;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 152, "hour", tr2))(tr2)).value.EIF_INTEGER_32_value);
	ui4_4 = ti4_4;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 153, "minute", tr2))(tr2)).value.EIF_INTEGER_32_value);
	ui4_5 = ti4_5;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 154, "fine_second", tr2))(tr2)).value.EIF_REAL_64_value);
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2100, 114, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ur8_1x);
	RTNHOOK(7);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 155, "day_text", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Result + RTVA(2100, 123, "date", Result));
		RTNHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 105, "day_of_the_week", tr1))(tr1)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 155, "day_text", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 90, dtype));
		ui4_1 = loc1;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		*(EIF_BOOLEAN *)(Current + RTWA(2095, 92, dtype)) = (EIF_BOOLEAN)tc1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("date_time_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("day_text_equal_day", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2095, 92, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* precise */

EIF_UNION Fpixtl5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	RTEAA("precise", RTUD(2095), Current, 0, 0, 30812);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2095, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2095, 88, dtype))(Current)).value.EIF_BOOLEAN_value);
		Result = tc1;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* set_base_century */

void Fpism36 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_base_century", RTUD(2095), Current, 0, 1, 30804);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32)(arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2095, 72, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("base_century_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2095, 72, dtype));
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

/* correspond */

EIF_UNION Fpis91t (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
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
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(3,loc4);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTEAA("correspond", RTUD(2095), Current, 5, 1, 30805);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);

	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(6);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(7);
		ur1 = RTCCL(arg1);
		loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 19, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	}


	RTHOOK(8);
	loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(9);
	tc1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if (!(EIF_BOOLEAN)(loc1 > ti4_1)) {
		tc1 = (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0);
	}
	while (!(tc1)) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc4 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(11);
		if (loc5) {
			RTHOOK(12);
			ur1 = RTCCL(arg1);
			ui4_1 = loc1;
			loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2095, 1, dtype))(Current, ur1x, ui4_1x)).value.EIF_INTEGER_32_value);
		} else {
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 60, "count_max", loc4));
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 + ti4_1) - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
		}

		RTHOOK(14);
		ur1 = RTCCL(arg1);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2095, 38, dtype))(Current, ur1x, ui4_1x, ui4_2x);
		RTHOOK(15);
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 30, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			RTHOOK(17);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		} else {

			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
			if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				Result = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
				ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 60, "count_max", loc4));
				if ((EIF_BOOLEAN)(ti4_1 <= ti4_2)) {
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
					ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 61, "count_min", loc4));
					Result = (EIF_BOOLEAN)(ti4_1 >= ti4_2);
				}

				RTHOOK(20);
				tc2 = *(EIF_BOOLEAN *)(loc4 + RTVA(1875, 67, "is_numeric", loc4));
				if (tc2) {
					RTHOOK(21);
					tc2 = '\0';
					if (Result) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
						tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 30, "is_integer", tr1))(tr1)).value.EIF_BOOLEAN_value);
						tc2 = tc3;
					}
					Result = (EIF_BOOLEAN)tc2;

					RTHOOK(22);
					tc2 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 63, "value_max", loc4));
					if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 64, "value_min", loc4));
						tc2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L));
					}
					if (tc2) {
						RTHOOK(23);
						tc2 = '\0';
						tc3 = '\0';
						if (Result) {
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
							ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
							ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 63, "value_max", loc4));
							tc3 = (EIF_BOOLEAN)(ti4_1 <= ti4_2);
						}
						if (tc3) {
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
							ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr1))(tr1)).value.EIF_INTEGER_32_value);
							ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(1875, 64, "value_min", loc4));
							tc2 = (EIF_BOOLEAN)(ti4_1 >= ti4_2);
						}
						Result = (EIF_BOOLEAN)tc2;
					}

				} else {
					RTHOOK(24);
					tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(1875, 59, "value", loc4));
					ur1 = RTCCL(tr1);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1875, 9, "is_meridiem", loc4))(loc4, ur1x)).value.EIF_BOOLEAN_value);
				if (tc2) {
					RTHOOK(25);
					tc2 = '\0';
					if (Result) {
						tc3 = '\01';
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(25);
						tr1 = RTMS_EX_H("AM",2,16717);
						ur1 = tr1;
						tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
						if (!tc4) {
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
							tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 88, "as_upper", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(25);
							tr1 = RTMS_EX_H("PM",2,20557);
							ur1 = tr1;
							tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
							tc3 = tc4;
						}
						tc2 = tc3;
					}
					Result = (EIF_BOOLEAN)tc2;
				} else {
					RTHOOK(26);
					tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(1875, 59, "value", loc4));
					ur1 = RTCCL(tr1);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1875, 36, "is_day_text", loc4))(loc4, ur1x)).value.EIF_BOOLEAN_value);
				if (tc2) {
					RTHOOK(27);
					tc2 = '\0';
					if (Result) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 90, dtype));
						tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
						ur1 = RTCCL(tr2);
						tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
						tc2 = tc3;
					}
					Result = (EIF_BOOLEAN)tc2;
				} else {
					RTHOOK(28);
					tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(1875, 59, "value", loc4));
					ur1 = RTCCL(tr1);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1875, 38, "is_month_text", loc4))(loc4, ur1x)).value.EIF_BOOLEAN_value);
				if (tc2) {
					RTHOOK(29);
					tc2 = '\0';
					if (Result) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 91, dtype));
						tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 3, dtype));
						ur1 = RTCCL(tr2);
						tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
						tc2 = tc3;
					}
					Result = (EIF_BOOLEAN)tc2;
				}}}}

				RTHOOK(30);
				loc3++;
			}


			RTHOOK(31);
			if (loc5) {
				RTHOOK(32);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
				ui4_1 = loc3;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc4 = (EIF_REFERENCE)RTCCL(tr2);
				RTHOOK(33);
				loc3++;

				RTHOOK(34);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(35);
					tc2 = '\0';
					tc3 = '\0';
					if (Result) {
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
						tc3 = (EIF_BOOLEAN)(loc2 != ti4_1);
					}
					if (tc3) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 4, dtype));
						tr2 = *(EIF_REFERENCE *)(loc4 + RTVA(1875, 59, "value", loc4));
						ur1 = RTCCL(tr2);
						tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
						tc2 = tc3;
					}
					Result = (EIF_BOOLEAN)tc2;
				}

			}

			RTHOOK(36);
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
		}

		RTHOOK(9);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if (!(EIF_BOOLEAN)(loc1 > ti4_1)) {
			tc1 = (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0);
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* precise_time */

EIF_UNION Fpiy3he (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,loc1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTEAA("precise_time", RTUD(2095), Current, 6, 0, 30814);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	ui4_1 = loc2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	while (!((EIF_BOOLEAN)(tr2 == NULL))) {
		RTHOOK(4);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1875, 16, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr3);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1875, 65, "type", loc1));
		loc3 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(6);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2095, 77, dtype));
		if (tc1) {

			RTHOOK(7);
			switch (loc3) {
				case 9L:
				case 10L:
				case 11L:
					RTHOOK(8);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 12L:
				case 13L:
					RTHOOK(9);
					loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 14L:
				case 15L:
					RTHOOK(10);
					loc6 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
			}
		} else {

			RTHOOK(11);
			switch (loc3) {
				case 10L:
					RTHOOK(12);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 13L:
					RTHOOK(13);
					loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 15L:
					RTHOOK(14);
					loc6 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
			}
		}

		RTHOOK(15);
		loc2++;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		;
	}

	RTHOOK(16);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(loc4 && loc5) && loc6);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* name */

EIF_UNION Fpin3ku (EIF_REFERENCE Current)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(0,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(2,Current);
	RTLR(1,Result);
	RTLR(5,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("name", RTUD(2095), Current, 1, 0, 30799);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(774));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	ui4_1 = loc1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	while (!((EIF_BOOLEAN)(tr2 == NULL))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc1;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr1 = *(EIF_REFERENCE *)(tr3 + RTVA(1875, 62, "name", tr3));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
		RTHOOK(5);
		tr1 = RTMS_EX_H(" ",1,32);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
		RTHOOK(6);
		loc1++;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* create_time */

EIF_UNION Fpiw5oj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	RTLI(9);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,Result);
	RTLR(6,loc1);
	RTLR(3,loc2);
	RTLR(2,ur1);
	RTLR(8,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("create_time", RTUD(2095), Current, 3, 1, 30811);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2095, 88, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 79, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(87, 79, "count", tr1));
	loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));

	RTHOOK(6);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 19, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(7);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H(" ",1,32);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(9);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("dd",2,25700);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(11);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("/",1,47);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(11);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(13);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("mm",2,28013);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(13);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(15);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("/",1,47);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(15);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 4L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(17);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("yy",2,31097);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(17);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 5L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(19);
		tr1 = RTMS_EX_H(" 1/1/01",7,1995643697);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", arg1))(arg1, ur1x);
		RTHOOK(20);
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 83, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(20);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2100, 124, "time", tr1));
		Result = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(21);
		tr1 = RTMS_EX_H(" 1/1/01",7,1995643697);
		ur1 = tr1;
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 41, "replace_substring_all", arg1))(arg1, ur1x, ur2x);
	} else {
		RTHOOK(22);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("[0]dd",5,812125796);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(22);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(24);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("[0]mm",5,812128109);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(24);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(26);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("yy",2,31097);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(26);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(27);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(28);
		tr1 = RTMS_EX_H("010101",6,903278129);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", arg1))(arg1, ur1x);
		RTHOOK(29);
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 83, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(29);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2100, 124, "time", tr1));
		Result = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(30);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 82, "remove_tail", arg1))(arg1, ui4_1x);
	}

	RTHOOK(31);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("time_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 82, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(33);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* build_parser */

void Fpi1b5i (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("build_parser", RTUD(2095), Current, 0, 1, 30797);
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
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	if (!(EIF_BOOLEAN)(tr1 == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2099, 148, "source_string", tr1));
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2095, 49, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	if (tc1) {
		RTHOOK(3);
		tr1 = RTLNSMART(RTWCT(2095, 89, Current));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2099, 147, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 90, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2099, 163, "set_day_array", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2095, 91, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2099, 164, "set_month_array", tr1))(tr1, ur1x);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2095, 72, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2099, 165, "set_base_century", tr1))(tr1, ui4_1x);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2099, 162, "set_source_string", tr1))(tr1, ur1x);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2099, 166, "parse", tr1))(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("parser_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* create_date_string */

EIF_UNION Fpiukx1 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(1,loc1);
	RTLR(5,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("create_date_string", RTUD(2095), Current, 1, 1, 30807);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("date_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(2100));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2100, 116, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 80, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("string_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 79, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_date_time */

EIF_UNION Fpiqpbb (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_date_time", RTUD(2095), Current, 0, 1, 30802);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 93, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 160, "is_date_time", tr1))(tr1)).value.EIF_BOOLEAN_value);
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

/* is_value_valid */

EIF_UNION Fpirb8y (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_value_valid", RTUD(2095), Current, 0, 1, 30803);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 93, dtype))(Current, ur1x);
	RTHOOK(3);
	Result = '\01';
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 158, "is_date", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 159, "is_time", tr1))(tr1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (!tc1) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 89, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2099, 160, "is_date_time", tr1))(tr1)).value.EIF_BOOLEAN_value);
		Result = tc1;
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

/* create_date */

EIF_UNION Fpiwiqx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	RTLI(9);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,Result);
	RTLR(6,loc1);
	RTLR(3,loc2);
	RTLR(2,ur1);
	RTLR(8,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("create_date", RTUD(2095), Current, 3, 1, 30810);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_precise", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2095, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_correspond", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 79, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(87, 79, "count", tr1));
	loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));

	RTHOOK(6);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 19, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(7);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H(" ",1,32);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(9);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("hh",2,26728);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(11);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H(":",1,58);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(11);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(13);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("mi",2,28009);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(13);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(15);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H(":",1,58);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(15);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 4L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(17);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("ss",2,29555);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(17);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 5L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(19);
		tr1 = RTMS_EX_H(" 0:0:0",6,1039522352);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", arg1))(arg1, ur1x);
		RTHOOK(20);
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 83, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(20);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2100, 123, "date", tr1));
		Result = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(21);
		tr1 = RTMS_EX_H(" 0:0:0",6,1039522352);
		ur1 = tr1;
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 41, "replace_substring_all", arg1))(arg1, ur1x, ur2x);
	} else {
		RTHOOK(22);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("[0]hh",5,812126824);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(22);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(24);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("[0]mi",5,812128105);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(24);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(26);
		tr1 = RTLN(RTUD(1875));
		tr2 = RTMS_EX_H("[0]ss",5,812129651);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 57, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(26);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(27);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ur1 = RTCCL(loc1);
		ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(28);
		tr1 = RTMS_EX_H("000000",6,903204912);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", arg1))(arg1, ur1x);
		RTHOOK(29);
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 83, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(29);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2100, 123, "date", tr1));
		Result = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(30);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 82, "remove_tail", arg1))(arg1, ui4_1x);
	}

	RTHOOK(31);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("day_text_equal_day", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2095, 92, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* create_string */

EIF_UNION Fpitx_f (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(9,loc7);
	RTLR(1,tr1);
	RTLR(4,loc2);
	RTLR(0,arg1);
	RTLR(10,tr4);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(3,loc1);
	RTLR(2,Result);
	RTLR(8,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REF, &loc7);
	RTEAA("create_string", RTUD(2095), Current, 7, 1, 30806);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(774));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2100, 123, "date", arg1));
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2100, 124, "time", arg1));
	loc2 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	ui4_1 = loc4;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	while (!((EIF_BOOLEAN)(tr2 == NULL))) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1875, 65, "type", tr3));
		loc5 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(8);
		switch (loc5) {
			case 1L:
				RTHOOK(9);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc1))(loc1)).value.EIF_INTEGER_32_value);
				RTNHOOK(9);
				tr1 = c_outi(ti4_1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 2L:
				RTHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc1))(loc1)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(11);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(12);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(13);
				tr1 = c_outi(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 3L:
				RTHOOK(14);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 105, "day_of_the_week", loc1))(loc1)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 90, dtype));
				ui4_1 = loc3;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 4L:
				RTHOOK(16);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
				RTNHOOK(16);
				tr1 = c_outi(ti4_1);
				loc7 = (EIF_REFERENCE)RTCCL(tr1);

				RTHOOK(17);
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					RTHOOK(18);
					ur1 = RTCCL(loc7);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				} else {

					RTHOOK(19);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(20);
						tr1 = RTMS_EX_H("000",3,3158064);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
						RTHOOK(21);
						ur1 = RTCCL(loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
					} else {
						RTHOOK(22);
						ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
						RTHOOK(23);
						tr1 = RTMS_EX_H("00",2,12336);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
						RTHOOK(24);
						ur1 = RTCCL(loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
					} else {
						RTHOOK(25);
						ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
						RTHOOK(26);
						tr1 = RTMS_EX_H("0",1,48);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
						RTHOOK(27);
						ur1 = RTCCL(loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
					}}}

				}

				break;
			case 5L:
				RTHOOK(28);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
				RTNHOOK(28);
				tr1 = c_outi(ti4_1);
				loc7 = (EIF_REFERENCE)RTCCL(tr1);

				RTHOOK(29);
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
				if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 2L))) {
					RTHOOK(30);
					ui4_1 = ((EIF_INTEGER_32) 2L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 50, "keep_tail", loc7))(loc7, ui4_1x);
				} else {
					RTHOOK(31);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
					RTHOOK(32);
					uc1 = (EIF_CHARACTER) '0';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				}}

				RTHOOK(33);
				ur1 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 6L:
				RTHOOK(34);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
				RTNHOOK(34);
				tr1 = c_outi(ti4_1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 7L:
				RTHOOK(35);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(36);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(37);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(38);
				tr1 = c_outi(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 8L:
				RTHOOK(39);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(40);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 91, dtype));
				ui4_1 = loc3;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 9L:
				RTHOOK(41);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", loc2))(loc2)).value.EIF_INTEGER_32_value);
				RTNHOOK(41);
				tr1 = c_outi(ti4_1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 10L:
				RTHOOK(42);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", loc2))(loc2)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(43);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(44);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(45);
				tr1 = c_outi(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 11L:
			case 24L:
				RTHOOK(46);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", loc2))(loc2)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(47);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 12L))) {

					RTHOOK(48);
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(49);
						loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
					}

				} else {

					RTHOOK(50);
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						RTHOOK(51);
						loc3 -= ((EIF_INTEGER_32) 12L);
					}

				}


				RTHOOK(52);
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 24L)) && (EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 10L)))) {
					RTHOOK(53);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(54);
				tr1 = c_outi(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 12L:
				RTHOOK(55);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", loc2))(loc2)).value.EIF_INTEGER_32_value);
				RTNHOOK(55);
				tr1 = c_outi(ti4_1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 13L:
				RTHOOK(56);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", loc2))(loc2)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(57);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(58);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(59);
				tr1 = c_outi(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 14L:
				RTHOOK(60);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", loc2))(loc2)).value.EIF_INTEGER_32_value);
				RTNHOOK(60);
				tr1 = c_outi(ti4_1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 15L:
				RTHOOK(61);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", loc2))(loc2)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(62);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 10L))) {
					RTHOOK(63);
					tr1 = RTMS_EX_H("0",1,48);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(64);
				tr1 = c_outi(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 16L:
				RTHOOK(65);
				tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(2097, 2, "fractional_second", loc2));
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
				ui4_1 = loc4;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(65);
				ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1875, 60, "count_max", tr3));
				tr8_2 = (EIF_REAL_64) ((ti4_1));
				loc6 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
				RTHOOK(66);
				ti4_1 = (EIF_INTEGER_32) loc6;
				loc3 = (EIF_INTEGER_32)ti4_1;
				RTHOOK(67);
				tr1 = c_outi(loc3);
				loc7 = (EIF_REFERENCE)RTCCL(tr1);

				RTHOOK(68);
				ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
				ui4_1 = loc4;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(68);
				ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(1875, 60, "count_max", tr3));
				if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
					RTHOOK(69);
					tr1 = RTLN(RTUD(774));
					uc1 = (EIF_CHARACTER) '0';
					tr3 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
					ui4_1 = loc4;
					tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr3))(tr3, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(69);
					ti4_1 = *(EIF_INTEGER_32 *)(tr4 + RTVA(1875, 60, "count_max", tr4));
					ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
					ui4_1 = (EIF_INTEGER_32)(ti4_1 - ti4_2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(13, 2, Dtype(tr1)))(tr1, uc1x, ui4_1x);
					RTNHOOK(69);
					RTCI2(tr1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				RTHOOK(70);
				ur1 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
			case 23L:
				RTHOOK(71);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", loc2))(loc2)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(72);
				if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 12L))) {
					RTHOOK(73);
					tr1 = RTMS_EX_H("AM",2,16717);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				} else {
					RTHOOK(74);
					tr1 = RTMS_EX_H("PM",2,20557);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				}

				break;
			default:
				RTHOOK(75);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
				ui4_1 = loc4;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(75);
				tr1 = *(EIF_REFERENCE *)(tr3 + RTVA(1875, 59, "value", tr3));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				break;
		}
		RTHOOK(76);
		loc4++;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc4;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(77);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(78);
		RTCT("string_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 79, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(79);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* create_time_string */

EIF_UNION Fpiu7vo (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(1,loc1);
	RTLR(5,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("create_time_string", RTUD(2095), Current, 1, 1, 30808);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("time_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(2100));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", arg1))(arg1)).value.EIF_INTEGER_32_value);
	ui4_4 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", arg1))(arg1)).value.EIF_INTEGER_32_value);
	ui4_5 = ti4_2;
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 65, "fine_second", arg1))(arg1)).value.EIF_REAL_64_value);
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2100, 114, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ur8_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 80, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("string_correspond", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2095, 79, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* precise_date */

EIF_UNION Fpiygjs (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,loc1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTEAA("precise_date", RTUD(2095), Current, 6, 0, 30813);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
	ui4_1 = loc2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	while (!((EIF_BOOLEAN)(tr2 == NULL))) {
		RTHOOK(4);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1875, 16, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr3);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1875, 65, "type", loc1));
		loc3 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(6);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2095, 77, dtype));
		if (tc1) {

			RTHOOK(7);
			switch (loc3) {
				case 1L:
				case 2L:
					RTHOOK(8);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 4L:
				case 5L:
					RTHOOK(9);
					loc6 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 6L:
				case 7L:
				case 8L:
					RTHOOK(10);
					loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
			}
		} else {

			RTHOOK(11);
			switch (loc3) {
				case 2L:
					RTHOOK(12);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 4L:
				case 5L:
					RTHOOK(13);
					loc6 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case 7L:
					RTHOOK(14);
					loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
			}
		}

		RTHOOK(15);
		loc2++;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2095, 70, dtype));
		ui4_1 = loc2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		;
	}

	RTHOOK(16);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(loc4 && loc5) && loc6);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

void EIF_Minit2096 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

