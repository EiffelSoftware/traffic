/*
 * Code for class TRAFFIC_PLACE_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpb0xxc(EIF_REFERENCE);
extern EIF_UNION Fpb17sl(EIF_REFERENCE);
extern void Fpb3inu(EIF_REFERENCE);
extern void Fpb2vp7(EIF_REFERENCE);
extern void EIF_Minit2063(void);

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

RTOID (Fpb0xxc)

EIF_UNION Fpb0xxc (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpb0xxc,30474,RTMS_EX_H("place",5,1819181925));
}
/* mandatory_attributes */

RTOID (Fpb17sl)

EIF_UNION Fpb17sl (EIF_REFERENCE Current)
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
	RTCFDD;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpb17sl);
	dftype = Dftype(Current);
	dtype = Dtype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("mandatory_attributes", RTUD(2062), Current, 0, 0, 30474);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {2062,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 1L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("name",4,1851878757);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
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
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* process_subnodes */

void Fpb3inu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
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

	RTLI(12);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(0,Current);
	RTLR(5,ur1);
	RTLR(3,loc1);
	RTLR(6,loc2);
	RTLR(9,loc3);
	RTLR(1,loc4);
	RTLR(10,loc5);
	RTLR(11,loc6);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTEAA("process_subnodes", RTUD(2062), Current, 6, 0, 30476);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_subnodes", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static int16 typarr [] = {2062,1477,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1477, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	loc4 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 22, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(6);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 22, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 22, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2117, 195, "name", loc1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 34, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2117, 195, "name", loc1));
			ur1 = RTCCL(tr1);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 29, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		} else {
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 73, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2062,1462,774,-1};
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
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2062, 94, dtype))(Current, ui4_1x, ur1x);
		}


		RTHOOK(11);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(12);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 110, "set_source", loc2))(loc2, ur1x);
			RTHOOK(13);
			ur1 = RTCCL(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 112, "set_parent", loc2))(loc2, ur1x);

			RTHOOK(14);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 57, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 84, dtype));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 111, "set_target", loc2))(loc2, ur1x);
			}


			RTHOOK(16);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2046, 56, "has_error", loc2))(loc2)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc2) {
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2046, 117, "process", loc2))(loc2);
				RTHOOK(18);
				loc3 = RTCCL(loc2);
				loc3 = RTRV(RTUD(2056), loc3);

				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(loc3 + RTVA(2056, 120, "file", loc3));
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", loc4))(loc4, ur1x);
				}

				RTHOOK(21);
				loc5 = *(EIF_REFERENCE *)(Current + RTWA(2062, 3, dtype));
				loc5 = RTRV(RTUD(774), loc5);
			} else {
				RTHOOK(22);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2046, 26, "error_code", loc2));
				ui4_1 = ti4_1;
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2046, 2, "slots", loc2));
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2062, 94, dtype))(Current, ui4_1x, ur1x);
			}

		}

		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 22, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(6);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 22, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		;
	}


	RTHOOK(24);
	tc2 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVPA(90, 11, "count", loc4));
	if (!(EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		tc2 = (EIF_BOOLEAN)(loc5 != NULL);
	}
	if (tc2) {
		RTHOOK(25);
		tr1 = RTLN(RTUD(1811));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1811, 30, Dtype(tr1)))(tr1);
		RTNHOOK(25);
		RTCI2(tr1);
		loc6 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(26);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1811, 34, "set_description", loc6))(loc6, ur1x);

		RTHOOK(27);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc4))(loc4);
		RTHOOK(28);
		tc2 = *(EIF_BOOLEAN *)(loc4 + RTVPA(90, 10, "after", loc4));
		while (!(tc2)) {
			RTHOOK(29);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc4))(loc4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1811, 33, "extend_picture", loc6))(loc6, ur1x);
			RTHOOK(30);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc4))(loc4);
			RTHOOK(28);
			tc2 = *(EIF_BOOLEAN *)(loc4 + RTVPA(90, 10, "after", loc4));
			;
		}

		RTHOOK(31);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 61, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 53, "place", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(31);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 58, "set_information", tr2))(tr2, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTLO(8);
	RTEE;
}

/* process */

void Fpb2vp7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("process", RTUD(2062), Current, 0, 0, 30475);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 115, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2062,1462,774,-1};
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
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2062, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 61, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 49, "map", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1924, 128, "places", tr2));
		RTNHOOK(5);
		tr2 = RTMS_EX_H("name",4,1851878757);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 40, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2062,1462,774,-1};
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
		ur1 = tr4;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr3 = RTCCL(tr4);
		*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2062, 94, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 61, dtype));
		tr2 = RTMS_EX_H("name",4,1851878757);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 81, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1840, 51, "build_place", tr1))(tr1, ur1x, ur2x);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2062, 61, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 53, "place", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2062, 108, dtype))(Current, ur1x);
	}}


	RTHOOK(9);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2062, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2062, 120, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit2063 (void)
{
	GTCX
	RTOTS (31843,Fpb0xxc)
	RTOTS (31845,Fpb17sl)
}


#ifdef __cplusplus
}
#endif

