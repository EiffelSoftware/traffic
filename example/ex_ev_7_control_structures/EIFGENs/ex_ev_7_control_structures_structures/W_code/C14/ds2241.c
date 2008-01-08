/*
 * Code for class DS_BILINKED_LIST [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo_40rg(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo_79fk(EIF_REFERENCE, EIF_UNION);
extern void Fo_5oo2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo_8xc6(EIF_REFERENCE, EIF_UNION);
extern void Fo0au51(EIF_REFERENCE, EIF_UNION);
extern void Fo_968f(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo_9kat(EIF_REFERENCE, EIF_UNION);
extern void Fo_6bmp(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo_6zkb(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo0cszx(EIF_REFERENCE, EIF_UNION);
extern void Fo0dfxj(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo0b41a(EIF_REFERENCE, EIF_UNION);
extern void Fo0d2u5(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo_7mhy(EIF_REFERENCE);
extern EIF_UNION Fo_4dtu(EIF_REFERENCE);
extern void Fp1mv9n(EIF_REFERENCE, int);
extern void EIF_Minit2241(void);

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

/* put_left_cursor */

void Fo_40rg (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(3,arg1);
	RTLR(1,arg2);
	RTLR(0,Current);
	RTLR(6,loc1);
	RTLR(4,loc2);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("put_left_cursor", RTUD(2240), Current, 2, 2, 29528);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 41, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_before", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 20, "before", arg2))(arg2)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(arg2 + RTVA(2241, 11, "after", arg2));
	if (tc1) {
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 84, dtype))(Current, ur1x);
	} else {
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2241, 45, "is_first", arg2))(arg2)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(8);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 145, dtype))(Current, ur1x);
	} else {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(2241, 75, "current_cell", arg2));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		tr1 = RTLNSMART(RTWCT(2240, 158, Current));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2242, 4, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(10);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
		RTNHOOK(11);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
		RTHOOK(12);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc1))(loc1, ur1x);
		RTHOOK(13);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype)))++;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* remove_at_cursor */

void Fo_79fk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(5,loc2);
	RTLR(1,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("remove_at_cursor", RTUD(2240), Current, 2, 1, 29533);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 46, "off", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2241, 45, "is_first", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 38, dtype))(Current);
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2241, 36, "is_last", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 152, dtype))(Current);
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2241, 75, "current_cell", arg1));
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2242, 9, "right", loc1));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2240, 116, dtype))(Current, ur1x, ur2x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2242, 36, "left", loc1));
		RTNHOOK(11);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
		RTHOOK(12);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype)))--;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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
#undef arg1
}

/* force_left_cursor */

void Fo_5oo2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(3,arg1);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(6,loc1);
	RTLR(4,loc2);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("force_left_cursor", RTUD(2240), Current, 2, 2, 29529);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_before", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 20, "before", arg2))(arg2)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(arg2 + RTVA(2241, 11, "after", arg2));
	if (tc1) {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 84, dtype))(Current, ur1x);
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2241, 45, "is_first", arg2))(arg2)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(7);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 145, dtype))(Current, ur1x);
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(2241, 75, "current_cell", arg2));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		tr1 = RTLNSMART(RTWCT(2240, 158, Current));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2242, 4, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
		RTNHOOK(10);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
		RTHOOK(11);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc1))(loc1, ur1x);
		RTHOOK(12);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype)))++;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* remove_left_cursor */

void Fo_8xc6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(5,loc2);
	RTLR(2,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("remove_left_cursor", RTUD(2240), Current, 2, 1, 29534);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2240, 117, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_before", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 20, "before", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_first", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 22, "is_first", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(6);
	tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(2241, 11, "after", arg1));
	if (tc1) {
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 152, dtype))(Current);
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2241, 75, "current_cell", arg1));
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2242, 36, "left", loc1));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2240, 116, dtype))(Current, ur1x, ur2x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			RTHOOK(13);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 159, dtype))(Current, ur1x);
		} else {
			RTHOOK(14);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 38, "put_left", loc1))(loc1, ur1x);
		}

		RTHOOK(15);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype)))--;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* keep_last */

