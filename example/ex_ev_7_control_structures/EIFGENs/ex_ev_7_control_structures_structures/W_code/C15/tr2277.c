/*
 * Code for class TRAVERSABLE_SUBSET [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fedb_m0(EIF_REFERENCE, EIF_UNION);
extern void Fedaprs(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fec3lgy(EIF_REFERENCE, EIF_UNION);
extern void Fec91t5(EIF_REFERENCE, EIF_UNION);
extern void Fec730a(EIF_REFERENCE, EIF_UNION);
extern void Fec9ewj(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fec38ek(EIF_REFERENCE, EIF_UNION);
extern void Fm4amk1(EIF_REFERENCE, int);
extern void EIF_Minit2277(void);

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

/* subset_strategy */

EIF_UNION Fedb_m0 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("subset_strategy", RTUD(2276), Current, 0, 1, 27290);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 3, dtype))(Current);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("not_off", EX_CHECK);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(139, 6, dtype))(Current, ui4_1x, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* subtract */

void Fedaprs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
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
	RTEAA("subtract", RTUD(2276), Current, 0, 1, 27289);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("set_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 3, dtype))(Current);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg1))(arg1);
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {

			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 5, dtype))(Current);
			} else {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 4, dtype))(Current);
			}

			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("is_disjoint", EX_POST);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(147, 2, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
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

/* disjoint */

EIF_UNION Fec3lgy (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("disjoint", RTUD(2276), Current, 1, 1, 27283);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("set_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		tc1 = (EIF_BOOLEAN) !tc2;
	}
	if (tc1) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(139, 7, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(5);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(64, 0, "disjoint", loc1))(loc1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		Result = (EIF_BOOLEAN)tc1;
	} else {
		RTHOOK(6);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* intersect */

void Fec91t5 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
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
	RTEAA("intersect", RTUD(2276), Current, 0, 1, 27288);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("set_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 3, dtype))(Current);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg1))(arg1);
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {

			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
			if (tc2) {
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 4, dtype))(Current);
			} else {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 5, dtype))(Current);
			}

			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
			;
		}

	} else {
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(131, 8, dtype))(Current);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("is_subset_other", EX_POST);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(147, 0, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
#undef arg1
}

/* merge */

void Fec730a (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("merge", RTUD(2276), Current, 1, 1, 27286);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("set_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static int16 typarr [] = {2276,1444,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1444, typarr);

		loc1 = RTCCL(arg1);
		loc1 = RTRV(typres, loc1);

	}

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 7, "linear_representation", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
	}


	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(7);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 1, "off", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(131, 4, dtype))(Current, ui4_1x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 1, "off", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* symdif */

void Fec9ewj (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("symdif", RTUD(2276), Current, 1, 1, 27287);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("set_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg1))(arg1);
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
			while (!(tc1)) {
				RTHOOK(7);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(131, 4, dtype))(Current, ui4_1x);
				RTHOOK(6);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
				;
			}

		} else {
			RTHOOK(8);
			ur1 = RTCCL(arg1);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(139, 7, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(9);
			ur1 = RTCCL(Current);
			ur2 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(64, 1, "symdif", loc1))(loc1, ur1x, ur2x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* is_subset */

EIF_UNION Fec38ek (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_subset", RTUD(2276), Current, 0, 1, 27284);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("set_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(44, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(ti4_1 <= ti4_2);
	}
	if (tc1) {

		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 3, dtype))(Current);
		RTHOOK(5);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		while (!(tc1)) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 4, dtype))(Current);
			RTHOOK(5);
			tc1 = '\01';
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (!tc2) {
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
				tc1 = (EIF_BOOLEAN) !tc2;
			}
			;
		}


		RTHOOK(7);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			RTHOOK(8);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	} else {
		RTHOOK(9);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		RTHOOK(10);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void Fm4amk1 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("empty_definition", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(44, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_range", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(44, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2277 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

