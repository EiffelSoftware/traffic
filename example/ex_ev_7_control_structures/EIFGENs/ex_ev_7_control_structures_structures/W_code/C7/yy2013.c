/*
 * Code for class YY_SCANNER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fomuu5t(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fomyqsj(EIF_REFERENCE);
extern void Fomz0ns(EIF_REFERENCE);
extern void Fomvh3f(EIF_REFERENCE);
extern void Fomv401(EIF_REFERENCE, EIF_UNION);
extern void Fomnqvz(EIF_REFERENCE);
extern EIF_UNION Fong4u6(EIF_REFERENCE);
extern EIF_UNION Fonhsst(EIF_REFERENCE);
extern EIF_UNION Fompoou(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fomm2yc(EIF_REFERENCE);
extern EIF_UNION Fom364r(EIF_REFERENCE);
extern EIF_UNION Fonghxk(EIF_REFERENCE);
extern void Fomxfxa(EIF_REFERENCE);
extern EIF_UNION Fonifqf(EIF_REFERENCE);
extern EIF_UNION Fomqbmg(EIF_REFERENCE);
extern void Fomtkak(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fom1md9(EIF_REFERENCE, EIF_UNION);
extern void Fom19bw(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fonmbb5(EIF_REFERENCE);
extern void Fomx2ux(EIF_REFERENCE, EIF_UNION);
extern void Fomt676(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fomo0q7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fomodtl(EIF_REFERENCE);
extern void Fom_ole(EIF_REFERENCE);
extern void Fomzdp5(EIF_REFERENCE);
extern void Fomwszo(EIF_REFERENCE, EIF_UNION);
extern void Fom6sv8(EIF_REFERENCE);
extern void Fommf_q(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fomqzj2(EIF_REFERENCE);
extern void Fom0bi0(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fomr9fb(EIF_REFERENCE);
extern EIF_UNION Fomrmhp(EIF_REFERENCE);
extern void Fom4u2d(EIF_REFERENCE);
extern void Fom5h__(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fomsxcy(EIF_REFERENCE);
extern void Fom54ym(EIF_REFERENCE, EIF_UNION);
extern void Fp1albo(EIF_REFERENCE, int);
extern void EIF_Minit2013(void);

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

/* append_text_substring_to_string */

