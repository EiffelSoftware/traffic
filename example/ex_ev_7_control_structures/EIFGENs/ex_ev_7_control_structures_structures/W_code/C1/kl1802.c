/*
 * Code for class KL_STANDARD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fm8db81(EIF_REFERENCE);
extern EIF_UNION Fm8dz6o(EIF_REFERENCE);
extern EIF_UNION Fm8cpbf(EIF_REFERENCE);
extern void EIF_Minit1802(void);

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

/* output */

RTOID (Fm8db81)

EIF_UNION Fm8db81 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fm8db81);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("output", RTUD(1801), Current, 0, 0, 26134);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2034));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2034, 346, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_open_write", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2034, 348, "is_open_write", Result))(Result)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* error */

RTOID (Fm8dz6o)

EIF_UNION Fm8dz6o (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fm8dz6o);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("error", RTUD(1801), Current, 0, 0, 26135);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2033));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, 346, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_open_write", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2033, 348, "is_open_write", Result))(Result)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* input */

RTOID (Fm8cpbf)

EIF_UNION Fm8cpbf (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fm8cpbf);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("input", RTUD(1801), Current, 0, 0, 26133);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2035));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2035, 340, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_open_read", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2035, 342, "is_open_read", Result))(Result)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

void EIF_Minit1802 (void)
{
	GTCX
	RTOTS (27401,Fm8db81)
	RTOTS (27402,Fm8dz6o)
	RTOTS (27400,Fm8cpbf)
}


#ifdef __cplusplus
}
#endif

