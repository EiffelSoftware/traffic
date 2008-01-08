/*
 * Code for class DATE_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnufq7p(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnup26n(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnuumq_(EIF_REFERENCE);
extern EIF_UNION Fnunif5(EIF_REFERENCE);
extern EIF_UNION Fnutztd(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnulkna(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnuj9r1(EIF_REFERENCE);
extern EIF_UNION Fnun5ds(EIF_REFERENCE);
extern EIF_UNION Fnug02y(EIF_REFERENCE);
extern void Fnutbvr(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnul7kx(EIF_REFERENCE);
extern void Fnur0_i(EIF_REFERENCE, EIF_UNION);
extern void Fnuvxl8(EIF_REFERENCE, EIF_UNION);
extern void Fnugd5b(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnukxpo(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnumvij(EIF_REFERENCE, EIF_UNION);
extern void Fnurd1w(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnuu9om(EIF_REFERENCE, EIF_UNION);
extern void Fnupf80(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnuwkjv(EIF_REFERENCE);
extern void Fnuotbe(EIF_REFERENCE, EIF_UNION);
extern void Fnusox4(EIF_REFERENCE, EIF_UNION);
extern void Fnuqq39(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnuizwt(EIF_REFERENCE);
extern EIF_UNION Fnuiby6(EIF_REFERENCE);
extern EIF_UNION Fnuho0k(EIF_REFERENCE);
extern void Fp0dylt(EIF_REFERENCE, int);
extern void EIF_Minit1919(void);

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

void Fnufq7p (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
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
	RTEAA("make", RTUD(1918), Current, 0, 3, 27111);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype)) = (EIF_INTEGER_32)arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* set_month */

void Fnup26n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
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
	RTEAA("set_month", RTUD(1918), Current, 0, 1, 27126);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("d_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ui4_1 = arg1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ui4_2 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 14, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 <= ti4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* prefix "-" */

EIF_UNION Fnuumq_ (EIF_REFERENCE Current)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("prefix \"-\"", RTUD(1918), Current, 0, 0, 27106);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 68, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 70, "set_origin_date", Result))(Result, ur1x);
	} else {
		RTHOOK(4);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 70, "set_origin_date", Result))(Result, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_definition", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 78, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 58, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 65, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("origin_equal", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
		ur1 = RTCCL(tr1);
		tr2 = *(EIF_REFERENCE *)(Result + RTVA(1918, 62, "origin_date", Result));
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 34, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* is_positive */

EIF_UNION Fnunif5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_positive", RTUD(1918), Current, 0, 0, 27122);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(ti4_2 > ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(ti4_3 > ((EIF_INTEGER_32) 0L)));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* infix "+" */

EIF_UNION Fnutztd (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,Result);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"+\"", RTUD(1918), Current, 0, 1, 27105);
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
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 61, "year", arg1));
	ui4_1 = (EIF_INTEGER_32)(ti4_1 + ti4_2);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
	ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 60, "month", arg1));
	ui4_2 = (EIF_INTEGER_32)(ti4_3 + ti4_4);
	ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
	ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 59, "day", arg1));
	ui4_3 = (EIF_INTEGER_32)(ti4_5 + ti4_6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 68, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 70, "set_origin_date", Result))(Result, ur1x);
	} else {
		RTHOOK(5);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 70, "set_origin_date", Result))(Result, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("commutative", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 78, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 65, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("origin_equal", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
		ur1 = RTCCL(tr1);
		tr2 = *(EIF_REFERENCE *)(Result + RTVA(1918, 62, "origin_date", Result));
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 34, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_equal */

EIF_UNION Fnulkna (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("is_equal", RTUD(1918), Current, 0, 1, 27119);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	tc1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 61, "year", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 60, "month", arg1));
		tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tc1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 59, "day", arg1));
		Result = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 65, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 22, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = Result;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_definition", EX_POST);
		tc1 = '\0';
		tc2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 61, "year", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 60, "month", arg1));
			tc2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 59, "day", arg1));
			tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if ((EIF_BOOLEAN)(Result == tc1)) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* days_count */

