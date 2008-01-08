/*
 * Code for class C_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnh3ohf(EIF_REFERENCE, EIF_UNION);
extern void Fnhsdpm(EIF_REFERENCE);
extern EIF_UNION Fnh0ftb(EIF_REFERENCE);
extern EIF_UNION Fnh4zco(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnh5maa(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnhz4x2(EIF_REFERENCE);
extern EIF_UNION Fnh_svp(EIF_REFERENCE);
extern void Fnhzh_g(EIF_REFERENCE, EIF_UNION);
extern void Fnh1qok(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnhww8z(EIF_REFERENCE);
extern EIF_UNION Fnhxj6l(EIF_REFERENCE);
extern EIF_UNION Fnhx637(EIF_REFERENCE);
extern EIF_UNION Fnhvmdq(EIF_REFERENCE);
extern void Fnhs0m8(EIF_REFERENCE);
extern EIF_UNION Fnhv9bc(EIF_REFERENCE);
extern EIF_UNION Fnh587x(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnh02qy(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnh6w5j(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnh7j25(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnh4be1(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnh20jt(EIF_REFERENCE, EIF_UNION);
extern void Fnhubih(EIF_REFERENCE);
extern EIF_UNION Fnhuzf3(EIF_REFERENCE);
extern void EIF_Minit1844(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include <time.h>
#include <sys/timeb.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_FNH3OHF

static EIF_POINTER inline_Fnh3ohf (EIF_POINTER arg1)
{
return (EIF_POINTER)(gmtime ((time_t *) arg1))
;
}
#define INLINE_FNH3OHF
#endif

#ifndef INLINE_FNH1QOK

static void inline_Fnh1qok (EIF_POINTER arg1, EIF_POINTER arg2)
{
*(time_t *) arg2 = (((struct timeb *)arg1)->time);
;
}
#define INLINE_FNH1QOK
#endif

#ifndef INLINE_FNH20JT

static EIF_POINTER inline_Fnh20jt (EIF_POINTER arg1)
{
return (EIF_POINTER)(localtime ((time_t *) arg1))
;
}
#define INLINE_FNH20JT
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* gmtime */

EIF_UNION Fnh3ohf (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_POINTER Result = (EIF_POINTER) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("gmtime", RTUD(1843), Current, 0, 1, 26565);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = inline_Fnh3ohf ((EIF_POINTER) arg1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_POINTER; r.value.EIF_POINTER_value = Result; return r; }
#undef arg1
}

/* default_create */

void Fnhsdpm (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("default_create", RTUD(1843), Current, 0, 0, 26549);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1843, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1843, 33, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* tm_structure_size */

EIF_UNION Fnh0ftb (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("tm_structure_size", RTUD(1843), Current, 0, 0, 26561);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)sizeof(struct tm);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* get_tm_mon */

EIF_UNION Fnh4zco (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_tm_mon", RTUD(1843), Current, 0, 1, 26567);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct tm *)arg1)->tm_mon);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* get_tm_mday */

EIF_UNION Fnh5maa (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_tm_mday", RTUD(1843), Current, 0, 1, 26568);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct tm *)arg1)->tm_mday);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* timeb_structure_size */

EIF_UNION Fnhz4x2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("timeb_structure_size", RTUD(1843), Current, 0, 0, 26559);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)sizeof(struct timeb);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* time_t_structure_size */

EIF_UNION Fnh_svp (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("time_t_structure_size", RTUD(1843), Current, 0, 0, 26560);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)sizeof(time_t);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* ftime */

void Fnhzh_g (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("ftime", RTUD(1843), Current, 0, 1, 26558);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	ftime(((struct timeb*) arg1));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* get_time */

void Fnh1qok (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_POINTER_value = * (EIF_POINTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_POINTER_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("get_time", RTUD(1843), Current, 0, 2, 26563);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	inline_Fnh1qok ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* hour_now */

EIF_UNION Fnhww8z (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hour_now", RTUD(1843), Current, 0, 0, 26555);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype));
	tp1 = *(EIF_POINTER *)(tr1 + RTVPA(42, 5, "item", tr1));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 53, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("hour_valid", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 23L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* minute_now */

EIF_UNION Fnhxj6l (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("minute_now", RTUD(1843), Current, 0, 0, 26556);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype));
	tp1 = *(EIF_POINTER *)(tr1 + RTVPA(42, 5, "item", tr1));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 54, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minute_valid", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 59L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* second_now */

EIF_UNION Fnhx637 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("second_now", RTUD(1843), Current, 0, 0, 26557);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype));
	tp1 = *(EIF_POINTER *)(tr1 + RTVPA(42, 5, "item", tr1));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 55, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);

	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result > ((EIF_INTEGER_32) 59L))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 59L);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("second_valid", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 59L)))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* month_now */

