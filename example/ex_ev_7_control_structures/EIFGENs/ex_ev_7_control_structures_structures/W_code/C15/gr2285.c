/*
 * Code for class GRAPH [REFERENCE, REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnx2a3w(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnx2y1i(EIF_REFERENCE);
extern void Fnyi4f1(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnyzaul(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnyzyr7(EIF_REFERENCE, EIF_UNION);
extern void Fnxhbar(EIF_REFERENCE);
extern void Fnxhy8d(EIF_REFERENCE);
extern void Fnxi83m(EIF_REFERENCE);
extern EIF_UNION Fnx38xr(EIF_REFERENCE);
extern EIF_UNION Fnx_qde(EIF_REFERENCE);
extern EIF_UNION Fnx7hlv(EIF_REFERENCE);
extern void Fnylp6j(EIF_REFERENCE);
extern EIF_UNION Fnxtl2k(EIF_REFERENCE);
extern void Fnypls9(EIF_REFERENCE);
extern EIF_UNION Fnx0da0(EIF_REFERENCE);
extern EIF_UNION Fnx0_8n(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnxyskj(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnx4wvd(EIF_REFERENCE);
extern void Fnyx_zc(EIF_REFERENCE);
extern EIF_UNION Fnx92cc(EIF_REFERENCE);
extern EIF_UNION Fnybc7l(EIF_REFERENCE);
extern void Fnynn_e(EIF_REFERENCE);
extern EIF_UNION Fnxz2fs(EIF_REFERENCE, EIF_UNION);
extern void Fnym_1s(EIF_REFERENCE);
extern void Fnyp8qw(EIF_REFERENCE, EIF_UNION);
extern void Fny_lpu(EIF_REFERENCE, EIF_UNION);
extern void Fny_8ng(EIF_REFERENCE, EIF_UNION);
extern void Fny0wk2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnxsa7b(EIF_REFERENCE);
extern void Fnyrjl4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnyxc0q(EIF_REFERENCE, EIF_UNION);
extern void Fnyr6jr(EIF_REFERENCE, EIF_UNION);
extern void Fny1jip(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnx1n59(EIF_REFERENCE, EIF_UNION);
extern void Fnye8ub(EIF_REFERENCE);
extern void Fnxil5_(EIF_REFERENCE);
extern EIF_UNION Fnxwuro(EIF_REFERENCE);
extern EIF_UNION Fnxt8_6(EIF_REFERENCE);
extern EIF_UNION Fnxv6t1(EIF_REFERENCE);
extern EIF_UNION Fnxk6xh(EIF_REFERENCE);
extern void Fnyoyvn(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnyqwoi(EIF_REFERENCE, EIF_UNION);
extern void Fnymc35(EIF_REFERENCE);
extern void Fnyg6m6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnxuwyt(EIF_REFERENCE);
extern void Fnyelwp(EIF_REFERENCE);
extern void Fnyoax0(EIF_REFERENCE);
extern EIF_UNION Fnx9feq(EIF_REFERENCE);
extern EIF_UNION Fnyap9z(EIF_REFERENCE);
extern EIF_UNION Fnyb_47(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnxkjzv(EIF_REFERENCE);
extern void Fnyfwry(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnxluu3(EIF_REFERENCE);
extern EIF_UNION Fnxqdeg(EIF_REFERENCE);
extern EIF_UNION Fnx5js_(EIF_REFERENCE);
extern EIF_UNION Fnx8sg3(EIF_REFERENCE);
extern EIF_UNION Fnxrn9p(EIF_REFERENCE);
extern EIF_UNION Fnxxhpa(EIF_REFERENCE);
extern void Fp0ihe1(EIF_REFERENCE, int);
extern void EIF_Minit2285(void);

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

/* is_reachable */

