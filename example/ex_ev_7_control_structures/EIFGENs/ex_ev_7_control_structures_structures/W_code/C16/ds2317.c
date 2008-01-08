/*
 * Code for class DS_LINKED_QUEUE [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo1uskt(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo1rjwp(EIF_REFERENCE);
extern void Fo1oa7l(EIF_REFERENCE);
extern void Fo1oy47(EIF_REFERENCE);
extern void Fo1pl2u(EIF_REFERENCE);
extern EIF_UNION Fo1r6ub(EIF_REFERENCE);
extern EIF_UNION Fo1p80g(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo1t4m6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo1qwy2(EIF_REFERENCE, EIF_UNION);
extern void Fo1vfif(EIF_REFERENCE, EIF_UNION);
extern void Fo1v2f1(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo1sury(EIF_REFERENCE, EIF_UNION);
extern void Fo1x_8x(EIF_REFERENCE, EIF_UNION);
extern void Fo1yn6j(EIF_REFERENCE, EIF_UNION);
extern void Fo1wqdo(EIF_REFERENCE, EIF_UNION);
extern void Fo1xdba(EIF_REFERENCE);
extern void Fo1za35(EIF_REFERENCE);
extern void Fo1thpk(EIF_REFERENCE, EIF_UNION);
extern void Fp1ni9b(EIF_REFERENCE, int);
extern void EIF_Minit2317(void);

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

/* put */

void Fo1uskt (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("put", RTUD(2316), Current, 1, 1, 29635);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 41, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2316, 55, Current));
	uc1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype));
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", tr1))(tr1, ur1x);
		RTHOOK(8);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(9);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype)))++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("added", EX_POST);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 40, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* item */

EIF_UNION Fo1rjwp (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER Result = (EIF_CHARACTER) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_CHAR, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("item", RTUD(2316), Current, 0, 0, 29630);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", tr1))(tr1)).value.EIF_CHARACTER_value);
	Result = (EIF_CHARACTER)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_CHAR; r.value.EIF_CHARACTER_value = Result; return r; }
}

/* make */

void Fo1oa7l (EIF_REFERENCE Current)
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
	RTEAA("make", RTUD(2316), Current, 0, 0, 29625);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make_equal */

void Fo1oy47 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_equal", RTUD(2316), Current, 0, 0, 29626);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(2316, 24, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2316, 24, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
}

/* make_default */

void Fo1pl2u (EIF_REFERENCE Current)
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
	RTEAA("make_default", RTUD(2316), Current, 0, 0, 29627);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2316, 37, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
}

/* count */

EIF_UNION Fo1r6ub (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2316,43, Dtype(Current)));
	return r;
}

/* has */

EIF_UNION Fo1p80g (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(0,loc2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has", RTUD(2316), Current, 2, 1, 29628);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 24, dtype));

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {

		RTHOOK(4);
		while (!((EIF_BOOLEAN)(loc2 == NULL))) {

			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc2))(loc2)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			uc2 = arg1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2322, 31, "test", loc1))(loc1, uc1x, uc2x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(6);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(7);
				loc2 = (EIF_REFERENCE)NULL;
			} else {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2327, 34, "right", loc2));
				loc2 = (EIF_REFERENCE)RTCCL(tr1);
			}

			RTHOOK(4);
			;
		}

	} else {

		RTHOOK(9);
		while (!((EIF_BOOLEAN)(loc2 == NULL))) {

			RTHOOK(10);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc2))(loc2)).value.EIF_CHARACTER_value);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(11);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(12);
				loc2 = (EIF_REFERENCE)NULL;
			} else {
				RTHOOK(13);
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2327, 34, "right", loc2));
				loc2 = (EIF_REFERENCE)RTCCL(tr1);
			}

			RTHOOK(9);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_equal */

EIF_UNION Fo1t4m6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("is_equal", RTUD(2316), Current, 2, 1, 29634);
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
	if (RTCEQ(Current, arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 17, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2316, 43, "count", arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
			tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
	if (tc1) {

		RTHOOK(5);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2316, 55, "first_cell", arg1));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 == NULL))) {

			RTHOOK(9);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc1))(loc1)).value.EIF_CHARACTER_value);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc2))(loc2)).value.EIF_CHARACTER_value);
			if ((EIF_BOOLEAN)(tc1 != tc2)) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_REFERENCE)NULL;
			} else {
				RTHOOK(12);
				tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2327, 34, "right", loc1));
				loc1 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(13);
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2327, 34, "right", loc2));
				loc2 = (EIF_REFERENCE)RTCCL(tr1);
			}

			RTHOOK(8);
			;
		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2316, 46, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 20, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = Result;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* extendible */

EIF_UNION Fo1qwy2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTEAA("extendible", RTUD(2316), Current, 0, 1, 29629);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 1)) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* force */

void Fo1vfif (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("force", RTUD(2316), Current, 1, 1, 29636);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(2316, 55, Current));
	uc1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype));
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", tr1))(tr1, ur1x);
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(8);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype)))++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("added", EX_POST);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 40, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* extend */