void Fomuu5t (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("append_text_substring_to_string", RTUD(2012), Current, 0, 3, 28656);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 <= (EIF_INTEGER_32)(arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVPA(13, 118, "count", arg3));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg1 <= arg2)) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_2 + arg1) - ((EIF_INTEGER_32) 1L));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_3 + arg2) - ((EIF_INTEGER_32) 1L));
		ur1 = RTCCL(arg3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2000, 40, "append_substring_to_string", tr1))(tr1, ui4_1x, ui4_2x, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVPA(13, 118, "count", arg3));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + (EIF_INTEGER_32)((EIF_INTEGER_32)(arg2 - arg1) + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* flush_input_buffer */

void Fomyqsj (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("flush_input_buffer", RTUD(2012), Current, 0, 0, 28662);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1816, 49, "flush", tr1))(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 89, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("flushed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 35, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
}

/* yy_load_input_buffer */

void Fomz0ns (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("yy_load_input_buffer", RTUD(2012), Current, 0, 0, 28664);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1816, 34, "content", tr1));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2012, 91, dtype))(Current, ur1x);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 40, "index", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 38, "line", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 39, "column", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 37, "position", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("yy_content_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1816, 34, "content", tr2));
		if (RTCEQ(tr1, tr3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("yy_start_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 40, "index", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("yy_end_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 40, "index", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("yy_line_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 38, "line", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("yy_column_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 39, "column", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("yy_position_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 37, "position", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(2);
	RTEE;
}

/* more */

void Fomvh3f (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("more", RTUD(2012), Current, 0, 0, 28657);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(2012, 112, Dtype(Current))) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* less */

void Fomv401 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("less", RTUD(2012), Current, 3, 1, 28658);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 122, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + arg1);
		RTHOOK(5);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 - loc2);
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)) = (EIF_INTEGER_32)loc2;

		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype));
		if ((EIF_BOOLEAN)(loc1 < ti4_1)) {
			RTHOOK(8);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype))) -= loc1;
		} else {
			RTHOOK(9);
			loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype));
			RTHOOK(10);
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 76, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype)) = (EIF_INTEGER_32)ti4_1;
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 77, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)ti4_1;
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 101, dtype))(Current);
			RTHOOK(14);
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype)) = (EIF_INTEGER_32)loc3;
		}

	} else {
		RTHOOK(15);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + arg1);
	}

	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 78, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("text_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* reset */

void Fomnqvz (EIF_REFERENCE Current)
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
	RTEAA("reset", RTUD(2012), Current, 0, 0, 28645);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 104, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 76, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 77, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 78, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current + RTWA(2012, 112, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 114, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 115, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yyend_of_buffer_character */

EIF_UNION Fong4u6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\000';
	return r;
}
/* yyend_of_file_character */

EIF_UNION Fonhsst (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\377';
	return r;
}
/* text_substring */

EIF_UNION Fompoou (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(2,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("text_substring", RTUD(2012), Current, 0, 2, 28648);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("meaningful_start", EX_PRE);
		RTTE((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 <= (EIF_INTEGER_32)(arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("meaningful_end", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg2 < arg1)) {
		RTHOOK(5);
		tr1 = RTLN(RTUD(774));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 + arg1) - ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_2 + arg2) - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2000, 37, "substring", tr1))(tr1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("text_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("text_substring_empty", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)(arg1 > arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
			tc1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("definition", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)(arg1 <= arg2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 71, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", tr1))(tr1, ui4_1x, ui4_2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* yy_initialize */

void Fomm2yc (EIF_REFERENCE Current)
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
	RTEAA("yy_initialize", RTUD(2012), Current, 0, 0, 28644);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 92, dtype))(Current);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 104, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 76, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 77, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 78, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yy_at_beginning_of_line */

EIF_UNION Fom364r (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("yy_at_beginning_of_line", RTUD(2012), Current, 0, 0, 28669);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, Dtype(Current)));
	tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1816, 41, "beginning_of_line", tr1));
	if (tc1) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* yybuffer_capacity */

EIF_UNION Fonghxk (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 16384L);
	return r;
}
/* read_character */

void Fomxfxa (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER loc2 = (EIF_CHARACTER) 0;
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
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_CHAR, &loc2);
	RTEAA("read_character", RTUD(2012), Current, 2, 0, 28660);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		loc2 = (EIF_CHARACTER)tc1;
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		loc2 = (EIF_CHARACTER)tc1;
	}


	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 117, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(loc2 == tc1)) {

		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 35, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype)) = (EIF_INTEGER_32)ti4_1;
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 90, dtype))(Current);

			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
			tc1 = *(EIF_BOOLEAN *)(tr1 + RTVA(1816, 45, "filled", tr1));
			if ((EIF_BOOLEAN) !tc1) {

				RTHOOK(9);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 39, dtype))(Current)).value.EIF_BOOLEAN_value);
				if (tc1) {
					RTHOOK(10);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 118, dtype))(Current)).value.EIF_CHARACTER_value);
					*(EIF_CHARACTER *)(Current + RTWA(2012, 36, dtype)) = (EIF_CHARACTER)tc1;
				} else {
					RTHOOK(11);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 85, dtype))(Current);
				}

				RTHOOK(12);
				loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			}

		}

	}


	RTHOOK(13);
	if ((EIF_BOOLEAN) !loc1) {

		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
			ui4_1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			*(EIF_CHARACTER *)(Current + RTWA(2012, 36, dtype)) = (EIF_CHARACTER)tc1;
		} else {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
			ui4_1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			*(EIF_CHARACTER *)(Current + RTWA(2012, 36, dtype)) = (EIF_CHARACTER)tc1;
		}

		RTHOOK(17);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)))++;
		RTHOOK(18);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype)))++;

		RTHOOK(19);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2012, 36, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTHOOK(20);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype)))++;
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
			uc1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 44, "set_beginning_of_line", tr1))(tr1, uc1x);
		} else {
			RTHOOK(23);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)))++;
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
			uc1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 44, "set_beginning_of_line", tr1))(tr1, uc1x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTLO(4);
	RTEE;
}

