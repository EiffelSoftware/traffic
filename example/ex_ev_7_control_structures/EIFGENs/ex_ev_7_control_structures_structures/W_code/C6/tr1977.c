/*
 * Code for class TRAFFIC_NODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fobm6cd(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fobpr2v(EIF_REFERENCE);
extern void Fobscuc(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fobq1y3(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fobrpwq(EIF_REFERENCE);
extern void Fobtnpl(EIF_REFERENCE, EIF_UNION);
extern void Fobqe0h(EIF_REFERENCE, EIF_UNION);
extern void Fobs_rz(EIF_REFERENCE);
extern void Fp0_8br(EIF_REFERENCE, int);
extern void EIF_Minit1977(void);

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

/* make_with_place */

void Fobm6cd (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_place", RTUD(1976), Current, 0, 2, 28134);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("place_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("position_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(1976, 58, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(95, 0, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 58, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	RTAR(Current, Current);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 1, dtype)) = (EIF_REFERENCE)RTCCL(Current);
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(6);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(1976, 58, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(95, 0, Dtype(tr1)))(tr1);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 58, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1976, 53, dtype))(Current);

	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1973, 46, "dummy_node", tr1));
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 62, "add_node", tr1))(tr1, ur1x);
	}

	RTHOOK(11);
	tr1 = RTLNSMART(RTWCT(1976, 12, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(11);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 12, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("no_referrer", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 2, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1976, 66, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("distance_positive", EX_POST);
		tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1976, 52, dtype));
		tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(tr4_1 >= tr4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("fresh", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1976, 5, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("place_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("position_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("no_neighbors", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 58, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
#undef arg2
#undef arg1
}

/* hash_code */

EIF_UNION Fobpr2v (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hash_code", RTUD(1976), Current, 0, 0, 28135);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1976,-7,2,726,1973,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr1 = RTLNTS(typres, 3, 0);

	}
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = tr2;
	RTAR(tr1,tr2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype));
	((EIF_TYPED_ELEMENT *)tr1+2)->element.rarg = tr2;
	RTAR(tr1,tr2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
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

/* add_to_map */

void Fobscuc (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(12);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLR(1,Current);
	RTLR(6,tr3);
	RTLR(5,loc1);
	RTLR(11,loc2);
	RTLR(2,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("add_to_map", RTUD(1976), Current, 2, 1, 28139);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_map_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1976, 27, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("insertable", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1976, 61, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1924, 124, "graph", arg1));
	RTNHOOK(4);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1926, 152, "put_node", tr1))(tr1, ur1x);
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current + RTWA(1976, 27, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(6);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 54, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1973, 46, "dummy_node", tr1));
	if (!RTCEQ(Current, tr2)) {
		RTHOOK(8);
		tr1 = RTLN(RTUD(1959));
		ur1 = RTCCL(Current);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 46, "dummy_node", tr2));
		ur2 = RTCCL(tr3);
		tr2 = RTLN(RTUD(1892));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1892, 34, Dtype(tr2)))(tr2);
		RTNHOOK(8);
		RTCI2(tr2);
		ur3 = RTCCL(tr2);
		tr4 = *(EIF_REFERENCE *)(arg1 + RTVA(1924, 124, "graph", arg1));
		RTNHOOK(8);
		tr5 = *(EIF_REFERENCE *)(tr4 + RTVA(1926, 156, "id_manager", tr4));
		RTNHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1805, 34, "next_free_index", tr5))(tr5)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1959, 71, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ui4_1x);
		RTNHOOK(8);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		{
			static int16 typarr [] = {1976,2190,2010,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 2190, typarr);

			tr1 = RTLN(typres);

		}
		ui4_1 = ((EIF_INTEGER_32) 2L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(9);
		RTCI2(tr1);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 107, "put_first", loc2))(loc2, ur1x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1973, 46, "dummy_node", tr1));
		RTNHOOK(11);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1976, 57, "position", tr2));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 108, "put_last", loc2))(loc2, ur1x);
		RTHOOK(12);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1959, 68, "set_polypoints", loc1))(loc1, ur1x);
		RTHOOK(13);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1959, 76, "add_to_map", loc1))(loc1, ur1x);
		RTHOOK(14);
		tr1 = RTLN(RTUD(1959));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 46, "dummy_node", tr2));
		ur1 = RTCCL(tr3);
		ur2 = RTCCL(Current);
		tr2 = RTLN(RTUD(1892));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1892, 34, Dtype(tr2)))(tr2);
		RTNHOOK(14);
		RTCI2(tr2);
		ur3 = RTCCL(tr2);
		tr4 = *(EIF_REFERENCE *)(arg1 + RTVA(1924, 124, "graph", arg1));
		RTNHOOK(14);
		tr5 = *(EIF_REFERENCE *)(tr4 + RTVA(1926, 156, "id_manager", tr4));
		RTNHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1805, 34, "next_free_index", tr5))(tr5)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1959, 71, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ui4_1x);
		RTNHOOK(14);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(15);
		{
			static int16 typarr [] = {1976,2190,2010,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 2190, typarr);

			tr1 = RTLN(typres);

		}
		ui4_1 = ((EIF_INTEGER_32) 2L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(15);
		RTCI2(tr1);
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1973, 46, "dummy_node", tr1));
		RTNHOOK(16);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1976, 57, "position", tr2));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 107, "put_first", loc2))(loc2, ur1x);
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 108, "put_last", loc2))(loc2, ur1x);
		RTHOOK(18);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1959, 68, "set_polypoints", loc1))(loc1, ur1x);
		RTHOOK(19);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1959, 76, "add_to_map", loc1))(loc1, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("is_in_map", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1976, 27, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 54, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("graph_has", EX_POST);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1924, 124, "graph", arg1));
		RTNHOOK(22);
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1926, 38, "has_node", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* is_insertable */

EIF_UNION Fobq1y3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_insertable", RTUD(1976), Current, 0, 1, 28137);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 58, Dtype(Current)));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_removable */

EIF_UNION Fobrpwq (EIF_REFERENCE Current)
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
	RTEAA("is_removable", RTUD(1976), Current, 0, 0, 28138);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* put_connection */

void Fobtnpl (EIF_REFERENCE Current, EIF_UNION arg1x)
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_connection", RTUD(1976), Current, 0, 1, 28141);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("incident_node", EX_PRE);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 1, dtype));
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2303, 20, "start_node", arg1));
		if (!RTCEQ(tr1, tr2)) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 1, dtype));
			tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(2303, 21, "end_node", arg1));
			tc1 = RTCEQ(tr1, tr2);
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
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1976, 26, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 58, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 12, dtype));
	{
		static int16 typarr [] = {1976,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("edge_inserted", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 58, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("increased_degree", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1976, 26, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* set_position */

void Fobqe0h (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_position", RTUD(1976), Current, 0, 1, 28136);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("position_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 12, dtype));
	{
		static int16 typarr [] = {1976,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("position_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype));
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

/* remove_from_map */

void Fobs_rz (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_from_map", RTUD(1976), Current, 0, 0, 28140);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1976, 27, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_removable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1976, 62, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 54, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 124, "graph", tr1));
	RTNHOOK(3);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1926, 154, "prune_node", tr2))(tr2, ur1x);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1976, 27, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1976, 54, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("not_in_map", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1976, 27, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("map_unset", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 54, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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

void Fp0_8br (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("place_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 56, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("position_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 57, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("item_is_self", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 1, dtype));
	if (RTCEQ(tr1, Current)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("connection_list_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1976, 58, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1977 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

