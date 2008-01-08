/*
 * Code for class XM_TREE_TO_EVENTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnmhefe(EIF_REFERENCE, EIF_UNION);
extern void Fnmh1c0(EIF_REFERENCE, EIF_UNION);
extern void Fnmipan(EIF_REFERENCE, EIF_UNION);
extern void Fnmgrhs(EIF_REFERENCE, EIF_UNION);
extern void Fnmd5ra(EIF_REFERENCE, EIF_UNION);
extern void Fnmfgmj(EIF_REFERENCE, EIF_UNION);
extern void Fnmjz5w(EIF_REFERENCE);
extern void Fnmf3j5(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1865(void);

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

/* process_character_data */

void Fnmhefe (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTEAA("process_character_data", RTUD(1864), Current, 0, 1, 26744);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1864, 41, dtype))(Current);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2114, 57, "content", arg1));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1904, 41, "on_content", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* process_processing_instruction */

void Fnmh1c0 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("process_processing_instruction", RTUD(1864), Current, 0, 1, 26745);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_pi_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1864, 41, dtype))(Current);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2113, 57, "target", arg1));
	ur1 = RTCCL(tr2);
	tr3 = *(EIF_REFERENCE *)(arg1 + RTVA(2113, 58, "data", arg1));
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1904, 35, "on_processing_instruction", tr1))(tr1, ur1x, ur2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* process_comment */

void Fnmipan (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTEAA("process_comment", RTUD(1864), Current, 0, 1, 26738);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("com_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1864, 41, dtype))(Current);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2112, 57, "data", arg1));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1904, 36, "on_comment", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* process_attribute */

void Fnmgrhs (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(10,ur4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(6,tr4);
	RTLR(9,tr5);
	RTLR(1,Current);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("process_attribute", RTUD(1864), Current, 0, 1, 26743);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("att_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("in_attributes", EX_CHECK);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1864, 40, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 75, "namespace", arg1));
	RTNHOOK(3);
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1997, 34, "uri", tr2));
	ur1 = RTCCL(tr3);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 75, "namespace", arg1));
	RTNHOOK(3);
	tr4 = *(EIF_REFERENCE *)(tr2 + RTVA(1997, 33, "ns_prefix", tr2));
	ur2 = RTCCL(tr4);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 42, "name", arg1));
	ur3 = RTCCL(tr2);
	tr5 = *(EIF_REFERENCE *)(arg1 + RTVA(2116, 114, "value", arg1));
	ur4 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1904, 38, "on_attribute", tr1))(tr1, ur1x, ur2x, ur3x, ur4x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make */

void Fnmd5ra (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("make", RTUD(1864), Current, 0, 1, 26740);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_events_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* process_document */

void Fnmfgmj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTEAA("process_document", RTUD(1864), Current, 0, 1, 26741);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1904, 31, "on_start", tr1))(tr1);
	RTHOOK(3);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2109, 187, "process_children", arg1))(arg1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1904, 32, "on_finish", tr1))(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* process_start_tag_finish */

void Fnmjz5w (EIF_REFERENCE Current)
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
	RTEAA("process_start_tag_finish", RTUD(1864), Current, 0, 0, 26739);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1864, 40, dtype));
	if (tc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1904, 39, "on_start_tag_finish", tr1))(tr1);
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current + RTWA(1864, 40, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

/* process_element */

void Fnmf3j5 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(6,tr4);
	RTLR(1,Current);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("process_element", RTUD(1864), Current, 0, 1, 26742);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("e_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1864, 41, dtype))(Current);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2117, 34, "namespace", arg1));
	RTNHOOK(3);
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1997, 34, "uri", tr2));
	ur1 = RTCCL(tr3);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2117, 34, "namespace", arg1));
	RTNHOOK(3);
	tr4 = *(EIF_REFERENCE *)(tr2 + RTVA(1997, 33, "ns_prefix", tr2));
	ur2 = RTCCL(tr4);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2117, 195, "name", arg1));
	ur3 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1904, 37, "on_start_tag", tr1))(tr1, ur1x, ur2x, ur3x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1864, 40, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(5);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2117, 197, "process_children", arg1))(arg1, ur1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1864, 41, dtype))(Current);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1864, 33, dtype));
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2117, 34, "namespace", arg1));
	RTNHOOK(7);
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1997, 34, "uri", tr2));
	ur1 = RTCCL(tr3);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2117, 34, "namespace", arg1));
	RTNHOOK(7);
	tr4 = *(EIF_REFERENCE *)(tr2 + RTVA(1997, 33, "ns_prefix", tr2));
	ur2 = RTCCL(tr4);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2117, 195, "name", arg1));
	ur3 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1904, 40, "on_end_tag", tr1))(tr1, ur1x, ur2x, ur3x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit1865 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

