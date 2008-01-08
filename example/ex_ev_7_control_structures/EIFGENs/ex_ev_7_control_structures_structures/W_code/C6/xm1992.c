/*
 * Code for class XM_WHITESPACE_NORMALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fofcbqk(EIF_REFERENCE);
extern EIF_UNION Foe4kh3(EIF_REFERENCE);
extern void Fofa0vb(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Foe7s57(EIF_REFERENCE);
extern void Foe8f3u(EIF_REFERENCE);
extern void Foe648l(EIF_REFERENCE);
extern void Fofbosy(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Foe821g(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Foe2mo8(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foe6iaz(EIF_REFERENCE, EIF_UNION);
extern void Fofadxp(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Foe9qz2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foe47fq(EIF_REFERENCE);
extern void Foe5vdc(EIF_REFERENCE);
extern void Fp04rwi(EIF_REFERENCE, int);
extern void EIF_Minit1992(void);

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

/* on_finish */

void Fofcbqk (EIF_REFERENCE Current)
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
	RTEAA("on_finish", RTUD(1991), Current, 0, 0, 28314);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 91, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1907, 5, RTUD(1907)))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* default_space_preserved */

EIF_UNION Foe4kh3 (EIF_REFERENCE Current)
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
	RTEAA("default_space_preserved", RTUD(1991), Current, 0, 0, 28317);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* on_attribute */

void Fofa0vb (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg4 arg4x.value.EIF_REFERENCE_value
#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(12);
	RTLR(11,ur4);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(1,arg1);
	RTLR(5,arg2);
	RTLR(2,arg3);
	RTLR(4,arg4);
	RTLR(0,Current);
	RTLR(9,tr3);
	RTLR(3,ur1);
	RTLR(8,ur2);
	RTLR(10,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("on_attribute", RTUD(1991), Current, 0, 4, 28327);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 19, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 20, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	tc1 = '\0';
	tc2 = '\0';
	ur1 = RTCCL(arg2);
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 74, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 57, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg2);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (tc2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 38, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg3);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, 57, "remove", tr1))(tr1);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 7, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		ur2 = RTCCL(arg4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr2))(tr2, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2329, 53, "force", tr1))(tr1, uc1x);
	}

	RTHOOK(7);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	ur4 = RTCCL(arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1907, 47, RTUD(1907)))(Current, ur1x, ur2x, ur3x, ur4x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* normalize_content_tail */

void Foe7s57 (EIF_REFERENCE Current)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("normalize_content_tail", RTUD(1991), Current, 1, 0, 28322);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("in_content", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 90, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
	RTNHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
	loc1 = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_LOOP) {
		RTHOOK(3);
		RTCS(EX_VAR);
		ti4_2 = loc1;
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	tc1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
		RTNHOOK(4);
		ui4_1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_3;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 92, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	while (!(tc1)) {
		RTHOOK(5);
		loc1--;
		if (RTAL & CK_LOOP) {
			RTHOOK(3);
			RTCS(EX_VAR);
			ti4_1 = loc1;
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			}
			else {
				RTCF;
			}
		}
		RTHOOK(4);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
			RTNHOOK(4);
			ui4_1 = loc1;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_3;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 92, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		;
	}


	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)NULL;
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
		RTNHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
	if ((EIF_BOOLEAN)(loc1 < ti4_1)) {
		RTHOOK(9);
		tr1 = RTLNSMART(RTWCT(1991, 88, Current));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1986, 33, "item", tr2));
		RTNHOOK(9);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", tr3))(tr3, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1986, 32, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
}

/* on_start */

void Foe8f3u (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
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
	RTEAA("on_start", RTUD(1991), Current, 0, 0, 28323);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(1991, 87, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2329, 42, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 89, dtype))(Current)).value.EIF_BOOLEAN_value);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2329, 53, "force", tr1))(tr1, uc1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1907, 4, RTUD(1907)))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* normalize_content_head */

