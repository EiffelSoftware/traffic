/*
 * Code for class TRAFFIC_MOVING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn5ev7d(EIF_REFERENCE);
extern void Fn5dlb4(EIF_REFERENCE, EIF_UNION);
extern void Fn5d79r(EIF_REFERENCE, EIF_UNION);
extern void Fn5cyei(EIF_REFERENCE);
extern void Fn5fi4_(EIF_REFERENCE);
extern void Fn5f52m(EIF_REFERENCE);
extern void Fp0r57c(EIF_REFERENCE, int);
extern void EIF_Minit1951(void);

extern EIF_REFERENCE _fAabhy9x();
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

void Fn5ev7d (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(1,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTEAA("move", RTUD(1950), Current, 2, 0, 27822);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1950, 58, dtype));
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 73, "infix \"-\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1950, 64, dtype));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 73, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN) !tc1 && (EIF_BOOLEAN)(tr1 != NULL))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 74, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1841, 31, "actual_time", tr2));
		RTNHOOK(3);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", tr3))(tr3)).value.EIF_REAL_64_value);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 74, "make_by_fine_seconds", tr1))(tr1, ur8_1x);

		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 74, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1950, 73, dtype));
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 15, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1950, 73, dtype));
			ur1 = RTCCL(tr2);
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1950, 74, dtype));
			ur2 = RTCCL(tr3);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1841, 34, "duration", tr1))(tr1, ur1x, ur2x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1923, 68, "fine_seconds_count", tr2))(tr2)).value.EIF_REAL_64_value);
			loc2 = *(EIF_REAL_64 *)(Current + RTWA(1950, 60, dtype));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1841, 42, "default_scale_factor", tr1))(tr1)).value.EIF_REAL_64_value);
			loc2 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 * loc2)) /  (EIF_REAL_64) (tr8_2));

			RTHOOK(6);
			tc1 = '\01';
			tc2 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype));
			tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr8_3 = eif_abs_real64 ((EIF_REAL_64)(tr8_1 - tr8_2));
			if ((EIF_BOOLEAN)(tr8_3 < loc2)) {
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype));
				tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
				tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
				tr8_3 = eif_abs_real64 ((EIF_REAL_64)(tr8_1 - tr8_2));
				tc2 = (EIF_BOOLEAN)(tr8_3 < loc2);
			}
			if (!tc2) {
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2010, 70, "length", loc1))(loc1)).value.EIF_REAL_64_value);
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(tr8_1 <= tr8_2);
			}
			if (tc1) {
				RTHOOK(7);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1950, 70, dtype))(Current);
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1950, 71, dtype))(Current);
			} else {
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype));
				tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2010, 70, "length", loc1))(loc1)).value.EIF_REAL_64_value);
				ur8_1 = tr8_1;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 75, "infix \"/\"", loc1))(loc1, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur8_1 = loc2;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 74, "infix \"*\"", (tr2)))((tr2), ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr3);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 72, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
			}

			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 73, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1841, 31, "actual_time", tr2));
			RTNHOOK(10);
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", tr3))(tr3)).value.EIF_REAL_64_value);
			ur8_1 = tr8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2097, 74, "make_by_fine_seconds", tr1))(tr1, ur8_1x);
		}

	} else {
		RTHOOK(11);
		tr1 = RTLNSMART(RTWCT(1950, 73, Current));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1841, 31, "actual_time", tr2));
		RTNHOOK(11);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", tr3))(tr3)).value.EIF_REAL_64_value);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2097, 74, Dtype(tr1)))(tr1, ur8_1x);
		RTNHOOK(11);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1950, 73, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(12);
		tr1 = RTLNSMART(RTWCT(1950, 74, Current));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(12);
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1841, 31, "actual_time", tr2));
		RTNHOOK(12);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2097, 82, "fine_seconds", tr3))(tr3)).value.EIF_REAL_64_value);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2097, 74, Dtype(tr1)))(tr1, ur8_1x);
		RTNHOOK(12);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1950, 74, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(4);
	RTEE;
}

/* set_speed */

