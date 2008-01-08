/*
 * Code for class TRAFFIC_COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnb24kt(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnbyy2u(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnbya47(EIF_REFERENCE);
extern void Fnbzl0g(EIF_REFERENCE);
extern void Fnb06ry(EIF_REFERENCE, EIF_UNION);
extern void Fnb1upk(EIF_REFERENCE, EIF_UNION);
extern void Fnb2hm6(EIF_REFERENCE, EIF_UNION);
extern void Fp_2aot(EIF_REFERENCE, int);
extern void EIF_Minit1815(void);

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

/* set_rgb */

void Fnb24kt (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("set_rgb", RTUD(1814), Current, 0, 3, 26315);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("red_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("green_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg2) && (EIF_BOOLEAN)(arg2 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("blue_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg3) && (EIF_BOOLEAN)(arg3 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 37, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 38, dtype))(Current, ui4_1x);
	RTHOOK(6);
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 39, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("red_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("green_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("blue_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg3
#undef arg2
#undef arg1
}

/* make_with_rgb */

void Fnbyy2u (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_rgb", RTUD(1814), Current, 0, 3, 26310);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("red_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("green_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg2) && (EIF_BOOLEAN)(arg2 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("blue_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg3) && (EIF_BOOLEAN)(arg3 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 37, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 38, dtype))(Current, ui4_1x);
	RTHOOK(6);
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 39, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("red_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("green_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("blue_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
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
#undef arg3
#undef arg2
#undef arg1
}

/* make_black */

void Fnbya47 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_black", RTUD(1814), Current, 0, 0, 26309);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 37, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 38, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 39, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("red_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("green_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("blue_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make_white */

void Fnbzl0g (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_white", RTUD(1814), Current, 0, 0, 26311);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 37, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 38, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1814, 39, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("red_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("green_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("blue_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_red */

void Fnb06ry (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_red", RTUD(1814), Current, 0, 1, 26312);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("red_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
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

/* set_green */

void Fnb1upk (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_green", RTUD(1814), Current, 0, 1, 26313);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("green_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
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

/* set_blue */

void Fnb2hm6 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_blue", RTUD(1814), Current, 0, 1, 26314);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_value_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("blue_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
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

void Fp_2aot (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("red_in_range", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 34, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= ti4_1) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 255L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("green_in_range", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 35, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= ti4_1) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 255L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("blue_in_range", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1814, 36, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= ti4_1) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 255L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1815 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

