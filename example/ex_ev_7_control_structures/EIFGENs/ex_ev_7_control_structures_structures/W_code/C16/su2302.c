/*
 * Code for class SUBSET_STRATEGY_GENERIC [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fd0zm27(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fd0yz5l(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void EIF_Minit2302(void);

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

void Fd0zm27 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc3;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(3,Current);
	RTLR(2,loc1);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("symdif", RTUD(2301), Current, 1, 2, 27140);
	RTGC;
	RTSA(Dtype(Current));
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
		static int16 typarr [] = {2301,1477,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 1477, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
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
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", loc1))(loc1, ur1x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg1))(arg1);
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg1))(arg1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 3, "start", arg2))(arg2);
	RTHOOK(11);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {

		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 6, "prune", loc1))(loc1, ur1x);
		} else {
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", loc1))(loc1, ur1x);
		}

		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg2))(arg2);
		RTHOOK(11);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "wipe_out", arg1))(arg1);

	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(18);
	tc3 = *(EIF_BOOLEAN *)(loc1 + RTVPA(90, 10, "after", loc1));
	while (!(tc3)) {
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", arg1))(arg1, ur1x);
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(18);
		tc3 = *(EIF_BOOLEAN *)(loc1 + RTVPA(90, 10, "after", loc1));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* disjoint */

EIF_UNION Fd0yz5l (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(3,Current);
	RTLR(2,loc1);
	RTLR(5,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("disjoint", RTUD(2301), Current, 1, 2, 27139);
	RTGC;
	RTSA(Dtype(Current));
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
		static int16 typarr [] = {2301,2302,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2302, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
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
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !tc2;

			RTHOOK(12);
			if (Result) {
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 3, "put", loc1))(loc1, ur1x);
			}

		}


		RTHOOK(14);
		tc2 = '\0';
		if (Result) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 1, "after", arg2))(arg2)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (tc2) {
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !tc2;

			RTHOOK(16);
			if (Result) {
				RTHOOK(17);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(139, 0, "item", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 3, "put", loc1))(loc1, ur1x);
			}

		}

		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg1))(arg1);
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(139, 4, "forth", arg2))(arg2);
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
	RTHOOK(20);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit2302 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

