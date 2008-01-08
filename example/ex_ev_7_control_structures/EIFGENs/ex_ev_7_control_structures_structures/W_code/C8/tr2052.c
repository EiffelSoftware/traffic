/*
 * Code for class TRAFFIC_ROAD_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpa7ixu(EIF_REFERENCE);
extern EIF_UNION Fpa75vg(EIF_REFERENCE);
extern void Fpa9gqp(EIF_REFERENCE);
extern void Fpbbejk(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpbarly(EIF_REFERENCE);
extern void Fpa8ts2(EIF_REFERENCE);
extern void EIF_Minit2052(void);

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

RTOID (Fpa7ixu)

EIF_UNION Fpa7ixu (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpa7ixu,30432,RTMS_EX_H("road",4,1919902052));
}
/* mandatory_attributes */

EIF_UNION Fpa75vg (EIF_REFERENCE Current)
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
	RTEAA("mandatory_attributes", RTUD(2051), Current, 0, 0, 30432);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2051,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 5L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("id",2,26980);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("from",4,1718775661);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("to",2,29807);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("direction",9,1028517742);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("type",4,1954115685);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
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

void Fpa9gqp (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(9);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(6,loc2);
	RTLR(2,loc3);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("process_subnodes", RTUD(2051), Current, 3, 0, 30434);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_subnodes", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(2051, 120, Current));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype)) = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 22, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(6);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 22, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(7);
		loc3 = (EIF_REFERENCE)NULL;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 22, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2117, 195, "name", loc1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 34, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2117, 195, "name", loc1));
			ur1 = RTCCL(tr1);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 29, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		} else {
			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 73, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2051,1462,774,-1};
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
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
		}


		RTHOOK(12);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(13);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 110, "set_source", loc2))(loc2, ur1x);
			RTHOOK(14);
			ur1 = RTCCL(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 112, "set_parent", loc2))(loc2, ur1x);

			RTHOOK(15);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 57, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 84, dtype));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 111, "set_target", loc2))(loc2, ur1x);
			}


			RTHOOK(17);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2046, 56, "has_error", loc2))(loc2)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc2) {
				RTHOOK(18);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2046, 117, "process", loc2))(loc2);
				RTHOOK(19);
				loc3 = *(EIF_REFERENCE *)(Current + RTWA(2051, 3, dtype));
				loc3 = RTRV(RTUD(2010), loc3);

				RTHOOK(20);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(21);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
					ur1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", tr1))(tr1, ur1x);
				}

			} else {
				RTHOOK(22);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2046, 26, "error_code", loc2));
				ui4_1 = ti4_1;
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2046, 2, "slots", loc2));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
			}

		}

		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 22, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(6);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 22, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(5);
	RTEE;
}

/* adjust_position */

void Fpbbejk (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(6,arg2);
	RTLR(4,Current);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("adjust_position", RTUD(2051), Current, 0, 2, 30436);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (!(EIF_BOOLEAN)(tr2 == NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 121, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 31, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr2 = RTLN(RTUD(2010));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 120, "first", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		ur8_1 = tr8_1;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 120, "first", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr8_2 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		ur8_2 = tr8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
		RTNHOOK(2);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 59, "set_position", tr1))(tr1, ur1x);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr2 = RTLN(RTUD(2010));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 120, "first", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr8_2 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 + tr8_2)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr8_3 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 120, "first", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr8_4 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		ur8_2 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_3 + tr8_4)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
		RTNHOOK(3);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 59, "set_position", tr1))(tr1, ur1x);
	}


	RTHOOK(4);
	tc1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (!(EIF_BOOLEAN)(tr2 == NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 121, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 31, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = RTLN(RTUD(2010));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 144, "last", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr8_1 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		ur8_1 = tr8_1;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 144, "last", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr8_2 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		ur8_2 = tr8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
		RTNHOOK(5);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 59, "set_position", tr1))(tr1, ur1x);
	} else {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr2 = RTLN(RTUD(2010));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr8_1 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 47, "x", tr4));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 144, "last", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr8_2 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 47, "x", tr3));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 + tr8_2)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr8_3 = *(EIF_REAL_64 *)(tr4 + RTVA(2010, 48, "y", tr4));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2145, 144, "last", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr8_4 = *(EIF_REAL_64 *)(tr3 + RTVA(2010, 48, "y", tr3));
		ur8_2 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_3 + tr8_4)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
		RTNHOOK(6);
		RTCI2(tr2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 59, "set_position", tr1))(tr1, ur1x);
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

/* zero_vector */

RTOID (Fpbarly)

EIF_UNION Fpbarly (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpbarly);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("zero_vector", RTUD(2051), Current, 0, 0, 30435);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2010));
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_2 = tr8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* process */

void Fpa8ts2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION up4x = {0, SK_POINTER};
#undef up4
#define up4 up4x.value.EIF_POINTER_value
	EIF_UNION up5x = {0, SK_POINTER};
#undef up5
#define up5 up5x.value.EIF_POINTER_value
	EIF_UNION up6x = {0, SK_POINTER};
#undef up6
#define up6 up6x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_UNION ur5x = {0, SK_REF};
#undef ur5
#define ur5 ur5x.value.EIF_REFERENCE_value
	EIF_UNION ur6x = {0, SK_REF};
