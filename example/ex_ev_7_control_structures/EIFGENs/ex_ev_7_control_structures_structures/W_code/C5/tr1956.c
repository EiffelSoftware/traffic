/*
 * Code for class TRAFFIC_LINE_VEHICLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn5796q(EIF_REFERENCE);
extern EIF_UNION Fn56_bh(EIF_REFERENCE, EIF_UNION);
extern void Fn50iy9(EIF_REFERENCE, EIF_UNION);
extern void Fn58x4c(EIF_REFERENCE);
extern void Fn5_v0n(EIF_REFERENCE, EIF_UNION);
extern void Fp0t30c(EIF_REFERENCE, int);
extern void EIF_Minit1956(void);

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

/* move */

void Fn5796q (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(6,loc2);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTEAA("move", RTUD(1955), Current, 4, 0, 27843);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1953, 1, RTUD(1953)))(Current);
	} else {

		RTHOOK(3);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1955, 88, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN) 1)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
			ui4_1 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1929, 121, "i_th", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr2);

			RTHOOK(5);
			ur1 = RTCCL(loc1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1955, 89, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {

				RTHOOK(6);
				tc1 = '\01';
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1929, 20, "count", tr1));
				if (!(EIF_BOOLEAN)(ti4_1 > ti4_2)) {
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
					ui4_1 = ti4_1;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1929, 121, "i_th", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr2);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1955, 89, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
					tc1 = (EIF_BOOLEAN) !tc2;
				}
				while (!(tc1)) {
					RTHOOK(7);
					(*(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype)))++;
					RTHOOK(6);
					tc1 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
					ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1929, 20, "count", tr1));
					if (!(EIF_BOOLEAN)(ti4_1 > ti4_2)) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
						ui4_1 = ti4_1;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1929, 121, "i_th", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						ur1 = RTCCL(tr2);
						tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1955, 89, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
						tc1 = (EIF_BOOLEAN) !tc2;
					}
					;
				}

				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
				ui4_1 = (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1929, 121, "i_th", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				loc1 = (EIF_REFERENCE)RTCCL(tr2);
				RTHOOK(9);
				tr1 = RTLNSMART(RTWCT(1955, 49, Current));
				tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1885, 35, "line_section", loc1));
				RTNHOOK(9);
				tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1974, 26, "polypoints", tr2));
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(9);
				RTCI2(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
				RTHOOK(11);
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1885, 36, "speed", loc1))(loc1)).value.EIF_REAL_64_value);
				*(EIF_REAL_64 *)(Current + RTWA(1955, 86, dtype)) = (EIF_REAL_64)tr8_1;
				RTHOOK(12);
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1955, 86, dtype));
				tr1 = RTLN(RTUD(740));
				*(EIF_REAL_64 *)tr1 = tr8_1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ur8_1 = tr8_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1955, 38, dtype))(Current, ur8_1x);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 92, dtype))(Current);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 47, dtype))(Current);

				RTHOOK(15);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype));
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1929, 20, "count", tr1));
				if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
					RTHOOK(16);
					(*(EIF_INTEGER_32 *)(Current + RTWA(1955, 85, dtype)))++;
					RTHOOK(17);
					*(EIF_BOOLEAN *)(Current + RTWA(1955, 88, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(18);
					*(EIF_INTEGER_32 *)(Current + RTWA(1955, 84, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				}

			}

		} else {
			RTHOOK(19);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 82, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1929, 68, "first", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc1 = (EIF_REFERENCE)RTCCL(tr2);

			RTHOOK(20);
			tc2 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 85, dtype));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(20);
			ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1841, 32, "actual_day", tr1));
			if ((EIF_BOOLEAN)(ti4_1 <= ti4_2)) {
				ur1 = RTCCL(loc1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1955, 89, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc2 = tc3;
			}
			if (tc2) {
				RTHOOK(21);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(21);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(1841, 32, "actual_day", tr1));
				*(EIF_INTEGER_32 *)(Current + RTWA(1955, 85, dtype)) = (EIF_INTEGER_32)ti4_1;
				RTHOOK(22);
				*(EIF_BOOLEAN *)(Current + RTWA(1955, 88, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			}

		}


		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 74, dtype));
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 73, "infix \"-\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc2 = (EIF_REFERENCE)RTCCL(tr2);
			RTHOOK(25);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(25);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
			RTNHOOK(25);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr2))(tr2)).value.EIF_INTEGER_32_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(25);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
			RTNHOOK(25);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr2))(tr2)).value.EIF_INTEGER_32_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(25);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
			RTNHOOK(25);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", tr2))(tr2)).value.EIF_INTEGER_32_value);
			loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(1955, 87, dtype));
			loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32)(ti4_2 * ((EIF_INTEGER_32) 60L))) + ti4_3) - loc3);
			RTHOOK(26);
			loc4 = *(EIF_REAL_64 *)(Current + RTWA(1955, 86, dtype));
			tr8_1 = (EIF_REAL_64) (loc3);
			loc4 = (EIF_REAL_64)(EIF_REAL_64)(loc4 * tr8_1);

			RTHOOK(27);
			tc2 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype));
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype));
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr8_3 = eif_abs_real64 ((EIF_REAL_64)(tr8_1 - tr8_2));
			if ((EIF_BOOLEAN)(tr8_3 < loc4)) {
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype));
				tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype));
				tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
				tr8_3 = eif_abs_real64 ((EIF_REAL_64)(tr8_1 - tr8_2));
				tc2 = (EIF_BOOLEAN)(tr8_3 < loc4);
			}
			if (tc2) {
				RTHOOK(28);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 74, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
				RTHOOK(29);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
				RTHOOK(30);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 50, "forth", tr1))(tr1);

				RTHOOK(31);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
				if ((EIF_BOOLEAN) !tc2) {
					RTHOOK(32);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTAR(Current, tr2);
					*(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
					RTHOOK(33);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 47, dtype))(Current);
				}

			} else {
				RTHOOK(34);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype));
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2010, 70, "length", loc2))(loc2)).value.EIF_REAL_64_value);
				ur8_1 = tr8_1;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 75, "infix \"/\"", loc2))(loc2, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur8_1 = loc4;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 74, "infix \"*\"", (tr2)))((tr2), ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr3);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 72, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
			}

		}

		RTHOOK(35);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(35);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
		RTNHOOK(35);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr2))(tr2)).value.EIF_INTEGER_32_value);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(35);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
		RTNHOOK(35);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr2))(tr2)).value.EIF_INTEGER_32_value);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(35);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
		RTNHOOK(35);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 3, "second", tr2))(tr2)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(1955, 87, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32)(ti4_2 * ((EIF_INTEGER_32) 60L))) + ti4_3);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTLO(6);
	RTEE;
}

