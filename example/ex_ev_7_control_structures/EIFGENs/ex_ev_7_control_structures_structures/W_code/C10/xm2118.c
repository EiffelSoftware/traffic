/*
 * Code for class XM_ELEMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpn48em(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpobpru(EIF_REFERENCE, EIF_UNION);
extern void Fpn6i9v(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpol1qs(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpof8a6(EIF_REFERENCE, EIF_UNION);
extern void Fpn5wb8(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpn830c(EIF_REFERENCE, EIF_UNION);
extern void Fpn7t43(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpoa1t7(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpn657h(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpn9ryz(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpodnkp(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpoh531(EIF_REFERENCE);
extern EIF_UNION Fpoeyfy(EIF_REFERENCE, EIF_UNION);
extern void Fpokrvj(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpoaewl(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpoccpg(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpohi6f(EIF_REFERENCE);
extern void Fpoj3xx(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpoc_m2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpoeaib(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpn8g2q(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpofldk(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpogv8t(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpojg_a(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fpoles5(EIF_REFERENCE);
extern void Fpoit1o(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void EIF_Minit2118(void);

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

/* make */

void Fpn48em (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2117), Current, 0, 3, 31077);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_parent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ns_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 76, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(5);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 195, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(6);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 34, dtype)) = (EIF_REFERENCE)RTCCL(arg3);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2117, 101, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("parent_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 76, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 195, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("ns_prefix_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 34, dtype));
		if (RTCEQ(tr1, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* has_attribute_by_name */

EIF_UNION Fpobpru (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,loc1);
	RTLR(1,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has_attribute_by_name", RTUD(2117), Current, 2, 1, 31087);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(7);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 210, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(8);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* make_root */

void Fpn6i9v (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_root", RTUD(2117), Current, 0, 3, 31079);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_parent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ns_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 195, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(5);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 34, dtype)) = (EIF_REFERENCE)RTCCL(arg3);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2117, 101, dtype))(Current);
	RTHOOK(7);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2109, 197, "set_root_element", arg1))(arg1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("parent_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 76, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("in_parent", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 76, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2108, 146, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr2, Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 195, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("ns_prefix_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 34, dtype));
		if (RTCEQ(tr1, arg3)) {
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
#undef arg3
#undef arg2
#undef arg1
}

/* process */

void Fpol1qs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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
	RTEAA("process", RTUD(2117), Current, 0, 1, 31103);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_processor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1863, 31, "process_element", arg1))(arg1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* attribute_by_name */

EIF_UNION Fpof8a6 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(7,Result);
	RTLR(3,loc1);
	RTLR(1,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("attribute_by_name", RTUD(2117), Current, 2, 1, 31094);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(7);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 210, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("attribute_not_void", EX_POST);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 209, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc2 == (EIF_BOOLEAN)(Result != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("namespace", EX_POST);
		tc2 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2116, 95, "has_prefix", Result))(Result)).value.EIF_BOOLEAN_value);
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
	RTHOOK(13);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* make_last */

void Fpn5wb8 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_last", RTUD(2117), Current, 0, 3, 31078);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_parent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ns_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 195, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(5);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(2117, 34, dtype)) = (EIF_REFERENCE)RTCCL(arg3);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2117, 101, dtype))(Current);
	RTHOOK(7);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2117, 203, "force_last", arg1))(arg1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("parent_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 76, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("in_parent", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 76, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2108, 146, "last", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr2, Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 195, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("ns_prefix_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2117, 34, dtype));
		if (RTCEQ(tr1, arg3)) {
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
#undef arg3
#undef arg2
#undef arg1
}

/* before_addition */

void Fpn830c (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("before_addition", RTUD(2117), Current, 0, 1, 31083);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(2);
			RTCT("addable", EX_CHECK);
			ur1 = RTCCL(arg1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 206, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTCK;
			} else {
				RTCF;
			}
		}

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2107, 44, "parent", arg1));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2107, 44, "parent", arg1));
			RTNHOOK(4);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2108, 193, "equality_delete", tr1))(tr1, ur1x);
		}

		RTHOOK(5);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 52, "node_set_parent", arg1))(arg1, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("parent_accepted", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2107, 44, "parent", arg1));
			tc1 = RTCEQ(tr1, Current);
		}
		if (tc1) {
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
#undef arg1
}

