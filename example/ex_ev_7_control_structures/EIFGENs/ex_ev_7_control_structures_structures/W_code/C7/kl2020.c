/*
 * Code for class KL_GREGORIAN_CALENDAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fop08er(EIF_REFERENCE);
extern EIF_UNION Fop8cpl(EIF_REFERENCE);
extern EIF_UNION Fop8_m7(EIF_REFERENCE);
extern EIF_UNION Fop9nku(EIF_REFERENCE);
extern EIF_UNION Fopw1xs(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Foqayf2(EIF_REFERENCE);
extern EIF_UNION Foqaaig(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fopxpve(EIF_REFERENCE);
extern EIF_UNION Fop430h(EIF_REFERENCE);
extern EIF_UNION Fop2i9_(EIF_REFERENCE);
extern EIF_UNION Fopiub3(EIF_REFERENCE);
extern EIF_UNION Foqb8bb(EIF_REFERENCE);
extern EIF_UNION Fopkr4z(EIF_REFERENCE);
extern EIF_UNION Fop257m(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fople2l(EIF_REFERENCE);
extern EIF_UNION Fopl1_7(EIF_REFERENCE);
extern EIF_UNION Fopmpyu(EIF_REFERENCE);
extern EIF_UNION Fopn_t2(EIF_REFERENCE);
extern EIF_UNION Fopncwg(EIF_REFERENCE);
extern EIF_UNION Foponrp(EIF_REFERENCE);
extern EIF_UNION Fop3t48(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fop5ry3(EIF_REFERENCE);
extern EIF_UNION Fops6a1(EIF_REFERENCE);
extern EIF_UNION Fop4g2v(EIF_REFERENCE);
extern EIF_UNION Foptt8o(EIF_REFERENCE);
extern EIF_UNION Fopj37c(EIF_REFERENCE);
extern EIF_UNION Fop6ewq(EIF_REFERENCE);
extern EIF_UNION Foph6eh(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fopycs0(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fop7prz(EIF_REFERENCE);
extern EIF_UNION Fopjg9q(EIF_REFERENCE);
extern EIF_UNION Foqbldp(EIF_REFERENCE);
extern EIF_UNION Foppymy(EIF_REFERENCE);
extern EIF_UNION Fopqlkk(EIF_REFERENCE);
extern EIF_UNION Fopq8h6(EIF_REFERENCE);
extern EIF_UNION Fop61uc(EIF_REFERENCE);
extern EIF_UNION Foprwft(EIF_REFERENCE);
extern EIF_UNION Fopsjdf(EIF_REFERENCE);
extern EIF_UNION Foppapb(EIF_REFERENCE);
extern EIF_UNION Fopwez5(EIF_REFERENCE);
extern EIF_UNION Fopug6a(EIF_REFERENCE);
extern EIF_UNION Fopu33x(EIF_REFERENCE);
extern EIF_UNION Fopvr1j(EIF_REFERENCE);
extern EIF_UNION Fopznn9(EIF_REFERENCE);
extern EIF_UNION Fop_alw(EIF_REFERENCE);
extern EIF_UNION Fop_yji(EIF_REFERENCE);
extern EIF_UNION Fop1wcd(EIF_REFERENCE);
extern EIF_UNION Fop0lg4(EIF_REFERENCE);
extern EIF_UNION Fopy_qn(EIF_REFERENCE);
extern void EIF_Minit2020(void);

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

/* friday */

EIF_UNION Fop08er (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	return r;
}
/* epoch_year */

EIF_UNION Fop8cpl (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1970L);
	return r;
}
/* epoch_month */

EIF_UNION Fop8_m7 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* epoch_day */

EIF_UNION Fop9nku (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* days_in_month */

EIF_UNION Fopw1xs (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("days_in_month", RTUD(2019), Current, 0, 2, 28802);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 43, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	switch (arg1) {
		case 1L:
		case 3L:
		case 5L:
		case 7L:
		case 8L:
		case 10L:
		case 12L:
			RTHOOK(4);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 31L);
			break;
		case 4L:
		case 6L:
		case 9L:
		case 11L:
			RTHOOK(5);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 30L);
			break;
		case 2L:

			RTHOOK(6);
			ui4_1 = arg2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2019, 32, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(7);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 29L);
			} else {
				RTHOOK(8);
				Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 28L);
			}

			break;
		default:
			RTEC(EN_WHEN);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("at_least_one", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("max_days_in_month", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 56, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg2
#undef arg1
}

/* epoch_leap_years */

RTOID (Foqayf2)

EIF_UNION Foqayf2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, Foqayf2);
	dtype = Dtype(Current);
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("epoch_leap_years", RTUD(2019), Current, 0, 0, 28776);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(((EIF_INTEGER_32)((EIF_INTEGER_32)(Result - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 4L))) - ((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 100L)))) + ((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 400L))));
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }

