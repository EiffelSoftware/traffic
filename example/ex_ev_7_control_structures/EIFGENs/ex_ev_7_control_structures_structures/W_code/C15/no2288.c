/*
 * Code for class NODE [REFERENCE, REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fobdhjg(EIF_REFERENCE);
extern void Fobgp7k(EIF_REFERENCE);
extern void Fobh_2t(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fobb6n7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fobin0f(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fobculu(EIF_REFERENCE);
extern void Fobhc46(EIF_REFERENCE);
extern void Fp0zyox(EIF_REFERENCE, int);
extern void EIF_Minit2288(void);

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

/* item */

EIF_UNION Fobdhjg (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2287,40, Dtype(Current)));
	return r;
}

/* set_processed */

void Fobgp7k (EIF_REFERENCE Current)
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
	RTEAA("set_processed", RTUD(2287), Current, 0, 0, 28123);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(2287, 44, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("processed", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2287, 44, dtype));
		if (tc1) {
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
}

/* set_referrer */

void Fobh_2t (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("set_referrer", RTUD(2287), Current, 0, 3, 28125);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_distance", EX_PRE);
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN)(arg3 >= tr4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("less_than_previous", EX_PRE);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
		RTTE((EIF_BOOLEAN)(arg3 < tr4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
		tr4_1 = tr4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2287, 42, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2287, 41, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(5);
	*(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype)) = (EIF_REAL_32)arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("referring_node_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 42, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("referring_edge_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 41, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("distance_set", EX_POST);
		tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
		if ((EIF_BOOLEAN)(tr4_2 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("smaller_than_before", EX_POST);
		tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
		if ((EIF_BOOLEAN)(tr4_2 < tr4_1)) {
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

/* make */

void Fobb6n7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2287), Current, 0, 1, 28120);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("item_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2287, 40, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2287, 46, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_referrer", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 42, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2287, 41, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("distance_positive", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
		tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(tr4_1 >= tr4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("item_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 40, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("fresh", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2287, 44, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

/* infix "<" */

EIF_UNION Fobin0f (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"<\"", RTUD(2287), Current, 0, 1, 28126);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
	tr4_2 = *(EIF_REAL_32 *)(arg1 + RTVA(2287, 43, "distance", arg1));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(tr4_1 < tr4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2287, 48, "infix \"<\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* hash_code */

EIF_UNION Fobculu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	RTEAA("hash_code", RTUD(2287), Current, 0, 0, 28121);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 40, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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

/* reset */

void Fobhc46 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("reset", RTUD(2287), Current, 0, 0, 28124);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2287, 42, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2287, 41, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(3);
	tr1 = RTLN(RTUD(736));
	RTCI2(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(158, 4, "max_value", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	*(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype)) = (EIF_REAL_32)tr4_1;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(2287, 44, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("no_referrer", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 42, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2287, 41, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("fresh", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2287, 44, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

void Fp0zyox (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("distance_positive", Current);
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2287, 43, dtype));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr4_1 >= tr4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("item_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2287, 40, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2288 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