EIF_UNION Fnx2a3w (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(5,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_reachable", RTUD(2284), Current, 0, 1, 27320);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("node_exists", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 114, dtype))(Current, ur1x, ur2x);
	RTHOOK(4);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 81, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("cursor_not_moved", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 22, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_connected */

EIF_UNION Fnx2y1i (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_connected", RTUD(2284), Current, 0, 0, 27321);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 69, Dtype(Current)))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* put_unlabeled_edge */

void Fnyi4f1 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("put_unlabeled_edge", RTUD(2284), Current, 0, 2, 27336);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_exist", EX_PRE);
		tc1 = '\0';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
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
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	RTEC(EN_VEXP);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2284, 104, dtype))(Current, ur1x, ur2x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("simple_graph_criterion", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 73, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("symmetric_graph_criterion", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = '\0';
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 73, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				ur1 = RTCCL(arg2);
				ur2 = RTCCL(arg1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 73, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("simple_edge_count", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("symmetric_edge_count", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 2L)));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("cursor_not_moved", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 22, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* opposite_node */

EIF_UNION Fnyzaul (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("opposite_node", RTUD(2284), Current, 0, 2, 27351);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* edge_length */

EIF_UNION Fnyzyr7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("edge_length", RTUD(2284), Current, 0, 1, 27352);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("edge_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	Result = (EIF_REAL_32)tr4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg1
}

/* make_simple_graph */

void Fnxhbar (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_simple_graph", RTUD(2284), Current, 0, 0, 27357);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 44, dtype))(Current);
	RTHOOK(2);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 138, dtype))(Current, uc1x);
	RTHOOK(3);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 139, dtype))(Current, uc1x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(2284, 4, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_simple_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("not_symmetric_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_graph", EX_POST);
		tc1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {
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

/* make_symmetric_graph */

void Fnxhy8d (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_symmetric_graph", RTUD(2284), Current, 0, 0, 27358);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 44, dtype))(Current);
	RTHOOK(2);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 138, dtype))(Current, uc1x);
	RTHOOK(3);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 139, dtype))(Current, uc1x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(2284, 4, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_simple_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_symmetric_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_graph", EX_POST);
		tc1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {
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

/* make_symmetric_multi_graph */

void Fnxi83m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_symmetric_multi_graph", RTUD(2284), Current, 0, 0, 27360);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 44, dtype))(Current);
	RTHOOK(2);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 138, dtype))(Current, uc1x);
	RTHOOK(3);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 139, dtype))(Current, uc1x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(2284, 4, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_multi_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_symmetric_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_graph", EX_POST);
		tc1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {
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

/* has_cycles */

EIF_UNION Fnx38xr (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(1,Current);
	RTLR(0,loc1);
	RTLR(3,loc2);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("has_cycles", RTUD(2284), Current, 3, 0, 27322);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2284,2293,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2293, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2293, 31, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 55, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 7, "linear_representation", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc2))(loc2);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2293, 33, "record_constraint", loc1))(loc1, ur1x, ur2x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc2))(loc2);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2293, 46, "process", loc1))(loc1);
	RTHOOK(9);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2293, 34, "cycle_found", loc1))(loc1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* has_links */

EIF_UNION Fnx_qde (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	RTEAA("has_links", RTUD(2284), Current, 0, 0, 27316);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_multi_graph */

EIF_UNION Fnx7hlv (EIF_REFERENCE Current)
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
	RTEAA("is_multi_graph", RTUD(2284), Current, 0, 0, 27325);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* remove_node */

void Fnylp6j (EIF_REFERENCE Current)
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

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_node", RTUD(2284), Current, 0, 0, 27338);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 93, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 92, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 106, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCS(EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
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

/* conflicting_edges */

EIF_UNION Fnxtl2k (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("conflicting_edges", RTUD(2284), Current, 0, 0, 27308);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("merge_failed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 88, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REFERENCE *)(Current + RTWA(2284, 121, dtype));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* reset_path */

void Fnypls9 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
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
	RTEAA("reset_path", RTUD(2284), Current, 0, 0, 27344);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2284, 129, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 136, dtype))(Current, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("no_path", EX_POST);
		tc1 = '\0';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 81, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc2 == (EIF_BOOLEAN) 0)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 61, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc1 = (EIF_BOOLEAN)(tr1 == NULL);
		}
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
}

