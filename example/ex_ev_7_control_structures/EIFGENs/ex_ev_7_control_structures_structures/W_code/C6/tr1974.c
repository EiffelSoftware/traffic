/*
 * Code for class TRAFFIC_PLACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn92l1z(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn9p0ex(EIF_REFERENCE);
extern EIF_UNION Fn9yfk_(EIF_REFERENCE);
extern void Fn9oqjo(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn9ra95(EIF_REFERENCE);
extern EIF_UNION Fn9zqf8(EIF_REFERENCE, EIF_UNION);
extern void Fn9pdha(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn9_ddv(EIF_REFERENCE);
extern void Fn91y4c(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn9u6ww(EIF_REFERENCE, EIF_UNION);
extern void Fn928_l(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn9y2im(EIF_REFERENCE, EIF_UNION);
extern void Fn93wx7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn9w4pr(EIF_REFERENCE);
extern EIF_UNION Fn95uq2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn94jvu(EIF_REFERENCE);
extern void Fn9_0bh(EIF_REFERENCE, EIF_UNION);
extern void Fn90n83(EIF_REFERENCE);
extern void Fn91a6q(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn9xsnd(EIF_REFERENCE);
extern EIF_UNION Fn946tg(EIF_REFERENCE);
extern void Fn96hop(EIF_REFERENCE);
extern void Fp0x_nk(EIF_REFERENCE, int);
extern void EIF_Minit1974(void);

extern EIF_REFERENCE _fAabfdj1_2();
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

/* register_in_schedule */

void Fn92l1z (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(4,Current);
	RTLR(3,loc1);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("register_in_schedule", RTUD(1973), Current, 1, 3, 28057);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_object", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_time", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_target", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static int16 typarr [] = {1973,-7,3,726,1955,2097,1973,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr1 = RTLNTS(typres, 4, 0);

	}
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(5, 32, "put", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(6);
	ur1 = RTCCL(arg2);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(5, 32, "put", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(7);
	ur1 = RTCCL(arg3);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(5, 32, "put", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 43, dtype));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* outgoing_line_connections */

EIF_UNION Fn9p0ex (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(2,Result);
	RTLR(6,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("outgoing_line_connections", RTUD(1973), Current, 3, 0, 28066);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1973,2190,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {

		RTHOOK(4);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1977, 7, "connection_list", tr1));
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", loc1))(loc1)).value.EIF_INTEGER_32_value);
		while (!((EIF_BOOLEAN)(loc3 > ti4_1))) {
			RTHOOK(7);
			ui4_1 = loc3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "i_th", loc1))(loc1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTCCL(tr1);
			loc2 = RTRV(RTUD(1974), loc2);

			RTHOOK(8);
			tc2 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc2 = !RTCEQ(tr1, tr2);
			}
			if (tc2) {
				RTHOOK(9);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", Result))(Result, ur1x);
			}

			RTHOOK(10);
			loc3++;
			RTHOOK(6);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", loc1))(loc1)).value.EIF_INTEGER_32_value);
			;
		}

		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* is_hub */

EIF_UNION Fn9yfk_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_hub", RTUD(1973), Current, 0, 0, 28049);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_exchange", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 51, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_hub", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 > ti4_2))) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make */

void Fn9oqjo (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1973), Current, 0, 1, 28064);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(1973, 7, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 7, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1973, 43, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 43, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(1973, 45, Current));
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(1973, 44, Current));
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTLNSMART(RTWCT(1973, 46, Current));
	ur1 = RTCCL(Current);
	tr2 = RTLN(RTUD(2010));
	ur8_1 = (EIF_REAL_64) 0.0;
	ur8_2 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
	RTNHOOK(8);
	RTCI2(tr2);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1976, 55, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(8);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 46, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 46, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 62, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("name_set", EX_POST);
		ur1 = RTCCL(arg1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1973, 21, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("position_exists", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* position */

EIF_UNION Fn9ra95 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("position", RTUD(1973), Current, 0, 0, 28067);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 46, Dtype(Current)));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1976, 57, "position", tr1));
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* is_insertable */

