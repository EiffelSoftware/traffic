/*
 * Code for class YY_COMPRESSED_SCANNER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fonnl7f(EIF_REFERENCE);
extern void Fonmy9t(EIF_REFERENCE);
extern EIF_UNION Fon7y2y(EIF_REFERENCE);
extern EIF_UNION Fon8l0k(EIF_REFERENCE);
extern EIF_UNION Fonv0di(EIF_REFERENCE);
extern EIF_UNION Fon6n7p(EIF_REFERENCE);
extern EIF_UNION Fon7a5b(EIF_REFERENCE);
extern EIF_UNION Fon5dcg(EIF_REFERENCE);
extern EIF_UNION Fonwoa4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fon88y6(EIF_REFERENCE);
extern void Fonuqh9(EIF_REFERENCE, EIF_UNION);
extern void Fonow2o(EIF_REFERENCE);
extern void Fonn841(EIF_REFERENCE);
extern void Fp1a79b(EIF_REFERENCE, int);
extern void EIF_Minit2014(void);

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

/* reset */

void Fonnl7f (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("reset", RTUD(2013), Current, 0, 0, 28682);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 1, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 78, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 79, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 100, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 84, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 110, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current + RTWA(2013, 71, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	*(EIF_BOOLEAN *)(Current + RTWA(2013, 129, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(14);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 132, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(16);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 134, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(17);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 135, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 136, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yy_initialize */

void Fonmy9t (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("yy_initialize", RTUD(2013), Current, 0, 0, 28681);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2013, 126, dtype))(Current);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 1, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 78, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 79, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 100, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 84, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 110, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);

	RTHOOK(9);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 112, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 63, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1816, 34, "content", tr2));
		RTNHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2000, 46, "count", tr3))(tr3)).value.EIF_INTEGER_32_value);
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 31, "make", tr1))(tr1, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype)) = (EIF_REFERENCE)tr2;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yyfind_action */

EIF_UNION Fon7y2y (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	return r;
}
/* yydo_action */

EIF_UNION Fon8l0k (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	return r;
}
/* yy_previous_state */

EIF_UNION Fonv0di (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("yy_previous_state", RTUD(2013), Current, 3, 0, 28691);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 63, dtype));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1816, 41, "beginning_of_line", tr1));
	if (tc1) {
		RTHOOK(2);
		Result = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype));
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(Result + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(3);
		Result = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype));
	}


	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
		ui4_1 = Result;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	}


	RTHOOK(7);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ti4_1);
	RTHOOK(8);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
	RTHOOK(9);
	while (!((EIF_BOOLEAN)(loc1 >= loc2))) {

		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			RTNHOOK(11);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc3 = (EIF_INTEGER_32)ti4_1;
		} else {
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 70, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			RTNHOOK(12);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc3 = (EIF_INTEGER_32)ti4_1;
		}


		RTHOOK(13);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(14);
			loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 151, dtype))(Current)).value.EIF_INTEGER_32_value);
		} else {
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 121, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 121, dtype));
			ui4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc3 = (EIF_INTEGER_32)ti4_1;
		}}


		RTHOOK(17);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {

			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				*(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype)) = (EIF_INTEGER_32)Result;
				RTHOOK(20);
				*(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype)) = (EIF_INTEGER_32)loc1;
			}

		}


		RTHOOK(21);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
		ui4_1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + loc3);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		while (!((EIF_BOOLEAN)(ti4_1 == Result))) {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 120, dtype));
			ui4_1 = Result;
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
			Result = (EIF_INTEGER_32)ti4_2;

			RTHOOK(23);
			tc1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 122, dtype));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 139, dtype))(Current)).value.EIF_INTEGER_32_value);
				tc1 = (EIF_BOOLEAN)(Result >= ti4_2);
			}
			if (tc1) {
				RTHOOK(24);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 122, dtype));
				ui4_1 = loc3;
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_2;
			}

			RTHOOK(21);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = (EIF_INTEGER_32)(ti4_1 + loc3);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
			;
		}

		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 117, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
		ui4_1 = Result;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = (EIF_INTEGER_32)(ti4_2 + loc3);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)ti4_2;

		RTHOOK(26);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(27);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
			ui4_1 = Result;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
			RTHOOK(28);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)))++;
		}

		RTHOOK(29);
		loc1++;
		RTHOOK(9);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* yynext_token */

