/*
 * Code for class TRAFFIC_VISION2_TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnho40h(EIF_REFERENCE);
extern void Fnhoh2v(EIF_REFERENCE);
extern void Fnhpsy3(EIF_REFERENCE);
extern void Fnhq2uc(EIF_REFERENCE);
extern EIF_UNION Fnhrqrz(EIF_REFERENCE);
extern void Fnhqfwq(EIF_REFERENCE);
extern void EIF_Minit1843(void);

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

/* pause */

void Fnho40h (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("pause", RTUD(1842), Current, 0, 0, 26541);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCS(EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1842, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1842, 33, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(986, 30, "remove_idle_action", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 81, "seconds", tr1))(tr1)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1842, 1, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 1000L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCS(EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
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
	RTLO(2);
	RTEE;
}

/* start */

void Fnhoh2v (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(4,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("start", RTUD(1842), Current, 1, 0, 26540);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCS(EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1842, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1842, 33, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(986, 29, "add_idle_action", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = RTLN(RTUD(2097));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 81, "seconds", loc1))(loc1)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 40, "milli_second", loc1))(loc1)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1842, 37, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 1000L)) + ti4_2);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(1842, 1, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCS(EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
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
}

/* resume */

void Fnhpsy3 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(4,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("resume", RTUD(1842), Current, 1, 0, 26542);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCS(EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1842, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1842, 33, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(986, 29, "add_idle_action", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = RTLN(RTUD(2097));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 81, "seconds", loc1))(loc1)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 40, "milli_second", loc1))(loc1)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1842, 37, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 1000L)) + ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCS(EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
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
}

/* update_time */

void Fnhq2uc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,loc3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("update_time", RTUD(1842), Current, 3, 0, 26544);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCS(EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCS(EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCS(EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
	if (tc1) {
		RTHOOK(5);
		tr1 = RTLN(RTUD(2097));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
		RTNHOOK(5);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 81, "seconds", loc3))(loc3)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 40, "milli_second", loc3))(loc3)).value.EIF_INTEGER_32_value);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(1842, 37, dtype));
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 1000L)) + ti4_2) - loc1);
		RTHOOK(7);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(1842, 30, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1842, 1, dtype));
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc2 * loc1) + ti4_1);

		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 24, "seconds_in_day", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(loc2 / ((EIF_INTEGER_32) 1000L)) >= ti4_1)) {
			RTHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 81, "seconds", loc3))(loc3)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 40, "milli_second", loc3))(loc3)).value.EIF_INTEGER_32_value);
			*(EIF_INTEGER_32 *)(Current + RTWA(1842, 37, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 1000L)) + ti4_2);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 24, "seconds_in_day", tr1))(tr1)).value.EIF_INTEGER_32_value);
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc2 / ((EIF_INTEGER_32) 1000L)) % ti4_1);
			RTHOOK(11);
			*(EIF_INTEGER_32 *)(Current + RTWA(1842, 1, dtype)) = (EIF_INTEGER_32)loc2;
			RTHOOK(12);
			(*(EIF_INTEGER_32 *)(Current + RTWA(1842, 17, dtype)))++;
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 73, "make_by_seconds", tr1))(tr1, ui4_1x);
		} else {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
			ui4_1 = (EIF_INTEGER_32)(loc2 / ((EIF_INTEGER_32) 1000L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 73, "make_by_seconds", tr1))(tr1, ui4_1x);
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_INTEGER_32)(loc2 % ((EIF_INTEGER_32) 1000L))) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 29, "set_fractionals", tr1))(tr1, ur8_1x);
		}

		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1842, 41, dtype))(Current);
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1842, 42, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(5);
	RTEE;
}

/* application */

RTOID (Fnhrqrz)

EIF_UNION Fnhrqrz (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnhrqrz);
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("application", RTUD(1842), Current, 0, 0, 26545);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(846));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
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

/* reset */

void Fnhqfwq (EIF_REFERENCE Current)
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

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("reset", RTUD(1842), Current, 0, 0, 26543);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 13, "set_hour", tr1))(tr1, ui4_1x);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 14, "set_minute", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 38, "set_second", tr1))(tr1, ui4_1x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(1842, 37, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(1842, 1, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCS(EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1842, 45, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1842, 25, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1843 (void)
{
	GTCX
	RTOTS (27938,Fnhrqrz)
}


#ifdef __cplusplus
}
#endif