EIF_UNION Fn9zqf8 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_insertable", RTUD(1973), Current, 0, 1, 28051);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(3);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 1, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc1 = (EIF_BOOLEAN) !Result;
	}
	while (!(tc1)) {

		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 61, "is_insertable", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(5);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		}

		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(3);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 1, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc1 = (EIF_BOOLEAN) !Result;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* make_with_position */

void Fn9pdha (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_position", RTUD(1973), Current, 0, 3, 28065);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(1973, 7, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 7, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1973, 46, Current));
	ur1 = RTCCL(Current);
	tr2 = RTLN(RTUD(2010));
	tr8_1 = (EIF_REAL_64) (arg2);
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (arg3);
	ur8_2 = tr8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
	RTNHOOK(5);
	RTCI2(tr2);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1976, 55, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 46, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(1973, 43, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 43, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(1973, 45, Current));
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTLNSMART(RTWCT(1973, 44, Current));
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(8);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 46, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 62, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("name_set", EX_POST);
		ur1 = RTCCL(arg1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1973, 21, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("position_exists", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("position_set", EX_POST);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(12);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
		tr8_2 = (EIF_REAL_64) (arg2);
		if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr8_2 = (EIF_REAL_64) (arg3);
			tc1 = (EIF_BOOLEAN)(tr8_1 == tr8_2);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* is_removable */

EIF_UNION Fn9_ddv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(4,loc2);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("is_removable", RTUD(1973), Current, 3, 0, 28052);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(4);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1976, 58, "connection_list", tr1));
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(5);
		loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", loc1))(loc1)).value.EIF_INTEGER_32_value);
		while (!((EIF_BOOLEAN)(loc3 > ti4_1))) {
			RTHOOK(7);
			ui4_1 = loc3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "i_th", loc1))(loc1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTCCL(tr1);
			loc2 = RTRV(RTUD(1959), loc2);

			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				RTHOOK(9);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			}

			RTHOOK(10);
			loc3++;
			RTHOOK(6);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", loc1))(loc1)).value.EIF_INTEGER_32_value);
			;
		}

		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* set_position */

void Fn91y4c (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_position", RTUD(1973), Current, 0, 1, 28056);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_position_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 46, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 60, "set_position", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 7, dtype));
	{
		static int16 typarr [] = {1973,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("position_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* stop */

EIF_UNION Fn9u6ww (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(0,Current);
	RTLR(5,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("stop", RTUD(1973), Current, 0, 1, 28068);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(2);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 67, "line", tr2));
		RTNHOOK(2);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 65, "name", tr1));
		RTNHOOK(2);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 65, "name", arg1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(2);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(2);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 67, "line", tr2));
			RTNHOOK(2);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 65, "name", tr1));
			RTNHOOK(2);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 65, "name", arg1));
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		;
	}


	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
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

/* add_stop */

