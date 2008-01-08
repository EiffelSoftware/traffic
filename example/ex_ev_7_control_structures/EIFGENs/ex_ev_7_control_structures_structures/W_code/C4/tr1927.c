/*
 * Code for class TRAFFIC_GRAPH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn_f93r(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn_rxyy(EIF_REFERENCE);
extern void Fn_c1fn(EIF_REFERENCE, EIF_UNION);
extern void Fn_fm54(EIF_REFERENCE, EIF_UNION);
extern void Fn_brke(EIF_REFERENCE);
extern void Fn_ez8i(EIF_REFERENCE, EIF_UNION);
extern void Fn_ecaw(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn_j5qh(EIF_REFERENCE);
extern EIF_UNION Fn_mrgz(EIF_REFERENCE, EIF_UNION);
extern void Fn_dpc9(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn_skwk(EIF_REFERENCE, EIF_UNION);
extern void Fn_neel(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn_l3jc(EIF_REFERENCE, EIF_UNION);
extern void Fn_jisv(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fn_ceh0(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn_ivu8(EIF_REFERENCE);
extern EIF_UNION Fn_ktn3(EIF_REFERENCE);
extern void Fn_lglq(EIF_REFERENCE, EIF_UNION);
extern void Fn_pz42(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn_qm2p(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1927(void);

extern EIF_REFERENCE _fAac9ar1_2();
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

/* prune_node */

void Fn_f93r (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(6,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(7,loc2);
	RTLR(5,loc3);
	RTLR(2,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("prune_node", RTUD(1926), Current, 3, 1, 27442);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
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
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}

	RTHOOK(2);
	tc3 = '\0';
	tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc4) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 2, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 50, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		tc3 = tc4;
	}
	if (tc3) {
		RTHOOK(3);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1926, 157, dtype)) = (EIF_REFERENCE)NULL;
	} else {
		RTHOOK(4);
		tc3 = '\0';
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc4) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 92, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 50, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
	if (tc3) {

		RTHOOK(5);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 91, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1926, 41, dtype))(Current);
		} else {
			RTHOOK(7);
			*(EIF_BOOLEAN *)(Current + RTWA(1926, 34, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}}

	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 87, dtype));
	ur1 = RTCCL(arg1);
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ur1x)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_3;

	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 22, dtype));
		ur1 = NULL;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 85, dtype));
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ui4_1x);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 87, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", tr1))(tr1, ur1x);

		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 7, "linear_representation", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc3 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc3))(loc3);
		RTHOOK(15);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc3))(loc3)).value.EIF_BOOLEAN_value);
		while (!(tc3)) {
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc3))(loc3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = (EIF_REFERENCE)RTCCL(tr1);

			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1958, 71, "start_node", loc2));
			RTNHOOK(17);
			ur1 = RTCCL(arg1);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 33, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc4) {
				RTHOOK(18);
				tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 69, "length", loc2))(loc2)).value.EIF_REAL_64_value);
				(*(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype))) -= tr8_2;
				RTHOOK(19);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 6, "prune", tr1))(tr1, ur1x);
			} else {
				RTHOOK(20);
				tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1958, 72, "end_node", loc2));
				RTNHOOK(20);
				ur1 = RTCCL(arg1);
				tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 33, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc4) {
				RTHOOK(21);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 169, dtype))(Current, ur1x);
			} else {
				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc3))(loc3);
			}}

			RTHOOK(15);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc3))(loc3)).value.EIF_BOOLEAN_value);
			;
		}

		RTHOOK(23);
		(*(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype)))--;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("removed_count_change", EX_POST);
		tc4 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
			tc4 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("not_removed_no_count_change", EX_POST);
		tc4 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
			tc4 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("item_deleted", EX_POST);
		ur1 = RTCCL(arg1);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("node_removed", EX_POST);
		ur1 = RTCCL(arg1);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* average_weight */

EIF_UNION Fn_rxyy (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("average_weight", RTUD(1926), Current, 0, 0, 27433);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(160, 6, "count", tr1));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (Result) /  (EIF_REAL_64) (tr8_1));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* put_road */