/* yynew_line_character */

EIF_UNION Fonifqf (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\012';
	return r;
}
/* start_condition */

EIF_UNION Fomqbmg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("start_condition", RTUD(2012), Current, 0, 0, 28649);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 104, Dtype(Current)));
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(Result - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* set_start_condition */

void Fomtkak (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
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
	RTEAA("set_start_condition", RTUD(2012), Current, 0, 1, 28654);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_start_condition", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2012, 127, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 104, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(((EIF_INTEGER_32) 2L) * arg1) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("start_condition_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
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

/* yy_fixed_array */

EIF_UNION Fom1md9 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
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
	RTLR(5,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("yy_fixed_array", RTUD(2012), Current, 0, 1, 28667);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 20, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 33, "to_special", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* yy_array_subcopy */

void Fom19bw (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg5x.type == SK_REF) arg5x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_INTEGER_32_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_INTEGER_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
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
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTEAA("yy_array_subcopy", RTUD(2012), Current, 0, 5, 28668);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_same", EX_PRE);
		RTTE(!RTCEQ(arg1, arg2), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(4, 4, "lower", arg2));
		RTTE((EIF_BOOLEAN)(arg3 >= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVPA(4, 5, "upper", arg2));
		RTTE((EIF_BOOLEAN)(arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)(arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("index_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 4, "lower", arg1));
		RTTE((EIF_BOOLEAN)(arg5 >= ti4_1), label_1);
		RTCK;
		RTHOOK(8);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 5, "upper", arg1));
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_1 - arg5) >= (EIF_INTEGER_32)(arg4 - arg3)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 62, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(9);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2265, 36, "subcopy", tr1))(tr1, ur1x, ur2x, ui4_1x, ui4_2x, ui4_3x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* yy_dummy */

EIF_UNION Fonmbb5 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2147483647L);
	return r;
}
/* set_input_buffer */

void Fomx2ux (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	RTEAA("set_input_buffer", RTUD(2012), Current, 0, 1, 28661);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	if (!RTCEQ(arg1, tr1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 43, "set_index", tr1))(tr1, ui4_1x);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype));
		ui4_2 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1816, 42, "set_position", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(5);
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 89, dtype))(Current);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("input_buffer_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* append_text_to_string */

void Fomt676 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("append_text_to_string", RTUD(2012), Current, 0, 1, 28655);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	if ((EIF_BOOLEAN)(ti4_2 < ti4_3)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		ui4_2 = (EIF_INTEGER_32)(ti4_3 - ((EIF_INTEGER_32) 1L));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2000, 40, "append_substring_to_string", tr1))(tr1, ui4_1x, ui4_2x, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ti4_3))) {
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

/* text_item */

EIF_UNION Fomo0q7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER Result = (EIF_CHARACTER) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_CHAR, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("text_item", RTUD(2012), Current, 0, 1, 28647);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 + arg1) - ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		Result = (EIF_CHARACTER)tc1;
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 + arg1) - ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		Result = (EIF_CHARACTER)tc1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 71, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(Result == tc1)) {
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
	{ EIF_UNION r; r.type = SK_CHAR; r.value.EIF_CHARACTER_value = Result; return r; }
#undef arg1
}

/* text */

