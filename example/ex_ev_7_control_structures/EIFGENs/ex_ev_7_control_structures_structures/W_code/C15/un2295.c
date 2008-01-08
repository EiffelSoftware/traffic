/*
 * Code for class UNION_FIND_STRUCTURE [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fm81708(EIF_REFERENCE);
extern void Fm853nz(EIF_REFERENCE, EIF_UNION);
extern void Fm9c7yt(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fm9dvwf(EIF_REFERENCE, EIF_UNION);
extern void Fm8_nar(EIF_REFERENCE, EIF_UNION);
extern void Fm86rll(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fm81k3m(EIF_REFERENCE);
extern EIF_UNION Fm84tsq(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm835u3(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm8_98d(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm85gqc(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm80x5_(EIF_REFERENCE, EIF_UNION);
extern void Fp_zfe1(EIF_REFERENCE, int);
extern void EIF_Minit2295(void);

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

/* sets */

EIF_UNION Fm81708 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("sets", RTUD(2294), Current, 1, 0, 26163);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2294,2295,1748,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2295, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype));
	RTHOOK(3);
	while (!((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -1L)))) {
		RTHOOK(4);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 33, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", Result))(Result, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(3);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("set_count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* put */

void Fm853nz (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(3,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put", RTUD(2294), Current, 0, 1, 26167);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 39, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 43, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
	ui4_1 = (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ur1x);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 43, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 11, "inserted", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (tc2) {
		RTHOOK(3);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype)))++;
		RTHOOK(4);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype)))++;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 44, dtype));
		ur1 = RTCCL(arg1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 46, dtype));
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 47, dtype));
		ui4_1 = ((EIF_INTEGER_32) -1L);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 48, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
		ui4_1 = ((EIF_INTEGER_32) -1L);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);

		RTHOOK(11);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(12);
			*(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype));
			ui4_1 = ((EIF_INTEGER_32) -1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
		} else {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
			ui4_1 = ti4_2;
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
			ui4_2 = (EIF_INTEGER_32)(ti4_3 - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
			ui4_1 = (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
			ui4_2 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("inserted", EX_POST);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 39, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("count_increased", EX_POST);
		tc2 = '\01';
		if ((EIF_BOOLEAN) !tc1) {
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
			tc2 = (EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc2) {
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
#undef arg1
}

/* merge_sets */

void Fm9c7yt (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("merge_sets", RTUD(2294), Current, 3, 2, 26169);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_identifier", EX_PRE);
		tc1 = '\0';
		ui4_1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ui4_1 = arg2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
		ti4_1 = ti4_2;
		ui4_1 = arg1;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		ui4_1 = arg2;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	RTHOOK(2);
	ui4_1 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	ui4_1 = arg2;
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ti4_4);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 46, dtype));
	ui4_1 = loc1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 48, dtype));
	ui4_1 = arg1;
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	loc2 = (EIF_INTEGER_32)ti4_4;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 48, dtype));
	ui4_1 = arg2;
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	loc3 = (EIF_INTEGER_32)ti4_4;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 48, dtype));
	ui4_1 = loc3;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 47, dtype));
	ui4_1 = arg2;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(9);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 53, dtype))(Current, ui4_1x);
	RTHOOK(10);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype)))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("set_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("first_set_invalid", EX_POST);
		ui4_1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("new_set_size", EX_POST);
		ui4_1 = arg1;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg2
#undef arg1
}

/* remove_identifier */

void Fm9dvwf (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("remove_identifier", RTUD(2294), Current, 2, 1, 26170);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2294, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype)) = (EIF_INTEGER_32)loc2;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype));
		ui4_1 = ((EIF_INTEGER_32) -1L);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype));
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)ti4_2;

		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
			ui4_1 = ((EIF_INTEGER_32) -1L);
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
		} else {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
			ui4_1 = loc2;
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype));
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("identifier_removed", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2294, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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

/* make */

void Fm8_nar (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("make", RTUD(2294), Current, 0, 1, 26159);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(2294, 44, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(3);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 44, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(2294, 45, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(2294, 46, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 46, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(2294, 43, Current));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(87, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 43, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(2294, 47, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 47, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTLNSMART(RTWCT(2294, 48, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(8);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 48, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = RTLNSMART(RTWCT(2294, 50, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(9);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTLNSMART(RTWCT(2294, 51, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(10);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 51, dtype));
	ui4_1 = ((EIF_INTEGER_32) -1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* union */

void Fm86rll (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
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

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("union", RTUD(2294), Current, 0, 2, 26168);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_identifier", EX_PRE);
		tc1 = '\0';
		ui4_1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ui4_1 = arg2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ui4_1 = arg1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	ui4_1 = arg2;
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_2 >= ti4_3)) {
		RTHOOK(3);
		ui4_1 = arg1;
		ui4_2 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2294, 52, dtype))(Current, ui4_1x, ui4_2x);
	} else {
		RTHOOK(4);
		ui4_1 = arg2;
		ui4_2 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2294, 52, dtype))(Current, ui4_1x, ui4_2x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("set_invalidated", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			ui4_1 = arg2;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (!(tc2)) {
			tc2 = '\0';
			ui4_1 = arg2;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				ui4_1 = arg1;
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
				tc2 = (EIF_BOOLEAN) !tc3;
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("set_count_decreased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
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

/* identifiers */

EIF_UNION Fm81k3m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("identifiers", RTUD(2294), Current, 1, 0, 26162);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2294,2274,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2274, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 49, dtype));
	RTHOOK(3);
	while (!((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -1L)))) {
		RTHOOK(4);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", Result))(Result, ui4_1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 50, dtype));
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(3);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("identifier_count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* has */

EIF_UNION Fm84tsq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,arg1);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has", RTUD(2294), Current, 0, 1, 26165);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 43, Dtype(Current)));
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* item_count */

EIF_UNION Fm835u3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("item_count", RTUD(2294), Current, 0, 1, 26164);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_identifier", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 46, dtype));
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_empty", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* find */

EIF_UNION Fm8_98d (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(3,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("find", RTUD(2294), Current, 3, 1, 26160);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_element", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 39, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 43, dtype));
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ur1x)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	loc2 = (EIF_INTEGER_32)loc1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
	ui4_1 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_1 == loc2))) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ui4_1 = loc2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		;
	}


	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
	ui4_1 = loc1;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_2 == loc2))) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ui4_1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc3 = (EIF_INTEGER_32)ti4_3;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ui4_1 = loc2;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32)loc3;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		;
	}

	RTHOOK(10);
	Result = (EIF_INTEGER_32)loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("valid_identifier", EX_POST);
		ui4_1 = Result;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* valid_identifier */

EIF_UNION Fm85gqc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("valid_identifier", RTUD(2294), Current, 0, 1, 26166);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 2, "valid_index", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == arg1);
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* i_th_set */

EIF_UNION Fm80x5_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(4,ur1);
	RTLR(3,tr2);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("i_th_set", RTUD(2294), Current, 2, 1, 26161);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_identifier", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 40, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	RTHOOK(3);
	{
		static int16 typarr [] = {2294,2295,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2295, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	loc2 = (EIF_INTEGER_32)arg1;
	RTHOOK(5);
	while (!((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L)))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 44, dtype));
		ui4_1 = loc2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", Result))(Result, ur1x);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 47, dtype));
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(5);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 38, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

void Fp_zfe1 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("set_count", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
	if ((EIF_BOOLEAN)(ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("parent_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 45, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 44, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("hash_table_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2294, 43, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(87, 79, "count", tr1));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 36, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("set_count", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2294, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("same_count", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2294, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2294, 37, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2295 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