/* force_last */

void Fpn7t43 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("force_last", RTUD(2117), Current, 0, 1, 31081);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2117, 21, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(1);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 78, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 44, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tc1 = !RTCEQ(tr1, arg1);
	}
	if (tc1) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2108, 51, RTUD(2108)))(Current, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("added", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 75, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2117, 21, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 44, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
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

/* has_attribute_by_qualified_name */

EIF_UNION Fpoa1t7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(4,loc1);
	RTLR(2,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has_attribute_by_qualified_name", RTUD(2117), Current, 2, 2, 31086);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_uri_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(8);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			RTNHOOK(8);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2116, 5, "has_qualified_name", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(9);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* make_child */

void Fpn657h (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(6,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_child", RTUD(2117), Current, 0, 3, 31080);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_parent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ns_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2117, 199, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* addable_item */

EIF_UNION Fpn9ryz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("addable_item", RTUD(2117), Current, 1, 1, 31084);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = RTLN(RTUD(1865));
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(3);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", arg1))(arg1, ur1x);
		RTHOOK(4);
		Result = '\01';
		tc1 = '\01';
		tc2 = '\01';
		tc3 = '\01';
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 42, "is_comment", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if (!tc4) {
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 40, "is_processing_instruction", loc1))(loc1)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		if (!tc3) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 38, "is_element", loc1))(loc1)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (!tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 39, "is_character_data", loc1))(loc1)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (!tc1) {
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc1))(loc1)).value.EIF_BOOLEAN_value);
			Result = tc1;
		}
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* has_element_by_name */

EIF_UNION Fpodnkp (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(3,loc1);
	RTLR(1,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has_element_by_name", RTUD(2117), Current, 2, 1, 31090);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(7);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 38, "is_element", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 44, "element", loc2));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 211, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(8);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* attributes */

EIF_UNION Fpoh531 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(0,loc2);
	RTLR(5,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("attributes", RTUD(2117), Current, 2, 0, 31097);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	{
		static int16 typarr [] = {2117,2240,2116,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2240, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2240, 8, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(7);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2145, 147, "force_last", Result))(Result, ur1x);
		}

		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* element_by_name */

EIF_UNION Fpoeyfy (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(7,Result);
	RTLR(3,loc1);
	RTLR(1,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("element_by_name", RTUD(2117), Current, 2, 1, 31092);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(7);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 38, "is_element", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 44, "element", loc2));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 211, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 44, "element", loc2));
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("element_not_void", EX_POST);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 212, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc2 == (EIF_BOOLEAN)(Result != NULL))) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* remove_attribute_by_qualified_name */

void Fpokrvj (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(6,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(7,loc1);
	RTLR(5,loc2);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("remove_attribute_by_qualified_name", RTUD(2117), Current, 2, 2, 31101);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_uri_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("has_attribute", EX_PRE);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 208, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", loc1))(loc1);
	RTHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2163, 66, "after", loc1));
	while (!(tc1)) {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2163, 64, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(9);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			RTNHOOK(9);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2116, 5, "has_qualified_name", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(10);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 117, dtype))(Current, ur1x);
		} else {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 43, "forth", loc1))(loc1);
		}

		RTHOOK(7);
		tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2163, 66, "after", loc1));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* equality_delete */

void Fpoaewl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(1,Current);
	RTLR(0,loc1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("equality_delete", RTUD(2117), Current, 1, 1, 31085);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", loc1))(loc1);
	RTHOOK(3);
	tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2163, 66, "after", loc1));
	while (!(tc1)) {

		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2163, 64, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 30, "remove", loc1))(loc1);
		} else {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 43, "forth", loc1))(loc1);
		}

		RTHOOK(3);
		tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2163, 66, "after", loc1));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* attribute_same_name */

