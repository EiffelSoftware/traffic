/*
 * Code for class KL_EQUALITY_TESTER [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fngh5ml(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void EIF_Minit2153(void);

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

EIF_UNION Fngh5ml (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("test", RTUD(2152), Current, 0, 2, 26491);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if (RTCEQ(arg1, arg2)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
	if ((EIF_BOOLEAN)(arg2 == NULL)) {
		RTHOOK(6);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(7);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
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

void EIF_Minit2153 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

