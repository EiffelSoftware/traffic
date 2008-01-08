/*
 * Code for class XM_CALLBACKS_NULL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnrlymn(EIF_REFERENCE, EIF_UNION);
extern void Fnrm8hw(EIF_REFERENCE, EIF_UNION);
extern void Fnrjcv5(EIF_REFERENCE);
extern void Fnrknre(EIF_REFERENCE);
extern void Fnrlao0(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnrmlj9(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fnrqg5_(EIF_REFERENCE, EIF_UNION);
extern void Fnro6ar(EIF_REFERENCE);
extern void Fnrpt8d(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnrnwfi(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnrojc4(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnrj_ts(EIF_REFERENCE);
extern void EIF_Minit1906(void);

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

/* on_error */

void Fnrlymn (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_error", RTUD(1905), Current, 0, 1, 26959);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* on_comment */

void Fnrm8hw (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_comment", RTUD(1905), Current, 0, 1, 26961);
	RTGC;
	RTSA(Dtype(Current));
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
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make */

void Fnrjcv5 (EIF_REFERENCE Current)
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
	RTEAA("make", RTUD(1905), Current, 0, 0, 26955);
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
}

/* on_finish */

void Fnrknre (EIF_REFERENCE Current)
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
	RTEAA("on_finish", RTUD(1905), Current, 0, 0, 26957);
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
}

/* on_xml_declaration */

void Fnrlao0 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_BOOLEAN_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("on_xml_declaration", RTUD(1905), Current, 0, 3, 26958);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_version_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_version_not_empty", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* on_processing_instruction */

void Fnrmlj9 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("on_processing_instruction", RTUD(1905), Current, 0, 2, 26960);
	RTGC;
	RTSA(Dtype(Current));
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
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* on_content */

void Fnrqg5_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("on_content", RTUD(1905), Current, 0, 1, 26966);
	RTGC;
	RTSA(Dtype(Current));
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
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* on_start_tag_finish */

void Fnro6ar (EIF_REFERENCE Current)
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
	RTEAA("on_start_tag_finish", RTUD(1905), Current, 0, 0, 26964);
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
}

/* on_end_tag */

void Fnrpt8d (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,arg1);
	RTLR(2,arg3);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("on_end_tag", RTUD(1905), Current, 0, 3, 26965);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1905, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1905, 6, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* on_start_tag */

void Fnrnwfi (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,arg1);
	RTLR(2,arg3);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("on_start_tag", RTUD(1905), Current, 0, 3, 26962);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1905, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1905, 6, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* on_attribute */

void Fnrojc4 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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
	RTLI(5);
	RTLR(1,arg1);
	RTLR(2,arg3);
	RTLR(4,arg4);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("on_attribute", RTUD(1905), Current, 0, 4, 26963);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("unresolved_namespace_is_void", EX_PRE);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1905, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(arg1 != NULL);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("local_part", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1905, 6, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* on_start */

void Fnrj_ts (EIF_REFERENCE Current)
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
	RTEAA("on_start", RTUD(1905), Current, 0, 0, 26956);
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
}

void EIF_Minit1906 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

