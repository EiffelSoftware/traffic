/*
 * Code for class DT_DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpmi2di(EIF_REFERENCE);
extern void Fpmcl0a(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpmr4g7(EIF_REFERENCE, EIF_UNION);
extern void Fpmghm0(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpmjqa4(EIF_REFERENCE);
extern EIF_UNION Fpmkc8r(EIF_REFERENCE);
extern void Fpmma1m(EIF_REFERENCE, EIF_UNION);
extern void Fpmc8yx(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpmpjqq(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpmp6oc(EIF_REFERENCE);
extern EIF_UNION Fpmk_6d(EIF_REFERENCE);
extern void Fpmmyz8(EIF_REFERENCE);
extern void Fpmejt5(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpmfupe(EIF_REFERENCE, EIF_UNION);
extern void Fpmg4kn(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpmsseu(EIF_REFERENCE);
extern void Fpmnlxv(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpmln3_(EIF_REFERENCE, EIF_UNION);
extern void Fpme6rs(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpmrhjl(EIF_REFERENCE, EIF_UNION);
extern void Fpmhsh9(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpmtfcg(EIF_REFERENCE);
extern EIF_UNION Fpmiffw(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpmows3(EIF_REFERENCE, EIF_UNION);
extern void Fpmn8vh(EIF_REFERENCE, EIF_UNION);
extern void Fpmdwwj(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpmqulz(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2107(void);

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

/* is_time_canonical */

EIF_UNION Fpmi2di (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	EIF_INTEGER_32 ti4_11;
	EIF_INTEGER_32 ti4_12;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_time_canonical", RTUD(2106), Current, 0, 0, 31007);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 < ti4_3)) && (EIF_BOOLEAN)(ti4_4 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 < ti4_6)) && (EIF_BOOLEAN)(ti4_7 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 < ti4_9)) && (EIF_BOOLEAN)(ti4_10 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 < ((EIF_INTEGER_32) 1000L))) && (EIF_BOOLEAN)(ti4_12 >= ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 > (EIF_INTEGER_32)-ti4_3)) && (EIF_BOOLEAN)(ti4_4 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 > (EIF_INTEGER_32)-ti4_6)) && (EIF_BOOLEAN)(ti4_7 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 > (EIF_INTEGER_32)-ti4_9)) && (EIF_BOOLEAN)(ti4_10 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 > ((EIF_INTEGER_32) -1000L))) && (EIF_BOOLEAN)(ti4_12 <= ((EIF_INTEGER_32) 0L)));
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("positive_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 < ti4_4)) && (EIF_BOOLEAN)(ti4_5 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 < ti4_7)) && (EIF_BOOLEAN)(ti4_8 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_9 < ((EIF_INTEGER_32) 1000L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("negative_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 > (EIF_INTEGER_32)-ti4_4)) && (EIF_BOOLEAN)(ti4_5 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_6 > (EIF_INTEGER_32)-ti4_7)) && (EIF_BOOLEAN)(ti4_8 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_9 > ((EIF_INTEGER_32) -1000L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("zero_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 0L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("positive_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 < ti4_3)) && (EIF_BOOLEAN)(ti4_4 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 < ti4_6)) && (EIF_BOOLEAN)(ti4_7 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 < ti4_9)) && (EIF_BOOLEAN)(ti4_10 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 < ((EIF_INTEGER_32) 1000L))) && (EIF_BOOLEAN)(ti4_12 >= ((EIF_INTEGER_32) 0L)));
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("negative_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 < ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 > (EIF_INTEGER_32)-ti4_3)) && (EIF_BOOLEAN)(ti4_4 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 > (EIF_INTEGER_32)-ti4_6)) && (EIF_BOOLEAN)(ti4_7 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 > (EIF_INTEGER_32)-ti4_9)) && (EIF_BOOLEAN)(ti4_10 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 > ((EIF_INTEGER_32) -1000L))) && (EIF_BOOLEAN)(ti4_12 <= ((EIF_INTEGER_32) 0L)));
			}
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
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make */