void Fn_c1fn (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_road", RTUD(1926), Current, 0, 1, 27437);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_road_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nodes_exist", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 36, "start_node", arg1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 37, "end_node", arg1));
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 36, "start_node", arg1));
	RTNHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 65, "put_connection", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 156, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1960, 75, "id", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1805, 31, "take", tr1))(tr1, ui4_1x);
	RTHOOK(6);
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 18, "length", arg1))(arg1)).value.EIF_REAL_64_value);
	(*(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype))) += tr8_2;

	RTHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(1960, 15, "is_directed", arg1));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 37, "end_node", arg1));
		RTNHOOK(8);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 65, "put_connection", tr1))(tr1, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* prune_edge */

void Fn_fm54 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(5,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(6,loc3);
	RTLR(1,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("prune_edge", RTUD(1926), Current, 3, 1, 27441);
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
		RTCT("edge_exists", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 164, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 169, dtype))(Current, ur1x);

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 88, dtype));
	if (tc1) {
		RTHOOK(5);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(RTWCT(1926, 158, Current), loc1);

		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1958, 71, "start_node", loc1));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1958, 72, "end_node", loc1));
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
		} else {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 71, "start_node", arg1));
			ur1 = RTCCL(tr1);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 89, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 72, "end_node", arg1));
			ur1 = RTCCL(tr1);
			loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 89, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		}

		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1958, 25, "flip", arg1))(arg1);
		RTHOOK(12);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 169, dtype))(Current, ur1x);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1958, 25, "flip", arg1))(arg1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("simple_edge_removed", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 88, dtype));
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("symmetric_edge_removed", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 88, dtype));
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 2L)));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("exhausted_after_last_edge", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			tc3 = '\0';
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 158, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr1);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 50, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			if (tc4) {
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 91, dtype))(Current)).value.EIF_INTEGER_32_value);
				tc3 = (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 0L));
			}
			tc2 = tc3;
		}
		if (tc2) {
			tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 34, dtype));
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
	RTHOOK(17);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* make */

void Fn_brke (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	RTLU(SK_INT32, &loc1);
	RTEAA("make", RTUD(1926), Current, 1, 0, 27435);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 100L);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1926, 82, dtype))(Current);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 160, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(1926, 155, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(1926, 156, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1805, 30, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1926, 156, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
}

/* put_node */

void Fn_ez8i (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	RTLI(7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(5,tr3);
	RTLR(2,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("put_node", RTUD(1926), Current, 1, 1, 27440);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
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
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
		ti4_2 = ti4_3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 126, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = tr2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 22, dtype));
	ur1 = RTCCL(arg1);
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc3) {

		RTHOOK(3);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 85, dtype));
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr2))(tr2)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			RTHOOK(4);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 85, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", tr2))(tr2);
			RTHOOK(5);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 85, dtype));
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", tr2))(tr2)).value.EIF_INTEGER_32_value);
			loc1 = (EIF_INTEGER_32)ti4_3;
			RTHOOK(6);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 85, dtype));
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 6, "prune", tr2))(tr2, ui4_1x);
		} else {
			RTHOOK(7);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
		}

		RTHOOK(8);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 22, dtype));
		ur1 = RTCCL(arg1);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(4, 11, "force", tr2))(tr2, ur1x, ui4_1x);
		RTHOOK(9);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 87, dtype));
		ui4_1 = loc1;
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(87, 24, "force", tr2))(tr2, ui4_1x, ur1x);
		RTHOOK(10);
		(*(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype)))++;
	} else {
		RTHOOK(11);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 69, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr3 = RTMS_EX_H("not inserted\012",13,1831189002);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(152, 29, "put_string", tr2))(tr2, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("item_inserted", EX_POST);
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 116, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("in_set_already", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("added_to_set", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 132, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("node_present", EX_POST);
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCS(EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1926, 87, dtype));
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("cursor_not_moved", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 126, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(tr1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 50, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* put_connection */

void Fn_ecaw (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("put_connection", RTUD(1926), Current, 2, 1, 27439);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_connection_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nodes_exist", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 71, "start_node", arg1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 72, "end_node", arg1));
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(1960), loc1);
	RTHOOK(4);
	loc2 = RTCCL(arg1);
	loc2 = RTRV(RTUD(1974), loc2);

	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 149, dtype))(Current, ur1x);
	} else {
		RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(8);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 150, dtype))(Current, ur1x);
	} else {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 71, "start_node", arg1));
		RTNHOOK(9);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 65, "put_connection", tr1))(tr1, ur1x);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
		RTHOOK(11);
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 69, "length", arg1))(arg1)).value.EIF_REAL_64_value);
		(*(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype))) += tr8_2;

		RTHOOK(12);
		tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(1958, 13, "is_directed", arg1));
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 72, "end_node", arg1));
			RTNHOOK(13);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 65, "put_connection", tr1))(tr1, ur1x);
		}

	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* normal_distance */

