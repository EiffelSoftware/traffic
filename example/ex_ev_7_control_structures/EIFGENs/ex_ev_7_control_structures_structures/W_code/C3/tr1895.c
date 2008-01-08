/*
 * Code for class TRAFFIC_TYPE_LINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnq3uey(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1895(void);

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

/* is_allowed_type */

EIF_UNION Fnq3uey (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(0,loc1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("is_allowed_type", RTUD(1894), Current, 1, 1, 26943);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(1955), loc1);

	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void EIF_Minit1895 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