/* has_previous */

EIF_UNION Fnx0da0 (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("has_previous", RTUD(2284), Current, 0, 0, 27317);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(46, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2289, 32, "current_node", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* occurrences */

EIF_UNION Fnx0_8n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("occurrences", RTUD(2284), Current, 0, 1, 27318);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* has_node */

EIF_UNION Fnxyskj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
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

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has_node", RTUD(2284), Current, 0, 1, 27314);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 122, dtype));
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found_in_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 8, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_dag */

EIF_UNION Fnx4wvd (EIF_REFERENCE Current)
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
	RTEAA("is_dag", RTUD(2284), Current, 0, 0, 27323);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 82, dtype))(Current)).value.EIF_BOOLEAN_value);
		Result = (EIF_BOOLEAN) !tc1;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* prepare_path_finding */

void Fnyx_zc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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

	RTLI(6);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(5,loc3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("prepare_path_finding", RTUD(2284), Current, 4, 0, 27350);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(2284, 125, Current));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2284, 125, dtype)) = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 62, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 122, dtype));
		ur1 = RTCCL(loc2);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ur1x)).value.EIF_INTEGER_32_value);
		loc4 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(7);
		{
			static int16 typarr [] = {2284,2287,-8,1,758,-1};
			int16 typres;

			typres = RTCID2(NULL, Dftype(Current), 2287, typarr);

			tr1 = RTLN(typres);

		}
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2287, 38, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 125, dtype));
		ur1 = RTCCL(loc3);
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(10);
	tr1 = RTLNSMART(RTWCT(2284, 126, Current));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2288, 11, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(10);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(6);
	RTEE;
}

/* extendible */

EIF_UNION Fnx92cc (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = (EIF_BOOLEAN)'\01';
	return r;
}
/* prunable */

EIF_UNION Fnybc7l (EIF_REFERENCE Current)
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
	RTEAA("prunable", RTUD(2284), Current, 0, 0, 27330);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 8, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* convert_to_multi_graph */

void Fnynn_e (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("convert_to_multi_graph", RTUD(2284), Current, 0, 0, 27341);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("simple_graph", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("supported", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 71, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 138, dtype))(Current, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("multi_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
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

/* has_edge */

EIF_UNION Fnxz2fs (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(2,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has_edge", RTUD(2284), Current, 0, 1, 27315);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("edge_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_nodes", EX_PRE);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 55, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* wipe_out */

void Fnym_1s (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(2284), Current, 0, 0, 27340);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 93, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 46, dtype))(Current);
		} else {
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 45, dtype))(Current);
		}

	} else {

		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 48, dtype))(Current);
		} else {
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 47, dtype))(Current);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("wiped_out", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 8, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("no_edges", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("off", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(2);
	RTEE;
}

/* merge_with */

void Fnyp8qw (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
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
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("merge_with", RTUD(2284), Current, 1, 1, 27345);
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
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 137, dtype))(Current, uc1x);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 132, dtype))(Current, ur1x);

	RTHOOK(4);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 71, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(5);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 112, dtype))(Current);
	}


	RTHOOK(7);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(8);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 133, dtype))(Current, ur1x);
	} else {
		RTHOOK(9);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 134, dtype))(Current, ur1x);
	}


	RTHOOK(10);
	tc1 = '\0';
	tc2 = '\0';
	if (loc1) {
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 89, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 113, dtype))(Current);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("node_count", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("edge_count", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("conflict", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 88, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 64, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(14);
			ti4_3 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(90, 11, "count", tr1));
			tc1 = (EIF_BOOLEAN)(ti4_3 > ((EIF_INTEGER_32) 0L));
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
	RTLO(4);
	RTEE;
#undef arg1
}

/* merge_nodes */

void Fny_lpu (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("merge_nodes", RTUD(2284), Current, 1, 1, 27353);
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
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2284, 53, "nodes", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 7, "linear_representation", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 103, dtype))(Current, ur1x);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("node_count", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* merge_edges */

void Fny_8ng (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(4,loc2);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("merge_edges", RTUD(2284), Current, 2, 1, 27354);
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
		RTCT("multi_graph", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2284, 55, "edges", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		ur1 = RTCCL(loc2);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 78, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		ur1 = RTCCL(loc2);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2284, 78, "edge_occurences", arg1))(arg1, ur1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 < ti4_3)) {
			RTHOOK(8);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 135, dtype))(Current, ur1x);
		}

		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("edge_count", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 >= ti4_1)) {
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
#undef arg1
}

