/*
 * Code for class TRAFFIC_LINE_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnbwdcb(EIF_REFERENCE);
extern void Fnbshql(EIF_REFERENCE, EIF_UNION);
extern void Fnbu2g2(EIF_REFERENCE);
extern void Fnbufjg(EIF_REFERENCE, EIF_UNION);
extern void Fnbvqep(EIF_REFERENCE);
extern EIF_UNION Fnbw_9y(EIF_REFERENCE);
extern EIF_UNION Fnbs4n7(EIF_REFERENCE);
extern void EIF_Minit1814(void);

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

/* is_cursor_one_direction */

EIF_UNION Fnbwdcb (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,tr3);
	RTLR(2,tr2);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_cursor_one_direction", RTUD(1813), Current, 0, 0, 26306);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2163, 65, "container", tr1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 33, dtype));
	tr3 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 96, "one_direction", tr1));
	Result = (EIF_BOOLEAN)RTCEQ(tr2, tr3);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make */

void Fnbshql (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);
	RTLR(4,ur1);
	RTLR(3,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1813), Current, 0, 1, 26301);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(1813, 39, Current));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 96, "one_direction", arg1));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2163, 63, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1813, 33, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("line_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 33, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("internal_cursor_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* start */

void Fnbu2g2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("start", RTUD(1813), Current, 0, 0, 26304);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, Dtype(Current)));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", tr1))(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_cursor_direction */

void Fnbufjg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(2,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_cursor_direction", RTUD(1813), Current, 0, 1, 26303);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		tr1 = RTLNSMART(RTWCT(1813, 39, Current));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1813, 33, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 96, "one_direction", tr2));
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2163, 63, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(2);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", tr1))(tr1);
	} else {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(1813, 39, Current));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1813, 33, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 97, "other_direction", tr2));
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2163, 63, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", tr1))(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("internal_cursor_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* forth */

void Fnbvqep (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	RTEAA("forth", RTUD(1813), Current, 0, 0, 26305);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1813, 38, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 43, "forth", tr1))(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* after */

EIF_UNION Fnbw_9y (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("after", RTUD(1813), Current, 0, 0, 26307);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, Dtype(Current)));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(2163, 66, "after", tr1));
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* item_for_iteration */

EIF_UNION Fnbs4n7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("item_for_iteration", RTUD(1813), Current, 0, 0, 26302);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1813, 38, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1813, 39, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2163, 64, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

void EIF_Minit1814 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

