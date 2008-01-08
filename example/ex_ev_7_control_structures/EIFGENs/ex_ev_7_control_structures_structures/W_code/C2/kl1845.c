/*
 * Code for class KL_SYSTEM_CLOCK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnh94uo(EIF_REFERENCE);
extern EIF_UNION Fnibfpx(EIF_REFERENCE);
extern void Fnicqk5(EIF_REFERENCE);
extern void Fnh760t(EIF_REFERENCE);
extern EIF_UNION Fnhyu1v(EIF_REFERENCE);
extern EIF_UNION Fnib2nj(EIF_REFERENCE);
extern EIF_UNION Fniassa(EIF_REFERENCE);
extern EIF_UNION Fnh8uzf(EIF_REFERENCE);
extern void Fniddis(EIF_REFERENCE);
extern EIF_UNION Fnh9hw1(EIF_REFERENCE);
extern void EIF_Minit1845(void);

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

/* day */

EIF_UNION Fnh94uo (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,59, Dtype(Current)));
	return r;
}

/* minute */

EIF_UNION Fnibfpx (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,61, Dtype(Current)));
	return r;
}

/* set_local_time */

void Fnicqk5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("set_local_time", RTUD(1844), Current, 0, 0, 26576);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1844, 21, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1844, 46, dtype))(Current);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 57, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 58, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 35, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 59, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 44, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 60, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 45, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 61, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 32, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 62, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make */

void Fnh760t (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1844), Current, 0, 0, 26569);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* millisecond */

EIF_UNION Fnhyu1v (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,33, Dtype(Current)));
	return r;
}

/* second */

EIF_UNION Fnib2nj (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,62, Dtype(Current)));
	return r;
}

/* hour */

EIF_UNION Fniassa (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,60, Dtype(Current)));
	return r;
}

/* year */

EIF_UNION Fnh8uzf (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,57, Dtype(Current)));
	return r;
}

/* set_utc_time */

void Fniddis (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("set_utc_time", RTUD(1844), Current, 0, 0, 26577);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1844, 21, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1844, 46, dtype))(Current);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 57, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 58, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 35, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 59, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 44, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 60, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 45, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 61, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1844, 32, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1844, 62, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(2);
	RTEE;
}

/* month */

EIF_UNION Fnh9hw1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1844,58, Dtype(Current)));
	return r;
}

void EIF_Minit1845 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