/* simple_merge_edges */

void Fny0wk2 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(6,tr2);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("simple_merge_edges", RTUD(2284), Current, 2, 1, 27355);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("simple_graph", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2284, 55, "edges", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(2284, 121, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2284, 121, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 73, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(8);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 135, dtype))(Current, ur1x);
		} else {
			RTHOOK(9);
			uc1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 137, dtype))(Current, uc1x);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 121, dtype));
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
		}

		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("conflict", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 88, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 64, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(90, 11, "count", tr1));
			tc2 = (EIF_BOOLEAN)(ti4_2 > ((EIF_INTEGER_32) 0L));
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("edge_count", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 >= ti4_1)) {
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

/* linear_representation */

EIF_UNION Fnxsa7b (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
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
	RTEAA("linear_representation", RTUD(2284), Current, 0, 0, 27307);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 53, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 7, "linear_representation", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* extend */

void Fnyrjl4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("extend", RTUD(2284), Current, 0, 1, 27347);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 91, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		ur1 = RTCCL(arg1);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 77, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		in_assertion = 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 7, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("in_set_already", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc3 = (EIF_BOOLEAN)(ti4_4 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("added_to_set", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc3 = (EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("one_more_occurrence", EX_POST);
		ur1 = RTCCL(arg1);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 77, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_3 + ((EIF_INTEGER_32) 1L)))) {
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

/* node_from_item */

EIF_UNION Fnyxc0q (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(5,Result);
	RTLR(1,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("node_from_item", RTUD(2284), Current, 1, 1, 27349);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_item", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 122, dtype));
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ur1x)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 125, dtype));
	ui4_1 = loc1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
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
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* replace */

void Fnyr6jr (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("replace", RTUD(2284), Current, 0, 1, 27348);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 92, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_replaced", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* adopt_edge */

void Fny1jip (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
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
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("adopt_edge", RTUD(2284), Current, 0, 1, 27356);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("edge_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr2);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 33, "label", arg1))(arg1)).value.EIF_REAL_32_value);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2284, 104, dtype))(Current, ur1x, ur2x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("edge_adopted", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 74, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("simple_edge_count", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("symmetric_edge_count", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 2L)));
		}
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* edge_occurences */

EIF_UNION Fnx1n59 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(4,ur1);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("edge_occurences", RTUD(2284), Current, 1, 1, 27319);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("edge_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}

	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 101, dtype))(Current, ur1x);

	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(6);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	} else {

		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 95, dtype))(Current);
		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {

			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2286, 37, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(10);
				Result++;
			}

			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 96, dtype))(Current);
			RTHOOK(8);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}


	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(13);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
	} else {
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 123, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* forth */

void Fnye8ub (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr3 = NULL;
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
	RTEAA("forth", RTUD(2284), Current, 0, 0, 27333);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 51, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 3, "put", tr2))(tr2, ur1x);
	RTHOOK(3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 52, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("moved_to_target", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr2, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("move_to_off", EX_POST);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN) !tc1 == tc2)) {
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
}

/* make_multi_graph */

