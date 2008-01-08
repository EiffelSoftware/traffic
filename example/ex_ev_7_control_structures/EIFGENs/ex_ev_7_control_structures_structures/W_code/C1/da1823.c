/*
 * Code for class DATE_TIME_TOOLS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fndrlg2(EIF_REFERENCE);
extern EIF_UNION Fndo_ql(EIF_REFERENCE);
extern EIF_UNION Fndti9y(EIF_REFERENCE);
extern EIF_UNION Fndswcb(EIF_REFERENCE);
extern EIF_UNION Fndqalu(EIF_REFERENCE);
extern EIF_UNION Fndqyjg(EIF_REFERENCE);
extern EIF_UNION Fndpnn7(EIF_REFERENCE);
extern EIF_UNION Fndr8ep(EIF_REFERENCE);
extern void EIF_Minit1823(void);

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

/* long_months_text */

RTOID (Fndrlg2)

EIF_UNION Fndrlg2 (EIF_REFERENCE Current)
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
	RTCFDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fndrlg2);
	dftype = Dftype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(2,tr2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("long_months_text", RTUD(1822), Current, 0, 0, 26371);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1822,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 12L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("JANUARY",7,149521497);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("FEBRUARY",8,1946023513);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("MARCH",5,1096501576);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("APRIL",5,1348069196);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("MAY",3,5063001);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("JUNE",4,1247104581);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("JULY",4,1247104089);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("AUGUST",6,1325222228);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("SEPTEMBER",9,1541548626);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+8) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("OCTOBER",7,422001234);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+9) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("NOVEMBER",8,443658322);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+10) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("DECEMBER",8,1813273426);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+11) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	Result = (EIF_REFERENCE)tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", Result))(Result);
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

/* name */

RTOID (Fndo_ql)

EIF_UNION Fndo_ql (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fndo_ql,26368,RTMS_EX_H("English",7,257590376));
}
/* default_format_string */

RTOID (Fndti9y)

EIF_UNION Fndti9y (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fndti9y,26375,RTMS_EX_H("[0]mm/[0]dd/yyyy hh12:[0]mi:[0]ss.ff3 AM",40,2104244301));
}
/* time_default_format_string */

RTOID (Fndswcb)

EIF_UNION Fndswcb (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fndswcb,26374,RTMS_EX_H("hh12:[0]mi:[0]ss.ff3 AM",23,629041741));
}
/* months_text */

RTOID (Fndqalu)

EIF_UNION Fndqalu (EIF_REFERENCE Current)
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
	RTCFDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fndqalu);
	dftype = Dftype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(2,tr2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("months_text", RTUD(1822), Current, 0, 0, 26369);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1822,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 12L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("JAN",3,4866382);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("FEB",3,4605250);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("MAR",3,5062994);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("APR",3,4280402);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("MAY",3,5063001);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("JUN",3,4871502);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("JUL",3,4871500);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("AUG",3,4281671);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("SEP",3,5457232);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+8) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("OCT",3,5194580);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+9) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("NOV",3,5132118);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+10) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("DEC",3,4474179);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+11) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	Result = (EIF_REFERENCE)tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", Result))(Result);
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

/* long_days_text */

RTOID (Fndqyjg)

EIF_UNION Fndqyjg (EIF_REFERENCE Current)
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
	RTCFDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fndqyjg);
	dftype = Dftype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(2,tr2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("long_days_text", RTUD(1822), Current, 0, 0, 26370);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1822,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 7L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("SUNDAY",6,1476933465);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("MONDAY",6,1465090905);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("TUESDAY",7,893616985);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("WEDNESDAY",9,121636953);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("THURSDAY",8,1315712089);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("FRIDAY",6,1367465305);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("SATURDAY",8,2068505689);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	Result = (EIF_REFERENCE)tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", Result))(Result);
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

/* days_text */

RTOID (Fndpnn7)

EIF_UNION Fndpnn7 (EIF_REFERENCE Current)
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
	RTCFDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fndpnn7);
	dftype = Dftype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(2,tr2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("days_text", RTUD(1822), Current, 0, 0, 26368);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1822,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 7L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("SUN",3,5461326);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("MON",3,5066574);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("TUE",3,5526853);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("WED",3,5719364);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("THU",3,5523541);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("FRI",3,4608585);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("SAT",3,5456212);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	Result = (EIF_REFERENCE)tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", Result))(Result);
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

/* date_default_format_string */

RTOID (Fndr8ep)

EIF_UNION Fndr8ep (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fndr8ep,26373,RTMS_EX_H("[0]mm/[0]dd/yyyy",16,1621628025));
}
void EIF_Minit1823 (void)
{
	GTCX
	RTOTS (27709,Fndrlg2)
	RTOTS (27710,Fndr8ep)
	RTOTS (27711,Fndswcb)
	RTOTS (27712,Fndti9y)
	RTOTS (27705,Fndo_ql)
	RTOTS (27706,Fndpnn7)
	RTOTS (27707,Fndqalu)
	RTOTS (27708,Fndqyjg)
}


#ifdef __cplusplus
}
#endif

