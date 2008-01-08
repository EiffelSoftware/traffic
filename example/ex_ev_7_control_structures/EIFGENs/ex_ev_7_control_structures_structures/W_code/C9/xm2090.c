/*
 * Code for class XM_PRETTY_PRINT_FILTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpg9_nk(EIF_REFERENCE, EIF_UNION);
extern void Fphbygf(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fphank6(EIF_REFERENCE, EIF_UNION);
extern void Fphbait(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpg9cpy(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpg8psb(EIF_REFERENCE, EIF_UNION);
extern void Fpg6rzg(EIF_REFERENCE);
extern void Fpg5g27(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpg357z(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpg530u(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpg71up(EIF_REFERENCE, EIF_UNION);
extern void Fpg7ew2(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpg4t5l(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2090(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* output_constant */

void Fpg9_nk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("output_constant", RTUD(2089), Current, 0, 1, 30726);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* output_name */

void Fphbygf (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(1,arg1);
	RTLR(0,arg2);
	RTLR(3,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("output_name", RTUD(2089), Current, 0, 2, 30729);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_local_part_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 85, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 63, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	}

	RTHOOK(5);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* output_quote_escaped */

void Fphank6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("output_quote_escaped", RTUD(2089), Current, 3, 1, 30727);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc3 = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCS(EX_LINV);
		if ((EIF_BOOLEAN)(loc1 <= loc2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(6);
	while (!((EIF_BOOLEAN)(loc2 > loc3))) {

		RTHOOK(7);
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 83, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_2 = (EIF_INTEGER_32) (tc1);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {

			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc1 < (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L)))) {
				RTHOOK(9);
				ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
				ui4_2 = (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 108, dtype))(Current, ur1x);
			}

			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 94, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32)loc2;
		}

		RTHOOK(12);
		loc2++;
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCS(EX_LINV);
			if ((EIF_BOOLEAN)(loc1 <= loc2)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(6);
		;
	}


	RTHOOK(13);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 108, dtype))(Current, ur1x);
	} else {
		RTHOOK(15);
	if ((EIF_BOOLEAN)(loc1 < (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(16);
		ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 108, dtype))(Current, ur1x);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* output_escaped */

void Fphbait (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("output_escaped", RTUD(2089), Current, 4, 1, 30728);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc3 = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCS(EX_LINV);
		if ((EIF_BOOLEAN)(loc1 <= loc2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(6);
	while (!((EIF_BOOLEAN)(loc2 > loc3))) {
		RTHOOK(7);
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc4 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(8);
		ui4_1 = loc4;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 104, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc1 < (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L)))) {
				RTHOOK(10);
				ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
				ui4_2 = (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
			}

			RTHOOK(11);
			ui4_1 = loc4;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 105, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
			RTHOOK(12);
			loc1 = (EIF_INTEGER_32)loc2;
		}

		RTHOOK(13);
		loc2++;
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCS(EX_LINV);
			if ((EIF_BOOLEAN)(loc1 <= loc2)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(6);
		;
	}


	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(15);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	} else {
		RTHOOK(16);
	if ((EIF_BOOLEAN)(loc1 < (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(17);
		ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

/* escaped_char */

EIF_UNION Fpg9cpy (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("escaped_char", RTUD(2089), Current, 0, 1, 30725);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_escaped", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 104, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 57, dtype))(Current)).value.EIF_CHARACTER_value);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(3);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 91, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 82, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc1);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(5);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 92, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 26, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc1);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(7);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 67, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	} else {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 86, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr2 = RTMS_EX_H("&#",2,9763);
		ur1 = tr2;
		tr3 = c_outi(arg1);
		ur2 = RTCCL(tr3);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 59, "concat", tr1))(tr1, ur1x, ur2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 86, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H(";",1,59);
		ur2 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 59, "concat", tr1))(tr1, ur1x, ur2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
	}}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_escaped */

EIF_UNION Fpg8psb (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_escaped", RTUD(2089), Current, 0, 1, 30724);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tc1 = '\01';
	tc2 = '\01';
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 57, dtype))(Current)).value.EIF_CHARACTER_value);
	ti4_1 = (EIF_INTEGER_32) (tc3);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 82, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc3);
		tc2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 26, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc2);
		tc1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc1) {
		Result = (EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 128L));
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* on_start_tag_finish */

void Fpg6rzg (EIF_REFERENCE Current)
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
	RTEAA("on_start_tag_finish", RTUD(2089), Current, 0, 0, 30721);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 60, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1907, 41, RTUD(1907)))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* on_start_tag */

void Fpg5g27 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(4,tr1);
	RTLR(1,arg1);
	RTLR(5,arg2);
	RTLR(2,arg3);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("on_start_tag", RTUD(2089), Current, 0, 3, 30719);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 20, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 21, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 59, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg2);
	ur2 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2089, 109, dtype))(Current, ur1x, ur2x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1907, 44, RTUD(1907)))(Current, ur1x, ur2x, ur3x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* on_processing_instruction */

void Fpg357z (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("on_processing_instruction", RTUD(2089), Current, 0, 2, 30717);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("content_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 9, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 47, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(8);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1907, 28, RTUD(1907)))(Current, ur1x, ur2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* on_attribute */

void Fpg530u (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg4 arg4x.value.EIF_REFERENCE_value
#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(9,ur4);
	RTLR(5,tr1);
	RTLR(1,arg1);
	RTLR(6,arg2);
	RTLR(2,arg3);
	RTLR(4,arg4);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("on_attribute", RTUD(2089), Current, 0, 4, 30720);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 20, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 21, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 15, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(5);
	ur1 = RTCCL(arg2);
	ur2 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2089, 109, dtype))(Current, ur1x, ur2x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(8);
	ur1 = RTCCL(arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 107, dtype))(Current, ur1x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(10);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	ur4 = RTCCL(arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1907, 47, RTUD(1907)))(Current, ur1x, ur2x, ur3x, ur4x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* on_content */

void Fpg71up (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_content", RTUD(2089), Current, 0, 1, 30723);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_empty", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 108, dtype))(Current, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1907, 29, RTUD(1907)))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* on_end_tag */

void Fpg7ew2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(4,tr1);
	RTLR(1,arg1);
	RTLR(5,arg2);
	RTLR(2,arg3);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("on_end_tag", RTUD(2089), Current, 0, 3, 30722);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 20, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 21, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 95, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg2);
	ur2 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2089, 109, dtype))(Current, ur1x, ur2x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 64, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1907, 43, RTUD(1907)))(Current, ur1x, ur2x, ur3x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* on_comment */

void Fpg4t5l (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_comment", RTUD(2089), Current, 0, 1, 30718);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 2, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 65, dtype))(Current, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2089, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2089, 106, dtype))(Current, ur1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1907, 27, RTUD(1907)))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit2090 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

