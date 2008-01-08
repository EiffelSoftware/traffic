/*
 * Code for class TWO_WAY_LIST [REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fenxdrh(EIF_REFERENCE, EIF_UNION);
extern void Fenth4r(EIF_REFERENCE, EIF_UNION);
extern void Fenv2v8(EIF_REFERENCE);
extern EIF_UNION Fen_mfl(EIF_REFERENCE);
extern void Fenp9gn(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fennop5(EIF_REFERENCE);
extern EIF_UNION Fenzbkc(EIF_REFERENCE);
extern void Fenwqtv(EIF_REFERENCE);
extern void Fenrkbw(EIF_REFERENCE, EIF_UNION);
extern void Fensu64(EIF_REFERENCE, EIF_UNION);
extern void Fenus__(EIF_REFERENCE);
extern void Fenpmi0(EIF_REFERENCE);
extern void Fenobns(EIF_REFERENCE);
extern EIF_UNION Fenzzhz(EIF_REFERENCE, EIF_UNION);
extern void Fent42d(EIF_REFERENCE, EIF_UNION);
extern void Fenyomq(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fenozle(EIF_REFERENCE);
extern EIF_UNION Fenm0sj(EIF_REFERENCE);
extern void Fenr69i(EIF_REFERENCE, EIF_UNION);
extern void Fenx0o3(EIF_REFERENCE);
extern void Fenvfym(EIF_REFERENCE);
extern EIF_UNION Fenlqxa(EIF_REFERENCE);
extern void Fenqxd9(EIF_REFERENCE, EIF_UNION);
extern void Fm4lmh_(EIF_REFERENCE, int);
extern void EIF_Minit2291(void);

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

/* split */

void Fenxdrh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(8);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(7,ur2);
	RTLR(6,ur1);
	RTLR(3,loc3);
	RTLR(2,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTEAA("split", RTUD(2290), Current, 6, 1, 27527);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(163, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_sublist", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWPCT(2290, 35, 0, Current));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 0, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);

		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(loc2 + arg1) > (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(7);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L)) - loc2);
		} else {
			RTHOOK(8);
			loc1 = (EIF_INTEGER_32)arg1;
		}

		RTHOOK(9);
		loc4 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		RTHOOK(10);
		loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(90, 2, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(11);
		ui4_1 = (EIF_INTEGER_32)(loc1 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(171, 2, dtype))(Current, ui4_1x);
		RTHOOK(12);
		loc5 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		RTHOOK(13);
		loc6 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(90, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 2, "forget_left", loc4))(loc4);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(207, 2, "forget_right", loc5))(loc5);
		RTHOOK(16);
		tr1 = RTLNSMART(RTWPCT(2290, 35, 0, Current));
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(loc5);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(35, 3, Dtype(tr1)))(tr1, ur1x, ur2x, ui4_1x);
		RTNHOOK(16);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 0, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(17);
		(*(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype))) -= loc1;

		RTHOOK(18);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(19);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(207, 1, "put_right", loc3))(loc3, ur1x);
		} else {
			RTHOOK(20);
			RTAR(Current, loc6);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(loc6);
		}


		RTHOOK(21);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTHOOK(22);
			RTAR(Current, loc6);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc6);
		} else {
			RTHOOK(23);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
			RTHOOK(24);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
			RTHOOK(25);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg1
}

/* merge_left */