EIF_UNION Fnuj9r1 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(4,loc2);
	RTLR(5,ur1);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("days_count", RTUD(1918), Current, 3, 0, 27117);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("origin_date_set", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 69, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 68, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 49, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 80, "to_canonical", loc2))(loc2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 68, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(6);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 61, "year", loc2));
		while (!((EIF_BOOLEAN)(loc3 > ti4_1))) {

			RTHOOK(8);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 16, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(9);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 51, dtype))(Current)).value.EIF_INTEGER_32_value);
				Result += ti4_2;
			} else {
				RTHOOK(10);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 52, dtype))(Current)).value.EIF_INTEGER_32_value);
				Result += ti4_2;
			}

			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, 118, "year_forth", loc1))(loc1);
			RTHOOK(12);
			loc3++;
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 61, "year", loc2));
			;
		}


		RTHOOK(13);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(14);
		ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 60, "month", loc2));
		while (!((EIF_BOOLEAN)(loc3 > ti4_2))) {
			RTHOOK(15);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_3;
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
			ui4_2 = ti4_4;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 14, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
			Result += ti4_3;
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, 115, "month_forth", loc1))(loc1);
			RTHOOK(17);
			loc3++;
			RTHOOK(14);
			ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 60, "month", loc2));
			;
		}

		RTHOOK(18);
		ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 59, "day", loc2));
		Result += ti4_3;
	} else {
		RTHOOK(19);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 35, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(20);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		RTHOOK(21);
		ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 61, "year", loc2));
		while (!((EIF_BOOLEAN)(loc3 < ti4_3))) {
			RTHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, 119, "year_back", loc1))(loc1);

			RTHOOK(23);
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_4;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 16, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(24);
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 51, dtype))(Current)).value.EIF_INTEGER_32_value);
				Result -= ti4_4;
			} else {
				RTHOOK(25);
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 52, dtype))(Current)).value.EIF_INTEGER_32_value);
				Result -= ti4_4;
			}

			RTHOOK(26);
			loc3--;
			RTHOOK(21);
			ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 61, "year", loc2));
			;
		}


		RTHOOK(27);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		RTHOOK(28);
		ti4_4 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 60, "month", loc2));
		while (!((EIF_BOOLEAN)(loc3 < ti4_4))) {
			RTHOOK(29);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, 116, "month_back", loc1))(loc1);
			RTHOOK(30);
			ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_5;
			ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
			ui4_2 = ti4_6;
			ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 14, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
			Result -= ti4_5;
			RTHOOK(31);
			loc3--;
			RTHOOK(28);
			ti4_4 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 60, "month", loc2));
			;
		}

		RTHOOK(32);
		ti4_5 = *(EIF_INTEGER_32 *)(loc2 + RTVA(1918, 59, "day", loc2));
		Result += ti4_5;
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* has_origin_date */

EIF_UNION Fnun5ds (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("has_origin_date", RTUD(1918), Current, 0, 0, 27123);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, Dtype(Current)));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(tr1 != NULL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* zero */

RTOID (Fnug02y)

EIF_UNION Fnug02y (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnug02y);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("zero", RTUD(1918), Current, 0, 0, 27113);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(1918));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 57, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definite", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1918, 66, "definite", Result))(Result)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* year_add */

void Fnutbvr (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("year_add", RTUD(1918), Current, 0, 1, 27104);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("year_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
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

/* definite */

EIF_UNION Fnul7kx (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("definite", RTUD(1918), Current, 0, 0, 27120);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		if ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L)))))) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* day_add */

void Fnur0_i (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("day_add", RTUD(1918), Current, 0, 1, 27129);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
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

/* to_definite */

void Fnuvxl8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("to_definite", RTUD(1918), Current, 1, 1, 27108);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("date_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 99, "days", loc1))(loc1)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 99, "days", arg1))(arg1)).value.EIF_INTEGER_32_value);
	ui4_1 = (EIF_INTEGER_32)(ti4_1 - ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 57, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definite_result", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTLO(4);
	RTEE;
#undef arg1
}

/* make_by_days */

void Fnugd5b (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
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
	RTEAA("make_by_days", RTUD(1918), Current, 0, 1, 27112);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definite_duration", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* infix "<" */

EIF_UNION Fnukxpo (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"<\"", RTUD(1918), Current, 0, 1, 27118);
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
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1918, 66, "definite", arg1))(arg1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 59, "day", arg1));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 < ti4_2);
	} else {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("definite_duration", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1918, 66, "definite", arg1))(arg1)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1918, 59, "day", arg1));
			tc1 = (EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 < ti4_2));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("non_definite_duration", EX_POST);
		tc1 = '\01';
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 66, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!(EIF_BOOLEAN) !tc3) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1918, 66, "definite", arg1))(arg1)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0);
		}
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* canonical */

