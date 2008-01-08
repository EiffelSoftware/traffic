/*
 * Code for class TOURISM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpc1f6i(EIF_REFERENCE);
extern void Fpc5zqv(EIF_REFERENCE);
extern void Fpcy7ie(EIF_REFERENCE);
extern void Fpc6moh(EIF_REFERENCE);
extern EIF_UNION Fpc2q1r(EIF_REFERENCE);
extern void Fpcykks(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fpc4ovm(EIF_REFERENCE, EIF_UNION);
extern void Fpc5bs8(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpc1234(EIF_REFERENCE);
extern void Fpc3d_d(EIF_REFERENCE, EIF_UNION);
extern void Fpc30x_(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpc0s8w(EIF_REFERENCE);
extern void EIF_Minit2067(void);

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

/* short_wait_time */

EIF_UNION Fpc1f6i (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* wait */

void Fpc5zqv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(4,Current);
	RTLR(0,loc1);
	RTLR(2,loc2);
	RTLR(3,loc3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("wait", RTUD(2066), Current, 3, 0, 30530);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(846));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(2097));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	tr1 = RTLN(RTUD(2097));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2097, 30, "compact_time", loc3));
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2097, 30, "compact_time", loc2));
	ti4_3 = eif_abs_int32 ((EIF_INTEGER_32)(ti4_1 - ti4_2));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 81, Dtype(Current)))(Current)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_3 > ti4_1))) {

		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(939, 3, "is_destroyed", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(986, 11, "process_events", tr1))(tr1);
		}

		RTHOOK(7);
		tr1 = RTLN(RTUD(2097));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
		RTNHOOK(7);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2097, 30, "compact_time", loc3));
		ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2097, 30, "compact_time", loc2));
		ti4_3 = eif_abs_int32 ((EIF_INTEGER_32)(ti4_1 - ti4_2));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 81, Dtype(Current)))(Current)).value.EIF_INTEGER_32_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
}

/* explore */

void Fpcy7ie (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("explore", RTUD(2066), Current, 0, 0, 30533);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* short_wait */

void Fpc6moh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(4,Current);
	RTLR(0,loc1);
	RTLR(2,loc2);
	RTLR(3,loc3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("short_wait", RTUD(2066), Current, 3, 0, 30531);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(846));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(2097));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	tr1 = RTLN(RTUD(2097));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2097, 30, "compact_time", loc3));
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2097, 30, "compact_time", loc2));
	ti4_3 = eif_abs_int32 ((EIF_INTEGER_32)(ti4_1 - ti4_2));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 82, Dtype(Current)))(Current)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_3 > ti4_1))) {

		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(939, 3, "is_destroyed", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(986, 11, "process_events", tr1))(tr1);
		}

		RTHOOK(7);
		tr1 = RTLN(RTUD(2097));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2097, 71, Dtype(tr1)))(tr1);
		RTNHOOK(7);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2097, 30, "compact_time", loc3));
		ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2097, 30, "compact_time", loc2));
		ti4_3 = eif_abs_int32 ((EIF_INTEGER_32)(ti4_1 - ti4_2));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 82, Dtype(Current)))(Current)).value.EIF_INTEGER_32_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
}

/* zurich */

RTOID (Fpc2q1r)

EIF_UNION Fpc2q1r (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpc2q1r);
	dtype = Dtype(Current);
	RTLI(8);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(7,Current);
	RTLR(6,loc1);
	RTLR(3,loc2);
	RTLR(0,loc3);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("zurich", RTUD(2066), Current, 3, 0, 30525);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2038));
	RTCI2(tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2038, 32, "file_system", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc3 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = RTMS_EX_H("..",2,11822);
	ur1 = tr1;
	tr2 = RTMS_EX_H("map",3,7168368);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2079, 78, "pathname", loc3))(loc3, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("zurich_big.xml",14,371781484);
	ur2 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2079, 78, "pathname", loc3))(loc3, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTLN(RTUD(2042));
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2042, 94, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2042, 97, "has_error", loc1));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2042, 98, "enable_dump_loading", loc1))(loc1);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2042, 95, "load_map", loc1))(loc1);

		RTHOOK(8);
		tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2042, 97, "has_error", loc1));
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2042, 100, "map", loc1));
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
			RTNHOOK(10);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2042, 100, "map", loc1));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 314, "set_map", tr2))(tr2, ur1x);

			RTHOOK(11);
			tc1 = '\0';
			if ((EIF_BOOLEAN)(Result != NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(11);
				tc2 = *(EIF_BOOLEAN *)(tr1 + RTVA(1841, 35, "is_time_running", tr1));
				tc1 = tc2;
			}
			if (tc1) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1841, 40, "reset", tr1))(tr1);
			}

			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 309, "resize_canvas", tr1))(tr1);
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(14);
			ui4_1 = ((EIF_INTEGER_32) 50L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1841, 36, "set_speedup", tr1))(tr1, ui4_1x);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1841, 37, "start", tr1))(tr1);
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 310, "move_to_center", tr1))(tr1);
			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
			RTNHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1981, 258, "redraw", tr2))(tr2);
			RTHOOK(18);
			*(EIF_BOOLEAN *)(Current + RTWA(2066, 12, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(19);
			*(EIF_BOOLEAN *)(Current + RTWA(2066, 80, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(20);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* run */

void Fpcykks (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,arg2);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("run", RTUD(2066), Current, 1, 2, 30532);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_console_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2066, 79, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 77, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* show_blinking_spot */

void Fpc4ovm (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(5,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("show_blinking_spot", RTUD(2066), Current, 1, 1, 30528);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1935));
	tr2 = RTLN(RTUD(1925));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1935, 43, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ui4_2 = ((EIF_INTEGER_32) 255L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 31, "set_color", loc1))(loc1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1935, 53, "enable_filled", loc1))(loc1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 45, "set_diameter", loc1))(loc1, ui4_1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(5);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(5);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 90, dtype))(Current);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(7);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 135, "delete", tr1))(tr1, ur1x);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 90, dtype))(Current);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(9);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(9);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 90, dtype))(Current);
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(11);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(11);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 135, "delete", tr1))(tr1, ur1x);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 89, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* show_green_spot */