EIF_UNION Fomodtl (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
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
	RTEAA("text", RTUD(2012), Current, 0, 0, 28646);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		ui4_2 = (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2000, 37, "substring", tr1))(tr1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
	} else {
		RTHOOK(3);
		tr1 = RTLN(RTUD(774));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("text_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("correct_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 75, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* yy_refill_input_buffer */

void Fom_ole (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	RTEAA("yy_refill_input_buffer", RTUD(2012), Current, 1, 0, 28665);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("end_of_buffer_not_missed", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 35, "count", tr1));
		RTTE((EIF_BOOLEAN)(ti4_1 <= (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 43, "set_index", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1816, 48, "fill", tr1))(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1816, 34, "content", tr1));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2012, 91, dtype))(Current, ur1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 40, "index", tr1));
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - ti4_2) + loc1);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype)) = (EIF_INTEGER_32)loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
}

/* print_last_token */

void Fomzdp5 (EIF_REFERENCE Current)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	RTEAA("print_last_token", RTUD(2012), Current, 0, 0, 28663);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr1 = RTMS_EX_H("Last token code: ",17,1619278880);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 46, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	uc1 = (EIF_CHARACTER) '\012';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);

	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 122, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr1 = RTMS_EX_H("Last token line: ",17,1804699680);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 76, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr1 = RTMS_EX_H("\012Last token column: ",20,7670816);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 77, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		uc1 = (EIF_CHARACTER) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
	}


	RTHOOK(10);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 123, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr1 = RTMS_EX_H("Last token position: ",21,584845344);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(12);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(12);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 78, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(13);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(13);
		uc1 = (EIF_CHARACTER) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
	}

	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(14);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(14);
	tr1 = RTMS_EX_H("Last token text: ",17,1989152800);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);

	RTHOOK(15);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 46, dtype));
	switch (ti4_1) {
		case 0L:
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr1 = RTMS_EX_H("EOF token\012",10,1675200778);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
			break;
		case -1L:
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			tr1 = RTMS_EX_H("Error token\012",12,626631178);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
			break;
		case -2L:
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(18);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(18);
			tr1 = RTMS_EX_H("Unknown token\012",14,192392202);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
			break;
		default:
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(19);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(19);
			uc1 = (EIF_CHARACTER) '\"';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
			RTHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(20);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 71, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 19, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(21);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(21);
			tr1 = RTMS_EX_H("\"\012",2,8714);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
			break;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(2);
	RTEE;
}

/* unread_character */

void Fomwszo (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("unread_character", RTUD(2012), Current, 0, 1, 28659);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	if ((EIF_BOOLEAN)(ti4_1 <= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 43, "set_index", tr1))(tr1, ui4_1x);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1816, 52, "compact_right", tr1))(tr1);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1816, 34, "content", tr1));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2012, 91, dtype))(Current, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1816, 40, "index", tr1));
		*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(6);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype)))--;
	}

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
	uc1 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2000, 44, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* yy_set_line_column */

void Fom6sv8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER loc6 = (EIF_CHARACTER) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_CHAR, &loc6);
	RTEAA("yy_set_line_column", RTUD(2012), Current, 6, 0, 28673);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype));
	loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ti4_1);
	RTHOOK(3);
	while (!((EIF_BOOLEAN)((EIF_BOOLEAN)(loc1 < loc2) || loc5))) {

		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc6 = (EIF_CHARACTER)tc1;
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc6 = (EIF_CHARACTER)tc1;
		}


		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(loc6 == tc1)) {
			RTHOOK(8);
			loc3++;
			RTHOOK(9);
			loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(10);
			loc4++;
		}

		RTHOOK(11);
		loc1--;
		RTHOOK(3);
		;
	}


	RTHOOK(12);
	while (!((EIF_BOOLEAN)(loc1 < loc2))) {

		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc6 = (EIF_CHARACTER)tc1;
		} else {
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc6 = (EIF_CHARACTER)tc1;
		}


		RTHOOK(16);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(loc6 == tc1)) {
			RTHOOK(17);
			loc3++;
		}

		RTHOOK(18);
		loc1--;
		RTHOOK(12);
		;
	}


	RTHOOK(19);
	if (loc5) {
		RTHOOK(20);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype))) += loc3;
		RTHOOK(21);
		*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(22);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype))) += loc4;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(8);
	RTEE;
}