EIF_UNION Fpoccpg (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(5,Current);
	RTLR(2,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("attribute_same_name", RTUD(2117), Current, 0, 2, 31088);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("named_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 42, "name", arg1));
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 157, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 75, "namespace", arg1));
		RTNHOOK(2);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1997, 34, "uri", tr1));
		RTNHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_name", EX_POST);
		tc1 = '\01';
		if (Result) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 42, "name", arg1));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 157, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_ns", EX_POST);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 75, "namespace", arg1));
		RTNHOOK(4);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1997, 34, "uri", tr1));
		RTNHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 42, "name", arg1));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 157, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(Result == tc2);
		}
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
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* namespace_declarations */

EIF_UNION Fpohi6f (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(0,loc2);
	RTLR(5,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("namespace_declarations", RTUD(2117), Current, 2, 0, 31096);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	{
		static int16 typarr [] = {2117,2144,1997,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2144, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2144, 78, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(7);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			RTNHOOK(7);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2116, 112, "is_namespace_declaration", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			RTNHOOK(8);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2116, 113, "namespace_declaration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 103, "force_last", Result))(Result, ur1x);
		}

		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("namespace_declarations_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("no_void_declaration", EX_POST);
		ur1 = NULL;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 90, "has", Result))(Result, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* remove_attribute_by_name */

void Fpoj3xx (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
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
	RTLR(3,loc2);
	RTLR(1,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("remove_attribute_by_name", RTUD(2117), Current, 2, 1, 31100);
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
		RTCT("has_attribute", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 209, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2163, 66, "after", loc1));
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2163, 64, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(8);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 210, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(9);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 117, dtype))(Current, ur1x);
		} else {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 43, "forth", loc1))(loc1);
		}

		RTHOOK(6);
		tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2163, 66, "after", loc1));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* named_same_name */

EIF_UNION Fpoc_m2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("named_same_name", RTUD(2117), Current, 0, 2, 31089);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_named_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2115, 60, "name", arg1));
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 157, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 81, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		Result = tc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_name", EX_POST);
		tc1 = '\01';
		if (Result) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2115, 60, "name", arg1));
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 157, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* has_element_by_qualified_name */