EIF_UNION Fon6n7p (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* yymatch */

EIF_UNION Fon7a5b (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	return r;
}
/* yybacking_up */

EIF_UNION Fon5dcg (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = (EIF_BOOLEAN)'\01';
	return r;
}
/* yy_null_trans_state */

EIF_UNION Fonwoa4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTEAA("yy_null_trans_state", RTUD(2013), Current, 2, 1, 28692);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(3);
			*(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype)) = (EIF_INTEGER_32)arg1;
			RTHOOK(4);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype)) = (EIF_INTEGER_32)ti4_1;
		}

	}

	RTHOOK(5);
	Result = (EIF_INTEGER_32)arg1;
	RTHOOK(6);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 151, dtype))(Current)).value.EIF_INTEGER_32_value);

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
	ui4_1 = Result;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
	ui4_1 = (EIF_INTEGER_32)(ti4_1 + loc1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_1 == Result))) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 120, dtype));
		ui4_1 = Result;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)ti4_2;

		RTHOOK(9);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 122, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 139, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(Result >= ti4_2);
		}
		if (tc1) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 122, dtype));
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc1 = (EIF_INTEGER_32)ti4_2;
		}

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
		ui4_1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + loc1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		;
	}

	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 117, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
	ui4_1 = Result;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
	ui4_1 = (EIF_INTEGER_32)(ti4_2 + loc1);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_2;

	RTHOOK(12);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
		ui4_1 = Result;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(14);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)))++;
	}

	RTHOOK(15);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 138, dtype))(Current)).value.EIF_INTEGER_32_value);
	loc2 = (EIF_BOOLEAN)(EIF_BOOLEAN)(Result == ti4_2);

	RTHOOK(16);
	if (loc2) {
		RTHOOK(17);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* yyfind_rule */

EIF_UNION Fon88y6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	return r;
}
/* yy_set_content */

