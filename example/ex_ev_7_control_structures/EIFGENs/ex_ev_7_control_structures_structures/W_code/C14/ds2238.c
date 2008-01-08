/*
 * Code for class DS_SPARSE_TABLE_KEYS_CURSOR [BOOLEAN, REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fot49gq(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fot5xec(EIF_REFERENCE);
extern void Fp1hpsl(EIF_REFERENCE, int);
extern void EIF_Minit2238(void);

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

/* make */

void Fot49gq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2237), Current, 0, 1, 29015);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_container_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2237, 52, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2237, 52, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2236, 91, "table", tr1));
	RTNHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2230, 133, "new_cursor", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2237, 53, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("container_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2237, 52, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2237, 20, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* container */

EIF_UNION Fot5xec (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2237,52, Dtype(Current)));
	return r;
}

void Fp1hpsl (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("table_cursor_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2237, 53, Dtype(Current)));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2238 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

