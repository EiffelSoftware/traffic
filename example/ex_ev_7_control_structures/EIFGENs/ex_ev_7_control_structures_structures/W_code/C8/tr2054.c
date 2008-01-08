/*
 * Code for class TRAFFIC_BUILDING_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpbdz93(EIF_REFERENCE);
extern EIF_UNION Fpbem7q(EIF_REFERENCE);
extern void Fpbe95c(EIF_REFERENCE);
extern void EIF_Minit2054(void);

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

/* name */

RTOID (Fpbdz93)

EIF_UNION Fpbdz93 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpbdz93,30441,RTMS_EX_H("building",8,673071719));
}
/* mandatory_attributes */

EIF_UNION Fpbem7q (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(0,Current);
	RTLR(5,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("mandatory_attributes", RTUD(2053), Current, 0, 0, 30441);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2053,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 7L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("name",4,1851878757);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("x1",2,30769);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("x2",2,30770);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("y1",2,31025);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("y2",2,31026);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("height",6,1973632628);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("angle",5,1853016677);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	Result = (EIF_REFERENCE)tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("object_comparison", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Result + RTVPA(39, 3, "object_comparison", Result));
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* process */

void Fpbe95c (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(13);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(8,loc10);
	RTLR(0,Current);
	RTLR(10,loc12);
	RTLR(6,loc8);
	RTLR(9,loc11);
	RTLR(7,loc9);
	RTLR(11,loc13);
	RTLR(12,loc1);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTEAA("process", RTUD(2053), Current, 13, 0, 30442);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 119, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("name",4,1851878757);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(5);
		tr1 = RTMS_EX_H("x1",2,30769);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("x1",2,30769);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(7);
		tr1 = RTMS_EX_H("x2",2,30770);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("x2",2,30770);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("y1",2,31025);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("y1",2,31025);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(11);
		tr1 = RTMS_EX_H("y2",2,31026);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("y2",2,31026);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(13);
		tc1 = '\01';
		tc2 = '\0';
		tc3 = '\0';
		tr1 = RTMS_EX_H("x1",2,30769);
		ur1 = tr1;
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc4) {
			tr1 = RTMS_EX_H("x2",2,30770);
			ur1 = tr1;
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		if (tc3) {
			tc3 = '\0';
			tr1 = RTMS_EX_H("y1",2,31025);
			ur1 = tr1;
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (tc4) {
				tr1 = RTMS_EX_H("y2",2,31026);
				ur1 = tr1;
				tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc3 = tc4;
			}
			tc2 = tc3;
		}
		if (!tc2) {
			tc2 = '\0';
			tc3 = '\0';
			tc4 = '\0';
			tr1 = RTMS_EX_H("x1",2,30769);
			ur1 = tr1;
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 50, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (tc5) {
				tr1 = RTMS_EX_H("x2",2,30770);
				ur1 = tr1;
				tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 50, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc4 = tc5;
			}
			if (tc4) {
				tr1 = RTMS_EX_H("y1",2,31025);
				ur1 = tr1;
				tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 50, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc3 = tc4;
			}
			if (tc3) {
				tr1 = RTMS_EX_H("y2",2,31026);
				ur1 = tr1;
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 50, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
			tc1 = tc2;
		}
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 42, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 2L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("x",1,120);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		tr4 = RTMS_EX_H("y",1,121);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(15);
		tr1 = RTMS_EX_H("height",6,1973632628);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(16);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("height",6,1973632628);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(17);
		tr1 = RTMS_EX_H("angle",5,1853016677);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(18);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("angle",5,1853016677);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(19);
		tc1 = '\0';
		tr1 = RTMS_EX_H("height",6,1973632628);
		ur1 = tr1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = RTMS_EX_H("height",6,1973632628);
			ur1 = tr1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 50, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(20);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 42, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("height",6,1973632628);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(21);
		tc1 = '\0';
		tr1 = RTMS_EX_H("angle",5,1853016677);
		ur1 = tr1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = RTMS_EX_H("angle",5,1853016677);
			ur1 = tr1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 50, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(22);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 42, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2053,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("angle",5,1853016677);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2053, 98, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(23);
		tr1 = RTMS_EX_H("x1",2,30769);
		ur1 = tr1;
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 49, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
		RTHOOK(24);
		tr1 = RTMS_EX_H("x2",2,30770);
		ur1 = tr1;
		loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 49, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
		RTHOOK(25);
		tr1 = RTMS_EX_H("y1",2,31025);
		ur1 = tr1;
		loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 49, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
		RTHOOK(26);
		tr1 = RTMS_EX_H("y2",2,31026);
		ur1 = tr1;
		loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 49, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
		RTHOOK(27);
		tr1 = RTMS_EX_H("height",6,1973632628);
		ur1 = tr1;
		loc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 49, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
		RTHOOK(28);
		tr1 = RTMS_EX_H("angle",5,1853016677);
		ur1 = tr1;
		loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 49, dtype))(Current, ur1x)).value.EIF_REAL_64_value);

		RTHOOK(29);
		tc1 = '\01';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 70L));
		if (!(EIF_BOOLEAN)(loc7 > tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) -70L));
			tc1 = (EIF_BOOLEAN)(loc7 < tr8_1);
		}
		if (tc1) {
			RTHOOK(30);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 100, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(30);
			tr2 = RTMS_EX_H("Angle has to be in range -70 to 70 degrees",42,1785128819);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(152, 30, "putstring", tr1))(tr1, ur1x);
			RTHOOK(31);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			loc7 = (EIF_REAL_64)tr8_1;
		}

		RTHOOK(32);
		tr1 = RTMS_EX_H("name",4,1851878757);
		ur1 = tr1;
		loc8 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2053, 43, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(33);
		tr1 = RTLN(RTUD(2010));
		ur8_1 = loc2;
		ur8_2 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
		RTNHOOK(33);
		RTCI2(tr1);
		loc9 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(34);
		tr1 = RTLN(RTUD(2010));
		ur8_1 = loc2;
		ur8_2 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
		RTNHOOK(34);
		RTCI2(tr1);
		loc10 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(35);
		tr1 = RTLN(RTUD(2010));
		ur8_1 = loc3;
		ur8_2 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
		RTNHOOK(35);
		RTCI2(tr1);
		loc11 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(36);
		tr1 = RTLN(RTUD(2010));
		ur8_1 = loc3;
		ur8_2 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
		RTNHOOK(36);
		RTCI2(tr1);
		loc12 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(37);
		tr1 = RTLN(RTUD(2010));
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(loc2 + loc3)) /  (EIF_REAL_64) (tr8_1));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_2 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(loc4 + loc5)) /  (EIF_REAL_64) (tr8_2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
		RTNHOOK(37);
		RTCI2(tr1);
		loc13 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(38);
		ur1 = RTCCL(loc13);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 91, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)-loc7 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", loc9))(loc9, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc9 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(39);
		ur1 = RTCCL(loc13);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 91, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)-loc7 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", loc10))(loc10, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc10 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(40);
		ur1 = RTCCL(loc13);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 91, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)-loc7 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", loc11))(loc11, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc11 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(41);
		ur1 = RTCCL(loc13);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 91, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)-loc7 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2010, 82, "rotation", loc12))(loc12, ur1x, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc12 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(42);
		ur8_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2126, 76, "set_angle", loc1))(loc1, ur8_1x);
		RTHOOK(43);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2053, 84, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(43);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
		RTNHOOK(43);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2271, 46, "put_last", tr2))(tr2, ur1x);
	}}}}}}}}}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTLE;
	RTLO(15);
	RTEE;
}

void EIF_Minit2054 (void)
{
	GTCX
	RTOTS (31806,Fpbdz93)
}


#ifdef __cplusplus
}
#endif