/* make_with_buffer */

void Fommf_q (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("make_with_buffer", RTUD(2012), Current, 0, 1, 28643);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 69, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2012, 89, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("input_buffer_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* text_count */

EIF_UNION Fomqzj2 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("text_count", RTUD(2012), Current, 0, 0, 28650);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(Result - ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_count", EX_POST);
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

/* yy_set_content */

void Fom0bi0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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
	RTEAA("yy_set_content", RTUD(2012), Current, 0, 1, 28666);
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
	*(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2000, 39, "as_special", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype)) = (EIF_REFERENCE)tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("yy_content_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
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

/* column */

EIF_UNION Fomr9fb (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2012,77, Dtype(Current)));
	return r;
}

/* line */

EIF_UNION Fomrmhp (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2012,76, Dtype(Current)));
	return r;
}

/* yy_set_beginning_of_line */

void Fom4u2d (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("yy_set_beginning_of_line", RTUD(2012), Current, 0, 0, 28670);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {

		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
			ui4_1 = (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr2))(tr2, ui4_1x)).value.EIF_CHARACTER_value);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
			uc1 = (EIF_BOOLEAN)(tc1 == tc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 44, "set_beginning_of_line", tr1))(tr1, uc1x);
		} else {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 29, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
			ui4_1 = (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr2))(tr2, ui4_1x)).value.EIF_CHARACTER_value);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
			uc1 = (EIF_BOOLEAN)(tc1 == tc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1816, 44, "set_beginning_of_line", tr1))(tr1, uc1x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yy_set_line */

void Fom5h__ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc4 = (EIF_CHARACTER) 0;
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
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR, &loc4);
	RTEAA("yy_set_line", RTUD(2012), Current, 4, 1, 28671);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_column_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - arg1) - ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype));
	loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ti4_1);
	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 < loc2))) {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc4 = (EIF_CHARACTER)tc1;
		} else {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc4 = (EIF_CHARACTER)tc1;
		}


		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(loc4 == tc1)) {
			RTHOOK(9);
			loc3++;
		}

		RTHOOK(10);
		loc1--;
		RTHOOK(4);
		;
	}


	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 + ti4_2) - loc2);
	} else {
		RTHOOK(13);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype))) += loc3;
		RTHOOK(14);
		*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

/* position */

EIF_UNION Fomsxcy (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2012,78, Dtype(Current)));
	return r;
}

/* yy_set_column */

void Fom54ym (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc4 = (EIF_CHARACTER) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
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
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR, &loc4);
	RTEAA("yy_set_column", RTUD(2012), Current, 4, 1, 28672);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 107, dtype));
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 108, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 113, dtype));
	loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ti4_1);
	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 < loc2))) {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 106, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc4 = (EIF_CHARACTER)tc1;
		} else {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2000, 45, "item", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc4 = (EIF_CHARACTER)tc1;
		}


		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2012, 119, dtype))(Current)).value.EIF_CHARACTER_value);
		if ((EIF_BOOLEAN)(loc4 != tc1)) {
			RTHOOK(9);
			loc3++;
			RTHOOK(10);
			loc1--;
		} else {
			RTHOOK(11);
			*(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 + ((EIF_INTEGER_32) 1L));
			RTHOOK(12);
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L));
		}

		RTHOOK(4);
		;
	}

	RTHOOK(13);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype))) += arg1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

void Fp1albo (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("yy_content_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2012, 105, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_line_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 109, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_column_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 110, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_position_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2012, 111, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2013 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