void Fonuqh9 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	RTLU(SK_INT32, &loc1);
	RTEAA("yy_set_content", RTUD(2013), Current, 1, 1, 28690);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_content_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2013, 70, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2000, 39, "as_special", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype)) = (EIF_REFERENCE)tr1;

	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2000, 46, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));

		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 < loc1)) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 112, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
			ur1 = tr2;
			ui4_1 = loc1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2264, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype)) = (EIF_REFERENCE)tr2;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("yy_content_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 70, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* reject */

void Fonow2o (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("reject", RTUD(2013), Current, 0, 0, 28689);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 140, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		*(EIF_BOOLEAN *)(Current + RTWA(2013, 129, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 35, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2013, 105, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(4);
		tr1 = RTMS_EX_H("fatal scanner reject error",26,387775346);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2013, 20, dtype))(Current, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* read_token */

void Fonn841 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_BOOL, &loc13);
	RTEAA("read_token", RTUD(2013), Current, 13, 0, 28688);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2013, 105, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(2);
	loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 145, dtype))(Current)).value.EIF_INTEGER_32_value);
	loc7 = (EIF_INTEGER_32)loc7;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 105, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_1 != ti4_2))) {

		RTHOOK(4);
		switch (loc7) {
			case 1L:

				RTHOOK(5);
				tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2013, 71, dtype));
				if (tc1) {
					RTHOOK(6);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_3 - ti4_4);
					RTHOOK(7);
					*(EIF_BOOLEAN *)(Current + RTWA(2013, 71, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				} else {
					RTHOOK(8);
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
					RTHOOK(9);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 1, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 100, dtype)) = (EIF_INTEGER_32)ti4_3;
					RTHOOK(10);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 78, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 84, dtype)) = (EIF_INTEGER_32)ti4_3;
					RTHOOK(11);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 79, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 110, dtype)) = (EIF_INTEGER_32)ti4_3;
				}

				RTHOOK(12);
				loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
				RTHOOK(13);
				loc2 = (EIF_INTEGER_32)loc1;

				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 63, dtype));
				tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1816, 41, "beginning_of_line", tr1));
				if (tc1) {
					RTHOOK(15);
					loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype));
					loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(16);
					loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype));
				}


				RTHOOK(17);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
				if (tc1) {
					RTHOOK(18);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
					ui4_1 = loc3;
					ui4_2 = ((EIF_INTEGER_32) 0L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
					RTHOOK(19);
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				}

				RTHOOK(20);
				loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
				loc7 = (EIF_INTEGER_32)loc7;
				break;
			case 2L:

				RTHOOK(21);
				loc13 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(22);
				while (!(loc13)) {

					RTHOOK(23);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 121, dtype));
					if ((EIF_BOOLEAN)(tr1 != NULL)) {

						RTHOOK(24);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype));
						if ((EIF_BOOLEAN)(tr1 != NULL)) {
							RTHOOK(25);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 121, dtype));
							tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype));
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_CHARACTER_value);
							RTNHOOK(25);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							ui4_1 = ti4_3;
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc8 = (EIF_INTEGER_32)ti4_3;
						} else {
							RTHOOK(26);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 121, dtype));
							tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 70, dtype));
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr2))(tr2, ui4_1x)).value.EIF_CHARACTER_value);
							RTNHOOK(26);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							ui4_1 = ti4_3;
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc8 = (EIF_INTEGER_32)ti4_3;
						}

					} else {

						RTHOOK(27);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype));
						if ((EIF_BOOLEAN)(tr1 != NULL)) {
							RTHOOK(28);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 69, dtype));
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
							RTNHOOK(28);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							loc8 = (EIF_INTEGER_32)ti4_3;
						} else {
							RTHOOK(29);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 70, dtype));
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
							RTNHOOK(29);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							loc8 = (EIF_INTEGER_32)ti4_3;
						}

					}


					RTHOOK(30);
					tc1 = '\0';
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
					if ((EIF_BOOLEAN) !tc2) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						tc1 = (EIF_BOOLEAN)(ti4_3 != ((EIF_INTEGER_32) 0L));
					}
					if (tc1) {
						RTHOOK(31);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype)) = (EIF_INTEGER_32)loc3;
						RTHOOK(32);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype)) = (EIF_INTEGER_32)loc1;
					}


					RTHOOK(33);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
					ui4_1 = loc3;
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
					ui4_1 = (EIF_INTEGER_32)(ti4_3 + loc8);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					while (!((EIF_BOOLEAN)(ti4_3 == loc3))) {
						RTHOOK(34);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 120, dtype));
						ui4_1 = loc3;
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc3 = (EIF_INTEGER_32)ti4_4;

						RTHOOK(35);
						tc1 = '\0';
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 122, dtype));
						if ((EIF_BOOLEAN)(tr1 != NULL)) {
							ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 139, dtype))(Current)).value.EIF_INTEGER_32_value);
							tc1 = (EIF_BOOLEAN)(loc3 >= ti4_4);
						}
						if (tc1) {
							RTHOOK(36);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 122, dtype));
							ui4_1 = loc8;
							ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc8 = (EIF_INTEGER_32)ti4_4;
						}

						RTHOOK(33);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
						tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
						ui4_1 = (EIF_INTEGER_32)(ti4_3 + loc8);
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						;
					}

					RTHOOK(37);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 117, dtype));
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
					ui4_1 = loc3;
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
					ui4_1 = (EIF_INTEGER_32)(ti4_4 + loc8);
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc3 = (EIF_INTEGER_32)ti4_4;

					RTHOOK(38);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
					if (tc1) {
						RTHOOK(39);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
						ui4_1 = loc3;
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
						ui4_2 = ti4_4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
						RTHOOK(40);
						(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)))++;
					}

					RTHOOK(41);
					loc1++;
					RTHOOK(42);
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 138, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc13 = (EIF_BOOLEAN)(EIF_BOOLEAN)(loc3 == ti4_4);
					RTHOOK(22);
					;
				}


				RTHOOK(43);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
				if ((EIF_BOOLEAN) !tc1) {
					RTHOOK(44);
					loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype));
					RTHOOK(45);
					loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype));
				}

				RTHOOK(46);
				loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
				loc7 = (EIF_INTEGER_32)loc7;
				break;
			case 3L:

				RTHOOK(47);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
				if ((EIF_BOOLEAN) !tc1) {
					RTHOOK(48);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
					ui4_1 = loc3;
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc6 = (EIF_INTEGER_32)ti4_4;
					RTHOOK(49);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 148, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				} else {
					RTHOOK(50);
					(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)))--;
					RTHOOK(51);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
					ui4_1 = ti4_4;
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc3 = (EIF_INTEGER_32)ti4_4;
					RTHOOK(52);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
					ui4_1 = loc3;
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)) = (EIF_INTEGER_32)ti4_4;
					RTHOOK(53);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 149, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				}

				break;
			case 5L:
				if (RTAL & CK_CHECK) {
					RTHOOK(54);
					RTCT("reject_used", EX_CHECK);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
					if (tc1) {
						RTCK;
					} else {
						RTCF;
					}
				}

				RTHOOK(55);
				loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(56);
				while (!(loc9)) {

					RTHOOK(57);
					tc1 = '\0';
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype));
					if ((EIF_BOOLEAN)(ti4_4 != ((EIF_INTEGER_32) 0L))) {
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype));
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
						ui4_1 = (EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
						ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						tc1 = (EIF_BOOLEAN)(ti4_4 < ti4_5);
					}
					if (tc1) {
						RTHOOK(58);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 124, dtype));
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype));
						ui4_1 = ti4_4;
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc6 = (EIF_INTEGER_32)ti4_4;

						RTHOOK(59);
						tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 141, dtype))(Current)).value.EIF_BOOLEAN_value);
						if (tc1) {

							RTHOOK(60);
							tc1 = '\01';
							ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 144, dtype))(Current)).value.EIF_INTEGER_32_value);
							if (!(EIF_BOOLEAN)(loc6 < (EIF_INTEGER_32)-ti4_4)) {
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 134, dtype));
								tc1 = (EIF_BOOLEAN)(ti4_4 != ((EIF_INTEGER_32) 0L));
							}
							if (tc1) {

								RTHOOK(61);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 134, dtype));
								if ((EIF_BOOLEAN)(loc6 == ti4_4)) {
									RTHOOK(62);
									*(EIF_INTEGER_32 *)(Current + RTWA(2013, 134, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
									RTHOOK(63);
									ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 144, dtype))(Current)).value.EIF_INTEGER_32_value);
									loc6 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)-loc6 - ti4_4);
									RTHOOK(64);
									loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
								} else {
									RTHOOK(65);
									(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)))++;
								}

							} else {
								RTHOOK(66);
							if ((EIF_BOOLEAN)(loc6 < ((EIF_INTEGER_32) 0L))) {
								RTHOOK(67);
								ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 144, dtype))(Current)).value.EIF_INTEGER_32_value);
								*(EIF_INTEGER_32 *)(Current + RTWA(2013, 134, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc6 - ti4_4);

								RTHOOK(68);
								tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 140, dtype))(Current)).value.EIF_BOOLEAN_value);
								if (tc1) {
									RTHOOK(69);
									*(EIF_INTEGER_32 *)(Current + RTWA(2013, 132, dtype)) = (EIF_INTEGER_32)loc1;
									RTHOOK(70);
									ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
									*(EIF_INTEGER_32 *)(Current + RTWA(2013, 136, dtype)) = (EIF_INTEGER_32)ti4_4;
									RTHOOK(71);
									ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype));
									*(EIF_INTEGER_32 *)(Current + RTWA(2013, 135, dtype)) = (EIF_INTEGER_32)ti4_4;
								}

								RTHOOK(72);
								(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)))++;
							} else {
								RTHOOK(73);
								*(EIF_INTEGER_32 *)(Current + RTWA(2013, 132, dtype)) = (EIF_INTEGER_32)loc1;
								RTHOOK(74);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
								*(EIF_INTEGER_32 *)(Current + RTWA(2013, 136, dtype)) = (EIF_INTEGER_32)ti4_4;
								RTHOOK(75);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype));
								*(EIF_INTEGER_32 *)(Current + RTWA(2013, 135, dtype)) = (EIF_INTEGER_32)ti4_4;
								RTHOOK(76);
								loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
							}}

						} else {
							RTHOOK(77);
							*(EIF_INTEGER_32 *)(Current + RTWA(2013, 132, dtype)) = (EIF_INTEGER_32)loc1;
							RTHOOK(78);
							loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
						}

					} else {
						RTHOOK(79);
						loc1--;
						RTHOOK(80);
						(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)))--;
						RTHOOK(81);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
						ui4_1 = ti4_4;
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc3 = (EIF_INTEGER_32)ti4_4;
						RTHOOK(82);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
						ui4_1 = loc3;
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)) = (EIF_INTEGER_32)ti4_4;
					}

					RTHOOK(56);
					;
				}

				RTHOOK(83);
				loc10 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 1, dtype));
				RTHOOK(84);
				loc11 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 78, dtype));
				RTHOOK(85);
				loc12 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 79, dtype));
				RTHOOK(86);
				loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 148, dtype))(Current)).value.EIF_INTEGER_32_value);
				loc7 = (EIF_INTEGER_32)loc7;
				break;
			case 4L:
				RTHOOK(87);
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
				loc2 -= ti4_4;
				RTHOOK(88);
				*(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype)) = (EIF_INTEGER_32)loc2;
				RTHOOK(89);
				*(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype)) = (EIF_INTEGER_32)loc1;
				RTHOOK(90);
				loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 145, dtype))(Current)).value.EIF_INTEGER_32_value);
				loc7 = (EIF_INTEGER_32)loc7;

				RTHOOK(91);
				if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {

					RTHOOK(92);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
					if ((EIF_BOOLEAN) !tc1) {
						RTHOOK(93);
						loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype));
						RTHOOK(94);
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
						loc2 += ti4_4;
						RTHOOK(95);
						loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype));
						RTHOOK(96);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
					} else {
						RTHOOK(97);
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 35, dtype))(Current)).value.EIF_INTEGER_32_value);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 105, dtype)) = (EIF_INTEGER_32)ti4_4;
						RTHOOK(98);
						tr1 = RTMS_EX_H("fatal scanner internal error: no action found",45,1022935396);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2013, 20, dtype))(Current, ur1x);
					}

				} else {
					RTHOOK(99);
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 152, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(loc6 == ti4_4)) {
					RTHOOK(100);
					loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - loc2) - ((EIF_INTEGER_32) 1L));

					RTHOOK(101);
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 63, dtype));
					ti4_5 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 35, "count", tr1));
					if ((EIF_BOOLEAN)(ti4_4 <= (EIF_INTEGER_32)(ti4_5 + ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(102);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + loc5);
						RTHOOK(103);
						loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 127, dtype))(Current)).value.EIF_INTEGER_32_value);
						RTHOOK(104);
						ui4_1 = loc3;
						loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2013, 128, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
						RTHOOK(105);
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
						loc2 += ti4_4;

						RTHOOK(106);
						if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
							RTHOOK(107);
							loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
							loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
							RTHOOK(108);
							*(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype)) = (EIF_INTEGER_32)loc1;
							RTHOOK(109);
							loc3 = (EIF_INTEGER_32)loc4;
							RTHOOK(110);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						} else {

							RTHOOK(111);
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
							if (tc1) {
								RTHOOK(112);
								loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
								RTHOOK(113);
								(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)))--;
							} else {
								RTHOOK(114);
								loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 72, dtype));
								RTHOOK(115);
								loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 77, dtype));
							}

							RTHOOK(116);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						}

					} else {
						RTHOOK(117);
						(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype)))--;
						RTHOOK(118);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2013, 75, dtype))(Current);

						RTHOOK(119);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 63, dtype));
						tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1816, 45, "filled", tr1));
						if (tc1) {
							RTHOOK(120);
							loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 127, dtype))(Current)).value.EIF_INTEGER_32_value);
							RTHOOK(121);
							loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
							RTHOOK(122);
							loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype));
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
							loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ti4_4);
							RTHOOK(123);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						} else {
							RTHOOK(124);
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
							ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype));
							ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
						if ((EIF_BOOLEAN)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_4 - ti4_5) - ti4_6) != ((EIF_INTEGER_32) 0L))) {
							RTHOOK(125);
							loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 127, dtype))(Current)).value.EIF_INTEGER_32_value);
							RTHOOK(126);
							loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
							RTHOOK(127);
							loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype));
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 86, dtype));
							loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ti4_4);
							RTHOOK(128);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						} else {

							RTHOOK(129);
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 76, dtype))(Current)).value.EIF_BOOLEAN_value);
							if (tc1) {
								RTHOOK(130);
								loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 67, dtype));
								RTHOOK(131);
								loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 99, dtype));
								RTHOOK(132);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 65, dtype));
								ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_4 - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2013, 150, dtype))(Current, ui4_1x);
							}

						}}

					}

				} else {
					RTHOOK(133);
					ui4_1 = loc6;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2013, 156, dtype))(Current, ui4_1x);

					RTHOOK(134);
					tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2013, 129, dtype));
					if (tc1) {
						RTHOOK(135);
						*(EIF_BOOLEAN *)(Current + RTWA(2013, 129, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
						RTHOOK(136);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 1, dtype)) = (EIF_INTEGER_32)loc10;
						RTHOOK(137);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 78, dtype)) = (EIF_INTEGER_32)loc11;
						RTHOOK(138);
						*(EIF_INTEGER_32 *)(Current + RTWA(2013, 79, dtype)) = (EIF_INTEGER_32)loc12;
						RTHOOK(139);
						loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 132, dtype));

						RTHOOK(140);
						tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 141, dtype))(Current)).value.EIF_BOOLEAN_value);
						if (tc1) {
							RTHOOK(141);
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 135, dtype));
							*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)) = (EIF_INTEGER_32)ti4_4;
							RTHOOK(142);
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 136, dtype));
							*(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype)) = (EIF_INTEGER_32)ti4_4;
							RTHOOK(143);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 131, dtype));
							ui4_1 = (EIF_INTEGER_32)(ti4_4 - ((EIF_INTEGER_32) 1L));
							ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc3 = (EIF_INTEGER_32)ti4_4;
						}

						RTHOOK(144);
						(*(EIF_INTEGER_32 *)(Current + RTWA(2013, 133, dtype)))++;
						RTHOOK(145);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 149, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
					}

				}}

				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2013, 105, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		;
	}

	if (
		WDBG(RTUD(2013),"gelex")
	) {
		RTHOOK(146);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2013, 95, dtype))(Current);
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(147);
	RTLE;
	RTLO(15);
	RTEE;
}

void Fp1a79b (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("yy_nxt_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 117, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_chk_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 118, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_base_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 119, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_def_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 120, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_accept_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 123, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_state_stack_not_void", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2013, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2013, 130, dtype));
		tc1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2014 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