EIF_UNION Fn_j5qh (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	return r;
}
/* has_edge */

EIF_UNION Fn_mrgz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(2,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("has_edge", RTUD(1926), Current, 3, 1, 27429);
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
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2286, 31, "start_node", arg1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(2286, 32, "end_node", arg1));
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTWCT(1926, 158, Current), loc1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1958, 71, "start_node", loc1));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 71, "start_node", arg1));
		ur1 = RTCCL(tr1);
		loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 89, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}


	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
	RTNHOOK(7);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 2, "index", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc3 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
	RTNHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
	RTHOOK(9);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
	RTNHOOK(9);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 4, "exhausted", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
		RTNHOOK(9);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1958, 73, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
		RTNHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);
		RTHOOK(9);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
		RTNHOOK(9);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 4, "exhausted", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
			RTNHOOK(9);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1958, 73, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		;
	}

	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
	RTNHOOK(11);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 4, "exhausted", tr1))(tr1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !tc2;
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1976, 58, "connection_list", loc2));
	RTNHOOK(12);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(171, 3, "go_i_th", tr1))(tr1, ui4_1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* put_line_section */

void Fn_dpc9 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_line_section", RTUD(1926), Current, 0, 1, 27438);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_section_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nodes_exist", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 79, "start_node", arg1));
		ur1 = RTCCL(tr1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 80, "end_node", arg1));
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 79, "start_node", arg1));
	RTNHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1977, 22, "put_connection", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(5);
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 18, "length", arg1))(arg1)).value.EIF_REAL_64_value);
	(*(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype))) += tr8_2;

	RTHOOK(6);
	tc1 = *(EIF_BOOLEAN *)(arg1 + RTVA(1974, 15, "is_directed", arg1));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 80, "end_node", arg1));
		RTNHOOK(7);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1977, 22, "put_connection", tr1))(tr1, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* node_from_item */

EIF_UNION Fn_skwk (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("node_from_item", RTUD(1926), Current, 1, 1, 27434);
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
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 87, dtype));
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", tr1))(tr1, ur1x)).value.EIF_INTEGER_32_value);
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 166, dtype));
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

/* adopt_edge */

void Fn_neel (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REAL_32 tr4_2;
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
	RTEAA("adopt_edge", RTUD(1926), Current, 0, 1, 27430);
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
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 71, "start_node", arg1));
	ur1 = RTCCL(tr1);
	tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 72, "end_node", arg1));
	ur2 = RTCCL(tr2);
	tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1958, 3, "label", arg1));
	ur4_1 = tr4_1;
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 45, "weight", arg1))(arg1)).value.EIF_REAL_32_value);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1926, 148, dtype))(Current, ur1x, ur2x, ur4_1x, ur4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("edge_adopted", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 164, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("simple_edge_count", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 109, dtype));
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
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
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 109, dtype));
		if (tc2) {
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
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

EIF_UNION Fn_l3jc (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("edge_occurences", RTUD(1926), Current, 1, 1, 27428);
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
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 126, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	}

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1958, 71, "start_node", arg1));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 49, dtype))(Current, ur1x);

	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(6);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	} else {

		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1926, 44, dtype))(Current);
		RTHOOK(8);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 34, dtype));
		while (!(tc1)) {

			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 158, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1958, 73, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(10);
				Result++;
			}

			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1926, 39, dtype))(Current);
			RTHOOK(8);
			tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 34, dtype));
			;
		}

	}


	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(13);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 127, dtype))(Current, ur1x);
	} else {
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1926, 95, dtype))(Current);
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

/* find_shortest_path */