void Foe648l (EIF_REFERENCE Current)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
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

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(0,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("normalize_content_head", RTUD(1991), Current, 1, 0, 28321);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("in_content", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 90, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(3);
		RTCS(EX_VAR);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
		RTNHOOK(3);
		ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
		ti4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_3 - loc1) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
	RTNHOOK(4);
	ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
	if (!(EIF_BOOLEAN)(loc1 > ti4_3)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
		RTNHOOK(4);
		ui4_1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_3;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 92, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	while (!(tc1)) {
		RTHOOK(5);
		loc1++;
		if (RTAL & CK_LOOP) {
			RTHOOK(3);
			RTCS(EX_VAR);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
			RTNHOOK(3);
			ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
			ti4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_3 - loc1) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			}
			else {
				RTCF;
			}
		}
		RTHOOK(4);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
		RTNHOOK(4);
		ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
		if (!(EIF_BOOLEAN)(loc1 > ti4_3)) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
			RTNHOOK(4);
			ui4_1 = loc1;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_3;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 92, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		;
	}


	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
	RTNHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
	if ((EIF_BOOLEAN)(loc1 > ti4_1)) {
		RTHOOK(7);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)NULL;
	} else {
		RTHOOK(8);
	if ((EIF_BOOLEAN)(loc1 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(9);
		tr1 = RTLNSMART(RTWCT(1991, 88, Current));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1986, 33, "item", tr2));
		RTNHOOK(9);
		ui4_1 = loc1;
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr4 = *(EIF_REFERENCE *)(tr2 + RTVA(1986, 33, "item", tr2));
		RTNHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(tr4 + RTVPA(13, 118, "count", tr4));
		ui4_2 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", tr3))(tr3, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1986, 32, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("no_whitespace_at_head", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 90, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
			RTNHOOK(10);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 92, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(3);
	RTEE;
}

/* on_end_tag */

void Fofbosy (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
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
	RTEAA("on_end_tag", RTUD(1991), Current, 0, 3, 28313);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 19, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 20, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 91, dtype))(Current);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, 57, "remove", tr1))(tr1);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1907, 43, RTUD(1907)))(Current, ur1x, ur2x, ur3x);
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

void Foe821g (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("on_processing_instruction", RTUD(1991), Current, 0, 2, 28324);
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 91, dtype))(Current);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1907, 28, RTUD(1907)))(Current, ur1x, ur2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* on_content */

void Foe2mo8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_content", RTUD(1991), Current, 0, 1, 28316);
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
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2329, 45, "item", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 21, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1904, 41, "on_content", tr1))(tr1, ur1x);
	} else {

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 90, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
			RTNHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr3 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
			RTNHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVPA(13, 118, "count", tr3));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", tr2))(tr2, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 92, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(7);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1986, 37, "append_string", tr1))(tr1, ur1x);
			} else {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 21, dtype));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
				tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1986, 33, "item", tr2));
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1904, 41, "on_content", tr1))(tr1, ur1x);
				RTHOOK(9);
				tr1 = RTLNSMART(RTWCT(1991, 88, Current));
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1986, 32, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(9);
				RTCI2(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			}

		} else {
			RTHOOK(10);
			tr1 = RTLNSMART(RTWCT(1991, 88, Current));
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1986, 32, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(10);
			RTCI2(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 93, dtype))(Current);
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

/* is_space */

EIF_UNION Foe6iaz (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("is_space", RTUD(1991), Current, 0, 1, 28320);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tc1 = '\01';
	tc2 = '\01';
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 76, dtype))(Current)).value.EIF_CHARACTER_value);
	ti4_1 = (EIF_INTEGER_32) (tc3);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 77, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc3);
		tc2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 78, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc2);
		tc1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc1) {
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 79, dtype))(Current)).value.EIF_CHARACTER_value);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		Result = (EIF_BOOLEAN)(arg1 == ti4_1);
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

/* on_start_tag */

void Fofadxp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(1,arg1);
	RTLR(6,arg2);
	RTLR(2,arg3);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("on_start_tag", RTUD(1991), Current, 0, 3, 28326);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 19, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1991, 20, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 91, dtype))(Current);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1991, 87, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2329, 45, "item", tr2))(tr2)).value.EIF_BOOLEAN_value);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2329, 53, "force", tr1))(tr1, uc1x);
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

/* on_comment */

void Foe9qz2 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_comment", RTUD(1991), Current, 0, 1, 28325);
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 91, dtype))(Current);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1907, 27, RTUD(1907)))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* in_content */

EIF_UNION Foe47fq (EIF_REFERENCE Current)
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
	RTEAA("in_content", RTUD(1991), Current, 0, 0, 28318);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, Dtype(Current)));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(tr1 != NULL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* end_content */

void Foe5vdc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("end_content", RTUD(1991), Current, 0, 0, 28319);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1991, 90, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1991, 94, dtype))(Current);

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 21, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1986, 33, "item", tr2));
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1904, 41, "on_content", tr1))(tr1, ur1x);
			RTHOOK(5);
			RTAR(Current, NULL);
			*(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype)) = (EIF_REFERENCE)NULL;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("last_content_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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

void Fp04rwi (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("last_content_not_empty", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
	if (!(EIF_BOOLEAN)(tr1 == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1991, 88, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1986, 33, "item", tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
		tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1992 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