void Fn928_l (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_stop", RTUD(1973), Current, 0, 1, 28058);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_insertable", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1977, 34, "is_insertable", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1973, 66, dtype))(Current);

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
	if (tc1) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1977, 11, "add_to_map", arg1))(arg1, ur1x);
	}

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 7, dtype));
	{
		static int16 typarr [] = {1973,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* has_stop */

EIF_UNION Fn9y2im (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(1,Current);
	RTLR(4,tr3);
	RTLR(7,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has_stop", RTUD(1973), Current, 0, 1, 28050);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	{
		static int16 typarr [] = {1973,-7,2,726,0,1975,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 3, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_ELEMENT *)tr2+2)->element.rarg = arg1;
	RTAR(tr2,arg1);
	{
		static int16 typarr [] = {1973,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr3 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 1L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	tr4 = * (EIF_REFERENCE *) tr3;
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	{
		static int16 typarr [] = {1973,1476,0,-7,1,726,1977,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1476, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabfdj1_2, (EIF_POINTER)(0),1973, 65, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(4, 15, "there_exists", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* add_node */

void Fn93wx7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(1,arg1);
	RTLR(3,Current);
	RTLR(0,loc1);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("add_node", RTUD(1973), Current, 1, 1, 28059);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(1977), loc1);

	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 61, dtype))(Current, ur1x);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);

		RTHOOK(5);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
		if (tc1) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 63, "add_to_map", arg1))(arg1, ur1x);
		}

	}

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 7, dtype));
	{
		static int16 typarr [] = {1973,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* hash_code */

EIF_UNION Fn9w4pr (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hash_code", RTUD(1973), Current, 0, 0, 28047);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* is_stop_of_line */

EIF_UNION Fn95uq2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(5,Current);
	RTLR(4,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("is_stop_of_line", RTUD(1973), Current, 0, 2, 28062);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1977, 67, "line", arg1));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 65, "name", tr1));
	RTNHOOK(1);
	tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(1975, 65, "name", arg2));
	ur1 = RTCCL(tr1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* out */

EIF_UNION Fn94jvu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(6,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("out", RTUD(1973), Current, 1, 0, 28060);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		loc1 = RTMS_EX_H(", ",2,11296);

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
		RTNHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(90, 11, "count", tr2));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			tr1 = RTMS_EX_H(" pictures: ",11,1259704352);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr1);

			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
			RTNHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr2))(tr2);
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
			RTNHOOK(6);
			tc1 = *(EIF_BOOLEAN *)(tr2 + RTVPA(90, 10, "after", tr2));
			while (!(tc1)) {
				RTHOOK(7);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
				RTNHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
				RTNHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr2))(tr2);

				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
				RTNHOOK(9);
				tc2 = *(EIF_BOOLEAN *)(tr2 + RTVPA(90, 10, "after", tr2));
				if ((EIF_BOOLEAN) !tc2) {
					RTHOOK(10);
					tr1 = RTMS_EX_H(", ",2,11296);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					loc1 = (EIF_REFERENCE)RTCCL(tr1);
				}

				RTHOOK(6);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
				RTNHOOK(6);
				tc1 = *(EIF_BOOLEAN *)(tr2 + RTVPA(90, 10, "after", tr2));
				;
			}

		}


		RTHOOK(11);
		tc2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 32, "description", tr1));
		if ((EIF_BOOLEAN)(tr2 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 31, "pictures", tr1));
			RTNHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(90, 11, "count", tr2));
			tc2 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tc2) {
			RTHOOK(12);
			tr1 = RTMS_EX_H(",",1,44);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
		}


		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1811, 32, "description", tr1));
		if ((EIF_BOOLEAN)(tr2 != NULL)) {
			RTHOOK(14);
			tr1 = RTMS_EX_H(" description: ",14,2005541408);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", loc1))(loc1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1811, 32, "description", tr2));
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr2);
		}

	} else {
		RTHOOK(15);
		loc1 = RTMS_EX_H("",0,0);
	}

	RTHOOK(16);
	tr1 = RTMS_EX_H("Traffic place ",14,1567881760);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(" at position ",13,586339360);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(16);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2010, 85, "out", tr2))(tr2)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* add_to_map */