EIF_UNION Fpoeaib (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(4,loc1);
	RTLR(2,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has_element_by_qualified_name", RTUD(2117), Current, 2, 2, 31091);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_uri_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(8);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 38, "is_element", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 44, "element", loc2));
			RTNHOOK(8);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2117, 149, "has_qualified_name", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(9);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* put_last */

void Fpn8g2q (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_last", RTUD(2117), Current, 0, 1, 31082);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 150, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2117, 21, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 78, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 44, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tc1 = !RTCEQ(tr1, arg1);
	}
	if (tc1) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2108, 109, RTUD(2108)))(Current, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("added", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 75, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2117, 21, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 44, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* element_by_qualified_name */

EIF_UNION Fpofldk (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(8,Result);
	RTLR(4,loc1);
	RTLR(2,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("element_by_qualified_name", RTUD(2117), Current, 2, 2, 31093);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_uri_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(8);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 38, "is_element", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 44, "element", loc2));
			RTNHOOK(8);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2117, 149, "has_qualified_name", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 44, "element", loc2));
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("element_not_void", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 213, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc2 == (EIF_BOOLEAN)(Result != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* attribute_by_qualified_name */

EIF_UNION Fpogv8t (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(8,Result);
	RTLR(4,loc1);
	RTLR(2,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("attribute_by_qualified_name", RTUD(2117), Current, 2, 2, 31095);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_uri_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 42, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 1, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(8);
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			RTNHOOK(8);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2116, 5, "has_qualified_name", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1865, 49, "xml_attribute", loc2));
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 45, "go_after", loc1))(loc1);
		} else {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2153, 43, "forth", loc1))(loc1);
		}

		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2153, 41, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("attribute_not_void", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 208, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc2 == (EIF_BOOLEAN)(Result != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("namespace", EX_POST);
		tc2 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2116, 5, "has_qualified_name", Result))(Result, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* add_attribute */

void Fpojg_a (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(9,ur4);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(8,Current);
	RTLR(3,loc1);
	RTLR(10,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("add_attribute", RTUD(2117), Current, 2, 3, 31099);
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
		RTCT("a_name_not_empty", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ns_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTLN(RTUD(2116));
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	ur4 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2116, 110, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
	RTNHOOK(5);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2117, 21, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 203, dtype))(Current, ur1x);
	} else {
		RTHOOK(8);
		tr1 = RTLN(RTUD(1865));
		RTCI2(tr1);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 44, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(10);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 43, "is_attribute", loc2))(loc2)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(11);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 203, dtype))(Current, ur1x);
		} else {
			RTHOOK(12);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 104, dtype))(Current, ur1x);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("attribute_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(1997, 34, "uri", arg2));
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 208, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTLO(7);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* join_text_nodes */

void Fpoles5 (EIF_REFERENCE Current)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(5,loc1);
	RTLR(1,tr1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(6,loc2);
	RTLR(2,loc3);
	RTLR(0,loc4);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("join_text_nodes", RTUD(2117), Current, 4, 0, 31102);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1865));
	RTCI2(tr1);
	loc4 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 90, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 32, "start", loc3))(loc3);
	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(loc3 + RTVA(2163, 66, "after", loc3));
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2163, 64, "item", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

		RTHOOK(6);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 39, "is_character_data", loc4))(loc4)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(1865, 45, "character_data", loc4));
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2114, 42, "cloned_object", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(9);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 117, dtype))(Current, ur1x);

			RTHOOK(10);
			tc2 = '\01';
			tc3 = *(EIF_BOOLEAN *)(loc3 + RTVA(2163, 66, "after", loc3));
			if (!tc3) {
				tc2 = (EIF_BOOLEAN)(loc1 == NULL);
			}
			while (!(tc2)) {
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2163, 64, "item", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(11);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2107, 54, "process", tr1))(tr1, ur1x);

				RTHOOK(12);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1865, 39, "is_character_data", loc4))(loc4)).value.EIF_BOOLEAN_value);
				if (tc3) {
					RTHOOK(13);
					tr1 = *(EIF_REFERENCE *)(loc4 + RTVA(1865, 45, "character_data", loc4));
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2114, 59, "append_content", loc2))(loc2, ur1x);
					RTHOOK(14);
					ur1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 117, dtype))(Current, ur1x);
				} else {
					RTHOOK(15);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 43, "forth", loc3))(loc3);
				}

				RTHOOK(10);
				tc2 = '\01';
				tc3 = *(EIF_BOOLEAN *)(loc3 + RTVA(2163, 66, "after", loc3));
				if (!tc3) {
					tc2 = (EIF_BOOLEAN)(loc1 == NULL);
				}
				;
			}

			RTHOOK(16);
			ur1 = RTCCL(loc2);
			ur2 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2117, 105, dtype))(Current, ur1x, ur2x);
		} else {
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2163, 43, "forth", loc3))(loc3);
		}

		RTHOOK(4);
		tc1 = *(EIF_BOOLEAN *)(loc3 + RTVA(2163, 66, "after", loc3));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(6);
	RTEE;
}

/* add_unqualified_attribute */

void Fpoit1o (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(3,Current);
	RTLR(2,ur1);
	RTLR(5,ur2);
	RTLR(6,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("add_unqualified_attribute", RTUD(2117), Current, 0, 2, 31098);
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
		RTCT("a_name_not_empty", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2117, 152, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr1);
	ur3 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2117, 221, dtype))(Current, ur1x, ur2x, ur3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("attribute_added", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2117, 209, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

void EIF_Minit2118 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