void Fpc5bs8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(5,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("show_green_spot", RTUD(2066), Current, 1, 1, 30529);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1935));
	tr2 = RTLN(RTUD(1925));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1935, 43, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 255L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 31, "set_color", loc1))(loc1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1935, 53, "enable_filled", loc1))(loc1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 45, "set_diameter", loc1))(loc1, ui4_1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(5);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(5);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 89, dtype))(Current);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(7);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 135, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* paris */

RTOID (Fpc1234)

EIF_UNION Fpc1234 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpc1234);
	dtype = Dtype(Current);
	RTLI(9);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(8,loc4);
	RTLR(7,Current);
	RTLR(6,loc1);
	RTLR(3,loc2);
	RTLR(0,loc3);
	RTLR(4,ur1);
	RTLR(5,ur2);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("paris", RTUD(2066), Current, 4, 0, 30524);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2038));
	RTCI2(tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2038, 32, "file_system", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc3 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = RTMS_EX_H("..",2,11822);
	ur1 = tr1;
	tr2 = RTMS_EX_H("map",3,7168368);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2079, 78, "pathname", loc3))(loc3, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("paris.xml",9,569027948);
	ur2 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2079, 78, "pathname", loc3))(loc3, ur1x, ur2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTLN(RTUD(2042));
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2042, 94, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2042, 97, "has_error", loc1));
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2042, 98, "enable_dump_loading", loc1))(loc1);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2042, 95, "load_map", loc1))(loc1);

		RTHOOK(8);
		tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2042, 97, "has_error", loc1));
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2042, 100, "map", loc1));
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
			RTNHOOK(10);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2042, 100, "map", loc1));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 314, "set_map", tr2))(tr2, ur1x);

			RTHOOK(11);
			tc1 = '\0';
			if ((EIF_BOOLEAN)(Result != NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(11);
				tc2 = *(EIF_BOOLEAN *)(tr1 + RTVA(1841, 35, "is_time_running", tr1));
				tc1 = tc2;
			}
			if (tc1) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1841, 40, "reset", tr1))(tr1);
			}

			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 309, "resize_canvas", tr1))(tr1);
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(14);
			ui4_1 = ((EIF_INTEGER_32) 50L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1841, 36, "set_speedup", tr1))(tr1, ui4_1x);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", Result))(Result)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1841, 37, "start", tr1))(tr1);
			RTHOOK(16);
			*(EIF_BOOLEAN *)(Current + RTWA(2066, 12, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(17);
			*(EIF_BOOLEAN *)(Current + RTWA(2066, 80, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(18);
			loc4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 29, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(19);
			loc4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 30, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(20);
			loc4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2066, 31, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(21);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 310, "move_to_center", tr1))(tr1);
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
			RTNHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1981, 324, "redraw_now", tr2))(tr2);
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCS(EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2066, 12, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(24);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* show_spot */

void Fpc3d_d (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(5,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("show_spot", RTUD(2066), Current, 1, 1, 30526);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1935));
	tr2 = RTLN(RTUD(1925));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1935, 43, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ui4_2 = ((EIF_INTEGER_32) 255L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 31, "set_color", loc1))(loc1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1935, 53, "enable_filled", loc1))(loc1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 45, "set_diameter", loc1))(loc1, ui4_1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(5);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(5);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 89, dtype))(Current);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(7);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 135, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* show_big_red_spot */

void Fpc30x_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(5,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("show_big_red_spot", RTUD(2066), Current, 1, 1, 30527);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1935));
	tr2 = RTLN(RTUD(1925));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)-tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1935, 43, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(RTUD(840));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(1111, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 31, "set_color", loc1))(loc1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1935, 53, "enable_filled", loc1))(loc1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1935, 45, "set_diameter", loc1))(loc1, ui4_1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(5);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(5);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2066, 89, dtype))(Current);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2066, 91, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2043, 307, "canvas", tr1));
	RTNHOOK(7);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 113, "object_list", tr2));
	RTNHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 135, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* wait_time */

EIF_UNION Fpc0s8w (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	return r;
}
void EIF_Minit2067 (void)
{
	GTCX
	RTOTS (31902,Fpc1234)
	RTOTS (31903,Fpc2q1r)
}


#ifdef __cplusplus
}
#endif

