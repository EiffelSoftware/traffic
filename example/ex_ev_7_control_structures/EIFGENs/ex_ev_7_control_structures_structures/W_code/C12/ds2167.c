/*
 * Code for class DS_PAIR [REFERENCE, REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnqj4oe(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fnqlfjn(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnqksl0(EIF_REFERENCE);
extern void EIF_Minit2167(void);

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

/* make */

void Fnqj4oe (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

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
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2166), Current, 0, 2, 26912);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2166, 14, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(2);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2166, 35, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("first_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2166, 14, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("second_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2166, 35, dtype));
		if (RTCEQ(tr1, arg2)) {
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

/* put_second */

void Fnqlfjn (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_second", RTUD(2166), Current, 0, 1, 26914);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2166, 35, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2166, 35, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* second */

EIF_UNION Fnqksl0 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2166,35, Dtype(Current)));
	return r;
}

void EIF_Minit2167 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