#undef Result
}

/* epoch_days */

EIF_UNION Foqaaig (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
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
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("epoch_days", RTUD(2019), Current, 0, 3, 28775);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 43, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg2 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("d_small_enough", EX_PRE);
		ui4_1 = arg2;
		ui4_2 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2019, 55, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 34, dtype))(Current)).value.EIF_INTEGER_32_value);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 31, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	ui4_1 = (EIF_INTEGER_32)(arg1 - ((EIF_INTEGER_32) 1L));
	ui4_2 = ((EIF_INTEGER_32) 4L);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1995, 44, "div", tr1))(tr1, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 31, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	ui4_1 = (EIF_INTEGER_32)(arg1 - ((EIF_INTEGER_32) 1L));
	ui4_2 = ((EIF_INTEGER_32) 100L);
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1995, 44, "div", tr1))(tr1, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 31, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	ui4_1 = (EIF_INTEGER_32)(arg1 - ((EIF_INTEGER_32) 1L));
	ui4_2 = ((EIF_INTEGER_32) 400L);
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1995, 44, "div", tr1))(tr1, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
	ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 78, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = arg2;
	ui4_2 = arg1;
	ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2019, 57, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
	ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 79, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 76, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(arg1 - Result) * ti4_1) + ((EIF_INTEGER_32)(((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_2 - ti4_3) + ti4_4)) - ti4_5))) + (EIF_INTEGER_32)(ti4_6 - ti4_7)) + (EIF_INTEGER_32)(arg3 - ti4_8));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* max_days_in_month */

EIF_UNION Fopxpve (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 31L);
	return r;
}
/* seconds_in_hour */

EIF_UNION Fop430h (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 3600L);
	return r;
}
/* days_in_week */

EIF_UNION Fop2i9_ (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	return r;
}
/* months_in_year */

EIF_UNION Fopiub3 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
	return r;
}
/* epoch_to_y2k_days */

RTOID (Foqb8bb)

EIF_UNION Foqb8bb (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, Foqb8bb);
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("epoch_to_y2k_days", RTUD(2019), Current, 0, 0, 28778);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 2000L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2019, 77, Dtype(Current)))(Current, ui4_1x, ui4_2x, ui4_3x)).value.EIF_INTEGER_32_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }

#undef Result
}

/* days_in_400_years */

EIF_UNION Fopkr4z (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 146097L);
	return r;
}
/* next_day */

EIF_UNION Fop257m (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("next_day", RTUD(2019), Current, 0, 1, 28764);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(4);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)Result;
	} else {
		RTHOOK(5);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("sunday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("monday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("tuesday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 61, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("wednesday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 61, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 62, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("thursday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 62, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 63, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("friday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 63, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("saturday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* days_in_100_years */

EIF_UNION Fople2l (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 36524L);
	return r;
}
/* days_in_4_years */

EIF_UNION Fopl1_7 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1461L);
	return r;
}
/* days_in_3_years */

EIF_UNION Fopmpyu (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1095L);
	return r;
}
/* days_in_2_years */

EIF_UNION Fopn_t2 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 730L);
	return r;
}
/* days_in_3_leap_years */

EIF_UNION Fopncwg (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1096L);
	return r;
}
/* days_in_2_leap_years */

EIF_UNION Foponrp (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 731L);
	return r;
}
/* previous_day */