void Fnxil5_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_multi_graph", RTUD(2284), Current, 0, 0, 27359);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 44, dtype))(Current);
	RTHOOK(2);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 138, dtype))(Current, uc1x);
	RTHOOK(3);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 139, dtype))(Current, uc1x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(2284, 4, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_multi_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("not_symmetric_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_graph", EX_POST);
		tc1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 66, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {
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

/* components */

EIF_UNION Fnxwuro (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(1,Current);
	RTLR(7,loc1);
	RTLR(0,loc2);
	RTLR(2,loc3);
	RTLR(6,ur1);
	RTLR(5,loc6);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTEAA("components", RTUD(2284), Current, 6, 0, 27312);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 62, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 55, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 7, "linear_representation", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	loc3 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	{
		static int16 typarr [] = {2284,2294,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2294, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 65, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2294, 31, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc6 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc2))(loc2);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2294, 41, "put", loc6))(loc6, ur1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc2))(loc2);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc3))(loc3);
	RTHOOK(9);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc3))(loc3)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2294, 32, "find", loc6))(loc6, ur1x)).value.EIF_INTEGER_32_value);
		loc4 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2294, 32, "find", loc6))(loc6, ur1x)).value.EIF_INTEGER_32_value);
		loc5 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(13);
		if ((EIF_BOOLEAN)(loc4 != loc5)) {
			RTHOOK(14);
			ui4_1 = loc4;
			ui4_2 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2294, 42, "union", loc6))(loc6, ui4_1x, ui4_2x);
		}

		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc3))(loc3);
		RTHOOK(9);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc3))(loc3)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(2294, 37, "set_count", loc6));
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* node_count */

EIF_UNION Fnxt8_6 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("node_count", RTUD(2284), Current, 0, 0, 27309);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 53, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* out_degree */