/* is_after */

EIF_UNION Fn56_bh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_after", RTUD(1955), Current, 0, 1, 27842);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
	RTNHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1885, 33, "start_time", arg1));
	RTNHOOK(1);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if (!((EIF_BOOLEAN)(ti4_1 > ti4_2))) {
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1885, 33, "start_time", arg1));
		RTNHOOK(1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
		RTNHOOK(1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 66, "hour", tr2))(tr2)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1955, 76, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(1);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1841, 31, "actual_time", tr1));
			RTNHOOK(1);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr2))(tr2)).value.EIF_INTEGER_32_value);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1885, 33, "start_time", arg1));
			RTNHOOK(1);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 68, "minute", tr1))(tr1)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 >= ti4_2);
		}
		Result = tc1;
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* set_to_station */

void Fn50iy9 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,tr3);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("set_to_station", RTUD(1955), Current, 1, 1, 27847);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_place_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 80, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 69, "terminal_2", tr1));
	if (RTCEQ(arg1, tr2)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		uc1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", tr1))(tr1, uc1x);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", tr1))(tr1);
		RTHOOK(5);
		tr1 = RTLNSMART(RTWCT(1955, 49, Current));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1974, 26, "polypoints", tr3));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 92, dtype))(Current);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 47, dtype))(Current);
	} else {

		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", tr1))(tr1);
		RTHOOK(10);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc1 = loc1;
		}
		while (!(tc1)) {

			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			if (RTCEQ(tr1, arg1)) {
				RTHOOK(12);
				tr1 = RTLNSMART(RTWCT(1955, 49, Current));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(12);
				tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1974, 26, "polypoints", tr3));
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(12);
				RTCI2(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(13);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 92, dtype))(Current);
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 47, dtype))(Current);
				RTHOOK(16);
				loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			} else {
				RTHOOK(17);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", tr1))(tr1);
			}

			RTHOOK(10);
			tc1 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
			if (!tc2) {
				tc1 = loc1;
			}
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* update_coordinates */

void Fn58x4c (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update_coordinates", RTUD(1955), Current, 0, 0, 27844);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("poly_cursor_valid", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 10, "before", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_finished", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1955, 24, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1955, 74, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 50, "forth", tr1))(tr1);

	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", tr1))(tr1);
		}


		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(10);
			tc1 = '\0';
			tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1955, 35, dtype));
			if (tc2) {
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1813, 33, "line", tr1));
				RTNHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1975, 59, "connection_count", tr2))(tr2)).value.EIF_INTEGER_32_value);
				tc1 = (EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 1L));
			}
			if (tc1) {
				RTHOOK(11);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 37, "is_cursor_one_direction", tr2))(tr2)).value.EIF_BOOLEAN_value);
				uc1 = (EIF_BOOLEAN) !tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", tr1))(tr1, uc1x);
				RTHOOK(12);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", tr1))(tr1);
				RTHOOK(13);
				tr1 = RTLNSMART(RTWCT(1955, 49, Current));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(13);
				tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1974, 26, "polypoints", tr3));
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(13);
				RTCI2(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
			} else {
				RTHOOK(16);
				*(EIF_BOOLEAN *)(Current + RTWA(1955, 24, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			}

		} else {
			RTHOOK(17);
			tr1 = RTLNSMART(RTWCT(1955, 49, Current));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1974, 26, "polypoints", tr3));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(17);
			RTCI2(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
			RTHOOK(19);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		}

	} else {
		RTHOOK(20);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 74, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 50, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 14, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_line */

void Fn5_v0n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_line", RTUD(1955), Current, 0, 1, 27846);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1955, 80, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(1955, 93, Current));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", tr1))(tr1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1955, 49, Current));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1974, 26, "polypoints", tr3));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2192, 68, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 49, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 38, "start", tr1))(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 92, dtype))(Current);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1955, 47, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("line_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 80, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp0t30c (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("line_set", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 80, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("line_cursor_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1955, 93, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1956 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

