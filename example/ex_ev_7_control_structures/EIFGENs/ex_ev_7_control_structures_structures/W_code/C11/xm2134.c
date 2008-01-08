/*
 * Code for class XM_EIFFEL_SCANNER_DTD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpvgnjw(EIF_REFERENCE);
extern void Fpvepq0(EIF_REFERENCE);
extern void EIF_Minit2134(void);

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

/* read_token */

void Fpvgnjw (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("read_token", RTUD(2133), Current, 0, 0, 31415);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (
		WDBG(RTUD(2133),"xml_parser")
	) {
		RTHOOK(1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 13, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tr1 = RTMS_EX_H("--dtd-scanner--",15,1305207853);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);

		RTHOOK(2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 235, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 13, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(3);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(3);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2133, 209, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
		}

	}

	RTHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2133, 364, dtype));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 148, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2133, 49, dtype))(Current, ui4_1x);
		RTHOOK(6);
		*(EIF_BOOLEAN *)(Current + RTWA(2133, 364, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(7);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2133, 365, dtype));
	if (tc1) {
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2133, 14, dtype))(Current);
	} else {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2132, 364, RTUD(2132)))(Current);

		RTHOOK(10);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 91, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 149, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2133, 49, dtype))(Current, ui4_1x);
			RTHOOK(12);
			*(EIF_BOOLEAN *)(Current + RTWA(2133, 365, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(2);
	RTEE;
}

/* make_scanner */

void Fpvepq0 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_scanner", RTUD(2133), Current, 0, 0, 31416);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2132, 79, RTUD(2132)))(Current);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2133, 143, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2133, 341, dtype))(Current, ui4_1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit2134 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

