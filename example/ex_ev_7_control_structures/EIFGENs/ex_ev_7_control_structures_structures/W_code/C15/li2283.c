/*
 * Code for class LINKED_WEIGHTED_GRAPH [REFERENCE, REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn_a3we(EIF_REFERENCE);
extern EIF_UNION Fnz852j(EIF_REFERENCE);
extern void Fn_agys(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnz9t_5(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fp0ke7v(EIF_REFERENCE, int);
extern void EIF_Minit2283(void);

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

/* out */

EIF_UNION Fn_a3we (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 loc5 = (EIF_REAL_32) 0;
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
	EIF_REAL_32 tr4_1;
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

	RTLI(7);
	RTLR(1,tr1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(0,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REAL32, &loc5);
	RTEAA("out", RTUD(2282), Current, 5, 0, 27427);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = RTMS_EX_H("digraph linked_weighted_graph\012",30,1803270154);
	RTHOOK(2);
	tr1 = RTMS_EX_H("{\012",2,31498);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);

	RTHOOK(3);
	loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2282, 141, dtype));
	while (!((EIF_BOOLEAN)(loc3 > ti4_1))) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2282, 24, dtype));
		ui4_1 = loc3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(6);
		tr1 = RTMS_EX_H("\"",1,34);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2304, 48, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 21, "out", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H("\";\012",3,2243338);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);

		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
		RTNHOOK(9);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 2, "index", tr1))(tr1)).value.EIF_INTEGER_32_value);
		loc4 = (EIF_INTEGER_32)ti4_2;
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
		RTNHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
		RTNHOOK(11);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 4, "exhausted", tr1))(tr1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(12);
			tr1 = RTMS_EX_H("  \"",3,2105378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2304, 48, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(13);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 21, "out", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(14);
			tr1 = RTMS_EX_H("\" -> \"",6,826138658);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
			RTNHOOK(15);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = RTCCL(tr2);
			loc2 = RTRV(RTWCT(2282, 157, Current), loc2);
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2311, 27, "end_node", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 21, "out", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(17);
			tr1 = RTMS_EX_H("\" [label=\"",10,312818466);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(18);
			tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2311, 2, "label", loc2))(loc2)).value.EIF_REAL_32_value);
			loc5 = (EIF_REAL_32)tr4_1;

			RTHOOK(19);
			tc2 = '\0';
			if (EIF_TRUE) {
				tr1 = c_outr32(loc5);
				RTNHOOK(19);
				tr2 = RTMS_EX_H("",0,0);
				ur1 = tr2;
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
				tc2 = (EIF_BOOLEAN) !tc3;
			}
			if (tc2) {
				RTHOOK(20);
				tr1 = c_outr32(loc5);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
				RTHOOK(21);
				tr1 = RTMS_EX_H("\\n",2,23662);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			}

			RTHOOK(22);
			tr1 = RTMS_EX_H("w = ",4,1998601504);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(23);
			tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2311, 42, "weight", loc2))(loc2)).value.EIF_REAL_32_value);
			RTNHOOK(23);
			tr1 = c_outr32(tr4_1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(24);
			tr1 = RTMS_EX_H("\"];\012",4,576535306);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
			RTNHOOK(25);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
			RTNHOOK(11);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 4, "exhausted", tr1))(tr1)).value.EIF_BOOLEAN_value);
			;
		}


		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
		RTNHOOK(26);
		ui4_1 = loc4;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 2, "valid_index", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(27);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2304, 49, "edge_list", loc1));
			RTNHOOK(27);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(171, 3, "go_i_th", tr1))(tr1, ui4_1x);
		}

		RTHOOK(28);
		loc3++;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2282, 141, dtype));
		;
	}

	RTHOOK(29);
	tr1 = RTMS_EX_H("}\012",2,32010);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* edge_item */

EIF_UNION Fnz852j (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCFDT;
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
	RTEAA("edge_item", RTUD(2282), Current, 0, 0, 27424);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2282, 23, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2282, 14, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2304, 49, "edge_list", tr1));
	RTNHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 1, "off", tr2))(tr2)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		Result = *(EIF_REFERENCE *)(Current + RTWA(2282, 14, dtype));
		tr1 = *(EIF_REFERENCE *)(Result + RTVA(2304, 49, "edge_list", Result));
		RTNHOOK(3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		{
			static int16 typarr [] = {2282,2311,-8,1,758,-1};
			int16 typres;

			typres = RTCID2(NULL, dftype, 2311, typarr);

			Result = RTRV(typres, tr2);

		}
	} else {
		RTHOOK(4);
		Result = (EIF_REFERENCE)NULL;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* put_edge */

void Fn_agys (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
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
	RTLI(9);
	RTLR(8,tr1);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(2,Current);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(1,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("put_edge", RTUD(2282), Current, 3, 4, 27426);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_exist", EX_PRE);
		tc1 = '\0';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("simple_graph", EX_PRE);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2282, 119, dtype));
		if (tc2) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2282, 111, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 99, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(4);
	ur1 = RTCCL(arg2);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 99, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(2282, 157, Current));
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	ur4_1 = arg3;
	ur4_2 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2311, 56, Dtype(tr1)))(tr1, ur1x, ur2x, ur4_1x, ur4_2x);
	RTNHOOK(5);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2304, 52, "put_edge", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2282, 94, dtype));
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);

	RTHOOK(8);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2282, 98, dtype));
	if ((EIF_BOOLEAN)(tc1 && !RTCEQ(loc1, loc2))) {
		RTHOOK(9);
		tr1 = RTLNSMART(RTWCT(2282, 157, Current));
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc1);
		ur4_1 = arg3;
		ur4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2311, 56, Dtype(tr1)))(tr1, ur1x, ur2x, ur4_1x, ur4_2x);
		RTNHOOK(9);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2304, 52, "put_edge", loc2))(loc2, ur1x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2282, 94, dtype));
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("simple_graph_criterion", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2282, 119, dtype));
		if (tc2) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2282, 111, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("symmetric_graph_criterion", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2282, 98, dtype));
		if (tc2) {
			tc2 = '\0';
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2282, 111, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				ur1 = RTCCL(arg2);
				ur2 = RTCCL(arg1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2282, 111, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
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
	RTHOOK(14);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* edge_from_values */

EIF_UNION Fnz9t_5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
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
	RTLI(10);
	RTLR(7,tr1);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(2,Current);
	RTLR(9,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(1,ur1);
	RTLR(8,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("edge_from_values", RTUD(2282), Current, 3, 4, 27425);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = '\0';
	ur1 = RTCCL(arg1);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc2) {
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 99, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(3);
		ur1 = RTCCL(arg2);
		loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 99, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2282, 157, Current));
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		ur4_1 = arg3;
		ur4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2311, 56, Dtype(tr1)))(tr1, ur1x, ur2x, ur4_1x, ur4_2x);
		RTNHOOK(4);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(5);
		ur1 = RTCCL(loc3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 62, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(6);
			Result = (EIF_REFERENCE)RTCCL(loc3);
		} else {
			RTHOOK(7);
			Result = (EIF_REFERENCE)NULL;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void Fp0ke7v (EIF_REFERENCE Current, int where)
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

void EIF_Minit2283 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

