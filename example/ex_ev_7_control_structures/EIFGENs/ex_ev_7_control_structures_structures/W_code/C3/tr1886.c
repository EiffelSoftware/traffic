/*
 * Code for class TRAFFIC_LINE_SCHEDULE_ENTRY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnqsjmw(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnqu4dd(EIF_REFERENCE);
extern void Fnqvsa_(EIF_REFERENCE, EIF_UNION);
extern void Fnqwe8m(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1886(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* make_with_line_section */

void Fnqsjmw (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTEAA("make_with_line_section", RTUD(1885), Current, 0, 1, 26930);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_line_section", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("line_section_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && RTCEQ(tr2, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* speed */

EIF_UNION Fnqu4dd (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,loc2);
	RTLR(4,ur1);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("speed", RTUD(1885), Current, 3, 0, 26927);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 26, "polypoints", tr1));
	RTNHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 30, "start", tr2))(tr2);
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
	tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1974, 26, "polypoints", loc2));
	RTNHOOK(2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 96, "first", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	loc1 = (EIF_REAL_64)tr8_1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 26, "polypoints", tr1));
	RTNHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 26, "polypoints", tr1));
		RTNHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 84, "distance", loc2))(loc2, ur1x)).value.EIF_REAL_64_value);
		RTNHOOK(5);
		tr8_2 = eif_abs_real64 (tr8_1);
		loc1 += tr8_2;
		RTHOOK(6);
		loc2 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
		tr1 = *(EIF_REFERENCE *)(loc2 + RTVA(1974, 26, "polypoints", loc2));
		RTNHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 26, "polypoints", tr1));
		RTNHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 55, "forth", tr2))(tr2);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 35, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 26, "polypoints", tr1));
		RTNHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 34, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 34, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 33, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 33, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32)(ti4_2 * ((EIF_INTEGER_32) 60L))) - (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_3 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32)(ti4_4 * ((EIF_INTEGER_32) 60L))));

	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		tr1 = RTLN(RTUD(740));
		*(EIF_REAL_64 *)tr1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
		Result = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (loc3));
	} else {
		RTHOOK(11);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		Result = (EIF_REAL_64)tr8_1;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* set_start_time */

void Fnqvsa_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_start_time", RTUD(1885), Current, 0, 1, 26928);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_time", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1885, 33, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("time_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 33, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_end_time */

void Fnqwe8m (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_end_time", RTUD(1885), Current, 0, 1, 26929);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_time", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1885, 34, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("time_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1885, 34, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit1886 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