void Fn_jisv (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(1,Current);
	RTLR(6,arg1);
	RTLR(7,arg2);
	RTLR(5,ur1);
	RTLR(8,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("find_shortest_path", RTUD(1926), Current, 0, 2, 27444);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1926,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1926,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr2 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 1L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x);
	tr3 = * (EIF_REFERENCE *) tr2;
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	{
		static int16 typarr [] = {1926,2273,0,-7,1,726,1958,758,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 2273, typarr);

		tr4 = RTLNRW(typres, 0, (EIF_POINTER) _fAac9ar1_2, (EIF_POINTER)(0),1926, 170, tr2, 0, 0, 1, 0, tr1, 1);

	}
	ur1 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 93, dtype))(Current, ur1x);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2282, 91, RTUD(2282)))(Current, ur1x, ur2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* connect_nodes */

void Fn_ceh0 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
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
	RTLI(10);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(2,Current);
	RTLR(9,tr3);
	RTLR(5,loc1);
	RTLR(1,ur1);
	RTLR(4,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("connect_nodes", RTUD(1926), Current, 1, 4, 27436);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("nodes_exist", EX_PRE);
		tc1 = '\0';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("simple_graph", EX_PRE);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 109, dtype));
		if (tc2) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 101, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	tr1 = RTLN(RTUD(1960));
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	tr2 = RTLN(RTUD(1892));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1892, 34, Dtype(tr2)))(tr2);
	RTNHOOK(3);
	RTCI2(tr2);
	ur3 = RTCCL(tr2);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1926, 156, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1805, 34, "next_free_index", tr3))(tr3)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1960, 71, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ui4_1x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1976, 65, "put_connection", arg1))(arg1, ur1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 84, dtype));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 156, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1960, 75, "id", loc1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1805, 31, "take", tr1))(tr1, ui4_1x);
	RTHOOK(7);
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 18, "length", loc1))(loc1)).value.EIF_REAL_64_value);
	(*(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype))) += tr8_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("simple_graph_criterion", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 109, dtype));
		if (tc2) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 101, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("symmetric_graph_criterion", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1926, 88, dtype));
		if (tc2) {
			tc2 = '\0';
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 101, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			if (tc3) {
				ur1 = RTCCL(arg2);
				ur2 = RTCCL(arg1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1926, 101, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(10);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* edge_item */

EIF_UNION Fn_ivu8 (EIF_REFERENCE Current)
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
	RTEAA("edge_item", RTUD(1926), Current, 0, 0, 27443);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 80, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1926, 157, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1976, 58, "connection_list", tr1));
	RTNHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 1, "off", tr2))(tr2)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		Result = *(EIF_REFERENCE *)(Current + RTWA(1926, 157, dtype));
		tr1 = *(EIF_REFERENCE *)(Result + RTVA(1976, 58, "connection_list", Result));
		RTNHOOK(3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = RTRV(RTUD(1958), tr2);
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

/* minimal_switches */

EIF_UNION Fn_ktn3 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* set_shortest_path_mode */

void Fn_lglq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTEAA("set_shortest_path_mode", RTUD(1926), Current, 0, 1, 27447);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_mode_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 160, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 161, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 == ti4_1) || (EIF_BOOLEAN)(arg1 == ti4_2)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(1926, 155, dtype)) = (EIF_INTEGER_32)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("path_mode_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 155, dtype));
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

/* prune_edge_impl */

void Fn_pz42 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("prune_edge_impl", RTUD(1926), Current, 0, 1, 27431);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("edge_exists", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1926, 164, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 69, "length", arg1))(arg1)).value.EIF_REAL_64_value);
	(*(EIF_REAL_64 *)(Current + RTWA(1926, 171, dtype))) -= tr8_2;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2282, 106, RTUD(2282)))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* calculate_weight */

EIF_UNION Fn_qm2p (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
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
	RTLR(2,loc1);
	RTLR(5,ur1);

	RTLU (SK_REAL32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("calculate_weight", RTUD(1926), Current, 1, 1, 27432);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1926, 155, dtype));
	switch (ti4_1) {
		case 0L:
			RTHOOK(2);
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 69, "length", arg1))(arg1)).value.EIF_REAL_64_value);
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 70, "weight_factor", arg1))(arg1)).value.EIF_REAL_64_value);
			tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)(tr8_1 * tr8_2));
			Result = (EIF_REAL_32)tr4_1;
			break;
		case 1L:
			RTHOOK(3);
			loc1 = RTCCL(arg1);
			loc1 = RTRV(RTUD(1959), loc1);

			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(5);
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1926, 172, dtype))(Current)).value.EIF_REAL_64_value);
				tr4_1 = (EIF_REAL_32) (tr8_1);
				Result = (EIF_REAL_32)tr4_1;
			} else {
				RTHOOK(6);
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 69, "length", arg1))(arg1)).value.EIF_REAL_64_value);
				tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 70, "weight_factor", arg1))(arg1)).value.EIF_REAL_64_value);
				tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)(tr8_1 * tr8_2));
				Result = (EIF_REAL_32)tr4_1;
			}

			break;
		default:
			RTHOOK(7);
			tr1 = RTLN(RTUD(296));
			RTCI2(tr1);
			tr2 = RTMS_EX_H("Unknown path mode in TRAFFIC_GRAPH",34,855925832);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(60, 18, "raise", tr1))(tr1, ur1x);
			break;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
#undef arg1
}

void EIF_Minit1927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