void Fn9_0bh (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_to_map", RTUD(1973), Current, 0, 1, 28053);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_map_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("insertable", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 54, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 63, "add_to_map", tr2))(tr2, ur1x);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("is_in_map", EX_POST);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_from_map */

void Fn90n83 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_from_map", RTUD(1973), Current, 0, 0, 28054);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_removable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 55, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1976, 64, "remove_from_map", tr2))(tr2);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 44, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(8);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_in_map", EX_POST);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
		if ((EIF_BOOLEAN) !tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("map_unset", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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
}

/* set_information */

void Fn91a6q (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_information", RTUD(1973), Current, 0, 1, 28055);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_information_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 7, dtype));
	{
		static int16 typarr [] = {1973,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("information_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 42, dtype));
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* is_exchange */

EIF_UNION Fn9xsnd (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_exchange", RTUD(1973), Current, 0, 0, 28048);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 2L))) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_exchange", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2190, 99, "count", tr1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* hub_size */

EIF_UNION Fn946tg (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	return r;
}
/* update_position */

void Fn96hop (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update_position", RTUD(1973), Current, 0, 0, 28063);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		*(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype)) = (EIF_REAL_64)tr8_1;
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		*(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype)) = (EIF_REAL_64)tr8_1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 0, "first", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 59, dtype))(Current, ur1x);
	} else {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
		RTNHOOK(5);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(tr8_1 > (EIF_REAL_64)(tr8_2 + (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))))) {
			RTHOOK(6);
			tr1 = RTLN(RTUD(2010));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1977, 43, "position", tr3));
			RTNHOOK(6);
			tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)(tr8_1 + tr8_2) - (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4)))) /  (EIF_REAL_64) (tr8_5));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr8_6 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
			ur8_2 = tr8_6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
			RTNHOOK(6);
			RTCI2(tr1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 59, dtype))(Current, ur1x);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
			RTNHOOK(7);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			*(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 - tr8_2) * tr8_3);
		} else {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
			RTNHOOK(8);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(tr8_1 < (EIF_REAL_64)(tr8_2 - (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))))) {
			RTHOOK(9);
			tr1 = RTLN(RTUD(2010));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1977, 43, "position", tr3));
			RTNHOOK(9);
			tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)(tr8_1 + tr8_2) + (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4)))) /  (EIF_REAL_64) (tr8_5));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr8_6 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
			ur8_2 = tr8_6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
			RTNHOOK(9);
			RTCI2(tr1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 59, dtype))(Current, ur1x);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
			RTNHOOK(10);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			*(EIF_REAL_64 *)(Current + RTWA(1973, 48, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 - tr8_2) * tr8_3);
		}}


		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
		RTNHOOK(11);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(tr8_1 > (EIF_REAL_64)(tr8_2 + (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))))) {
			RTHOOK(12);
			tr1 = RTLN(RTUD(2010));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
			ur8_1 = tr8_1;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1977, 43, "position", tr3));
			RTNHOOK(12);
			tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
			tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype));
			tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_2 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)(tr8_2 + tr8_3) - (EIF_REAL_64)((EIF_REAL_64) (tr8_4) /  (EIF_REAL_64) (tr8_5)))) /  (EIF_REAL_64) (tr8_6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
			RTNHOOK(12);
			RTCI2(tr1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 59, dtype))(Current, ur1x);
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(13);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
			RTNHOOK(13);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(13);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			*(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 - tr8_2) * tr8_3);
		} else {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(14);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
			RTNHOOK(14);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(14);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(tr8_1 < (EIF_REAL_64)(tr8_2 - (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))))) {
			RTHOOK(15);
			tr1 = RTLN(RTUD(2010));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 47, "x", tr2));
			ur8_1 = tr8_1;
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1977, 43, "position", tr3));
			RTNHOOK(15);
			tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(2010, 48, "y", tr2));
			tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype));
			tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_2 = (EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)(tr8_2 + tr8_3) + (EIF_REAL_64)((EIF_REAL_64) (tr8_4) /  (EIF_REAL_64) (tr8_5)))) /  (EIF_REAL_64) (tr8_6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
			RTNHOOK(15);
			RTCI2(tr1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1973, 59, dtype))(Current, ur1x);
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1977, 43, "position", tr2));
			RTNHOOK(16);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			*(EIF_REAL_64 *)(Current + RTWA(1973, 49, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 - tr8_2) * tr8_3);
		}}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(2);
	RTEE;
}

void Fp0x_nk (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTIT("name_valid", Current);
	tc1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("position_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1973, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("stops_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("nodes_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 45, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("dummy_node_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 46, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("place_in_map", Current);
	tc1 = '\01';
	tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1973, 16, dtype));
	if (tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 36, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1973, 40, dtype));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 40, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1974 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