EIF_UNION Fnxv6t1 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("out_degree", RTUD(2284), Current, 1, 0, 27311);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 95, dtype))(Current);
	RTHOOK(4);
	Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		Result++;
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 96, dtype))(Current);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(8);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 102, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("same_direction", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 22, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("valid_degree", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* target */

EIF_UNION Fnxk6xh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
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
	RTEAA("target", RTUD(2284), Current, 0, 0, 27362);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_links", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* find_path */

void Fnyoyvn (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REAL_32 loc9 = (EIF_REAL_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(15);
	RTLR(10,loc7);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(12,loc4);
	RTLR(3,Current);
	RTLR(13,loc3);
	RTLR(14,loc8);
	RTLR(4,loc1);
	RTLR(11,loc2);
	RTLR(7,ur2);
	RTLR(2,ur1);
	RTLR(5,loc5);
	RTLR(6,loc6);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REAL32, &loc9);
	RTEAA("find_path", RTUD(2284), Current, 9, 2, 27343);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nodes_in_graph", EX_PRE);
		tc1 = '\0';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 128, dtype))(Current);
	RTHOOK(6);
	ur1 = RTCCL(arg2);
	loc5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 127, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(7);
	ur1 = RTCCL(arg1);
	loc6 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 127, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(8);
	ur1 = NULL;
	ur2 = NULL;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2287, 47, "set_referrer", loc6))(loc6, ur1x, ur2x, ur4_1x);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype));
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2288, 104, "put", tr1))(tr1, ur1x);
	RTHOOK(10);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2288, 33, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc2 = *(EIF_BOOLEAN *)(loc5 + RTVA(2287, 44, "processed", loc5));
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2288, 3, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc6 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2288, 105, "remove", tr1))(tr1);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2287, 45, "set_processed", loc6))(loc6);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2287, 40, "item", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 101, dtype))(Current, ur1x);

		RTHOOK(15);
		loc7 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 57, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc7))(loc7);
		RTHOOK(17);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc7))(loc7)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2287, 40, "item", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr2);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 130, dtype))(Current, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(19);
			ur1 = RTCCL(loc2);
			loc4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 127, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(20);
			tr4_1 = *(EIF_REAL_32 *)(loc6 + RTVA(2287, 43, "distance", loc6));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			loc9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 131, dtype))(Current, ur1x)).value.EIF_REAL_32_value);
			loc9 = (EIF_REAL_32)(EIF_REAL_32)(tr4_1 + loc9);

			RTHOOK(21);
			tr4_1 = *(EIF_REAL_32 *)(loc4 + RTVA(2287, 43, "distance", loc4));
			if ((EIF_BOOLEAN)(loc9 < tr4_1)) {
				RTHOOK(22);
				ur1 = RTCCL(loc6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur2 = RTCCL(tr1);
				ur4_1 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2287, 47, "set_referrer", loc4))(loc4, ur1x, ur2x, ur4_1x);
				RTHOOK(23);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype));
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2288, 104, "put", tr1))(tr1, ur1x);
			}

			RTHOOK(24);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc7))(loc7);
			RTHOOK(17);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc7))(loc7)).value.EIF_BOOLEAN_value);
			;
		}

		RTHOOK(10);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 126, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2288, 33, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc2 = *(EIF_BOOLEAN *)(loc5 + RTVA(2287, 44, "processed", loc5));
			tc1 = tc2;
		}
		;
	}

	RTHOOK(25);
	tc3 = *(EIF_BOOLEAN *)(loc5 + RTVA(2287, 44, "processed", loc5));
	uc1 = tc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 136, dtype))(Current, uc1x);

	RTHOOK(26);
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 81, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc3) {

		RTHOOK(27);
		tr1 = RTLNSMART(RTWCT(2284, 129, Current));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
		RTNHOOK(27);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2284, 129, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(28);
		loc6 = (EIF_REFERENCE)RTCCL(loc5);
		RTHOOK(29);
		loc3 = (EIF_REFERENCE)RTCCL(arg2);
		RTHOOK(30);
		tr1 = *(EIF_REFERENCE *)(loc6 + RTVA(2287, 41, "referring_edge", loc6));
		while (!((EIF_BOOLEAN)(tr1 == NULL))) {
			RTHOOK(31);
			tr2 = *(EIF_REFERENCE *)(loc6 + RTVA(2287, 41, "referring_edge", loc6));
			loc8 = (EIF_REFERENCE)RTCCL(tr2);

			RTHOOK(32);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", loc8))(loc8)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", loc3))(loc3, ur1x)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc3) {
				RTHOOK(33);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2286, 39, "flip", loc8))(loc8);
			}

			RTHOOK(34);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2284, 129, dtype));
			ur1 = RTCCL(loc8);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(166, 0, "put_front", tr2))(tr2, ur1x);
			RTHOOK(35);
			tr2 = *(EIF_REFERENCE *)(loc6 + RTVA(2287, 42, "referring_node", loc6));
			loc6 = (EIF_REFERENCE)RTCCL(tr2);
			RTHOOK(36);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 31, "start_node", loc8))(loc8)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc3 = (EIF_REFERENCE)RTCCL(tr2);
			RTHOOK(30);
			tr1 = *(EIF_REFERENCE *)(loc6 + RTVA(2287, 41, "referring_edge", loc6));
			;
		}

	}

	RTHOOK(37);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(2284, 125, dtype)) = (EIF_REFERENCE)NULL;

	RTHOOK(38);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(39);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
	} else {
		RTHOOK(40);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 123, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(41);
	RTLE;
	RTLO(13);
	RTEE;
#undef arg2
#undef arg1
}

/* infix "+" */

EIF_UNION Fnyqwoi (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"+\"", RTUD(2284), Current, 0, 1, 27346);
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
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 120, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2284, 116, "merge_with", Result))(Result, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2284, 116, "merge_with", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("conflict", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2284, 88, "merge_succeeded", Result))(Result)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2284, 64, "conflicting_edges", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(90, 11, "count", tr1));
			tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* remove_edge */