void Fenth4r (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(3,tr1);
	RTLR(6,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(4,loc2);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("merge_left", RTUD(2290), Current, 3, 1, 27521);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(90, 11, "count", arg1));
		ti4_2 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(90, 11, "count", arg1));
		ti4_4 = ti4_5;
		in_assertion = 0;
	}

	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVPA(90, 5, "first_element", arg1));
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVPA(35, 4, "last_element", arg1));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(90, 11, "count", arg1));
		loc3 = (EIF_INTEGER_32)ti4_5;
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCS(EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(10);
			RTCS(EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}

		RTHOOK(11);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(12);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
			RTHOOK(13);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(loc1);

			RTHOOK(14);
			tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
			if (tc1) {
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			} else {
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			}

		} else {
			RTHOOK(17);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(207, 1, "put_right", loc2))(loc2, ur1x);
			RTHOOK(19);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		} else {
			RTHOOK(20);
			tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
		if (tc1) {
			RTHOOK(21);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 1, "put_left", loc1))(loc1, ur1x);
			RTHOOK(22);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
			RTHOOK(23);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		} else {
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 1, "put_left", loc1))(loc1, ur1x);
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 1, "put_left", tr1))(tr1, ur1x);
		}}}

		RTHOOK(26);
		(*(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype))) += loc3;
		RTHOOK(27);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "wipe_out", arg1))(arg1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("new_index", EX_POST);
		ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32)(ti4_3 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("other_is_empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* remove_right */

void Fenv2v8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_right", RTUD(2290), Current, 0, 0, 27525);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("right_exists", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 < ti4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(115, 7, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(46, 4, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(200, 1, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(2);
	RTEE;
}

/* previous */

EIF_UNION Fen_mfl (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("previous", RTUD(2290), Current, 0, 0, 27532);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
	if (tc1) {
		RTHOOK(2);
		Result = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		Result = (EIF_REFERENCE)RTCCL(tr2);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* move */

void Fenp9gn (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("move", RTUD(2290), Current, 2, 1, 27540);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		ti4_5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_4 = ti4_5;
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = ti4_6;
		ti4_7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_6 = ti4_7;
		ti4_8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_7 = ti4_8;
		ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_8 = ti4_9;
		in_assertion = 0;
	}

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(35, 6, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {

		RTHOOK(4);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
		if (tc1) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(6);
			loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		}


		RTHOOK(7);
		loc2 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		RTHOOK(8);
		while (!((EIF_BOOLEAN)((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc2 == NULL)))) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(loc2 + RTVPA(27, 0, "left", loc2));
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			loc1--;
			RTHOOK(8);
			;
		}


		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			RTHOOK(12);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		} else {
			RTHOOK(14);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("too_far_right", EX_POST);
		tc1 = '\01';
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_1 + arg1) > ti4_9)) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("too_far_left", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_2 + arg1) < ((EIF_INTEGER_32) 1L))) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("expected_index", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_9 == (EIF_INTEGER_32)(ti4_3 + arg1));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("moved_if_inbounds", EX_POST);
		tc1 = '\01';
		tc2 = '\0';
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_4 + arg1) >= ((EIF_INTEGER_32) 0L))) {
			ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
			tc2 = (EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_5 + arg1) <= (EIF_INTEGER_32)(ti4_9 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc2) {
			ti4_9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_9 == (EIF_INTEGER_32)(ti4_6 + arg1));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("before_set", EX_POST);
		tc1 = '\01';
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_7 + arg1) <= ((EIF_INTEGER_32) 0L))) {
			tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("after_set", EX_POST);
		tc1 = '\01';
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32)(ti4_8 + arg1) >= (EIF_INTEGER_32)(ti4_9 + ((EIF_INTEGER_32) 1L)))) {
			tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* islast */

EIF_UNION Fennop5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("islast", RTUD(2290), Current, 0, 0, 27536);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
	Result = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(RTCEQ(tr1, tr2) && (EIF_BOOLEAN) !Result) && (EIF_BOOLEAN) !tc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_position", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* new_chain */

EIF_UNION Fenzbkc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("new_chain", RTUD(2290), Current, 0, 0, 27530);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* wipe_out */

void Fenwqtv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(2290), Current, 0, 0, 27526);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(35, 5, dtype))(Current);
	RTHOOK(3);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("wiped_out", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_before", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
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
	RTLO(2);
	RTEE;
}

/* extend */

