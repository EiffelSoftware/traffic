/*
 * Code for class TRAFFIC_BUILDING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpqxf82(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpqz0_k(EIF_REFERENCE, EIF_UNION);
extern void Fpqzd1y(EIF_REFERENCE, EIF_UNION);
extern void Fpqmgci(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpqx26p(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpqpo0m(EIF_REFERENCE, EIF_UNION);
extern void Fpqyq4b(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpqqby8(EIF_REFERENCE);
extern EIF_UNION Fpqv5du(EIF_REFERENCE);
extern EIF_UNION Fpquvil(EIF_REFERENCE);
extern EIF_UNION Fpqvif7(EIF_REFERENCE);
extern EIF_UNION Fpqwtbg(EIF_REFERENCE);
extern void Fp14987(EIF_REFERENCE, int);
extern void EIF_Minit2127(void);

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

/* contains_point */

EIF_UNION Fpqxf82 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTEAA("contains_point", RTUD(2126), Current, 2, 2, 31206);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;

	RTHOOK(2);
	tc1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr8_1 != tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 90L));
		tc1 = (EIF_BOOLEAN)(tr8_1 != tr8_2);
	}
	if (tc1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 70, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 41, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
		tr8_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 41, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)) + (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_4 * tr8_5)) /  (EIF_REAL_64) (tr8_6)));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2126, 35, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(arg2 - tr8_1)) /  (EIF_REAL_64) (tr8_2));
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2126, 25, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 41, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
		tr8_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 41, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)) + (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_4 * tr8_5)) /  (EIF_REAL_64) (tr8_6)));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2126, 35, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 - arg2)) /  (EIF_REAL_64) (tr8_2));
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2126, 25, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	} else {
		RTHOOK(5);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REAL_64)tr8_1;
		RTHOOK(6);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		loc2 = (EIF_REAL_64)tr8_1;
	}


	RTHOOK(7);
	tc1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 71, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(7);
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
	if ((EIF_BOOLEAN)(arg2 >= (EIF_REAL_64)(tr8_1 - (EIF_REAL_64) 0.1))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 69, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
		tc1 = (EIF_BOOLEAN)(arg2 <= (EIF_REAL_64)(tr8_1 + (EIF_REAL_64) 0.1));
	}
	if (tc1) {

		RTHOOK(8);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 70, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
		if ((EIF_BOOLEAN)(arg1 <= (EIF_REAL_64)((EIF_REAL_64)(tr8_1 - loc1) + (EIF_REAL_64) 0.1))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2126, 72, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tc1 = (EIF_BOOLEAN)(arg1 >= (EIF_REAL_64)((EIF_REAL_64)(tr8_1 + loc2) - (EIF_REAL_64) 0.1));
		}
		if (tc1) {
			RTHOOK(9);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* set_center */

void Fpqz0_k (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_center", RTUD(2126), Current, 0, 1, 31210);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_center_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 42, dtype));
	{
		static int16 typarr [] = {2126,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("center_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* set_angle */

void Fpqzd1y (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_angle", RTUD(2126), Current, 0, 1, 31209);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("angle_valid", EX_PRE);
		tc1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) -70L));
		if ((EIF_BOOLEAN)(arg1 >= tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 70L));
			tc1 = (EIF_BOOLEAN)(arg1 <= tr8_1);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype)) = (EIF_REAL_64)arg1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 42, dtype));
	{
		static int16 typarr [] = {2126,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("angle_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
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

/* make_new */

void Fpqmgci (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg4 arg4x.value.EIF_REFERENCE_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_64_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg4);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make_new", RTUD(2126), Current, 0, 4, 31198);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("size_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 > (EIF_REAL_64) 0.0) && (EIF_BOOLEAN)(arg3 > (EIF_REAL_64) 0.0)) && (EIF_BOOLEAN)(arg2 > (EIF_REAL_64) 0.0)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("center_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype)) = (EIF_REAL_64)arg1;
	RTHOOK(4);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 65, dtype)) = (EIF_REAL_64)arg3;
	RTHOOK(5);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype)) = (EIF_REAL_64)arg2;
	RTHOOK(6);
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype)) = (EIF_REFERENCE)RTCCL(arg4);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(2126, 42, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2126, 42, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("size_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2126, 65, dtype));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(tr8_1 == arg1) && (EIF_BOOLEAN)(tr8_2 == arg3)) && (EIF_BOOLEAN)(tr8_3 == arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("center_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
		if (RTCEQ(tr1, arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* set_size */

void Fpqx26p (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_64_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("set_size", RTUD(2126), Current, 0, 3, 31207);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("size_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 > (EIF_REAL_64) 0.0) && (EIF_BOOLEAN)(arg2 > (EIF_REAL_64) 0.0)) && (EIF_BOOLEAN)(arg3 > (EIF_REAL_64) 0.0)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype)) = (EIF_REAL_64)arg1;
	RTHOOK(3);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 65, dtype)) = (EIF_REAL_64)arg2;
	RTHOOK(4);
	*(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype)) = (EIF_REAL_64)arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("size_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2126, 65, dtype));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(tr8_1 == arg1) && (EIF_BOOLEAN)(tr8_2 == arg2)) && (EIF_BOOLEAN)(tr8_3 == arg3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* is_insertable */

EIF_UNION Fpqpo0m (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_insertable", RTUD(2126), Current, 0, 1, 31200);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* set_description */

void Fpqyq4b (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_description", RTUD(2126), Current, 0, 1, 31208);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_description_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2126, 68, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 42, dtype));
	{
		static int16 typarr [] = {2126,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("description_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 68, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* is_removable */

EIF_UNION Fpqqby8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_removable", RTUD(2126), Current, 0, 0, 31201);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* corner_3 */

EIF_UNION Fpqv5du (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("corner_3", RTUD(2126), Current, 0, 0, 31204);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)(tr8_1 + (EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_4 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_2 = (EIF_REAL_64)(tr8_4 + (EIF_REAL_64)((EIF_REAL_64) (tr8_5) /  (EIF_REAL_64) (tr8_6)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	ur1 = RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
	ur8_1 = tr8_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", Result))(Result, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* corner_1 */

EIF_UNION Fpquvil (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("corner_1", RTUD(2126), Current, 0, 0, 31202);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)(tr8_1 - (EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_4 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_2 = (EIF_REAL_64)(tr8_4 - (EIF_REAL_64)((EIF_REAL_64) (tr8_5) /  (EIF_REAL_64) (tr8_6)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	ur1 = RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
	ur8_1 = tr8_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", Result))(Result, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* corner_2 */

EIF_UNION Fpqvif7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("corner_2", RTUD(2126), Current, 0, 0, 31203);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)(tr8_1 + (EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_4 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_2 = (EIF_REAL_64)(tr8_4 - (EIF_REAL_64)((EIF_REAL_64) (tr8_5) /  (EIF_REAL_64) (tr8_6)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	ur1 = RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
	ur8_1 = tr8_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", Result))(Result, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* corner_4 */

EIF_UNION Fpqwtbg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("corner_4", RTUD(2126), Current, 0, 0, 31205);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)(tr8_1 - (EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3)));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	tr8_4 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_2 = (EIF_REAL_64)(tr8_4 + (EIF_REAL_64)((EIF_REAL_64) (tr8_5) /  (EIF_REAL_64) (tr8_6)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2126, 63, dtype));
	ur1 = RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
	ur8_1 = tr8_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", Result))(Result, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

void Fp14987 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("angle_valid", Current);
	tc1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) -70L));
	if ((EIF_BOOLEAN)(tr8_1 >= tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 64, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 70L));
		tc1 = (EIF_BOOLEAN)(tr8_1 <= tr8_2);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("breadth_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 66, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr8_1 > tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("width_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 67, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr8_1 > tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("heigth_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2126, 65, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr8_1 > tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("is_one_type", Current);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2126, 57, dtype));
	tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2126, 58, dtype));
	tc3 = *(EIF_BOOLEAN *)(Current + RTWA(2126, 59, dtype));
	tc4 = *(EIF_BOOLEAN *)(Current + RTWA(2126, 60, dtype));
	if (((((((tc1) != (tc2))) != (tc3))) != (tc4))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2127 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

