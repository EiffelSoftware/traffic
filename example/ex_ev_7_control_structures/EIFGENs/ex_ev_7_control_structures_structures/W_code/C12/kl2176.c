/*
 * Code for class KL_EQUALITY_TESTER [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fngh5m7(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void EIF_Minit2176(void);

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

/* test */

EIF_UNION Fngh5m7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_BOOLEAN_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("test", RTUD(2175), Current, 0, 2, 26492);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
	if (EIF_FALSE) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
	if (EIF_FALSE) {
		RTHOOK(6);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(7);
		uc1 = arg2;
		tc1 = arg1 == uc1;
		Result = (EIF_BOOLEAN)tc1;
	}}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit2176 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