void Fo0au51 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("keep_last", RTUD(2240), Current, 2, 1, 29537);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 119, dtype))(Current);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 12, dtype))(Current);
	} else {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 12, dtype))(Current);
		RTHOOK(7);
		loc2 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));

		RTHOOK(8);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(9);
		while (!((EIF_BOOLEAN)(loc1 == arg1))) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(11);
			loc1++;
			RTHOOK(9);
			;
		}

		RTHOOK(12);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 159, dtype))(Current, ur1x);
		RTHOOK(13);
		*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype)) = (EIF_INTEGER_32)arg1;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* prune_left_cursor */

void Fo_968f (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(5,loc3);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("prune_left_cursor", RTUD(2240), Current, 3, 2, 29536);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_n", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1)) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 52, "index", arg2))(arg2)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(arg1 < ti4_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(arg2 + RTVA(2241, 11, "after", arg2));
	if (tc1) {
		RTHOOK(5);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 155, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(6);
	if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(2241, 75, "current_cell", arg2));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 12, dtype))(Current);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
		loc3 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(10);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(11);
		while (!((EIF_BOOLEAN)(loc1 > arg1))) {
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(loc3 + RTVA(2242, 36, "left", loc3));
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(13);
			loc1++;
			RTHOOK(11);
			;
		}


		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(15);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 159, dtype))(Current, ur1x);
		} else {
			RTHOOK(16);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc3))(loc3, ur1x);
		}

		RTHOOK(17);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype))) -= arg1;
	} else {
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 12, dtype))(Current);
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - arg1))) {
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
#undef arg2
#undef arg1
}

/* prune_last */

void Fo_9kat (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("prune_last", RTUD(2240), Current, 2, 1, 29535);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 119, dtype))(Current);
	} else {
		RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 12, dtype))(Current);
		RTHOOK(6);
		loc2 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));

		RTHOOK(7);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc1 > arg1))) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			loc1++;
			RTHOOK(8);
			;
		}

		RTHOOK(11);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 141, dtype))(Current, ur1x);
		RTHOOK(12);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype))) -= arg1;
	} else {
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 12, dtype))(Current);
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - arg1))) {
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
#undef arg1
}

/* extend_left_cursor */

void Fo_6bmp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(5,tr1);
	RTLR(7,tr2);
	RTLR(0,arg1);
	RTLR(2,arg2);
	RTLR(8,loc4);
	RTLR(1,Current);
	RTLR(4,loc1);
	RTLR(10,loc2);
	RTLR(6,loc3);
	RTLR(3,ur1);
	RTLR(9,loc5);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("extend_left_cursor", RTUD(2240), Current, 5, 2, 29530);
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
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 41, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_before", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 20, "before", arg2))(arg2)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 52, "index", arg2))(arg2)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		in_assertion = 0;
	}

	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 22, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 46, "new_cursor", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
		RTHOOK(9);
		tr1 = RTLNSMART(RTWCT(2240, 158, Current));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2242, 4, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		loc4 = (EIF_REFERENCE)RTCCL(loc3);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		RTHOOK(12);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(13);
			tr1 = RTLNSMART(RTWCT(2240, 158, Current));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2242, 4, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(13);
			RTCI2(tr1);
			loc5 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(14);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc4))(loc4, ur1x);
			RTHOOK(15);
			loc4 = (EIF_REFERENCE)RTCCL(loc5);
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
			RTHOOK(12);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
			;
		}


		RTHOOK(17);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2240, 117, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(18);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
			RTHOOK(19);
			RTAR(Current, loc4);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype)) = (EIF_REFERENCE)RTCCL(loc4);
		} else {
			RTHOOK(20);
			tc2 = *(EIF_BOOLEAN *)(arg2 + RTVA(2241, 11, "after", arg2));
		if (tc2) {
			RTHOOK(21);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
			RTHOOK(22);
			RTAR(Current, loc4);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype)) = (EIF_REFERENCE)RTCCL(loc4);
		} else {
			RTHOOK(23);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2241, 45, "is_first", arg2))(arg2)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc4))(loc4, ur1x);
			RTHOOK(25);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
		} else {
			RTHOOK(26);
			tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(2241, 75, "current_cell", arg2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(27);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
			RTNHOOK(27);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
			RTHOOK(28);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc4))(loc4, ur1x);
		}}}

		RTHOOK(29);
		ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype))) += ti4_5;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("same_order", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 22, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			ui4_1 = ti4_3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 2, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 45, "first", arg1))(arg1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			tc2 = RTCEQ(tr1, tr2);
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg2
#undef arg1
}

/* append_left_cursor */