void Fo1v2f1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
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
	RTLI(8);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,ur1);
	RTLR(4,loc1);
	RTLR(6,loc2);
	RTLR(5,loc3);
	RTLR(2,loc4);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("extend", RTUD(2316), Current, 4, 1, 29637);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 41, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 22, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 46, "new_cursor", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc4 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2326, 42, "start", loc4))(loc4);
		RTHOOK(6);
		tr1 = RTLNSMART(RTWCT(2316, 55, Current));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 1, "item", loc4))(loc4)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
		RTNHOOK(6);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		loc3 = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(8);
		loc2 = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2326, 43, "forth", loc4))(loc4);
		RTHOOK(10);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 41, "after", loc4))(loc4)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(11);
			tr1 = RTLNSMART(RTWCT(2316, 55, Current));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 1, "item", loc4))(loc4)).value.EIF_CHARACTER_value);
			uc1 = tc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
			RTNHOOK(11);
			RTCI2(tr1);
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(12);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", loc2))(loc2, ur1x);
			RTHOOK(13);
			loc2 = (EIF_REFERENCE)RTCCL(loc1);
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2326, 43, "forth", loc4))(loc4);
			RTHOOK(10);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 41, "after", loc4))(loc4)).value.EIF_BOOLEAN_value);
			;
		}


		RTHOOK(15);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(16);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
		} else {
			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype));
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", tr1))(tr1, ur1x);
		}

		RTHOOK(18);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
		RTHOOK(19);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype))) += ti4_3;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

/* occurrences */

EIF_UNION Fo1sury (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(0,loc2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("occurrences", RTUD(2316), Current, 2, 1, 29632);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 24, dtype));

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {

		RTHOOK(4);
		while (!((EIF_BOOLEAN)(loc2 == NULL))) {

			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc2))(loc2)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			uc2 = arg1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2322, 31, "test", loc1))(loc1, uc1x, uc2x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(6);
				Result++;
			}

			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2327, 34, "right", loc2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(4);
			;
		}

	} else {

		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc2 == NULL))) {

			RTHOOK(9);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc2))(loc2)).value.EIF_CHARACTER_value);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(10);
				Result++;
			}

			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2327, 34, "right", loc2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("has", EX_POST);
		tc1 = '\01';
		uc1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 40, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* prune */

void Fo1x_8x (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("prune", RTUD(2316), Current, 2, 1, 29640);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
	if ((EIF_BOOLEAN)(arg1 == ti4_2)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2316, 54, dtype))(Current);
	} else {
		RTHOOK(4);
		loc2 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));

		RTHOOK(5);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		while (!((EIF_BOOLEAN)(loc1 > arg1))) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2327, 34, "right", loc2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(8);
			loc1++;
			RTHOOK(6);
			;
		}

		RTHOOK(9);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
		RTHOOK(10);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype))) -= arg1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - arg1))) {
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

/* keep */

void Fo1yn6j (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("keep", RTUD(2316), Current, 0, 1, 29641);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
	ui4_1 = (EIF_INTEGER_32)(ti4_1 - arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 52, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* append */

void Fo1wqdo (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
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
	RTLI(8);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,ur1);
	RTLR(4,loc1);
	RTLR(6,loc2);
	RTLR(5,loc3);
	RTLR(2,loc4);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("append", RTUD(2316), Current, 4, 1, 29638);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 22, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 46, "new_cursor", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc4 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2326, 42, "start", loc4))(loc4);
		RTHOOK(5);
		tr1 = RTLNSMART(RTWCT(2316, 55, Current));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 1, "item", loc4))(loc4)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
		RTNHOOK(5);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		loc3 = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(7);
		loc2 = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2326, 43, "forth", loc4))(loc4);
		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 41, "after", loc4))(loc4)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(10);
			tr1 = RTLNSMART(RTWCT(2316, 55, Current));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 1, "item", loc4))(loc4)).value.EIF_CHARACTER_value);
			uc1 = tc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
			RTNHOOK(10);
			RTCI2(tr1);
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(11);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", loc2))(loc2, ur1x);
			RTHOOK(12);
			loc2 = (EIF_REFERENCE)RTCCL(loc1);
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2326, 43, "forth", loc4))(loc4);
			RTHOOK(9);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2326, 41, "after", loc4))(loc4)).value.EIF_BOOLEAN_value);
			;
		}


		RTHOOK(14);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(15);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
		} else {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype));
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", tr1))(tr1, ur1x);
		}

		RTHOOK(17);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
		RTHOOK(18);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype))) += ti4_3;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2323, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

/* remove */

void Fo1xdba (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
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
	RTEAA("remove", RTUD(2316), Current, 0, 0, 29639);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2316, 54, dtype))(Current);
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2327, 34, "right", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(5);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype)))--;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype));
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
	RTLO(2);
	RTEE;
}

/* wipe_out */

void Fo1za35 (EIF_REFERENCE Current)
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
	RTEAA("wipe_out", RTUD(2316), Current, 0, 0, 29642);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2316, 43, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("wiped_out", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
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
}

/* copy */

void Fo1thpk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(3,loc3);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("copy", RTUD(2316), Current, 3, 1, 29633);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 13, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 31, dtype))(Current, ur1x);

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2316, 27, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {

			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2316, 55, "first_cell", arg1));
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(7);
			tr1 = RTLNSMART(RTWCT(2316, 55, Current));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc3))(loc3)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
			RTNHOOK(7);
			RTCI2(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(8);
			loc1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc3 + RTVA(2327, 34, "right", loc3));
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			while (!((EIF_BOOLEAN)(loc3 == NULL))) {
				RTHOOK(11);
				tr1 = RTLNSMART(RTWCT(2316, 55, Current));
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2327, 2, "item", loc3))(loc3)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2327, 4, Dtype(tr1)))(tr1, uc1x);
				RTNHOOK(11);
				RTCI2(tr1);
				loc2 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(12);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2327, 35, "put_right", loc1))(loc1, ur1x);
				RTHOOK(13);
				loc1 = (EIF_REFERENCE)RTCCL(loc2);
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(loc3 + RTVA(2327, 34, "right", loc3));
				loc3 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(10);
				;
			}

			RTHOOK(15);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2316, 46, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

void Fp1ni9b (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("first_cell", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 55, dtype));
	if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(tr1 == NULL))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("last_cell", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2316, 27, dtype))(Current)).value.EIF_BOOLEAN_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2316, 56, dtype));
	if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(tr1 == NULL))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2317 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