void Fenrkbw (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,loc1);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("extend", RTUD(2290), Current, 1, 1, 27542);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(140, 0, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(90, 1, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 1, "put_left", loc1))(loc1, ur1x);
	}

	RTHOOK(7);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);

	RTHOOK(8);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
	if (tc1) {
		RTHOOK(9);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	}

	RTHOOK(10);
	(*(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("item_inserted", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(131, 2, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("one_more_occurrence", EX_POST);
		ur1 = RTCCL(arg1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(140, 0, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* put_right */

void Fensu64 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("put_right", RTUD(2290), Current, 1, 1, 27544);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
		tc1 = tc2;
		tc3 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
		tc2 = tc3;
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(35, 8, dtype))(Current, ur1x);

	RTHOOK(5);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
	if ((EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(7);
	if (loc1) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(207, 0, "right", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("next_exists", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(90, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("item_inserted", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc1) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(90, 3, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(83, 0, "item", tr1));
			tc3 = RTCEQ(tr2, arg1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("item_inserted_before", EX_POST);
		tc3 = '\01';
		if (tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(83, 0, "item", tr1));
			tc3 = RTCEQ(tr2, arg1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* remove */

void Fenus__ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(5,loc1);
	RTLR(4,loc2);
	RTLR(1,loc3);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("remove", RTUD(2290), Current, 3, 0, 27523);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(46, 2, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));

	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(207, 0, "right", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(207, 2, "forget_right", tr1))(tr1);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			if (RTAL & CK_CHECK) {
				RTHOOK(9);
				RTCT("no_active", EX_CHECK);
				tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
				if ((EIF_BOOLEAN)(tr1 == NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(10);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(11);
			RTAR(Current, NULL);
			*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)NULL;
		}

	} else {
		RTHOOK(12);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 2, "forget_left", tr1))(tr1);
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(16);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		loc2 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(207, 0, "right", tr1));
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(207, 2, "forget_right", loc2))(loc2);
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(27, 2, "forget_left", loc1))(loc1);
		RTHOOK(21);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(207, 1, "put_right", loc2))(loc2, ur1x);
		RTHOOK(22);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	}}

	RTHOOK(23);
	(*(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype)))--;
	RTHOOK(24);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(90, 7, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("after_when_empty", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTLO(5);
	RTEE;
}

/* finish */

void Fenpmi0 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	RTEAA("finish", RTUD(2290), Current, 0, 0, 27539);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(6);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("at_last", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("empty_convention", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_after", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(2);
	RTEE;
}

/* forth */

void Fenobns (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
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
	RTEAA("forth", RTUD(2290), Current, 0, 0, 27537);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
	if (tc1) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;

		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(207, 0, "right", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(9);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("moved_forth", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
}

/* new_cell */

EIF_UNION Fenzzhz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,arg1);
	RTLR(0,Current);
	RTLR(2,Result);
	RTLR(4,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("new_cell", RTUD(2290), Current, 0, 1, 27531);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWPCT(2290, 90, 5, Current));
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(83, 1, "put", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* merge_right */

void Fent42d (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("merge_right", RTUD(2290), Current, 0, 1, 27522);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(90, 11, "count", arg1));
		ti4_2 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = ti4_4;
		in_assertion = 0;
	}

	RTHOOK(5);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 5, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVPA(35, 4, "last_element", arg1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}

	RTHOOK(7);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(35, 9, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32)(ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_index", EX_POST);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_4 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("other_is_empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make_sublist */

void Fenyomq (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_sublist", RTUD(2290), Current, 0, 3, 27529);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, dtype))(Current);
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype)) = (EIF_INTEGER_32)arg3;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* back */

void Fenozle (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
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
	RTEAA("back", RTUD(2290), Current, 0, 0, 27538);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
	if (tc1) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;

		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(9);
			*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(2);
	RTEE;
}

/* cursor */

EIF_UNION Fenm0sj (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(4,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("cursor", RTUD(2290), Current, 0, 0, 27535);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2290,2292,-8,1,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2292, typarr);

		tr1 = RTLN(typres);

	}
	tr2 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
	ur1 = RTCCL(tr2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
	uc1 = tc1;
	tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
	uc2 = tc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWPF(78, 0, Dtype(tr1)))(tr1, ur1x, uc1x, uc2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* put_left */

void Fenr69i (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("put_left", RTUD(2290), Current, 1, 1, 27543);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(131, 0, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(90, 1, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current + RTWPA(90, 9, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	} else {
		RTHOOK(9);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWPA(90, 10, dtype));
	if (tc1) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 1, "put_left", loc1))(loc1, ur1x);
		RTHOOK(11);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		RTHOOK(12);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	} else {
		RTHOOK(13);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(207, 1, "put_right", loc1))(loc1, ur1x);
		RTHOOK(15);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	} else {
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(27, 1, "put_left", loc1))(loc1, ur1x);
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 4, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(207, 1, "put_right", loc1))(loc1, ur1x);
	}}}

	RTHOOK(18);
	(*(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("new_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("previous_exists", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(90, 2, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("item_inserted", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(90, 2, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(22);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(83, 0, "item", tr1));
		if (RTCEQ(tr2, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* remove_sublist */

void Fenx0o3 (EIF_REFERENCE Current)
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
	RTEAA("remove_sublist", RTUD(2290), Current, 0, 0, 27528);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWPA(35, 0, Dtype(Current))) = (EIF_REFERENCE)NULL;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* remove_left */

void Fenvfym (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_left", RTUD(2290), Current, 0, 0, 27524);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("left_exists", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(200, 1, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(46, 4, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(115, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(2);
	RTEE;
}

/* last_element */

EIF_UNION Fenlqxa (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWPA(35,4, Dtype(Current)));
	return r;
}

/* put_front */

void Fenqxd9 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_front", RTUD(2290), Current, 0, 1, 27541);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(35, 7, dtype))(Current, ur1x);

	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWPA(90, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("item_inserted", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(171, 0, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
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

void Fm4lmh_ (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("non_empty_list_has_two_endpoints", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(39, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL));
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("first_element_constraint", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(90, 5, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(27, 0, "left", tr1));
		tc1 = (EIF_BOOLEAN)(tr2 == NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("last_element_constraint", Current);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWPA(35, 4, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVPA(207, 0, "right", tr1));
		tc1 = (EIF_BOOLEAN)(tr2 == NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2291 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

