/*
 * Code for class TRAFFIC_ROAD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn4sliy(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn4xr_x(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn4yeyj(EIF_REFERENCE);
extern void Fn4wg4o(EIF_REFERENCE, EIF_UNION);
extern void Fn4w32a(EIF_REFERENCE);
extern void Fn4s8gk(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn4twd6(EIF_REFERENCE);
extern void Fp0qwb1(EIF_REFERENCE, int);
extern void EIF_Minit1949(void);

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

void Fn4sliy (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(5,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1948), Current, 0, 2, 27799);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_conn1_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_conn2_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("same_type", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 74, "type", arg1));
		RTNHOOK(3);
		tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1960, 74, "type", arg2));
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1890, 5, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("same_start", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 36, "start_node", arg1));
		tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1960, 37, "end_node", arg2));
		RTTE(RTCEQ(tr1, tr2), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("same_end", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1960, 37, "end_node", arg1));
		tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1960, 36, "start_node", arg2));
		RTTE(RTCEQ(tr1, tr2), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("same_id", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1960, 75, "id", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(1960, 75, "id", arg2));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(8);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(9);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1960, 75, "id", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(1948, 42, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(11);
	tr1 = RTLNSMART(RTWCT(1948, 7, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(11);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 7, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("one_way_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("other_way_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("not_one_way_road", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("id_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1948, 42, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1960, 75, "id", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* is_insertable */

EIF_UNION Fn4xr_x (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_insertable", RTUD(1948), Current, 0, 1, 27804);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tc1 = '\0';
	tc2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1960, 36, "start_node", tr1));
	RTNHOOK(1);
	tc3 = *(EIF_BOOLEAN *)(tr2 + RTVA(1976, 27, "is_in_map", tr2));
	if (tc3) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1960, 37, "end_node", tr1));
		RTNHOOK(1);
		tc3 = *(EIF_BOOLEAN *)(tr2 + RTVA(1976, 27, "is_in_map", tr2));
		tc2 = tc3;
	}
	if (tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tc2 = *(EIF_BOOLEAN *)(tr2 + RTVA(1973, 16, "is_in_map", tr2));
		tc1 = tc2;
	}
	if (tc1) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tc1 = *(EIF_BOOLEAN *)(tr2 + RTVA(1973, 16, "is_in_map", tr2));
		Result = tc1;
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

/* is_removable */

EIF_UNION Fn4yeyj (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(4,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("is_removable", RTUD(1948), Current, 1, 0, 27805);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype));
	if (tc1) {
		RTHOOK(3);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 39, "outgoing_line_connections", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 30, "start", loc1))(loc1);
		RTHOOK(5);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc1 = (EIF_BOOLEAN) !Result;
		}
		while (!(tc1)) {

			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 72, "roads", tr1));
			RTNHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTVA(1948, 40, "one_way", Current));
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			}

			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 55, "forth", loc1))(loc1);
			RTHOOK(5);
			tc1 = '\01';
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
			if (!tc2) {
				tc1 = (EIF_BOOLEAN) !Result;
			}
			;
		}


		RTHOOK(9);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN) !tc2 && Result)) {
			RTHOOK(10);
			loc1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 39, "outgoing_line_connections", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr2);

			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 30, "start", loc1))(loc1);
			RTHOOK(12);
			tc2 = '\01';
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
			if (!tc3) {
				tc2 = (EIF_BOOLEAN) !Result;
			}
			while (!(tc2)) {

				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(13);
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 72, "roads", tr1));
				RTNHOOK(13);
				tr1 = *(EIF_REFERENCE *)(Current + RTVA(1948, 41, "other_way", Current));
				ur1 = RTCCL(tr1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
				if (tc3) {
					RTHOOK(14);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				}

				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 55, "forth", loc1))(loc1);
				RTHOOK(12);
				tc2 = '\01';
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
				if (!tc3) {
					tc2 = (EIF_BOOLEAN) !Result;
				}
				;
			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* add_to_map */

void Fn4wg4o (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_to_map", RTUD(1948), Current, 0, 1, 27802);
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
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("insertable", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1948, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1960, 76, "add_to_map", tr1))(tr1, ur1x);

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1960, 76, "add_to_map", tr1))(tr1, ur1x);
	}

	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 36, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_in_map", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 36, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* remove_from_map */

void Fn4w32a (EIF_REFERENCE Current)
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
	RTEAA("remove_from_map", RTUD(1948), Current, 0, 0, 27803);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_removable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1948, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1960, 77, "remove_from_map", tr1))(tr1);

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1960, 77, "remove_from_map", tr1))(tr1);
	}

	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(7);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 36, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_in_map", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 17, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("map_unset", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 36, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make_one_way */

void Fn4s8gk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
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
	RTEAA("make_one_way", RTUD(1948), Current, 0, 1, 27800);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_conn_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1960, 75, "id", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(1948, 42, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1948, 7, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1948, 7, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("one_way_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("other_way_not_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("not_one_way_road", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("id_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1948, 42, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1960, 75, "id", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
#undef arg1
}

/* type */

EIF_UNION Fn4twd6 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTEAA("type", RTUD(1948), Current, 0, 0, 27801);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1960, 74, "type", tr1));
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1960, 74, "type", tr1));
		if (RTCEQ(Result, tr2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

void Fp0qwb1 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("has_connections", Current);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
	if ((!(tc1) || ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 == NULL))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("has_connections", Current);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1948, 47, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1948, 41, dtype));
	if ((!((EIF_BOOLEAN) !tc1) || ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("id_set", Current);
	tc1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1948, 42, dtype));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1948, 42, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1948, 40, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1960, 75, "id", tr1));
		tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1949 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

