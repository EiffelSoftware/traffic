/*
 * Code for class LINKED_SET [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Femv7jk(EIF_REFERENCE, EIF_UNION);
extern void Femwvg6(EIF_REFERENCE, EIF_UNION);
extern void Femxiet(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2282(void);

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

/* put */

void Femv7jk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
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

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put", RTUD(2281), Current, 0, 1, 27504);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}

	RTHOOK(2);
	tc3 = '\01';
	tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc4) {
		ui4_1 = arg1;
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc3 = (EIF_BOOLEAN) !tc4;
	}
	if (tc3) {
		RTHOOK(3);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(179, 1, dtype))(Current, ui4_1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("item_inserted", EX_POST);
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(131, 2, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("in_set_already", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("added_to_set", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
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
#undef arg1
}

/* extend */

void Femwvg6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
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

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("extend", RTUD(2281), Current, 0, 1, 27505);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}

	RTHOOK(2);
	tc3 = '\01';
	tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc4) {
		ui4_1 = arg1;
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc3 = (EIF_BOOLEAN) !tc4;
	}
	if (tc3) {
		RTHOOK(3);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(179, 1, dtype))(Current, ui4_1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("item_inserted", EX_POST);
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(131, 2, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("in_set_already", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("added_to_set", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
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
#undef arg1
}

/* prune */

void Femxiet (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
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

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("prune", RTUD(2281), Current, 0, 1, 27506);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ui4_1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 3, dtype))(Current);
	RTHOOK(3);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(179, 2, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("removed_count_change", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_removed_no_count_change", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("item_deleted", EX_POST);
		ui4_1 = arg1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
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
#undef arg1
}

void EIF_Minit2282 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