void Fn5dlb4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_speed", RTUD(1950), Current, 0, 1, 27820);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_speed_valid", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN)(arg1 >= tr8_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(1950, 60, dtype)) = (EIF_REAL_64)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("speed_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1950, 60, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
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

/* set_reiterate */

void Fn5d79r (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_reiterate", RTUD(1950), Current, 0, 1, 27821);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1950, 62, dtype)) = (EIF_BOOLEAN)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("reiterating_set", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1950, 62, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* start */

void Fn5cyei (EIF_REFERENCE Current)
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
	RTCFDT;
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
	RTEAA("start", RTUD(1950), Current, 0, 0, 27819);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 56, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	{
		static int16 typarr [] = {1950,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1950,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAabhy9x, (EIF_POINTER)(0),1950, 69, 0, 0, 0, 1, 0, tr2, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1841, 51, "add_callback_tour", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* update_coordinates */

void Fn5fi4_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update_coordinates", RTUD(1950), Current, 0, 0, 27823);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("poly_cursor_valid", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 10, "before", tr1))(tr1)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_finished", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1950, 64, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1950, 58, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype)) = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(5);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1950, 63, dtype));
	if (tc1) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 8, "back", tr1))(tr1);

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 10, "before", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(8);
			*(EIF_BOOLEAN *)(Current + RTWA(1950, 63, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 50, "forth", tr1))(tr1);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1950, 70, dtype))(Current);
		} else {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		}

	} else {
		RTHOOK(12);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1950, 62, dtype));
	if (tc1) {
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 50, "forth", tr1))(tr1);

		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(15);
			*(EIF_BOOLEAN *)(Current + RTWA(1950, 63, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 8, "back", tr1))(tr1);
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1950, 70, dtype))(Current);
		} else {
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		}

	} else {
		RTHOOK(19);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2192, 50, "forth", tr1))(tr1);

		RTHOOK(20);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 9, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(21);
			*(EIF_BOOLEAN *)(Current + RTWA(1950, 64, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2192, 2, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 58, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCS(EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTLO(2);
	RTEE;
}

/* update_angle */

void Fn5f52m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTEAA("update_angle", RTUD(1950), Current, 4, 0, 27824);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 58, dtype));
	tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
	loc1 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 58, dtype));
	tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
	loc2 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	RTHOOK(3);
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64)(loc1 * loc1) + (EIF_REAL_64)(loc2 * loc2));
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1950, 31, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);

	RTHOOK(4);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc3 != tr8_1)) {
		RTHOOK(5);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		loc4 = (EIF_REAL_64)tr8_1;
		RTHOOK(6);
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1950, 28, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)tr8_1;

		RTHOOK(7);
		tc1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(loc1 >= tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tc1 = (EIF_BOOLEAN)(loc2 >= tr8_1);
		}
		if (tc1) {
			RTHOOK(8);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1950, 28, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)tr8_1;
			RTHOOK(9);
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 8, dtype))(Current)).value.EIF_REAL_64_value);
			(*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype))) += tr8_1;
		} else {
			RTHOOK(10);
			tc1 = '\0';
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN)(loc1 < tr8_1)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(loc2 >= tr8_1);
			}
		if (tc1) {
			RTHOOK(11);
			tr8_1 = eif_abs_real64 (loc1);
			loc1 = (EIF_REAL_64)tr8_1;
			RTHOOK(12);
			tr8_1 = eif_abs_real64 (loc2);
			loc2 = (EIF_REAL_64)tr8_1;
			RTHOOK(13);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1950, 28, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)tr8_1;
			RTHOOK(14);
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 8, dtype))(Current)).value.EIF_REAL_64_value);
			tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype));
			*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
		} else {
			RTHOOK(15);
			tc1 = '\0';
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN)(loc1 < tr8_1)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(loc2 < tr8_1);
			}
		if (tc1) {
			RTHOOK(16);
			tr8_1 = eif_abs_real64 (loc1);
			loc1 = (EIF_REAL_64)tr8_1;
			RTHOOK(17);
			tr8_1 = eif_abs_real64 (loc2);
			loc2 = (EIF_REAL_64)tr8_1;
			RTHOOK(18);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1950, 28, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)tr8_1;
		} else {
			RTHOOK(19);
			tc1 = '\0';
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN)(loc1 >= tr8_1)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(loc2 < tr8_1);
			}
		if (tc1) {
			RTHOOK(20);
			tr8_1 = eif_abs_real64 (loc1);
			loc1 = (EIF_REAL_64)tr8_1;
			RTHOOK(21);
			tr8_1 = eif_abs_real64 (loc2);
			loc2 = (EIF_REAL_64)tr8_1;
			RTHOOK(22);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1950, 28, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)tr8_1;
			RTHOOK(23);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1950, 8, dtype))(Current)).value.EIF_REAL_64_value);
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype));
			*(EIF_REAL_64 *)(Current + RTWA(1950, 61, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 * tr8_2) - tr8_3);
		}}}}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(6);
	RTEE;
}

void Fp0r57c (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("origin_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 58, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("destination_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 59, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("position_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 57, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("speed_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1950, 60, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr8_1 >= tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("poly_cursor_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIS(Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1950, 72, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2192, 69, "container", tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2190, 99, "count", tr2));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1951 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