void Fnymc35 (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
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
	RTEAA("remove_edge", RTUD(2284), Current, 0, 0, 27339);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 108, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("exhausted_after_last_edge", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* turn_to_edge */

void Fnyg6m6 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("turn_to_edge", RTUD(2284), Current, 0, 1, 27335);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 95, dtype))(Current);
	RTHOOK(3);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tc1 = RTCEQ(tr1, arg1);
	}
	while (!(tc1)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 96, dtype))(Current);
		RTHOOK(3);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc1 = RTCEQ(tr1, arg1);
		}
		;
	}


	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (!RTCEQ(tr1, arg1)) {

		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 95, dtype))(Current);
		RTHOOK(7);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 22, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		while (!(tc2)) {
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 96, dtype))(Current);
			RTHOOK(7);
			tc2 = '\01';
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (!tc3) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(arg1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 22, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("edge_not_found", EX_POST);
		tc3 = '\01';
		tc4 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ur1 = RTCCL(arg1);
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 74, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc4 = (EIF_BOOLEAN) !tc5;
		}
		if (tc4) {
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("edge_found", EX_POST);
		tc3 = '\01';
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc4) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			ur1 = RTCCL(arg1);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2286, 37, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		if (tc3) {
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
#undef arg1
}

/* edge_count */

EIF_UNION Fnxuwyt (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("edge_count", RTUD(2284), Current, 0, 0, 27310);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 55, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* back */

void Fnyelwp (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr3 = NULL;
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
	RTEAA("back", RTUD(2284), Current, 0, 0, 27332);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("can_go_back", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 76, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(46, 0, "item", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(46, 4, "remove", tr2))(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("focused_edge_restored", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 51, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(4);
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(2);
	RTEE;
}

/* convert_to_simple_graph */

void Fnyoax0 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("convert_to_simple_graph", RTUD(2284), Current, 0, 0, 27342);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("multigraph", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("only_simple_edges", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 89, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 138, dtype))(Current, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("simple_graph", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
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

/* readable */

EIF_UNION Fnx9feq (EIF_REFERENCE Current)
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
	RTEAA("readable", RTUD(2284), Current, 0, 0, 27327);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* writable */

EIF_UNION Fnyap9z (EIF_REFERENCE Current)
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
	RTEAA("writable", RTUD(2284), Current, 0, 0, 27329);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* valid_cursor */

EIF_UNION Fnyb_47 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(2,arg1);
	RTLR(1,Current);
	RTLR(6,loc1);
	RTLR(0,loc2);
	RTLR(5,loc3);
	RTLR(4,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("valid_cursor", RTUD(2284), Current, 3, 1, 27331);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc2 = RTCCL(arg1);
	loc2 = RTRV(RTWCT(2284, 50, Current), loc2);

	RTHOOK(2);
	tc1 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2289, 32, "current_node", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	if (tc1) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(2289, 33, "edge_item", loc2));
		loc3 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(6);
			Result = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2286, 32, "end_node", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 72, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				ur1 = RTCCL(loc3);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 74, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				Result = tc1;
			}
		} else {
			RTHOOK(7);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2289, 32, "current_node", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 101, dtype))(Current, ur1x);
			RTHOOK(9);
			Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;

			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(11);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
			} else {
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 123, dtype))(Current);
			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* cursor */

EIF_UNION Fnxkjzv (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(6,Result);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("cursor", RTUD(2284), Current, 0, 0, 27361);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(2);
		{
			static int16 typarr [] = {2284,2289,-8,1,758,-1};
			int16 typres;

			typres = RTCID2(NULL, Dftype(Current), 2289, typarr);

			tr1 = RTLN(typres);

		}
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2289, 31, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(2);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(3);
		Result = (EIF_REFERENCE)NULL;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("cursor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("void_when_off", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(Result == NULL))) {
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

/* go_to */

void Fnyfwry (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("go_to", RTUD(2284), Current, 0, 1, 27334);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("cursor_position_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 94, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2289, 32, "current_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 101, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2289, 33, "edge_item", arg1));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 102, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("equal_items", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2289, 32, "current_node", arg1))(arg1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* target_cursor */

EIF_UNION Fnxluu3 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("target_cursor", RTUD(2284), Current, 0, 0, 27363);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		Result = (EIF_REFERENCE)NULL;
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 99, dtype))(Current);
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2284, 50, Current));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 140, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2289, 31, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(4);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 98, dtype))(Current);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("void_when_off", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(Result == NULL))) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* neighbors */

