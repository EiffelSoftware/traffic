/*
 * Code for class XM_EIFFEL_PE_ENTITY_DEF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpvsad4(EIF_REFERENCE);
extern void Fpvrngi(EIF_REFERENCE);
extern void Fpvsybr(EIF_REFERENCE);
extern void EIF_Minit2136(void);

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

/* reset */

void Fpvsad4 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("reset", RTUD(2135), Current, 0, 0, 31430);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2134, 378, RTUD(2134)))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2135, 379, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* read_token */

void Fpvrngi (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("read_token", RTUD(2135), Current, 0, 0, 31429);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2135, 380, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(2);
		*(EIF_BOOLEAN *)(Current + RTWA(2135, 380, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2135, 177, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2135, 80, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2135, 132, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2135, 103, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2135, 381, dtype));
	if (tc1) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2135, 14, dtype))(Current);
	} else {
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2134, 377, RTUD(2134)))(Current);

		RTHOOK(8);
		tc1 = '\0';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2135, 95, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2135, 381, dtype));
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTHOOK(9);
			*(EIF_BOOLEAN *)(Current + RTWA(2135, 381, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2135, 177, dtype))(Current)).value.EIF_INTEGER_32_value);
			*(EIF_INTEGER_32 *)(Current + RTWA(2135, 80, dtype)) = (EIF_INTEGER_32)ti4_1;
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2135, 132, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(2135, 103, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		}

	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(2);
	RTEE;
}

/* reset_sent */

void Fpvsybr (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("reset_sent", RTUD(2135), Current, 0, 0, 31431);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(2135, 380, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(2135, 381, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit2136 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

