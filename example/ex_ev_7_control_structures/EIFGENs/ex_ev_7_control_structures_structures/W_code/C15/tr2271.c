/*
 * Code for class TRAFFIC_MAP_ITEM_HASH_TABLE [REFERENCE, REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnvq9nu(EIF_REFERENCE);
extern EIF_UNION Fnvmq3h(EIF_REFERENCE, EIF_UNION);
extern void Fnvktam(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fnvrxlg(EIF_REFERENCE);
extern EIF_UNION Fnvqmp7(EIF_REFERENCE);
extern EIF_UNION Fnvn0zq(EIF_REFERENCE);
extern EIF_UNION Fnvpbuz(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnvu49k(EIF_REFERENCE);
extern EIF_UNION Fnvooxc(EIF_REFERENCE);
extern void Fnvski2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnvl25v(EIF_REFERENCE);
extern EIF_UNION Fnvpzsl(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnvnd03(EIF_REFERENCE);
extern void Fnvtveb(EIF_REFERENCE, EIF_UNION);
extern void Fnvuiby(EIF_REFERENCE);
extern void Fnvs7gp(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fp0fwn6(EIF_REFERENCE, int);
extern void EIF_Minit2271(void);

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

/* forth */

void Fnvq9nu (EIF_REFERENCE Current)
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
	RTEAA("forth", RTUD(2270), Current, 0, 0, 27173);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 39, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2218, 61, "forth", tr1))(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* item */

EIF_UNION Fnvmq3h (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(5,Result);
	RTLR(1,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("item", RTUD(2270), Current, 0, 1, 27183);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_k", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 2, "item", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* make */

void Fnvktam (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg2);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2270), Current, 0, 2, 27181);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_map_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2270, 34, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(2270, 50, Current));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2218, 5, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(2270, 5, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2270, 5, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(2270, 6, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2270, 6, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("internal_table_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("element_inserted_event_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 5, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("element_removed_event_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 6, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 34, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* start */

void Fnvrxlg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("start", RTUD(2270), Current, 0, 0, 27174);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2218, 180, "start", tr1))(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_behavior", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 39, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
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

/* is_empty */

EIF_UNION Fnvqmp7 (EIF_REFERENCE Current)
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
	RTEAA("is_empty", RTUD(2270), Current, 0, 0, 27172);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, Dtype(Current)));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2218, 75, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* count */

EIF_UNION Fnvn0zq (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("count", RTUD(2270), Current, 0, 0, 27185);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, Dtype(Current)));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2218, 12, "count", tr1));
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* has */

EIF_UNION Fnvpbuz (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has", RTUD(2270), Current, 0, 1, 27187);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 141, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_key", EX_POST);
		tc1 = '\01';
		if (Result) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 140, "valid_key", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* to_array */

EIF_UNION Fnvu49k (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("to_array", RTUD(2270), Current, 0, 0, 27179);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2218, 25, "to_array", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("to_array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* after */

EIF_UNION Fnvooxc (EIF_REFERENCE Current)
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
	RTEAA("after", RTUD(2270), Current, 0, 0, 27186);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, Dtype(Current)));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2218, 168, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* force */

void Fnvski2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(6,tr2);
	RTLR(4,arg1);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("force", RTUD(2270), Current, 0, 2, 27175);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg2);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2218, 151, "force", tr1))(tr1, ur1x, ur2x);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 5, dtype));
	{
		static int16 typarr [] = {2270,-7,1,726,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = arg1;
	RTAR(tr2,arg1);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 34, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1946, 32, "add_to_map", arg1))(arg1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		tc3 = '\0';
		ur1 = RTCCL(arg2);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc4) {
			ur1 = RTCCL(arg2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 36, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc3 = RTCEQ(tr1, arg1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("one_more", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* first */

EIF_UNION Fnvl25v (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("first", RTUD(2270), Current, 0, 0, 27182);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2218, 67, "first", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_first", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 41, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* has_item */

EIF_UNION Fnvpzsl (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has_item", RTUD(2270), Current, 0, 1, 27188);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 186, "has_item", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* item_for_iteration */

EIF_UNION Fnvnd03 (EIF_REFERENCE Current)
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
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("item_for_iteration", RTUD(2270), Current, 0, 0, 27184);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 39, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2218, 174, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* remove */

void Fnvtveb (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(6,tr4);
	RTLR(2,Current);
	RTLR(5,tr3);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove", RTUD(2270), Current, 0, 1, 27177);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_removable", EX_PRE);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 36, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1946, 39, "is_removable", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}

	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc3) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 6, dtype));
		{
			static int16 typarr [] = {2270,-7,1,726,-8,1,-1};
			int16 typres;

			typres = RTCID2(NULL, Dftype(Current), 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
		ur1 = RTCCL(arg1);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 2, "item", tr3))(tr3, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr4;
		RTAR(tr2,tr4);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
		ur1 = RTCCL(arg1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 2, "item", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1946, 33, "remove_from_map", tr2))(tr2);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 36, "remove", tr1))(tr1, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("same_count", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc1) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("one_less", EX_POST);
		tc3 = '\01';
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("removed", EX_POST);
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* wipe_out */

void Fnvuiby (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(2270), Current, 0, 0, 27178);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2270, 44, dtype))(Current);
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 39, dtype))(Current)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 6, dtype));
		{
			static int16 typarr [] = {2270,-7,1,726,-8,1,-1};
			int16 typres;

			typres = RTCID2(NULL, Dftype(Current), 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1946, 33, "remove_from_map", tr1))(tr1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2270, 43, dtype))(Current);
		RTHOOK(2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 39, dtype))(Current)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2218, 167, "wipe_out", tr1))(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("wiped_out", EX_POST);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(2);
	RTEE;
}

/* replace */

void Fnvs7gp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(7,arg1);
	RTLR(6,tr4);
	RTLR(1,ur1);
	RTLR(8,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("replace", RTUD(2270), Current, 0, 2, 27176);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_k", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_removable", EX_PRE);
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 36, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1946, 39, "is_removable", tr1))(tr1)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 6, dtype));
	{
		static int16 typarr [] = {2270,-7,1,726,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg2);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 2, "item", tr3))(tr3, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr4;
	RTAR(tr2,tr4);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2218, 2, "item", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1946, 33, "remove_from_map", tr2))(tr2);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2218, 122, "replace", tr1))(tr1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 5, dtype));
	{
		static int16 typarr [] = {2270,-7,1,726,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = arg1;
	RTAR(tr2,arg1);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 34, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1946, 32, "add_to_map", arg1))(arg1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("replaced", EX_POST);
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2270, 36, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2270, 38, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

void Fp0fwn6 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("internal_table_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 50, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("map_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2270, 34, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2271 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