#undef ur6
#define ur6 ur6x.value.EIF_REFERENCE_value
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
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(16);
	RTLR(9,ur4);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(8,tr5);
	RTLR(10,tr6);
	RTLR(11,ur5);
	RTLR(13,ur6);
	RTLR(0,Current);
	RTLR(14,loc1);
	RTLR(12,tr7);
	RTLR(15,loc2);
	RTLR(2,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("process", RTUD(2051), Current, 2, 0, 30433);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("id",2,26980);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(5);
		tr1 = RTMS_EX_H("from",4,1718775661);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("from",4,1718775661);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(7);
		tr1 = RTMS_EX_H("to",2,29807);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("to",2,29807);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("direction",9,1028517742);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("direction",9,1028517742);
		tr3 = tr4;
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(11);
		tr1 = RTMS_EX_H("type",4,1954115685);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
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
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 81, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(13);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
		RTNHOOK(13);
		tr1 = RTMS_EX_H("from",4,1718775661);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 40, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 33, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("from",4,1718775661);
		ur1 = tr4;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr3 = RTCCL(tr4);
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 81, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(15);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
		RTNHOOK(15);
		tr1 = RTMS_EX_H("to",2,29807);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 40, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(16);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 36, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2051,1462,774,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 1462, typarr);

			tr1 = RTLN(typres);

		}
		ui4_2 = 1L;
		ui4_3 = 1L;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
		tr2 = * (EIF_REFERENCE *) tr1;
		tr4 = RTMS_EX_H("to",2,29807);
		ur1 = tr4;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr3 = RTCCL(tr4);
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 61, dtype));
		tr2 = RTMS_EX_H("from",4,1718775661);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr3 = RTMS_EX_H("to",2,29807);
		ur2 = tr3;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr3);
		tr4 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 81, dtype))(Current)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
		ur3 = RTCCL(tr4);
		tr5 = RTMS_EX_H("type",4,1954115685);
		ur4 = tr5;
		tr5 = ((up4x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur4x)), ((up4x.type == SK_REF)? (EIF_REFERENCE) 0: (up4x.value.EIF_REFERENCE_value = RTBU(up4x))), (up4x.type = SK_POINTER), up4x.value.EIF_REFERENCE_value);
		ur4 = RTCCL(tr5);
		tr6 = RTMS_EX_H("id",2,26980);
		ur5 = tr6;
		tr6 = ((up5x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur5x)), ((up5x.type == SK_REF)? (EIF_REFERENCE) 0: (up5x.value.EIF_REFERENCE_value = RTBU(up5x))), (up5x.type = SK_POINTER), up5x.value.EIF_REFERENCE_value);
		ur5 = RTCCL(tr6);
		tr7 = RTMS_EX_H("direction",9,1028517742);
		ur6 = tr7;
		tr7 = ((up6x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur6x)), ((up6x.type == SK_REF)? (EIF_REFERENCE) 0: (up6x.value.EIF_REFERENCE_value = RTBU(up6x))), (up6x.type = SK_POINTER), up6x.value.EIF_REFERENCE_value);
		ur6 = RTCCL(tr7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1840, 59, "build_road", tr1))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x, ur6x);
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 61, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 60, "road", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(19);
		tc1 = '\0';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(20);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2051, 119, dtype))(Current);
		}


		RTHOOK(21);
		tc1 = '\0';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2051, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
			tc1 = (EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 2L));
		}
		if (tc1) {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1948, 40, "one_way", loc1));
			RTNHOOK(22);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1960, 68, "set_polypoints", tr1))(tr1, ur1x);

			RTHOOK(23);
			tr1 = RTMS_EX_H("direction",9,1028517742);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2051, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(23);
			tr2 = RTMS_EX_H("undirected",10,388343908);
			ur1 = tr2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(24);
				{
					static int16 typarr [] = {2051,2190,2010,-1};
					int16 typres;
					static int16 typcache = -1;

					typres = RTCID2(&typcache, dftype, 2190, typarr);

					tr1 = RTLN(typres);

				}
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2190, 99, "count", tr2));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(24);
				RTCI2(tr1);
				loc2 = (EIF_REFERENCE)RTCCL(tr1);

				RTHOOK(25);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 30, "start", tr1))(tr1);
				RTHOOK(26);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 52, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
				while (!(tc1)) {
					RTHOOK(27);
					tr1 = RTLN(RTUD(2010));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
					tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(27);
					RTCI2(tr1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 107, "put_first", loc2))(loc2, ur1x);
					RTHOOK(28);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 55, "forth", tr1))(tr1);
					RTHOOK(26);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 52, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
					;
				}

				RTHOOK(29);
				tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1948, 41, "other_way", loc1));
				RTNHOOK(29);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1960, 68, "set_polypoints", tr1))(tr1, ur1x);
			}

			RTHOOK(30);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1948, 40, "one_way", loc1));
			ur1 = RTCCL(tr1);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2051, 120, dtype));
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2051, 122, dtype))(Current, ur1x, ur2x);
		}

	}}}}}}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTLO(4);
	RTEE;
}

void EIF_Minit2052 (void)
{
	GTCX
	RTOTS (31796,Fpa7ixu)
	RTOTS (31801,Fpbarly)
}


#ifdef __cplusplus
}
#endif

