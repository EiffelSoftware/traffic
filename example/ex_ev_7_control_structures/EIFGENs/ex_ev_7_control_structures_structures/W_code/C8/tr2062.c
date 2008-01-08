/*
 * Code for class TRAFFIC_LINES_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpbzz3g(EIF_REFERENCE);
extern EIF_UNION Fpb_m02(EIF_REFERENCE);
extern void Fpb_9zp(EIF_REFERENCE);
extern void EIF_Minit2062(void);

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

RTOID (Fpbzz3g)

EIF_UNION Fpbzz3g (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpbzz3g,30471,RTMS_EX_H("lines",5,1769672051));
}
/* mandatory_attributes */

RTOID (Fpb_m02)

EIF_UNION Fpb_m02 (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	RTCFDD;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpb_m02);
	dftype = Dftype(Current);
	dtype = Dtype(Current);
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("mandatory_attributes", RTUD(2061), Current, 0, 0, 30471);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {2061,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 0L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
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

void Fpb_9zp (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("process", RTUD(2061), Current, 0, 0, 30472);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2061, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2061, 116, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2061, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2061, 65, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit2062 (void)
{
	GTCX
	RTOTS (31840,Fpbzz3g)
	RTOTS (31841,Fpb_m02)
}


#ifdef __cplusplus
}
#endif