void Fpmcl0a (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x, EIF_UNION arg6x)
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
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg6x.type == SK_REF) arg6x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg6x.value.EIF_REFERENCE_value;
#define arg6 arg6x.value.EIF_INTEGER_32_value
	if (arg5x.type == SK_REF) arg5x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_INTEGER_32_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
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
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2106), Current, 0, 6, 30997);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 23, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(2);
	ui4_1 = arg4;
	ui4_2 = arg5;
	ui4_3 = arg6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 26, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* same_date_time_duration */

EIF_UNION Fpmr4g7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("same_date_time_duration", RTUD(2106), Current, 2, 1, 30994);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 96, "year", arg1));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
	ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 95, "month", arg1));
	if ((EIF_BOOLEAN)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - ti4_2) * ti4_3) + (EIF_INTEGER_32)(ti4_4 - ti4_5)) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2106, 76, "millisecond_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 - ti4_1);

		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)-loc2;
			RTHOOK(6);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 102, "day", arg1));
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - ti4_1) - (EIF_INTEGER_32)(loc2 / ti4_2));
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc2 % ti4_1);
		} else {
			RTHOOK(8);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 102, "day", arg1));
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - ti4_1) + (EIF_INTEGER_32)(loc2 / ti4_2));
			RTHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 %= ti4_1;
		}

		RTHOOK(10);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)));
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* make_from_date_time_duration */

void Fpmghm0 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_from_date_time_duration", RTUD(2106), Current, 0, 2, 31003);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_date_duration_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_time_duration_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 97, "year", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 98, "month", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 99, "day", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 103, "hour", arg2));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 104, "minute", arg2));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 105, "second", arg2));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(9);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 106, "millisecond", arg2));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 97, "year", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 98, "month", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 99, "day", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 103, "hour", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 104, "minute", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 105, "second", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2104, 106, "millisecond", arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* date_duration */

EIF_UNION Fpmjqa4 (EIF_REFERENCE Current)
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
	RTEAA("date_duration", RTUD(2106), Current, 0, 0, 31008);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2102));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2102, 94, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("date_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2102, 97, "year", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2102, 98, "month", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2102, 99, "day", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
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

/* time_duration */

EIF_UNION Fpmkc8r (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTEAA("time_duration", RTUD(2106), Current, 0, 0, 31009);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(2104));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
	ui4_3 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
	ui4_4 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2104, 99, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("time_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2104, 103, "hour", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2104, 104, "minute", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2104, 105, "second", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2104, 106, "millisecond", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_canonical */

void Fpmma1m (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(7,tr3);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("set_canonical", RTUD(2106), Current, 1, 1, 30985);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_date_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 135, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 170, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 101, "set_date", loc1))(loc1, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 131, "set_time", loc1))(loc1, ur1x);
	RTHOOK(5);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 181, "add_duration", loc1))(loc1, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2106, 152, dtype))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_canonical", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 153, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_duration", EX_POST);
		ur1 = RTCCL(Current);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 28, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(4);
	RTEE;
#undef arg1
}

/* make_precise */

void Fpmc8yx (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x, EIF_UNION arg6x, EIF_UNION arg7x)
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
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg7x.type == SK_REF) arg7x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg7x.value.EIF_REFERENCE_value;
#define arg7 arg7x.value.EIF_INTEGER_32_value
	if (arg6x.type == SK_REF) arg6x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg6x.value.EIF_REFERENCE_value;
#define arg6 arg6x.value.EIF_INTEGER_32_value
	if (arg5x.type == SK_REF) arg5x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_INTEGER_32_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
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
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTEAA("make_precise", RTUD(2106), Current, 0, 7, 30998);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 23, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(2);
	ui4_1 = arg4;
	ui4_2 = arg5;
	ui4_3 = arg6;
	ui4_4 = arg7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 27, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg7)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* infix "-" */

