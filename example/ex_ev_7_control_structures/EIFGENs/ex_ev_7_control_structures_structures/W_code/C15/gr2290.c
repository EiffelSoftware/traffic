/*
 * Code for class GRAPH_CURSOR [REFERENCE, REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn675r6(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fn68tpt(EIF_REFERENCE);
extern void Fp0wp_v(EIF_REFERENCE, int);
extern void EIF_Minit2290(void);

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

void Fn675r6 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2289), Current, 0, 2, 27895);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("no_edge_when_off", EX_PRE);
		RTTE((!((EIF_BOOLEAN)(arg1 == NULL)) || ((EIF_BOOLEAN)(arg2 == NULL))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2289, 32, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2289, 33, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("node_assigned", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2289, 32, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("edge_assigned", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2289, 33, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* current_node */

EIF_UNION Fn68tpt (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2289,32, Dtype(Current)));
	return r;
}

void Fp0wp_v (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("no_edge_when_off", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2289, 32, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2289, 33, dtype));
	if ((!((EIF_BOOLEAN)(tr1 == NULL)) || ((EIF_BOOLEAN)(tr2 == NULL)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2290 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

