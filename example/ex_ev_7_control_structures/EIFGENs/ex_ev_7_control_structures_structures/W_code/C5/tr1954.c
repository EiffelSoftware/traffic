/*
 * Code for class TRAFFIC_VEHICLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn5s3s4(EIF_REFERENCE);
extern void Fn5trqr(EIF_REFERENCE, EIF_UNION);
extern void Fn5ueod(EIF_REFERENCE, EIF_UNION);
extern void Fp0st41(EIF_REFERENCE, int);
extern void EIF_Minit1954(void);

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

/* capacity */

EIF_UNION Fn5s3s4 (EIF_REFERENCE Current)
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
	RTEAA("capacity", RTUD(1953), Current, 0, 0, 27834);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 79, Dtype(Current)));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* load */

void Fn5trqr (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("load", RTUD(1953), Current, 0, 1, 27835);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_quantity_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_quantity", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1953, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 >= (EIF_INTEGER_32)(ti4_2 + arg1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("loaded", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
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

/* unload */

void Fn5ueod (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("unload", RTUD(1953), Current, 0, 1, 27836);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_quantity_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_quantity", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 >= arg1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype))) -= arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("unloaded", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
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

void Fp0st41 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("unit_capacity_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 79, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("load_smaller_or_equal_than_capacity", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1953, 75, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1953, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1954 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