EIF_UNION Fpmpjqq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"-\"", RTUD(2106), Current, 0, 1, 30990);
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
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 135, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 96, "year", arg1));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 95, "month", arg1));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 102, "day", arg1));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2106, 113, "add_years_months_days", Result))(Result, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 107, "hour", arg1));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 104, "minute", arg1));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 32, "second", arg1));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 11, "millisecond", arg1));
	ui4_4 = (EIF_INTEGER_32)-ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2106, 84, "add_precise_hours_minutes_seconds", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("subtraction_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* prefix "-" */

EIF_UNION Fpmp6oc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("prefix \"-\"", RTUD(2106), Current, 0, 0, 30991);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 135, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2106, 12, "set_year_month_day", Result))(Result, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
	ui4_1 = (EIF_INTEGER_32)-ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
	ui4_2 = (EIF_INTEGER_32)-ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
	ui4_3 = (EIF_INTEGER_32)-ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
	ui4_4 = (EIF_INTEGER_32)-ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2106, 38, "set_precise_hour_minute_second", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("unary_minus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* hash_code */

EIF_UNION Fpmk_6d (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hash_code", RTUD(2106), Current, 0, 0, 31010);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 110, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 138, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(Result + (EIF_INTEGER_32)(ti4_1 * ti4_2)) + (EIF_INTEGER_32)(ti4_3 * ti4_4)) + ti4_5);

	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(Result + ((EIF_INTEGER_32) 1L));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* set_time_canonical */

void Fpmmyz8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("set_time_canonical", RTUD(2106), Current, 4, 0, 30986);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_2 = ti4_3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 135, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(1);
	loc4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
	RTHOOK(2);
	loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
	RTHOOK(3);
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)-loc2;
		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 - (EIF_INTEGER_32)(loc2 / ti4_3));
		RTHOOK(7);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc2 % ti4_3);

		RTHOOK(8);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(9);
			loc1--;
			RTHOOK(10);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 += ti4_3;
		}

	} else {
		RTHOOK(11);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + (EIF_INTEGER_32)(loc2 / ti4_3));
		RTHOOK(12);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 %= ti4_3;

		RTHOOK(13);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(14);
			loc1++;
			RTHOOK(15);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 -= ti4_3;
		}

	}

	RTHOOK(16);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 149, dtype))(Current, ui4_1x);
	RTHOOK(17);
	ui4_1 = loc4;
	ui4_2 = loc3;
	ui4_3 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 12, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("is_canonical", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 154, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("same_duration", EX_POST);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 167, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("same_year", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("same_month", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(6);
	RTEE;
}

/* make_precise_definite */

void Fpmejt5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg5x.type == SK_REF) arg5x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_INTEGER_32_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
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
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTEAA("make_precise_definite", RTUD(2106), Current, 0, 5, 31000);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 141, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ui4_1 = arg2;
	ui4_2 = arg3;
	ui4_3 = arg4;
	ui4_4 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 27, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_definite", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 108, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* make_precise_canonical_definite */

void Fpmfupe (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("make_precise_canonical_definite", RTUD(2106), Current, 2, 1, 31002);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)-((EIF_INTEGER_32)((EIF_INTEGER_32)-arg1 / loc1));
		RTHOOK(3);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)-((EIF_INTEGER_32)((EIF_INTEGER_32)-arg1 % loc2));
	} else {
		RTHOOK(4);
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 / loc1);
		RTHOOK(5);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 % loc2);
	}

	RTHOOK(6);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 141, dtype))(Current, ui4_1x);
	RTHOOK(7);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 3, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_definite", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 108, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("canonical_time", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 156, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2104, 102, "is_canonical", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("millisecond_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32)(ti4_1 + (EIF_INTEGER_32)(ti4_2 * ti4_3)))) {
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
#undef arg1
}

/* make_from_date_duration */

