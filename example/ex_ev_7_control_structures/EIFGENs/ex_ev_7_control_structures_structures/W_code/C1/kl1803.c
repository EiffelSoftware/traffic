/*
 * Code for class KL_BOOLEAN_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fm8em4b(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1803(void);

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

/* nxor */

EIF_UNION Fm8em4b (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("nxor", RTUD(1802), Current, 2, 1, 26136);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_booleans_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 4, "lower", arg1));
	loc1 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 5, "upper", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {

		RTHOOK(5);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(6);
			if (Result) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(9);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(10);
				loc1++;
			}

		} else {
			RTHOOK(11);
			loc1++;
		}

		RTHOOK(4);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("zero", EX_POST);
		tc1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tc1 = (EIF_BOOLEAN) !Result;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("unary", EX_POST);
		tc1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 4, "lower", arg1));
			ui4_1 = ti4_1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(Result == tc2);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("binary", EX_POST);
		tc1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 4, "lower", arg1));
			ui4_1 = ti4_1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(4, 5, "upper", arg1));
			ui4_1 = ti4_1;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(Result == ((tc2) != (tc3)));
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
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void EIF_Minit1803 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

