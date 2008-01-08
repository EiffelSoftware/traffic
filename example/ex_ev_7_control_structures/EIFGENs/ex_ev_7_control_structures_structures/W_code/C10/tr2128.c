/*
 * Code for class TRAFFIC_LANDMARK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpq_ox7(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpq1mq2(EIF_REFERENCE);
extern EIF_UNION Fpq0ztg(EIF_REFERENCE);
extern EIF_UNION Fpq19op(EIF_REFERENCE);
extern void EIF_Minit2128(void);

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

void Fpq_ox7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_UNION ur8_3x = {0, SK_REAL64};
#undef ur8_3
#define ur8_3 ur8_3x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
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
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2127), Current, 0, 2, 31211);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("center_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_filename_exists", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg2))(arg2)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2127, 79, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(4);
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2127, 80, dtype))(Current)).value.EIF_REAL_64_value);
	ur8_1 = tr8_1;
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2127, 81, dtype))(Current)).value.EIF_REAL_64_value);
	ur8_2 = tr8_2;
	tr8_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2127, 82, dtype))(Current)).value.EIF_REAL_64_value);
	ur8_3 = tr8_3;
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2127, 69, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur1x);
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current + RTWA(2127, 73, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_landmark", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2127, 73, dtype));
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2127, 71, dtype));
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(2127, 72, dtype));
		tc4 = *(EIF_BOOLEAN *)(Current + RTWA(2127, 70, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(tc1 && (EIF_BOOLEAN) !tc2) && (EIF_BOOLEAN) !tc3) && (EIF_BOOLEAN) !tc4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("size_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2127, 18, dtype));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2127, 80, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2127, 65, dtype));
		tr8_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2127, 82, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(2127, 4, dtype));
		tr8_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2127, 81, dtype))(Current)).value.EIF_REAL_64_value);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(tr8_1 == tr8_2) && (EIF_BOOLEAN)(tr8_3 == tr8_4)) && (EIF_BOOLEAN)(tr8_5 == tr8_6))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("center_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2127, 41, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("filename_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2127, 79, dtype));
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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

/* default_depth */

EIF_UNION Fpq1mq2 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = (EIF_REAL_64)13.;
	return r;
}
/* default_width */

EIF_UNION Fpq0ztg (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = (EIF_REAL_64)27.;
	return r;
}
/* default_height */

EIF_UNION Fpq19op (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = (EIF_REAL_64)35.;
	return r;
}
void EIF_Minit2128 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