EIF_UNION Fnhvmdq (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("month_now", RTUD(1843), Current, 0, 0, 26553);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype));
	tp1 = *(EIF_POINTER *)(tr1 + RTVPA(42, 5, "item", tr1));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 51, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(Result + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("month_valid", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 12L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* make_utc */

void Fnhs0m8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_utc", RTUD(1843), Current, 0, 0, 26550);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1843, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1843, 33, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_utc", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1843, 32, dtype));
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

/* day_now */

EIF_UNION Fnhv9bc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("day_now", RTUD(1843), Current, 0, 0, 26554);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype));
	tp1 = *(EIF_POINTER *)(tr1 + RTVPA(42, 5, "item", tr1));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 52, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_valid", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 31L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* get_tm_hour */

EIF_UNION Fnh587x (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_tm_hour", RTUD(1843), Current, 0, 1, 26546);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct tm *)arg1)->tm_hour);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* get_millitm */

EIF_UNION Fnh02qy (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_millitm", RTUD(1843), Current, 0, 1, 26562);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct timeb *)arg1)->millitm);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* get_tm_min */

EIF_UNION Fnh6w5j (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_tm_min", RTUD(1843), Current, 0, 1, 26547);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct tm *)arg1)->tm_min);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* get_tm_sec */

EIF_UNION Fnh7j25 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_tm_sec", RTUD(1843), Current, 0, 1, 26548);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct tm *)arg1)->tm_sec);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* get_tm_year */

EIF_UNION Fnh4be1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("get_tm_year", RTUD(1843), Current, 0, 1, 26566);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = (EIF_INTEGER_32)(((struct tm *)arg1)->tm_year);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* localtime */

EIF_UNION Fnh20jt (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_POINTER Result = (EIF_POINTER) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_POINTER_value = * (EIF_POINTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_POINTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("localtime", RTUD(1843), Current, 0, 1, 26564);
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	Result = inline_Fnh20jt ((EIF_POINTER) arg1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_POINTER; r.value.EIF_POINTER_value = Result; return r; }
#undef arg1
}

/* update */

void Fnhubih (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_POINTER tp1;
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("update", RTUD(1843), Current, 4, 0, 26551);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1843, 42, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER)tp1;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1843, 43, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc3 = (EIF_POINTER)tp1;
	RTHOOK(3);
	up1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 41, dtype))(Current, up1x);
	RTHOOK(4);
	up1 = loc1;
	up2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1843, 46, dtype))(Current, up1x, up2x);

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1843, 32, dtype));
	if (tc1) {
		RTHOOK(6);
		up1 = loc3;
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 49, dtype))(Current, up1x)).value.EIF_POINTER_value);
	} else {
		RTHOOK(7);
		up1 = loc3;
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 48, dtype))(Current, up1x)).value.EIF_POINTER_value);
	}

	RTHOOK(8);
	tr1 = RTLNSMART(RTWCT(1843, 47, Current));
	up1 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1843, 44, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(42, 2, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(8);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	up1 = loc1;
	loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 45, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);

	RTHOOK(10);
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc4 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc4 > ((EIF_INTEGER_32) 999L)))) {
		RTHOOK(11);
		*(EIF_INTEGER_32 *)(Current + RTWA(1843, 40, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current + RTWA(1843, 40, dtype)) = (EIF_INTEGER_32)loc4;
	}

	RTHOOK(13);
	free(loc1);
	RTHOOK(14);
	free(loc3);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(6);
	RTEE;
}

/* year_now */

EIF_UNION Fnhuzf3 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("year_now", RTUD(1843), Current, 0, 0, 26552);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1843, 47, dtype));
	tp1 = *(EIF_POINTER *)(tr1 + RTVPA(42, 5, "item", tr1));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1843, 50, dtype))(Current, up1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(((EIF_INTEGER_32) 1900L) + Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("year_valid", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1900L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

void EIF_Minit1844 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