void Fo_6zkb (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(5,tr1);
	RTLR(7,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(8,loc4);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(10,loc2);
	RTLR(6,loc3);
	RTLR(2,ur1);
	RTLR(9,loc5);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("append_left_cursor", RTUD(2240), Current, 5, 2, 29531);
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
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_before", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 20, "before", arg2))(arg2)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2160, 52, "index", arg2))(arg2)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		in_assertion = 0;
	}

	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 22, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 46, "new_cursor", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
		RTHOOK(8);
		tr1 = RTLNSMART(RTWCT(2240, 158, Current));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2242, 4, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(8);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		loc4 = (EIF_REFERENCE)RTCCL(loc3);
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		RTHOOK(11);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(12);
			tr1 = RTLNSMART(RTWCT(2240, 158, Current));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2242, 4, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12);
			RTCI2(tr1);
			loc5 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(13);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc4))(loc4, ur1x);
			RTHOOK(14);
			loc4 = (EIF_REFERENCE)RTCCL(loc5);
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
			RTHOOK(11);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
			;
		}


		RTHOOK(16);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2240, 117, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(17);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
			RTHOOK(18);
			RTAR(Current, loc4);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype)) = (EIF_REFERENCE)RTCCL(loc4);
		} else {
			RTHOOK(19);
			tc2 = *(EIF_BOOLEAN *)(arg2 + RTVA(2241, 11, "after", arg2));
		if (tc2) {
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
			RTHOOK(21);
			RTAR(Current, loc4);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype)) = (EIF_REFERENCE)RTCCL(loc4);
		} else {
			RTHOOK(22);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2241, 45, "is_first", arg2))(arg2)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(23);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc4))(loc4, ur1x);
			RTHOOK(24);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
		} else {
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(2241, 75, "current_cell", arg2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(26);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2242, 36, "left", loc2));
			RTNHOOK(26);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", tr1))(tr1, ur1x);
			RTHOOK(27);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2242, 37, "put_right", loc4))(loc4, ur1x);
		}}}

		RTHOOK(28);
		ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 69, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype))) += ti4_5;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("same_order", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 22, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			ui4_1 = ti4_3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 2, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2147, 45, "first", arg1))(arg1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			tc2 = RTCEQ(tr1, tr2);
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg2
#undef arg1
}

/* cursor_back */

void Fo0cszx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
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
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("cursor_back", RTUD(2240), Current, 3, 1, 29540);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_before", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 88, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(2241, 11, "after", arg1));
	if (tc1) {
		RTHOOK(5);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(6);
		loc3 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));
	} else {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2241, 75, "current_cell", arg1));
		RTNHOOK(7);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2242, 36, "left", tr1));
		loc3 = (EIF_REFERENCE)RTCCL(tr2);
	}

	RTHOOK(8);
	loc2 = (EIF_BOOLEAN)(EIF_BOOLEAN)(loc3 == NULL);
	RTHOOK(9);
	ur1 = RTCCL(loc3);
	uc1 = loc2;
	uc2 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2241, 66, "set", arg1))(arg1, ur1x, uc1x, uc2x);

	RTHOOK(10);
	if (loc2) {

		RTHOOK(11);
		if ((EIF_BOOLEAN) !loc1) {
			RTHOOK(12);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 104, dtype))(Current, ur1x);
		}

	} else {
		RTHOOK(13);
	if (loc1) {
		RTHOOK(14);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 93, dtype))(Current, ur1x);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* cursor_search_back */

void Fo0dfxj (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(6,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(5,loc2);
	RTLR(1,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTEAA("cursor_search_back", RTUD(2240), Current, 4, 2, 29541);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_off", EX_PRE);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!(EIF_BOOLEAN) !tc2) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 88, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2241, 75, "current_cell", arg1));
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	loc3 = (EIF_BOOLEAN)(EIF_BOOLEAN)(loc1 == NULL);
	RTHOOK(6);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2240, 52, dtype));

	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {

		RTHOOK(8);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2242, 2, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2152, 31, "test", loc2))(loc2, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		while (!(tc1)) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2242, 36, "left", loc1));
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(8);
			tc1 = '\01';
			if (!(EIF_BOOLEAN)(loc1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2242, 2, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(arg2);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2152, 31, "test", loc2))(loc2, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			;
		}

	} else {

		RTHOOK(10);
		tc2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2242, 2, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc2 = RTCEQ(tr1, arg2);
		}
		while (!(tc2)) {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2242, 36, "left", loc1));
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			tc2 = '\01';
			if (!(EIF_BOOLEAN)(loc1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2242, 2, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc2 = RTCEQ(tr1, arg2);
			}
			;
		}

	}

	RTHOOK(12);
	loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN)(loc1 == NULL);
	RTHOOK(13);
	ur1 = RTCCL(loc1);
	uc1 = loc4;
	uc2 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2241, 66, "set", arg1))(arg1, ur1x, uc1x, uc2x);

	RTHOOK(14);
	if (loc4) {

		RTHOOK(15);
		if ((EIF_BOOLEAN) !loc3) {
			RTHOOK(16);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 104, dtype))(Current, ur1x);
		}

	} else {
		RTHOOK(17);
	if (loc3) {
		RTHOOK(18);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 93, dtype))(Current, ur1x);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg2