void Fpmg4kn (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_from_date_duration", RTUD(2106), Current, 0, 1, 31004);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_date_duration_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 97, "year", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 98, "month", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 99, "day", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 97, "year", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 98, "month", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 99, "day", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* to_time_canonical */

EIF_UNION Fpmsseu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("to_time_canonical", RTUD(2106), Current, 0, 0, 30995);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 135, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2106, 160, "set_time_canonical", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("canonical_duration_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_duration", EX_POST);
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2106, 167, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_year", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 96, "year", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_month", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2106, 95, "month", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_date_duration */

void Fpmnlxv (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_date_duration", RTUD(2106), Current, 0, 1, 30987);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_date_duration_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 97, "year", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 98, "month", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 99, "day", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("year_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 97, "year", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("month_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 98, "month", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2102, 99, "day", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* date_time */

EIF_UNION Fpmln3_ (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("date_time", RTUD(2106), Current, 0, 1, 30984);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_time_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("absolute_time_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2138, 41, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2138, 20, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* make_canonical_definite */

void Fpme6rs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("make_canonical_definite", RTUD(2106), Current, 2, 1, 31001);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 33, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)-((EIF_INTEGER_32)((EIF_INTEGER_32)-arg1 / loc1));
		RTHOOK(3);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 33, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)-((EIF_INTEGER_32)((EIF_INTEGER_32)-arg1 % loc2));
	} else {
		RTHOOK(4);
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 33, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 / loc1);
		RTHOOK(5);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 33, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 % loc2);
	}

	RTHOOK(6);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 141, dtype))(Current, ui4_1x);
	RTHOOK(7);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 1, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_definite", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 108, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("canonical_time", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 156, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2104, 102, "is_canonical", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("second_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 56, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 33, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32)(ti4_1 + (EIF_INTEGER_32)(ti4_2 * ti4_3)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* is_equal */

EIF_UNION Fpmrhjl (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_equal", RTUD(2106), Current, 0, 1, 30993);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(Current);
	ur2 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 168, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2106, 167, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 47, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = Result;
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* make_canonical_from_dates */

void Fpmhsh9 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
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
	EIF_UNION ui4_4x = {0, SK_INT32};
#undef ui4_4
#define ui4_4 ui4_4x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_5x = {0, SK_INT32};
#undef ui4_5
#define ui4_5 ui4_5x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_6x = {0, SK_INT32};
#undef ui4_6
#define ui4_6 ui4_6x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_7x = {0, SK_INT32};
#undef ui4_7
#define ui4_7 ui4_7x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
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
	RTLR(3,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTEAA("make_canonical_from_dates", RTUD(2106), Current, 12, 2, 31005);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("date_from_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("date_to_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 103, "year", arg2))(arg2)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 103, "year", arg1))(arg1)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 - ti4_2);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 104, "month", arg2))(arg2)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 104, "month", arg1))(arg1)).value.EIF_INTEGER_32_value);
	loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 - ti4_2);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 111, "day", arg2))(arg2)).value.EIF_INTEGER_32_value);
	loc10 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 111, "day", arg1))(arg1)).value.EIF_INTEGER_32_value);
	loc9 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc10 - loc9);
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 80, "millisecond_count", arg2))(arg2)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 80, "millisecond_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 - ti4_2);

	RTHOOK(9);
	ur1 = RTCCL(arg2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 186, "infix \"<\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc4 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			loc3--;
			RTHOOK(12);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc4 += ti4_1;
		}

		RTHOOK(13);
		loc8 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 1000L));
		RTHOOK(14);
		loc4 /= ((EIF_INTEGER_32) 1000L);
		RTHOOK(15);
		loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc7 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 % loc7);
		RTHOOK(16);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc4 /= ti4_1;
		RTHOOK(17);
		loc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc6 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 % loc6);
		RTHOOK(18);
		loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 / loc5);

		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			loc2--;
			RTHOOK(21);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 121, "days_in_previous_month", arg2))(arg2)).value.EIF_INTEGER_32_value);
			loc11 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(22);
			if ((EIF_BOOLEAN)(loc11 < loc9)) {
				RTHOOK(23);
				loc3 += loc9;
			} else {
				RTHOOK(24);
				loc3 += loc11;
			}

		}


		RTHOOK(25);
		if ((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(26);
			loc1--;
			RTHOOK(27);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 += ti4_1;
		}

	} else {

		RTHOOK(28);
		if ((EIF_BOOLEAN)(loc4 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(29);
			loc3++;
			RTHOOK(30);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc4 -= ti4_1;
		}

		RTHOOK(31);
		loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)-loc4;
		RTHOOK(32);
		loc8 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 1000L));
		RTHOOK(33);
		loc4 /= ((EIF_INTEGER_32) 1000L);
		RTHOOK(34);
		loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc7 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc4 % loc7);
		RTHOOK(35);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc4 /= ti4_1;
		RTHOOK(36);
		loc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc6 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc4 % loc6);
		RTHOOK(37);
		loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc4 / loc5);
		RTHOOK(38);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 119, "days_in_current_month", arg2))(arg2)).value.EIF_INTEGER_32_value);
		loc12 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(39);
		if ((EIF_BOOLEAN)(loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(40);
			loc2++;
			RTHOOK(41);
			loc3 -= loc12;
		} else {
			RTHOOK(42);
		if ((EIF_BOOLEAN)(loc12 < loc9)) {
			RTHOOK(43);
			loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc3 + loc9) - loc12);
		}}


		RTHOOK(44);
		if ((EIF_BOOLEAN)(loc2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(45);
			loc1++;
			RTHOOK(46);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 -= ti4_1;
		}

	}

	RTHOOK(47);
	ui4_1 = loc1;
	ui4_2 = loc2;
	ui4_3 = loc3;
	ui4_4 = loc5;
	ui4_5 = loc6;
	ui4_6 = loc7;
	ui4_7 = loc8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 145, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x, ui4_7x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(48);
		RTCT("canonical_duration", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 153, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(49);
		RTCT("definition", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 28, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(50);
	RTLE;
	RTLO(16);
	RTEE;
#undef arg2
#undef arg1
}

/* tmp_date_time */

RTOID (Fpmtfcg)

EIF_UNION Fpmtfcg (EIF_REFERENCE Current)
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
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpmtfcg);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("tmp_date_time", RTUD(2106), Current, 0, 0, 30996);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2141));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2141, 171, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("tmp_date_time_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* is_canonical */

EIF_UNION Fpmiffw (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	EIF_INTEGER_32 ti4_11;
	EIF_INTEGER_32 ti4_12;
	EIF_INTEGER_32 ti4_13;
	EIF_INTEGER_32 ti4_14;
	EIF_INTEGER_32 ti4_15;
	EIF_INTEGER_32 ti4_16;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
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

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("is_canonical", RTUD(2106), Current, 1, 1, 31006);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_date_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 170, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 101, "set_date", loc1))(loc1, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 131, "set_time", loc1))(loc1, ur1x);
	RTHOOK(5);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 181, "add_duration", loc1))(loc1, ur1x);

	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 66, "infix \"<=\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		ti4_13 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_14 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_15 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_16 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 < ti4_3)) && (EIF_BOOLEAN)(ti4_4 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 < ti4_6)) && (EIF_BOOLEAN)(ti4_7 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 < ti4_9)) && (EIF_BOOLEAN)(ti4_10 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 < ((EIF_INTEGER_32) 1000L))) && (EIF_BOOLEAN)(ti4_12 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_13 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_14 < ti4_15)) && (EIF_BOOLEAN)(ti4_16 >= ((EIF_INTEGER_32) 0L)))) {

			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 111, "day", loc1))(loc1)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 >= ti4_2)) {
				RTHOOK(9);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 121, "days_in_previous_month", loc1))(loc1)).value.EIF_INTEGER_32_value);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 < ti4_2);
			} else {
				RTHOOK(10);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 119, "days_in_current_month", loc1))(loc1)).value.EIF_INTEGER_32_value);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 < ti4_2);
			}

		}

	} else {
		RTHOOK(11);
		Result = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
		ti4_13 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_14 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
		ti4_15 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_16 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 > (EIF_INTEGER_32)-ti4_3)) && (EIF_BOOLEAN)(ti4_4 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 > (EIF_INTEGER_32)-ti4_6)) && (EIF_BOOLEAN)(ti4_7 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 > (EIF_INTEGER_32)-ti4_9)) && (EIF_BOOLEAN)(ti4_10 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 > ((EIF_INTEGER_32) -1000L))) && (EIF_BOOLEAN)(ti4_12 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_13 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_14 > (EIF_INTEGER_32)-ti4_15)) && (EIF_BOOLEAN)(ti4_16 <= ((EIF_INTEGER_32) 0L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 119, "days_in_current_month", loc1))(loc1)).value.EIF_INTEGER_32_value);
			Result = (EIF_BOOLEAN)(ti4_1 > (EIF_INTEGER_32)-ti4_2);
		}
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("positive_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ur1 = RTCCL(Current);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 23, "infix \"<=\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				tc3 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 < ti4_4)) && (EIF_BOOLEAN)(ti4_5 >= ((EIF_INTEGER_32) 0L)))) {
					tc4 = '\01';
					tc5 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
					ur1 = RTCCL(Current);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2139, 103, "day", tr1))(tr1)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(ti4_1 >= ti4_2)) {
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
						ur1 = RTCCL(Current);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2139, 113, "days_in_previous_month", tr1))(tr1)).value.EIF_INTEGER_32_value);
						tc5 = (EIF_BOOLEAN)(ti4_1 < ti4_2);
					}
					if (!(tc5)) {
						tc5 = '\01';
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
						ur1 = RTCCL(Current);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2139, 103, "day", tr1))(tr1)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
							ur1 = RTCCL(Current);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2139, 112, "days_in_current_month", tr1))(tr1)).value.EIF_INTEGER_32_value);
							tc5 = (EIF_BOOLEAN)(ti4_1 < ti4_2);
						}
						tc4 = tc5;
					}
					tc3 = tc4;
				}
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("negative_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ur1 = RTCCL(Current);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 24, "infix \">=\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				tc3 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 > (EIF_INTEGER_32)-ti4_4)) && (EIF_BOOLEAN)(ti4_5 <= ((EIF_INTEGER_32) 0L)))) {
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
					ur1 = RTCCL(Current);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2139, 42, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2139, 112, "days_in_current_month", tr1))(tr1)).value.EIF_INTEGER_32_value);
					tc3 = (EIF_BOOLEAN)(ti4_1 > (EIF_INTEGER_32)-ti4_2);
				}
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("positive_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ur1 = RTCCL(Current);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 66, "infix \"<=\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				tc3 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
				ti4_13 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_14 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_15 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_16 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 < ti4_3)) && (EIF_BOOLEAN)(ti4_4 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 < ti4_6)) && (EIF_BOOLEAN)(ti4_7 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 < ti4_9)) && (EIF_BOOLEAN)(ti4_10 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 < ((EIF_INTEGER_32) 1000L))) && (EIF_BOOLEAN)(ti4_12 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_13 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_14 < ti4_15)) && (EIF_BOOLEAN)(ti4_16 >= ((EIF_INTEGER_32) 0L)))) {
					tc4 = '\01';
					tc5 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
					ur1 = RTCCL(Current);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 111, "day", tr1))(tr1)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(ti4_1 >= ti4_2)) {
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
						ur1 = RTCCL(Current);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 121, "days_in_previous_month", tr1))(tr1)).value.EIF_INTEGER_32_value);
						tc5 = (EIF_BOOLEAN)(ti4_1 < ti4_2);
					}
					if (!(tc5)) {
						tc5 = '\01';
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
						ur1 = RTCCL(Current);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 111, "day", tr1))(tr1)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
							ur1 = RTCCL(Current);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 119, "days_in_current_month", tr1))(tr1)).value.EIF_INTEGER_32_value);
							tc5 = (EIF_BOOLEAN)(ti4_1 < ti4_2);
						}
						tc4 = tc5;
					}
					tc3 = tc4;
				}
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("negative_definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = '\01';
			ur1 = RTCCL(Current);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 159, "infix \">=\"", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				tc3 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 4, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
				ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
				ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 126, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
				ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
				ti4_13 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_14 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
				ti4_15 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_16 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 > (EIF_INTEGER_32)-ti4_3)) && (EIF_BOOLEAN)(ti4_4 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_5 > (EIF_INTEGER_32)-ti4_6)) && (EIF_BOOLEAN)(ti4_7 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_8 > (EIF_INTEGER_32)-ti4_9)) && (EIF_BOOLEAN)(ti4_10 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_11 > ((EIF_INTEGER_32) -1000L))) && (EIF_BOOLEAN)(ti4_12 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_13 <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_14 > (EIF_INTEGER_32)-ti4_15)) && (EIF_BOOLEAN)(ti4_16 <= ((EIF_INTEGER_32) 0L)))) {
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
					ur1 = RTCCL(Current);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2141, 32, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2141, 119, "days_in_current_month", tr1))(tr1)).value.EIF_INTEGER_32_value);
					tc3 = (EIF_BOOLEAN)(ti4_1 > (EIF_INTEGER_32)-ti4_2);
				}
				tc2 = tc3;
			}
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
	RTHOOK(16);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* infix "+" */