EIF_UNION Fnumvij (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,loc1);
	RTLR(6,loc2);
	RTLR(5,loc3);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("canonical", RTUD(1918), Current, 3, 1, 27121);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("date_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 30, "infix \">=\"", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		tr1 = RTLN(RTUD(1918));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ui4_2 = (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(4);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		ur1 = RTCCL(loc3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		Result = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 < ti4_4)) && (EIF_BOOLEAN)(ti4_5 >= ((EIF_INTEGER_32) 0L)))) {
			ur1 = RTCCL(loc2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 97, "infix \"<\"", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			Result = tc1;
		}
	} else {
		RTHOOK(7);
		tr1 = RTLN(RTUD(1918));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ui4_2 = (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(7);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		ur1 = RTCCL(loc3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		Result = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 > (EIF_INTEGER_32)-ti4_4)) && (EIF_BOOLEAN)(ti4_5 <= ((EIF_INTEGER_32) 0L)))) {
			ur1 = RTCCL(loc2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 25, "infix \">\"", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			Result = tc1;
		}
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* set_date */

void Fnurd1w (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
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
	RTEAA("set_date", RTUD(1918), Current, 0, 3, 27128);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("m_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("d_small_enough", EX_PRE);
		ui4_1 = arg2;
		ui4_2 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 14, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype)) = (EIF_INTEGER_32)arg3;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* to_canonical */

EIF_UNION Fnuu9om (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(5,tr1);
	RTLR(4,loc2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(8,tr2);
	RTLR(6,loc1);
	RTLR(3,Result);
	RTLR(1,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("to_canonical", RTUD(1918), Current, 3, 1, 27107);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("start_date_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 67, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 24, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	} else {
		RTHOOK(4);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", arg1))(arg1)).value.EIF_INTEGER_32_value);
		loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", arg1))(arg1)).value.EIF_INTEGER_32_value);
		loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - ti4_2) * loc3) + ti4_3) - ti4_4);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 68, "twin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 117, "month_add", loc1))(loc1, ui4_1x);

		RTHOOK(8);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 30, "infix \">=\"", loc2))(loc2, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(9);
			ur1 = RTCCL(loc2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 23, "infix \"<=\"", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(10);
				tr1 = RTLNSMART(dftype);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_1 = (EIF_INTEGER_32)(loc3 / ti4_1);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_2 = (EIF_INTEGER_32)(loc3 % ti4_2);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc2))(loc2)).value.EIF_INTEGER_32_value);
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc1))(loc1)).value.EIF_INTEGER_32_value);
				ui4_3 = (EIF_INTEGER_32)(ti4_3 - ti4_4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(10);
				RTCI2(tr1);
				Result = (EIF_REFERENCE)RTCCL(tr1);
			} else {
				RTHOOK(11);
				loc3--;
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, 116, "month_back", loc1))(loc1);

				RTHOOK(13);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
				ui4_2 = ti4_2;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2093, 17, "days_in_i_th_month", arg1))(arg1, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", arg1))(arg1)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
					RTHOOK(14);
					tr1 = RTLNSMART(dftype);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
					ui4_1 = (EIF_INTEGER_32)(loc3 / ti4_1);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
					ui4_2 = (EIF_INTEGER_32)(loc3 % ti4_2);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc2))(loc2)).value.EIF_INTEGER_32_value);
					ui4_3 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(14);
					RTCI2(tr1);
					Result = (EIF_REFERENCE)RTCCL(tr1);
				} else {
					RTHOOK(15);
					tr1 = RTLNSMART(dftype);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
					ui4_1 = (EIF_INTEGER_32)(loc3 / ti4_1);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
					ui4_2 = (EIF_INTEGER_32)(loc3 % ti4_2);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc2))(loc2)).value.EIF_INTEGER_32_value);
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc1))(loc1)).value.EIF_INTEGER_32_value);
					ui4_3 = ti4_4;
					ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc1))(loc1)).value.EIF_INTEGER_32_value);
					ui4_4 = ti4_5;
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2093, 17, "days_in_i_th_month", arg1))(arg1, ui4_3x, ui4_4x)).value.EIF_INTEGER_32_value);
					ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", arg1))(arg1)).value.EIF_INTEGER_32_value);
					ui4_3 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_3 + ti4_4) - ti4_5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(15);
					RTCI2(tr1);
					Result = (EIF_REFERENCE)RTCCL(tr1);
				}

			}

		} else {

			RTHOOK(16);
			ur1 = RTCCL(loc2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 30, "infix \">=\"", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(17);
				tr1 = RTLNSMART(dftype);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_1 = (EIF_INTEGER_32)(loc3 / ti4_1);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_2 = (EIF_INTEGER_32)(loc3 % ti4_2);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc2))(loc2)).value.EIF_INTEGER_32_value);
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc1))(loc1)).value.EIF_INTEGER_32_value);
				ui4_3 = (EIF_INTEGER_32)(ti4_3 - ti4_4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(17);
				RTCI2(tr1);
				Result = (EIF_REFERENCE)RTCCL(tr1);
			} else {
				RTHOOK(18);
				loc3++;
				RTHOOK(19);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, 115, "month_forth", loc1))(loc1);
				RTHOOK(20);
				tr1 = RTLNSMART(dftype);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_1 = (EIF_INTEGER_32)(loc3 / ti4_1);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 50, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_2 = (EIF_INTEGER_32)(loc3 % ti4_2);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc2))(loc2)).value.EIF_INTEGER_32_value);
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 79, "month", loc2))(loc2)).value.EIF_INTEGER_32_value);
				ui4_3 = ti4_4;
				ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 77, "year", loc2))(loc2)).value.EIF_INTEGER_32_value);
				ui4_4 = ti4_5;
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2093, 17, "days_in_i_th_month", arg1))(arg1, ui4_3x, ui4_4x)).value.EIF_INTEGER_32_value);
				ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2093, 81, "day", loc1))(loc1)).value.EIF_INTEGER_32_value);
				ui4_3 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_3 - ti4_4) - ti4_5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1918, 56, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
				RTNHOOK(20);
				RTCI2(tr1);
				Result = (EIF_REFERENCE)RTCCL(tr1);
			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("canonical_result", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1918, 67, "canonical", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("duration_not_changed", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(Result);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2093, 109, "infix \"+\"", arg1))(arg1, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 34, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* set_day */

void Fnupf80 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_day", RTUD(1918), Current, 0, 1, 27125);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* to_date_time */

EIF_UNION Fnuwkjv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_5x = {0, SK_INT32};
#undef ui4_5
#define ui4_5 ui4_5x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_6x = {0, SK_INT32};
#undef ui4_6
#define ui4_6 ui4_6x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("to_date_time", RTUD(1918), Current, 0, 0, 27109);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1917));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
	ui4_3 = ti4_3;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1917, 68, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1917, 60, "year", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1917, 61, "month", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1917, 62, "day", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_origin_date */

void Fnuotbe (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_origin_date", RTUD(1918), Current, 0, 1, 27124);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("origin_date_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
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

/* month_add */

void Fnusox4 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("month_add", RTUD(1918), Current, 0, 1, 27130);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("month_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + arg1))) {
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

/* set_year */

void Fnuqq39 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
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
	RTEAA("set_year", RTUD(1918), Current, 0, 1, 27127);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("can_not_cut_29th_feb", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ui4_1 = ti4_2;
		ui4_2 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1918, 14, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 <= ti4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
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

/* year */

EIF_UNION Fnuizwt (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1918,61, Dtype(Current)));
	return r;
}

/* month */

EIF_UNION Fnuiby6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1918,60, Dtype(Current)));
	return r;
}

/* day */

EIF_UNION Fnuho0k (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(1918,59, Dtype(Current)));
	return r;
}

void Fp0dylt (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTIT("equal_signs", Current);
	tc1 = '\01';
	tc2 = '\0';
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1918, 69, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc3) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1918, 62, dtype));
		ur1 = RTCCL(tr1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1918, 67, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (tc2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 59, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 60, dtype));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(1918, 61, dtype));
		tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 >= ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_4 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_5 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 <= ((EIF_INTEGER_32) 0L))));
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1919 (void)
{
	GTCX
	RTOTS (28665,Fnug02y)
}


#ifdef __cplusplus
}
#endif

