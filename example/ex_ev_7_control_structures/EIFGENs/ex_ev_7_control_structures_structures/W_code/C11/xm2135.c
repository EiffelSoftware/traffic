/*
 * Code for class XM_EIFFEL_ENTITY_DEF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpvq_iv(EIF_REFERENCE);
extern EIF_UNION Fpvm3w4(EIF_REFERENCE);
extern void Fpvqck8(EIF_REFERENCE);
extern void Fpvhahj(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpvhye5(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpvilcs(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpvki5n(EIF_REFERENCE);
extern EIF_UNION Fpvoesd(EIF_REFERENCE);
extern EIF_UNION Fpvo1p_(EIF_REFERENCE);
extern EIF_UNION Fpvjv70(EIF_REFERENCE);
extern void Fpvnrur(EIF_REFERENCE);
extern void Fp1672a(EIF_REFERENCE, int);
extern void EIF_Minit2135(void);

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

void Fpvq_iv (EIF_REFERENCE Current)
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
	RTEAA("reset", RTUD(2134), Current, 0, 0, 31428);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2132, 104, RTUD(2132)))(Current);
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(2134, 376, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* hash_code */

EIF_UNION Fpvm3w4 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
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
	RTEAA("hash_code", RTUD(2134), Current, 0, 0, 31423);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)ti4_1;
	} else {
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2085, 37, "hash_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)ti4_1;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* read_token */

void Fpvqck8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTEAA("read_token", RTUD(2134), Current, 4, 0, 31427);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2132, 364, RTUD(2132)))(Current);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2134, 376, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current + RTWA(2134, 376, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(4);
		tc1 = '\0';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 111, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tc1) {

			RTHOOK(5);
			tc1 = '\01';
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 93, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (!tc2) {
				tc1 = loc1;
			}
			while (!(tc1)) {
				RTHOOK(6);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2132, 364, RTUD(2132)))(Current);

				RTHOOK(7);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 113, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(8);
					loc2++;
					RTHOOK(9);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				} else {
					RTHOOK(10);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 114, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(11);
					loc3++;
					RTHOOK(12);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				} else {
					RTHOOK(13);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 140, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(14);
					loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) !loc4;
					RTHOOK(15);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				} else {
					RTHOOK(16);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 169, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				} else {
					RTHOOK(17);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 116, dtype))(Current)).value.EIF_INTEGER_32_value);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 347, dtype))(Current)).value.EIF_INTEGER_32_value);
					ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 119, dtype))(Current)).value.EIF_INTEGER_32_value);
					ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 121, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ti4_2) || (EIF_BOOLEAN)(ti4_3 == ti4_4)) || (EIF_BOOLEAN)(ti4_5 == ti4_6)) || (EIF_BOOLEAN)(ti4_7 == ti4_8))) {
					RTHOOK(18);
					loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				} else {
					RTHOOK(19);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2134, 79, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {

					RTHOOK(20);
					if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(loc3 <= ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(21);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2132, 364, RTUD(2132)))(Current);
					}

					RTHOOK(22);
					loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				} else {
					RTHOOK(23);
					loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				}}}}}}

				RTHOOK(5);
				tc1 = '\01';
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 93, dtype))(Current)).value.EIF_BOOLEAN_value);
				if (!tc2) {
					tc1 = loc1;
				}
				;
			}

		}

	}


	RTHOOK(24);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 93, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		RTHOOK(25);
		*(EIF_BOOLEAN *)(Current + RTWA(2134, 376, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTLO(6);
	RTEE;
}

/* make_literal */

void Fpvhahj (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_literal", RTUD(2134), Current, 0, 2, 31417);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2134, 369, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2134, 83, dtype))(Current);
	RTHOOK(6);
	tr1 = RTLN(RTUD(1862));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_literal", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 368, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
		if (RTCEQ(tr1, arg2)) {
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
#undef arg2
#undef arg1
}

/* make_external */

void Fpvhye5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_external", RTUD(2134), Current, 0, 2, 31418);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_resolver_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2134, 83, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_external", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2134, 369, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("external_id_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("resolver_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* make_def */

void Fpvilcs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(5,Current);
	RTLR(2,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_def", RTUD(2134), Current, 0, 1, 31419);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2134, 367, "is_external", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2134, 366, "resolver", arg1));
		ur1 = RTCCL(tr1);
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2134, 371, "external_id", arg1));
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2134, 364, dtype))(Current, ur1x, ur2x);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2134, 369, "literal_name", arg1));
		ur1 = RTCCL(tr1);
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2134, 370, "value", arg1));
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2134, 363, dtype))(Current, ur1x, ur2x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_external", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2134, 367, "is_external", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_literal", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 368, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2134, 368, "is_literal", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2134, 370, "value", arg1));
		if (RTCEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* is_literal */

EIF_UNION Fpvki5n (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_literal", RTUD(2134), Current, 0, 0, 31421);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tc1)) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* normalized_newline */

EIF_UNION Fpvoesd (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("normalized_newline", RTUD(2134), Current, 0, 0, 31425);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 368, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 298, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	} else {
		RTHOOK(3);
		Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2132, 101, RTUD(2132)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("normalized_newline_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* has_normalized_newline */

EIF_UNION Fpvo1p_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("has_normalized_newline", RTUD(2134), Current, 0, 0, 31426);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 368, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_external */

EIF_UNION Fpvjv70 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_external", RTUD(2134), Current, 0, 0, 31420);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, Dtype(Current)));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(tr1 != NULL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* apply_input_buffer */

void Fpvnrur (EIF_REFERENCE Current)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(2,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("apply_input_buffer", RTUD(2134), Current, 1, 0, 31424);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2134, 376, dtype));
	if (tc1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 106, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2134, 105, dtype))(Current, ur1x);
	} else {
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 368, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2134, 378, dtype))(Current);
		RTHOOK(5);
		tr1 = RTLN(RTUD(1990));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 115, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
		ur1 = RTCCL(tr3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1987, 47, "to_utf8", tr2))(tr2, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1990, 39, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2134, 84, dtype))(Current, ur1x);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 369, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2134, 89, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2134, 378, dtype))(Current);

		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2085, 33, "is_public", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(2085, 36, "public_id", tr2));
			ur1 = RTCCL(tr3);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
			tr4 = *(EIF_REFERENCE *)(tr2 + RTVA(2085, 35, "system_id", tr2));
			ur2 = RTCCL(tr4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1861, 32, "resolve_public", tr1))(tr1, ur1x, ur2x);
		} else {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(2085, 35, "system_id", tr2));
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1861, 31, "resolve", tr1))(tr1, ur1x);
		}


		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1861, 35, "has_error", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2134, 85, dtype))(Current, ur1x);
		} else {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1861, 36, "last_error", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2134, 105, dtype))(Current, ur1x);
		}

	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(3);
	RTEE;
}

void Fp1672a (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("value_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2134, 371, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) || (EIF_BOOLEAN)(tr2 != NULL))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("value_name_void_consistent", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 370, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2134, 369, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) == (EIF_BOOLEAN)(tr2 == NULL))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("resolver_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2134, 366, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("type", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 368, dtype))(Current)).value.EIF_BOOLEAN_value);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2134, 367, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (((tc1) != (tc2))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2135 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

