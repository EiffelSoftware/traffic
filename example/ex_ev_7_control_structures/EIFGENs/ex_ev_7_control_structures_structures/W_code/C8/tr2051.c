/*
 * Code for class TRAFFIC_ONROAD_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpa5k3y(EIF_REFERENCE);
extern EIF_UNION Fpa571k(EIF_REFERENCE);
extern void Fpa6vz6(EIF_REFERENCE);
extern void EIF_Minit2051(void);

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

RTOID (Fpa5k3y)

EIF_UNION Fpa5k3y (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpa5k3y,30429,RTMS_EX_H("onroad",6,2138981732));
}
/* mandatory_attributes */

RTOID (Fpa571k)

EIF_UNION Fpa571k (EIF_REFERENCE Current)
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
	RTOTDR(Fpa571k);
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
	RTEAA("mandatory_attributes", RTUD(2050), Current, 0, 0, 30429);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {2050,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 2L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("id",2,26980);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("back",4,1650549611);
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
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* process */

void Fpa6vz6 (EIF_REFERENCE Current)
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

	RTLI(7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(0,Current);
	RTLR(6,loc1);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("process", RTUD(2050), Current, 1, 0, 30430);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2050, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2050, 116, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2050, 70, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		{
			static int16 typarr [] = {2050,1462,774,-1};
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
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2050, 95, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2050, 61, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 49, "map", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(6);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1924, 131, "roads", loc1));
		RTNHOOK(6);
		tr2 = RTMS_EX_H("id",2,26980);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr2))(tr2)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2272, 40, "has", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = RTMS_EX_H("back",4,1650549611);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr2 = RTMS_EX_H("false",5,1635280741);
			ur1 = tr2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2050, 98, dtype));
			tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1924, 131, "roads", loc1));
			RTNHOOK(7);
			tr3 = RTMS_EX_H("id",2,26980);
			ur1 = tr3;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2272, 36, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1948, 40, "one_way", tr3));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 116, "send_data", tr1))(tr1, ur1x);
		} else {
			RTHOOK(8);
			tc1 = '\0';
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1924, 131, "roads", loc1));
			RTNHOOK(8);
			tr2 = RTMS_EX_H("id",2,26980);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr2))(tr2)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2272, 40, "has", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc2) {
				tr1 = RTMS_EX_H("back",4,1650549611);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(8);
				tr2 = RTMS_EX_H("true",4,1953658213);
				ur1 = tr2;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
		if (tc1) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2050, 98, dtype));
			tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1924, 131, "roads", loc1));
			RTNHOOK(9);
			tr3 = RTMS_EX_H("id",2,26980);
			ur1 = tr3;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2050, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr3))(tr3)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2272, 36, "item", tr2))(tr2, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1948, 41, "other_way", tr3));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 116, "send_data", tr1))(tr1, ur1x);
		} else {
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2050, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2050,1462,774,-1};
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
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2050, 95, dtype))(Current, ui4_1x, ur1x);
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2050, 98, dtype));
			ur1 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2046, 116, "send_data", tr1))(tr1, ur1x);
		}}

	}


	RTHOOK(12);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2050, 116, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2050, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2050, 65, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(3);
	RTEE;
}

void EIF_Minit2051 (void)
{
	GTCX
	RTOTS (31793,Fpa5k3y)
	RTOTS (31794,Fpa571k)
}


#ifdef __cplusplus
}
#endif

