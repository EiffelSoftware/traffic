/*
 * Code for class TRAFFIC_LINE_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpbv3hp(EIF_REFERENCE);
extern void Fpbzb5t(EIF_REFERENCE);
extern EIF_UNION Fpbwrfb(EIF_REFERENCE);
extern void Fpbyo76(EIF_REFERENCE);
extern void Fpbx1ak(EIF_REFERENCE);
extern void EIF_Minit2061(void);

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

RTOID (Fpbv3hp)

EIF_UNION Fpbv3hp (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpbv3hp,30469,RTMS_EX_H("line",4,1818848869));
}
/* reset */

void Fpbzb5t (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_CHARACTER tc1;
	RTCFDT;
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
	RTEAA("reset", RTUD(2060), Current, 0, 0, 30467);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2060, 84, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2060, 83, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(3);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2060, 96, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 21, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "wipe_out", tr1))(tr1);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	{
		static int16 typarr [] = {2060,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_2 = 1L;
	ui4_3 = 0L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
	tr2 = * (EIF_REFERENCE *) tr1;
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 93, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(6);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2060, 117, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("reset", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 6, dtype))(Current)).value.EIF_BOOLEAN_value);
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
}

/* mandatory_attributes */

EIF_UNION Fpbwrfb (EIF_REFERENCE Current)
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
	RTEAA("mandatory_attributes", RTUD(2060), Current, 0, 0, 30469);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2060,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 2L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("name",4,1851878757);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("type",4,1954115685);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
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

/* process_subnodes */

void Fpbyo76 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(9);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(5,loc2);
	RTLR(8,loc3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("process_subnodes", RTUD(2060), Current, 3, 0, 30466);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_subnodes", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 55, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 21, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(5);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 21, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 21, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2117, 195, "name", loc1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 33, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2117, 195, "name", loc1));
			ur1 = RTCCL(tr1);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 28, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		} else {
			RTHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 72, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2060,1462,774,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 1462, typarr);

				tr1 = RTLN(typres);

			}
			ui4_2 = 1L;
			ui4_3 = 1L;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
			tr2 = * (EIF_REFERENCE *) tr1;
			tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2046, 85, "name", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr3 = RTCCL(tr4);
			*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
			RTAR(tr2,tr3);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 93, dtype))(Current, ui4_1x, ur1x);
		}


		RTHOOK(10);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(11);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 110, "set_source", loc2))(loc2, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 112, "set_parent", loc2))(loc2, ur1x);

			RTHOOK(13);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 83, dtype));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 111, "set_target", loc2))(loc2, ur1x);
			}


			RTHOOK(15);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2046, 56, "has_error", loc2))(loc2)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc2) {
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2046, 117, "process", loc2))(loc2);
				RTHOOK(17);
				loc3 = *(EIF_REFERENCE *)(Current + RTWA(2060, 3, dtype));
				loc3 = RTRV(RTUD(1814), loc3);

				RTHOOK(18);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(19);
					tr1 = RTLNSMART(RTWCT(2060, 117, Current));
					ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(1814, 34, "red", loc3));
					ui4_1 = ti4_1;
					ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(1814, 35, "green", loc3));
					ui4_2 = ti4_2;
					ti4_3 = *(EIF_INTEGER_32 *)(loc3 + RTVA(1814, 36, "blue", loc3));
					ui4_3 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1814, 32, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
					RTNHOOK(19);
					RTCI2(tr1);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(2060, 117, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
				}

			} else {
				RTHOOK(20);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2046, 26, "error_code", loc2));
				ui4_1 = ti4_1;
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2046, 2, "slots", loc2));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 93, dtype))(Current, ui4_1x, ur1x);
			}

		}

		RTHOOK(21);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 21, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(5);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 21, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(5);
	RTEE;
}

/* process */

void Fpbx1ak (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("process", RTUD(2060), Current, 0, 0, 30465);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 41, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 42, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2060,1462,774,-1};
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
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 93, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(5);
		tr1 = RTMS_EX_H("type",4,1954115685);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 42, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2060,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("type",4,1954115685);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 93, dtype))(Current, ui4_1x, ur1x);
	} else {

		RTHOOK(7);
		tc1 = '\0';
		tr1 = RTMS_EX_H("simple",6,2062989925);
		ur1 = tr1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 42, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = RTMS_EX_H("simple",6,2062989925);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 40, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tr2 = RTMS_EX_H("true",4,1953658213);
			ur2 = tr2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 30, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 60, dtype));
			tr2 = RTMS_EX_H("name",4,1851878757);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 40, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tr3 = RTMS_EX_H("type",4,1954115685);
			ur2 = tr3;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 40, dtype))(Current, ur2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr3);
			tr4 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 80, dtype))(Current)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
			ur3 = RTCCL(tr4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1840, 62, "build_line", tr1))(tr1, ur1x, ur2x, ur3x);
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 60, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 63, "line", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 107, dtype))(Current, ur1x);
		} else {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 60, dtype));
			tr2 = RTMS_EX_H("name",4,1851878757);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 40, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tr3 = RTMS_EX_H("type",4,1954115685);
			ur2 = tr3;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 40, dtype))(Current, ur2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr3);
			tr4 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 80, dtype))(Current)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
			ur3 = RTCCL(tr4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1840, 62, "build_line", tr1))(tr1, ur1x, ur2x, ur3x);
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 60, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 63, "line", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 107, dtype))(Current, ur1x);
		}

	}}


	RTHOOK(12);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 55, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2060, 119, dtype))(Current);
	}


	RTHOOK(14);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2060, 114, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 117, dtype));
		tc1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tc1) {

		RTHOOK(15);
		tc1 = '\0';
		tr1 = RTMS_EX_H("simple",6,2062989925);
		ur1 = tr1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 42, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = RTMS_EX_H("simple",6,2062989925);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2060, 40, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tr2 = RTMS_EX_H("true",4,1953658213);
			ur2 = tr2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2060, 30, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 60, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 63, "line", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 117, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1975, 80, "set_color", tr2))(tr2, ur1x);
		} else {
			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 60, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 63, "line", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2060, 117, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1975, 80, "set_color", tr2))(tr2, ur1x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit2061 (void)
{
	GTCX
	RTOTS (31834,Fpbv3hp)
}


#ifdef __cplusplus
}
#endif

