/*
 * Code for class WEIGHTED_EDGE [REFERENCE, REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnp9stc(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fnp84vq(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnqdoe2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnqezab(EIF_REFERENCE);
extern void Fnqebcp(EIF_REFERENCE, EIF_UNION);
extern void Fnqc0hg(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnqa2ol(EIF_REFERENCE);
extern void Fnqcdju(EIF_REFERENCE);
extern void Fnqafqz(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fp_8sef(EIF_REFERENCE, int);
extern void EIF_Minit2311(void);

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

/* make_directed */

void Fnp9stc (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make_directed", RTUD(2310), Current, 0, 4, 26899);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur4_1 = arg3;
	ur4_2 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2310, 39, dtype))(Current, ur1x, ur2x, ur4_1x, ur4_2x);
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current + RTWA(2310, 8, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("nodes_assigned", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		if ((EIF_BOOLEAN)(RTCEQ(tr1, arg1) && RTCEQ(tr2, arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("nodes_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("weight_assigned", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2310, 42, dtype))(Current)).value.EIF_REAL_32_value);
		if ((EIF_BOOLEAN)(tr4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("label_set", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
		if ((EIF_BOOLEAN)(tr4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_directed", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 8, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* make */

void Fnp84vq (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_32_value
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
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2310), Current, 0, 4, 26898);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(4);
	*(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype)) = (EIF_REAL_32)arg3;
	RTHOOK(5);
	*(EIF_REAL_32 *)(Current + RTWA(2310, 49, dtype)) = (EIF_REAL_32)arg4;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("nodes_assigned", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		if ((EIF_BOOLEAN)(RTCEQ(tr1, arg1) && RTCEQ(tr2, arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("nodes_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("weight_assigned", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2310, 42, dtype))(Current)).value.EIF_REAL_32_value);
		if ((EIF_BOOLEAN)(tr4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("label_set", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
		if ((EIF_BOOLEAN)(tr4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("default_weight_function", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* is_equal */

EIF_UNION Fnqdoe2 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_equal", RTUD(2310), Current, 0, 1, 26894);
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
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2310, 18, "start_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2310, 19, "end_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		Result = tc1;
	}

	RTHOOK(3);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 8, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(4);
		tc1 = '\01';
		if (!Result) {
			tc2 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2310, 19, "end_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2310, 18, "start_node", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr2);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		Result = (EIF_BOOLEAN)tc1;
	}

	RTHOOK(5);
	tc1 = '\0';
	if (Result) {
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
		ur1 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)ur1 = tr4_1;
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2310, 2, "label", arg1))(arg1)).value.EIF_REAL_32_value);
		ur2 = RTLN(RTUD(758));
		*(EIF_REAL_32 *)ur2 = tr4_2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2310, 25, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	Result = (EIF_BOOLEAN)tc1;
	RTHOOK(6);
	tc1 = '\0';
	if (Result) {
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2310, 42, dtype))(Current)).value.EIF_REAL_32_value);
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2310, 42, "weight", arg1))(arg1)).value.EIF_REAL_32_value);
		tc1 = (EIF_BOOLEAN)(tr4_1 == tr4_2);
	}
	Result = (EIF_BOOLEAN)tc1;
	RTHOOK(7);
	tc1 = '\01';
	if (!Result) {
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2310, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	Result = (EIF_BOOLEAN)tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2310, 46, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2310, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* out */

EIF_UNION Fnqezab (EIF_REFERENCE Current)
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
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("out", RTUD(2310), Current, 0, 0, 26896);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 21, "out", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 8, dtype));
	if (tc1) {
		RTHOOK(3);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	} else {
		RTHOOK(4);
		tr1 = RTMS_EX_H(" -- ",4,539831584);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	}

	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 21, "out", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);

	RTHOOK(6);
	tc1 = '\0';
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
	if (EIF_TRUE) {
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
		tr1 = c_outr32(tr4_1);
		RTNHOOK(6);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	if (tc1) {
		RTHOOK(7);
		tr1 = RTMS_EX_H("  [label=\"",10,178546978);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
		RTHOOK(8);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
		tr1 = c_outr32(tr4_1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
		RTHOOK(9);
		tr1 = RTMS_EX_H("\"]",2,8797);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	}

	RTHOOK(10);
	tr1 = RTMS_EX_H("  [weight=",10,1461293117);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	RTHOOK(11);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2310, 42, dtype))(Current)).value.EIF_REAL_32_value);
	RTNHOOK(11);
	tr1 = c_outr32(tr4_1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("]",1,93);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_weight */

void Fnqebcp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_weight", RTUD(2310), Current, 0, 1, 26895);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_32 *)(Current + RTWA(2310, 49, Dtype(Current))) = (EIF_REAL_32)arg1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* enable_user_defined_weight_function */

void Fnqc0hg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(1,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("enable_user_defined_weight_function", RTUD(2310), Current, 0, 1, 26893);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2310, 50, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("user_defined_weight_function", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype));
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* weight */

EIF_UNION Fnqa2ol (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("weight", RTUD(2310), Current, 0, 0, 26891);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(2);
		Result = *(EIF_REAL_32 *)(Current + RTWA(2310, 49, dtype));
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 50, dtype));
		{
			static int16 typarr [] = {2310,-7,1,726,0,-1};
			int16 typres;

			typarr[4] = RTID(Dftype(Current));
			typres = RTCID2(NULL, Dftype(Current), 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
		RTAR(tr2,Current);
		ur1 = RTCCL(tr2);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(9, 1, "item", tr1))(tr1, ur1x)).value.EIF_REAL_32_value);
		Result = (EIF_REAL_32)tr4_1;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

/* restore_default_weight */

void Fnqcdju (EIF_REFERENCE Current)
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
	RTEAA("restore_default_weight", RTUD(2310), Current, 0, 0, 26892);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_weight_function", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 43, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

/* make_undirected */

void Fnqafqz (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(4,Current);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make_undirected", RTUD(2310), Current, 0, 4, 26900);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur4_1 = arg3;
	ur4_2 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2310, 39, dtype))(Current, ur1x, ur2x, ur4_1x, ur4_2x);
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current + RTWA(2310, 8, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("nodes_assigned", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		if ((EIF_BOOLEAN)(RTCEQ(tr1, arg1) && RTCEQ(tr2, arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("nodes_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2310, 18, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2310, 19, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("weight_assigned", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2310, 42, dtype))(Current)).value.EIF_REAL_32_value);
		if ((EIF_BOOLEAN)(tr4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("label_set", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(2310, 2, dtype));
		if ((EIF_BOOLEAN)(tr4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("not_directed", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2310, 8, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void Fp_8sef (EIF_REFERENCE Current, int where)
{
	GTCX
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("invariant_clause", Current);
	if ((EIF_BOOLEAN) 1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2311 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