EIF_UNION Fnxqdeg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_CHARACTER tc3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("neighbors", RTUD(2284), Current, 1, 0, 27305);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	{
		static int16 typarr [] = {2284,2302,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2302, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 95, dtype))(Current);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 51, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 3, "put", Result))(Result, ur1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 96, dtype))(Current);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(8);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("simple_graph_neighbors", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 85, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc3) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("multi_graph_neighbors", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc3) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc2 = (EIF_BOOLEAN)(ti4_1 <= ti4_2);
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* is_eulerian */

EIF_UNION Fnx5js_ (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(4,loc1);
	RTLR(3,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("is_eulerian", RTUD(2284), Current, 2, 0, 27324);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 86, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(2);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
	} else {

		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(4);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		}

		RTHOOK(5);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTHOOK(6);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 62, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
		RTHOOK(8);
		tc1 = '\01';
		if (!(EIF_BOOLEAN) !Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		while (!(tc1)) {
			RTHOOK(9);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 101, dtype))(Current, ur1x);
			RTHOOK(10);
			tc2 = '\0';
			if (Result) {
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 67, dtype))(Current)).value.EIF_INTEGER_32_value);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
				tc2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			Result = (EIF_BOOLEAN)tc2;
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
			RTHOOK(8);
			tc1 = '\01';
			if (!(EIF_BOOLEAN) !Result) {
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			;
		}


		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(13);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
		} else {
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 123, dtype))(Current);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("cyclic_tour", EX_POST);
		tc2 = '\01';
		if (Result) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 82, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("cursor_not_moved", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2284, 22, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* reducible_multigraph */

EIF_UNION Fnx8sg3 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(4,tr1);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(1,loc2);
	RTLR(3,loc3);
	RTLR(5,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("reducible_multigraph", RTUD(2284), Current, 4, 0, 27326);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("multigraph", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 87, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 50, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}


	RTHOOK(4);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(5);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 62, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(7);
	{
		static int16 typarr [] = {2284,2302,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2302, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(7);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 101, dtype))(Current, ur1x);

		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 95, dtype))(Current);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "wipe_out", loc3))(loc3);
		RTHOOK(12);
		loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(13);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc2)) {
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 51, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 3, "put", loc3))(loc3, ur1x);
			RTHOOK(15);
			loc4++;
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 96, dtype))(Current);
			RTHOOK(13);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 142, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

		RTHOOK(17);
		tc3 = '\0';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVPA(90, 11, "count", loc3));
			tc3 = (EIF_BOOLEAN)(ti4_1 == loc4);
		}
		Result = (EIF_BOOLEAN)tc3;
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(19);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(20);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2284, 100, dtype))(Current, ur1x);
	} else {
		RTHOOK(21);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2284, 123, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* path */

EIF_UNION Fnxrn9p (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("path", RTUD(2284), Current, 0, 0, 27306);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("path_found", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 81, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REFERENCE *)(Current + RTWA(2284, 129, dtype));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("path_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* changeable_comparison_criterion */

EIF_UNION Fnxxhpa (EIF_REFERENCE Current)
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
	RTEAA("changeable_comparison_criterion", RTUD(2284), Current, 0, 0, 27313);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_on_empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 8, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(Result == tc1)) {
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

void Fp0ihe1 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("valid_in_degree", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 67, dtype))(Current)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_out_degree", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 68, dtype))(Current)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("edge_in_focus", Current);
	tc1 = '\01';
	tc2 = '\0';
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 143, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc3) {
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (tc2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2284, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tc1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("history_stack_item_not_void", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 124, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(46, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tc1 = (EIF_BOOLEAN)(tr2 != NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("item_index_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2284, 122, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2285 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