EIF_UNION Fop3t48 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("previous_day", RTUD(2019), Current, 0, 1, 28765);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(4);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)Result;
	} else {
		RTHOOK(5);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 - ((EIF_INTEGER_32) 1L));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("sunday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("monday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("tuesday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("wednesday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 61, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("thursday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 62, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 61, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("friday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 63, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 62, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("saturday_definition", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 63, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((!((EIF_BOOLEAN)(arg1 == ti4_1)) || ((EIF_BOOLEAN)(Result == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* seconds_in_day */

EIF_UNION Fop5ry3 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 86400L);
	return r;
}
/* july */

EIF_UNION Fops6a1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	return r;
}
/* seconds_in_minute */

EIF_UNION Fop4g2v (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 60L);
	return r;
}
/* august */

EIF_UNION Foptt8o (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	return r;
}
/* days_in_leap_year */

EIF_UNION Fopj37c (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 366L);
	return r;
}
/* milliseconds_in_day */

EIF_UNION Fop6ewq (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 86400000L);
	return r;
}
/* leap_year */

EIF_UNION Foph6eh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("leap_year", RTUD(2019), Current, 0, 1, 28779);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_INTEGER_32)(arg1 % ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L)) && ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_INTEGER_32)(arg1 % ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)((EIF_INTEGER_32)(arg1 % ((EIF_INTEGER_32) 400L)) == ((EIF_INTEGER_32) 0L)))));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* days_at_month */

EIF_UNION Fopycs0 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("days_at_month", RTUD(2019), Current, 0, 2, 28804);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 43, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	switch (arg1) {
		case 1L:
			RTHOOK(4);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			break;
		case 2L:
			RTHOOK(5);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 31L);
			break;
		case 3L:
			RTHOOK(6);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 59L);
			break;
		case 4L:
			RTHOOK(7);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 90L);
			break;
		case 5L:
			RTHOOK(8);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 120L);
			break;
		case 6L:
			RTHOOK(9);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 151L);
			break;
		case 7L:
			RTHOOK(10);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 181L);
			break;
		case 8L:
			RTHOOK(11);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 212L);
			break;
		case 9L:
			RTHOOK(12);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 243L);
			break;
		case 10L:
			RTHOOK(13);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 273L);
			break;
		case 11L:
			RTHOOK(14);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 304L);
			break;
		case 12L:
			RTHOOK(15);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 334L);
			break;
		default:
			RTEC(EN_WHEN);
	}

	RTHOOK(16);
	tc1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 44, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(arg1 > ti4_1)) {
		ui4_1 = arg2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2019, 32, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(17);
		Result++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("days_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg2
#undef arg1
}

/* hours_in_day */

EIF_UNION Fop7prz (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 24L);
	return r;
}
/* days_in_year */

EIF_UNION Fopjg9q (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 365L);
	return r;
}
/* epoch_days_at_month */

RTOID (Foqbldp)

EIF_UNION Foqbldp (EIF_REFERENCE Current)
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
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, Foqbldp);
	dtype = Dtype(Current);
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("epoch_days_at_month", RTUD(2019), Current, 0, 0, 28777);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2019, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_2;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2019, 57, dtype))(Current, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("days_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }

#undef Result
}

/* february */

EIF_UNION Foppymy (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	return r;
}
/* march */

EIF_UNION Fopqlkk (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	return r;
}
/* april */

EIF_UNION Fopq8h6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	return r;
}
/* minutes_in_hour */

EIF_UNION Fop61uc (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 60L);
	return r;
}
/* may */

EIF_UNION Foprwft (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	return r;
}
/* june */

EIF_UNION Fopsjdf (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	return r;
}
/* january */

EIF_UNION Foppapb (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* december */

EIF_UNION Fopwez5 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
	return r;
}
/* september */

EIF_UNION Fopug6a (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 9L);
	return r;
}
/* october */

EIF_UNION Fopu33x (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 10L);
	return r;
}
/* november */

EIF_UNION Fopvr1j (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 11L);
	return r;
}
/* monday */

EIF_UNION Fopznn9 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	return r;
}
/* tuesday */

EIF_UNION Fop_alw (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	return r;
}
/* wednesday */

EIF_UNION Fop_yji (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	return r;
}
/* saturday */

EIF_UNION Fop1wcd (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	return r;
}
/* thursday */

EIF_UNION Fop0lg4 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	return r;
}
/* sunday */

EIF_UNION Fopy_qn (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
void EIF_Minit2020 (void)
{
	GTCX
	RTOTS (30543,Foqayf2)
	RTOTS (30544,Foqbldp)
	RTOTS (30545,Foqb8bb)
}


#ifdef __cplusplus
}
#endif

