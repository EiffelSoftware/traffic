/*
 * Code for class BI_LINKABLE [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fd8bz0n(EIF_REFERENCE);
extern void Fd8ao5e(EIF_REFERENCE, EIF_UNION);
extern void Fd773ex(EIF_REFERENCE, EIF_UNION);
extern void Fd8bb20(EIF_REFERENCE);
extern void Fd77gha(EIF_REFERENCE, EIF_UNION);
extern void Fd79d95(EIF_REFERENCE);
extern void Fd7907s(EIF_REFERENCE, EIF_UNION);
extern void Fd78rcj(EIF_REFERENCE);
extern void Fm33478(EIF_REFERENCE, int);
extern void EIF_Minit2292(void);

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

/* simple_forget_left */

void Fd8bz0n (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("simple_forget_left", RTUD(2291), Current, 0, 0, 27274);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_chained", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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

/* simple_put_left */

void Fd8ao5e (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("simple_put_left", RTUD(2291), Current, 0, 1, 27272);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 5, "simple_forget_right", tr1))(tr1);
	}

	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* put_left */

void Fd773ex (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_left", RTUD(2291), Current, 0, 1, 27268);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 5, "simple_forget_right", tr1))(tr1);
	}

	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 3, "simple_put_right", arg1))(arg1, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("chained", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* simple_forget_right */

void Fd8bb20 (EIF_REFERENCE Current)
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
	RTEAA("simple_forget_right", RTUD(2291), Current, 0, 0, 27273);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWPA(207, 0, Dtype(Current))) = (EIF_REFERENCE)NULL;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* put_right */

void Fd77gha (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_right", RTUD(2291), Current, 0, 1, 27267);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 6, "simple_forget_left", tr1))(tr1);
	}

	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 4, "simple_put_left", arg1))(arg1, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("chained", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* forget_left */

void Fd79d95 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("forget_left", RTUD(2291), Current, 0, 0, 27270);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		tr1 = tr2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		tr2 = tr3;
		in_assertion = 0;
	}

	RTHOOK(1);
	tr3 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
	if ((EIF_BOOLEAN)(tr3 != NULL)) {
		RTHOOK(2);
		tr3 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 5, "simple_forget_right", tr3))(tr3);
		RTHOOK(3);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype)) = (EIF_REFERENCE)NULL;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("left_not_chained", EX_POST);
		tc1 = '\01';
		tr3 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr3 == NULL) || (EIF_BOOLEAN)(tr1 != NULL))) {
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVPA(207, 0, "right", tr2));
			tc1 = (EIF_BOOLEAN)(tr3 == NULL);
		}
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
	RTLO(2);
	RTEE;
}

/* simple_put_right */

void Fd7907s (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("simple_put_right", RTUD(2291), Current, 0, 1, 27271);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 6, "simple_forget_left", tr1))(tr1);
	}

	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* forget_right */

void Fd78rcj (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("forget_right", RTUD(2291), Current, 0, 0, 27269);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		tr1 = tr2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		tr2 = tr3;
		in_assertion = 0;
	}

	RTHOOK(1);
	tr3 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
	if ((EIF_BOOLEAN)(tr3 != NULL)) {
		RTHOOK(2);
		tr3 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 6, "simple_forget_left", tr3))(tr3);
		RTHOOK(3);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype)) = (EIF_REFERENCE)NULL;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_chained", EX_POST);
		tr3 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		if ((EIF_BOOLEAN)(tr3 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("right_not_chained", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVPA(27, 0, "left", tr2));
			tc1 = (EIF_BOOLEAN)(tr3 == NULL);
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
	RTLO(2);
	RTEE;
}

void Fm33478 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("right_symmetry", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(207, 0, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		tc1 = RTCEQ(tr2, Current);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("left_symmetry", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(27, 0, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(207, 0, "right", tr1));
		tc1 = RTCEQ(tr2, Current);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2292 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

