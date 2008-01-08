/*
 * Code for class WALKABLE [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnxdfo1(EIF_REFERENCE, EIF_UNION);
extern void Fp0huhg(EIF_REFERENCE, int);
extern void EIF_Minit2286(void);

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

/* turn_to */

void Fnxdfo1 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,arg1);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("turn_to", RTUD(2285), Current, 0, 1, 27275);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 57, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2285, 51, dtype))(Current);
	RTHOOK(3);
	tc1 = '\01';
	tc2 = '\01';
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc3) {
		tc3 = '\0';
		tc4 = *(EIF_BOOLEAN *)(Current + RTWA(2285, 1, dtype));
		if (tc4) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2285, 35, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		tc2 = tc3;
	}
	if (!tc2) {
		tc2 = '\0';
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(2285, 1, dtype));
		if ((EIF_BOOLEAN) !tc3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc2 = RTCEQ(tr1, arg1);
		}
		tc1 = tc2;
	}
	while (!(tc1)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2285, 46, dtype))(Current);
		RTHOOK(3);
		tc1 = '\01';
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (!tc3) {
			tc3 = '\0';
			tc4 = *(EIF_BOOLEAN *)(Current + RTWA(2285, 1, dtype));
			if (tc4) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(arg1);
				tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2285, 35, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc3 = tc4;
			}
			tc2 = tc3;
		}
		if (!tc2) {
			tc2 = '\0';
			tc3 = *(EIF_BOOLEAN *)(Current + RTWA(2285, 1, dtype));
			if ((EIF_BOOLEAN) !tc3) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc2 = RTCEQ(tr1, arg1);
			}
			tc1 = tc2;
		}
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("item_found", EX_POST);
		tc2 = '\01';
		tc3 = '\0';
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc4) {
			tc4 = *(EIF_BOOLEAN *)(Current + RTWA(2285, 1, dtype));
			tc3 = (EIF_BOOLEAN) !tc4;
		}
		if (tc3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc2 = RTCEQ(tr1, arg1);
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("object_found", EX_POST);
		tc2 = '\01';
		tc3 = '\0';
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc4) {
			tc4 = *(EIF_BOOLEAN *)(Current + RTWA(2285, 1, dtype));
			tc3 = tc4;
		}
		if (tc3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2285, 35, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
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

void Fp0huhg (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("zero_link_count", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 57, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 41, dtype))(Current)).value.EIF_INTEGER_32_value);
		tc1 = ((EIF_BOOLEAN)(tc2 == (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))));
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("exhausted_if_no_links", Current);
	tc1 = '\01';
	tc2 = '\0';
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 57, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc3) {
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc2 = (EIF_BOOLEAN) !tc3;
	}
	if (tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2285, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2286 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

