/*
 * Code for class SUBSET_STRATEGY_HASHABLE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fd0w1b4(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fd0weei(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void EIF_Minit2280(void);

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

/* symdif */

void Fd0w1b4 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(3,Current);
	RTLR(2,loc1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTEAA("symdif", RTUD(2279), Current, 4, 2, 27134);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("sets_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		tc2 = *(EIF_BOOLEAN *)(arg2 + RTVPA(39, 3, "object_comparison", arg2));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static int16 typarr [] = {2279,1635,737,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1635, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", arg2))(arg2)).value.EIF_INTEGER_32_value);
	ui4_1 = (EIF_INTEGER_32)(ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(87, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
	if (tc1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", loc1))(loc1);
	}


	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg1))(arg1);
	RTHOOK(7);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
		tr1 = RTLN(RTUD(737));
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		loc2 = RTRV(RTUD(725), tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCT("hashable_item", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", loc2))(loc2)).value.EIF_INTEGER_32_value);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ui4_1x, ui4_2x);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg1))(arg1);
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg2))(arg2);
	RTHOOK(13);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
		tr1 = RTLN(RTUD(737));
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		loc2 = RTRV(RTUD(725), tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(15);
			RTCT("hashable_item", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(16);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", loc2))(loc2)).value.EIF_INTEGER_32_value);
		loc3 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(17);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 22, "search", loc1))(loc1, ui4_1x);

		RTHOOK(18);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 14, "found", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if (tc3) {

			RTHOOK(19);
			tc3 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
			if (tc3) {
				RTHOOK(20);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
				ur1 = RTLN(RTUD(737));
				*(EIF_INTEGER_32 *)ur1 = ti4_1;
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 2, "found_item", loc1))(loc1)).value.EIF_INTEGER_32_value);
				ur2 = RTLN(RTUD(737));
				*(EIF_INTEGER_32 *)ur2 = ti4_2;
				loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(1, 6, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			} else {
				RTHOOK(21);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 2, "found_item", loc1))(loc1)).value.EIF_INTEGER_32_value);
				loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
			}


			RTHOOK(22);
			if (loc4) {
				RTHOOK(23);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", loc2))(loc2)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", loc1))(loc1, ui4_1x);
			}

		} else {
			RTHOOK(24);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", loc2))(loc2)).value.EIF_INTEGER_32_value);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ui4_1x, ui4_2x);
		}

		RTHOOK(25);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg2))(arg2);
		RTHOOK(13);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "wipe_out", arg1))(arg1);

	RTHOOK(27);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(87, 19, "start", loc1))(loc1);
	RTHOOK(28);
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 16, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc3)) {
		RTHOOK(29);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 6, "item_for_iteration", loc1))(loc1)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", arg1))(arg1, ui4_1x);
		RTHOOK(30);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(87, 20, "forth", loc1))(loc1);
		RTHOOK(28);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 16, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg2
#undef arg1
}

/* disjoint */

EIF_UNION Fd0weei (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(3,Current);
	RTLR(2,loc1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("disjoint", RTUD(2279), Current, 3, 2, 27133);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("sets_exist", EX_PRE);
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_rule", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
		tc2 = *(EIF_BOOLEAN *)(arg2 + RTVPA(39, 3, "object_comparison", arg2));
		RTTE((EIF_BOOLEAN)(tc1 == tc2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static int16 typarr [] = {2279,1635,737,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1635, typarr);

		tr1 = RTLN(typres);

	}
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(44, 0, "count", arg2))(arg2)).value.EIF_INTEGER_32_value);
	ui4_1 = (EIF_INTEGER_32)(ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(87, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
	if (tc1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", loc1))(loc1);
	}


	RTHOOK(6);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg1))(arg1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg2))(arg2);
	RTHOOK(9);
	tc1 = '\01';
	if (!(EIF_BOOLEAN) !Result) {
		tc2 = '\0';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if (tc3) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		tc1 = tc2;
	}
	while (!(tc1)) {

		RTHOOK(10);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
			tr1 = RTLN(RTUD(737));
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			loc2 = RTRV(RTUD(725), tr1);
			if (RTAL & CK_CHECK) {
				RTHOOK(12);
				RTCT("hashable_item", EX_CHECK);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(13);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", loc2))(loc2)).value.EIF_INTEGER_32_value);
			loc3 = (EIF_INTEGER_32)ti4_1;
			RTHOOK(14);
			ui4_1 = loc3;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", loc1))(loc1, ui4_1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !tc2;

			RTHOOK(15);
			if (Result) {
				RTHOOK(16);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				ui4_2 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ui4_1x, ui4_2x);
			} else {
				RTHOOK(17);
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 22, "search", loc1))(loc1, ui4_1x);
				if (RTAL & CK_CHECK) {
					RTHOOK(18);
					RTCT("item_found", EX_CHECK);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 14, "found", loc1))(loc1)).value.EIF_BOOLEAN_value);
					if (tc2) {
						RTCK;
					} else {
						RTCF;
					}
				}

				RTHOOK(19);
				tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
				if (tc2) {
					RTHOOK(20);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
					ur1 = RTLN(RTUD(737));
					*(EIF_INTEGER_32 *)ur1 = ti4_1;
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 2, "found_item", loc1))(loc1)).value.EIF_INTEGER_32_value);
					ur2 = RTLN(RTUD(737));
					*(EIF_INTEGER_32 *)ur2 = ti4_2;
					Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(1, 6, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
				} else {
					RTHOOK(21);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)).value.EIF_INTEGER_32_value);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 2, "found_item", loc1))(loc1)).value.EIF_INTEGER_32_value);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 != ti4_2);
				}

			}

			RTHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg1))(arg1);
		}


		RTHOOK(23);
		tc2 = '\0';
		if (Result) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (tc2) {
			RTHOOK(24);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
			tr1 = RTLN(RTUD(737));
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			loc2 = RTRV(RTUD(725), tr1);
			if (RTAL & CK_CHECK) {
				RTHOOK(25);
				RTCT("hashable_item", EX_CHECK);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(26);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", loc2))(loc2)).value.EIF_INTEGER_32_value);
			loc3 = (EIF_INTEGER_32)ti4_1;
			RTHOOK(27);
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 22, "search", loc1))(loc1, ui4_1x);
			RTHOOK(28);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 14, "found", loc1))(loc1)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !tc2;

			RTHOOK(29);
			if (Result) {
				RTHOOK(30);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
				ui4_1 = ti4_1;
				ui4_2 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc1))(loc1, ui4_1x, ui4_2x);
			} else {

				RTHOOK(31);
				tc2 = *(EIF_BOOLEAN *)(arg1 + RTVPA(39, 3, "object_comparison", arg1));
				if (tc2) {
					RTHOOK(32);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
					ur1 = RTLN(RTUD(737));
					*(EIF_INTEGER_32 *)ur1 = ti4_1;
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 2, "found_item", loc1))(loc1)).value.EIF_INTEGER_32_value);
					ur2 = RTLN(RTUD(737));
					*(EIF_INTEGER_32 *)ur2 = ti4_2;
					Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(1, 6, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
				} else {
					RTHOOK(33);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)).value.EIF_INTEGER_32_value);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(87, 2, "found_item", loc1))(loc1)).value.EIF_INTEGER_32_value);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 != ti4_2);
				}

			}

			RTHOOK(34);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg2))(arg2);
		}

		RTHOOK(9);
		tc1 = '\01';
		if (!(EIF_BOOLEAN) !Result) {
			tc2 = '\0';
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
			if (tc3) {
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
			tc1 = tc2;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit2280 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