EIF_UNION Fpmows3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"+\"", RTUD(2106), Current, 0, 1, 30989);
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
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 135, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 96, "year", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 95, "month", arg1));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 102, "day", arg1));
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2106, 113, "add_years_months_days", Result))(Result, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 107, "hour", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 104, "minute", arg1));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 32, "second", arg1));
	ui4_3 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 11, "millisecond", arg1));
	ui4_4 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2106, 84, "add_precise_hours_minutes_seconds", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("addition_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* set_time_duration */

void Fpmn8vh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_time_duration", RTUD(2106), Current, 0, 1, 30988);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_time_duration_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 103, "hour", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 104, "minute", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 105, "second", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 106, "millisecond", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 103, "hour", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 104, "minute", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 105, "second", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2104, 106, "millisecond", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make_definite */

void Fpmdwwj (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
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
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make_definite", RTUD(2106), Current, 0, 4, 30999);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2106, 141, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ui4_1 = arg2;
	ui4_2 = arg3;
	ui4_3 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2106, 26, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_definite", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 108, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("day_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 107, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 104, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("second_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("millisecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* infix "<" */

EIF_UNION Fpmqulz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("infix \"<\"", RTUD(2106), Current, 3, 1, 30992);
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
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 96, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 96, "year", arg1));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 95, dtype));
	ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 95, "month", arg1));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - ti4_1) * ti4_2) + (EIF_INTEGER_32)(ti4_3 - ti4_4));
	RTHOOK(3);
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2106, 76, "millisecond_count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 - ti4_1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)-loc3;
		RTHOOK(6);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 102, "day", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc2 - ti4_1) - (EIF_INTEGER_32)(loc3 / ti4_2));
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(loc3 % ti4_1);

		RTHOOK(8);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(9);
			loc2--;
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc3 += ti4_1;
		}

	} else {
		RTHOOK(11);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2106, 102, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2106, 102, "day", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc2 - ti4_1) + (EIF_INTEGER_32)(loc3 / ti4_2));
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc3 %= ti4_1;

		RTHOOK(13);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(14);
			loc2++;
			RTHOOK(15);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2106, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc3 -= ti4_1;
		}

	}


	RTHOOK(16);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))));
	} else {
		RTHOOK(18);
	if ((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(19);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 <= ((EIF_INTEGER_32) 0L))));
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void EIF_Minit2107 (void)
{
	GTCX
	RTOTS (32459,Fpmtfcg)
}


#ifdef __cplusplus
}
#endif

