/*
 * Code for class TRAFFIC_LINE_SCHEDULE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn0iq6r(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void EIF_Minit1930(void);

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

/* make_for_line */

void Fn0iq6r (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(13);
	RTLR(9,loc7);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(1,Current);
	RTLR(12,tr3);
	RTLR(10,ur1);
	RTLR(8,loc1);
	RTLR(11,loc3);
	RTLR(2,loc4);
	RTLR(7,loc5);
	RTLR(6,loc6);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTEAA("make_for_line", RTUD(1929), Current, 7, 2, 27585);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_line", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1929, 90, dtype))(Current, ui4_1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(arg2 + RTVA(2041, 97, "schedule", arg2));
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1806, 34, "line_list", tr1));
	loc4 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc4))(loc4);
	RTHOOK(5);
	tc1 = '\01';
	tc2 = *(EIF_BOOLEAN *)(loc4 + RTVPA(90, 10, "after", loc4));
	if (!tc2) {
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 65, "name", arg1));
		tc1 = RTCEQ(loc6, tr1);
	}
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc4))(loc4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc5 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(5, 1, "item", loc5))(loc5, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc6 = RTCCL(tr1);
		loc6 = RTRV(RTUD(774), loc6);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc4))(loc4);
		RTHOOK(5);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(loc4 + RTVPA(90, 10, "after", loc4));
		if (!tc2) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1975, 65, "name", arg1));
			tc1 = RTCEQ(loc6, tr1);
		}
		;
	}


	RTHOOK(9);
	if ((EIF_BOOLEAN) 0) {
	} else {

		RTHOOK(10);
		tr1 = RTLN(RTUD(2097));
		ui4_1 = ((EIF_INTEGER_32) 6L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2097, 69, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(10);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(11);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", loc1))(loc1)).value.EIF_INTEGER_32_value);
		while (!((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 8L)))) {

			RTHOOK(12);
			tr1 = RTLN(RTUD(1813));
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12);
			RTCI2(tr1);
			loc7 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc7))(loc7);
			RTHOOK(14);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc7))(loc7)).value.EIF_BOOLEAN_value);
			while (!(tc2)) {
				RTHOOK(15);
				tr1 = RTLN(RTUD(1885));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1885, 32, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(15);
				RTCI2(tr1);
				loc3 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 63, "twin", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1885, 37, "set_start_time", loc3))(loc3, ur1x);
				RTHOOK(17);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(17);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(17);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(17);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc7))(loc7)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(17);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(17);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr2);
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 84, "distance", tr1))(tr1, ur1x)).value.EIF_REAL_64_value);
				RTNHOOK(17);
				tr8_2 = eif_abs_real64 (tr8_1);
				loc2 = (EIF_REAL_64)tr8_2;
				RTHOOK(18);
				tr1 = RTLN(RTUD(740));
				*(EIF_REAL_64 *)tr1 = loc2;
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_3 = eif_max_int32 (((EIF_INTEGER_32)(ti4_2 / ((EIF_INTEGER_32) 80L))),ui4_1);
				ui4_1 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 87, "minute_add", loc1))(loc1, ui4_1x);
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 63, "twin", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1885, 38, "set_end_time", loc3))(loc3, ur1x);
				RTHOOK(20);
				ur1 = RTCCL(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1929, 87, dtype))(Current, ur1x);
				RTHOOK(21);
				ui4_1 = ((EIF_INTEGER_32) 2L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 87, "minute_add", loc1))(loc1, ui4_1x);
				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc7))(loc7);
				RTHOOK(14);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc7))(loc7)).value.EIF_BOOLEAN_value);
				;
			}

			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", loc1))(loc1)).value.EIF_INTEGER_32_value);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(11);
	RTEE;
#undef arg2
#undef arg1
}

void EIF_Minit1930 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

