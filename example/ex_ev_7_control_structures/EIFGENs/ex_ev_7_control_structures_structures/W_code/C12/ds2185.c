/*
 * Code for class DS_DYNAMIC_CURSOR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fottznh(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2185(void);

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

/* swap */

void Fottznh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(1,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("swap", RTUD(2184), Current, 1, 1, 28961);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2184, 35, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2184, 35, "off", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2184, 1, "item", arg1))(arg1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2184, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		in_assertion = 0;
	}

	RTHOOK(4);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(5);
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2184, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTHOOK(6);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2184, 1, "item", arg1))(arg1)).value.EIF_BOOLEAN_value);
		uc1 = tc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2184, 40, dtype))(Current, uc1x);
		RTHOOK(7);
		uc1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2184, 40, "replace", arg1))(arg1, uc1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_item", EX_POST);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2184, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc3 == tc1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("new_other", EX_POST);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2184, 1, "item", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc3 == tc2)) {
			RTCK;
		} else {
			RTCF;
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

void EIF_Minit2185 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