#undef arg1
}

/* set_first_cell */

void Fo0b41a (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_first_cell", RTUD(2240), Current, 0, 1, 29539);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cell_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2242, 39, "forget_left", arg1))(arg1);
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("first_cell_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));
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

/* cursor_go_i_th */

void Fo0d2u5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(3,loc4);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTEAA("cursor_go_i_th", RTUD(2240), Current, 5, 2, 29542);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 5, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	RTHOOK(5);
	loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));

	RTHOOK(6);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2241, 72, "set_before", arg1))(arg1);
	} else {
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
	if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2241, 70, "set_after", arg1))(arg1);
	} else {

		RTHOOK(10);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(11);
			loc4 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));
		} else {
			RTHOOK(12);
		if ((EIF_BOOLEAN)(arg2 == loc3)) {
			RTHOOK(13);
			loc4 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));
		} else {
			RTHOOK(14);
			loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
			loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc2 - arg2) + ((EIF_INTEGER_32) 1L));

			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc2 < arg2)) {
				RTHOOK(16);
				loc4 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));

				RTHOOK(17);
				loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				RTHOOK(18);
				while (!((EIF_BOOLEAN)(loc1 == loc2))) {
					RTHOOK(19);
					tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(2242, 36, "left", loc4));
					loc4 = (EIF_REFERENCE)RTCCL(tr1);
					RTHOOK(20);
					loc1++;
					RTHOOK(18);
					;
				}

			} else {
				RTHOOK(21);
				loc4 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));

				RTHOOK(22);
				loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				RTHOOK(23);
				while (!((EIF_BOOLEAN)(loc1 == arg2))) {
					RTHOOK(24);
					tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(2242, 9, "right", loc4));
					loc4 = (EIF_REFERENCE)RTCCL(tr1);
					RTHOOK(25);
					loc1++;
					RTHOOK(23);
					;
				}

			}

		}}

		RTHOOK(26);
		ur1 = RTCCL(loc4);
		uc1 = (EIF_BOOLEAN) 0;
		uc2 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2241, 66, "set", arg1))(arg1, ur1x, uc1x, uc2x);
	}}


	RTHOOK(27);
	if ((EIF_BOOLEAN)(loc4 == NULL)) {

		RTHOOK(28);
		if ((EIF_BOOLEAN) !loc5) {
			RTHOOK(29);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 104, dtype))(Current, ur1x);
		}

	} else {
		RTHOOK(30);
	if (loc5) {
		RTHOOK(31);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 93, dtype))(Current, ur1x);
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("moved", EX_POST);
		ur1 = RTCCL(arg1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 102, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg2
#undef arg1
}

/* remove_last */

void Fo_7mhy (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
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
	RTEAA("remove_last", RTUD(2240), Current, 0, 0, 29532);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2240, 117, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 119, dtype))(Current);
	} else {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 39, dtype))(Current);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 131, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2242, 36, "left", tr1));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 141, dtype))(Current, ur1x);
		RTHOOK(6);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype)))--;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2240, 44, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(2);
	RTEE;
}

/* new_cursor */

EIF_UNION Fo_4dtu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("new_cursor", RTUD(2240), Current, 0, 0, 29527);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2240,2241,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2241, typarr);

		tr1 = RTLN(typres);

	}
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2241, 3, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_cursor", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2240, 113, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

void Fp1mv9n (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("first_constraint", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2240, 158, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2242, 36, "left", tr1));
		tc1 = (EIF_BOOLEAN)(tr2 == NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2241 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

