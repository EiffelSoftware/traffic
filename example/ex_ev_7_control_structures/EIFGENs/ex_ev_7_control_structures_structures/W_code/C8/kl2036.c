/*
 * Code for class KL_STDIN_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fovo6nz(EIF_REFERENCE, EIF_UNION);
extern void Fovla08(EIF_REFERENCE);
extern EIF_UNION Fovm8u3(EIF_REFERENCE);
extern EIF_UNION Fovrseg(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fovojqc(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fovq4gu(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Ffkfib8(EIF_REFERENCE);
extern EIF_UNION Fovs19p(EIF_REFERENCE);
extern EIF_UNION Ffkf49v(EIF_REFERENCE);
extern EIF_UNION Fovmlxh(EIF_REFERENCE);
extern EIF_UNION Fovlyzv(EIF_REFERENCE);
extern void Fovqhi7(EIF_REFERENCE);
extern void Fovnwsq(EIF_REFERENCE);
extern void Fovpull(EIF_REFERENCE);
extern EIF_UNION Fovtp7b(EIF_REFERENCE);
extern void EIF_Minit2036(void);

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

/* read_string */

void Fovo6nz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("read_string", RTUD(2035), Current, 1, 1, 29134);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(5);
		tr1 = RTLNSMART(RTWCT(2035, 172, Current));
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(195, 0, "capacity", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 < arg1)) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 23, "resize", tr1))(tr1, ui4_1x);
	}}


	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {

		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 3, "set_count", tr1))(tr1, ui4_1x);
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
			ur1 = RTCCL(tr1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = arg1;
			loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2035, 25, dtype))(Current, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 3, "set_count", tr1))(tr1, ui4_1x);
		} else {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 3, "set_count", tr1))(tr1, ui4_1x);
		}

	} else {
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 3, "set_count", tr1))(tr1, ui4_1x);
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = arg1;
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2035, 349, dtype))(Current, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 3, "set_count", tr1))(tr1, ui4_1x);
	}

	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
	*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("last_string_not_void", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		if ((!((EIF_BOOLEAN) !tc1) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("last_string_count_small_enough", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
			tc1 = (EIF_BOOLEAN)(ti4_1 <= arg1);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("character_read", EX_POST);
		tc1 = '\01';
		tc2 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
			tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
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
	RTLO(4);
	RTEE;
#undef arg1
}

/* make */

void Fovla08 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(3,tr2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2035), Current, 0, 0, 29128);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("stdin",5,1953620846);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2035, 154, dtype))(Current, ur1x);
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 158, dtype));
		tr2 = RTMS_EX_H("stdin",5,1953620846);
		ur1 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_open_read", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_end_of_file", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((EIF_BOOLEAN) !tc1) {
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

/* end_of_file */

EIF_UNION Fovm8u3 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = *(EIF_BOOLEAN *)(Current + RTWA(2035,343, Dtype(Current)));
	return r;
}

/* read_to_buffer */

EIF_UNION Fovrseg (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("read_to_buffer", RTUD(2035), Current, 1, 3, 29138);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pos_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("enough_space", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2314, 32, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32)((EIF_INTEGER_32)(arg2 + arg3) - ((EIF_INTEGER_32) 1L)) <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(2001), loc1);

	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(9);
		ur1 = RTCCL(Current);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2001, 45, "fill_from_stream", loc1))(loc1, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
		Result = (EIF_INTEGER_32)ti4_1;
	} else {
		RTHOOK(10);
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1968, 36, RTUD(1968)))(Current, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("nb_item_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("nb_item_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("not_end_of_input", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((!((EIF_BOOLEAN) !tc1) || ((EIF_BOOLEAN)(Result > ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* unread_character */

void Fovojqc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("unread_character", RTUD(2035), Current, 1, 1, 29133);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_item_valid", EX_PRE);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2035, 325, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(2035, 351, Current));
	uc1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2333, 4, Dtype(tr1)))(tr1, uc1x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2333, 35, "put_right", loc1))(loc1, ur1x);
	}

	RTHOOK(6);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	RTHOOK(7);
	*(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype)) = (EIF_CHARACTER)arg1;
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_end_of_input", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("last_item_set", EX_POST);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* read_to_string */

EIF_UNION Fovq4gu (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(1,arg1);
	RTLR(7,loc5);
	RTLR(0,Current);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("read_to_string", RTUD(2035), Current, 5, 3, 29137);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_position", EX_PRE);
		ui4_1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 2, "valid_index", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("nb_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg3 <= (EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - arg2) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(7);
	loc2 = (EIF_INTEGER_32)arg2;
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
	while (!((EIF_BOOLEAN)((EIF_BOOLEAN)(loc1 == arg3) || (EIF_BOOLEAN)(tr1 == NULL)))) {
		RTHOOK(9);
		loc1++;
		RTHOOK(10);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2333, 2, "item", tr2))(tr2)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", arg1))(arg1, uc1x, ui4_1x);
		RTHOOK(11);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(2333, 34, "right", tr2));
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype)) = (EIF_REFERENCE)RTCCL(tr3);
		RTHOOK(12);
		loc2++;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
		;
	}


	RTHOOK(13);
	if ((EIF_BOOLEAN)(loc1 < arg3)) {

		RTHOOK(14);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {

			RTHOOK(15);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 197, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			ur1 = RTCCL(arg1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 353, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr3);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr2))(tr2, ur1x, ur2x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(16);
				ur1 = RTCCL(arg1);
				ui4_1 = loc2;
				ui4_2 = (EIF_INTEGER_32)(arg3 - loc1);
				Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2035, 25, dtype))(Current, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
				Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + Result);
			} else {
				RTHOOK(17);
				loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg3 - loc1);
				RTHOOK(18);
				tr2 = RTLN(RTUD(774));
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr2)))(tr2, ui4_1x);
				RTNHOOK(18);
				RTCI2(tr2);
				loc5 = (EIF_REFERENCE)RTCCL(tr2);
				RTHOOK(19);
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(123, 3, "set_count", loc5))(loc5, ui4_1x);
				RTHOOK(20);
				ur1 = RTCCL(loc5);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ui4_2 = loc4;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2035, 25, dtype))(Current, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
				loc4 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(21);
				loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
				RTHOOK(22);
				while (!((EIF_BOOLEAN)(loc3 > loc4))) {
					RTHOOK(23);
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc5))(loc5, ui4_1x)).value.EIF_CHARACTER_value);
					uc1 = tc1;
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", arg1))(arg1, uc1x, ui4_1x);
					RTHOOK(24);
					loc2++;
					RTHOOK(25);
					loc3++;
					RTHOOK(22);
					;
				}

				RTHOOK(26);
				Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + loc4);
			}

		} else {
			RTHOOK(27);
			Result = (EIF_INTEGER_32)loc1;
		}

		RTHOOK(28);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
		*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)tc1;
	} else {
		RTHOOK(29);
		Result = (EIF_INTEGER_32)loc1;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("nb_char_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("nb_char_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("character_read", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((!((EIF_BOOLEAN) !tc1) || ((EIF_BOOLEAN)(Result > ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* last_character */

EIF_UNION Ffkfib8 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = *(EIF_CHARACTER *)(Current + RTWA(2035,69, Dtype(Current)));
	return r;
}

/* file_readable */

EIF_UNION Fovs19p (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("file_readable", RTUD(2035), Current, 0, 0, 29139);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* last_string */

EIF_UNION Ffkf49v (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2035,172, Dtype(Current)));
	return r;
}

/* is_open_read */

EIF_UNION Fovmlxh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_open_read", RTUD(2035), Current, 0, 0, 29141);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 60, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* eol */

RTOID (Fovlyzv)

EIF_UNION Fovlyzv (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fovlyzv,29137,RTMS_EX_H("\012",1,10));
}
/* read_new_line */

void Fovqhi7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
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
	RTEAA("read_new_line", RTUD(2035), Current, 0, 0, 29142);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2035, 172, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2035, 344, dtype))(Current);

	RTHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(8);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype));
		switch (tc1) {
			case (EIF_CHARACTER) '\012':
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
				uc1 = (EIF_CHARACTER) '\012';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
				break;
			case (EIF_CHARACTER) '\015':
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
				uc1 = (EIF_CHARACTER) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
				RTHOOK(11);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2035, 344, dtype))(Current);

				RTHOOK(12);
				tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
				if ((EIF_BOOLEAN) !tc1) {

					RTHOOK(13);
					tc1 = *(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '\012')) {
						RTHOOK(14);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
						uc1 = (EIF_CHARACTER) '\012';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
					} else {
						RTHOOK(15);
						tc1 = *(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype));
						uc1 = tc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2035, 345, dtype))(Current, uc1x);
					}

				}

				break;
			default:
				RTHOOK(16);
				tc1 = *(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype));
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2035, 345, dtype))(Current, uc1x);
				break;
		}
	}

	RTHOOK(17);
	*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("not_end_of_input", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTLO(2);
	RTEE;
}

/* read_character */

void Fovnwsq (EIF_REFERENCE Current)
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
	RTEAA("read_character", RTUD(2035), Current, 0, 0, 29132);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2333, 2, "item", tr1))(tr1)).value.EIF_CHARACTER_value);
		*(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype)) = (EIF_CHARACTER)tc1;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2333, 34, "right", tr1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(2035, 351, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2035, 63, dtype))(Current);
		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
		*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)tc1;
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(2);
	RTEE;
}

/* read_line */

void Fovpull (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,loc2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTEAA("read_line", RTUD(2035), Current, 5, 0, 29135);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2035, 342, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2035, 172, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(7);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));

	RTHOOK(8);
	while (!(loc1)) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2035, 344, dtype))(Current);

		RTHOOK(10);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		if (tc1) {
			RTHOOK(11);
			loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(13);
			loc3 = *(EIF_CHARACTER *)(Current + RTWA(2035, 69, dtype));

			RTHOOK(14);
			switch (loc3) {
				case (EIF_CHARACTER) '\012':
					RTHOOK(15);
					loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				case (EIF_CHARACTER) '\015':
					RTHOOK(16);
					loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					break;
				default:

					RTHOOK(17);
					if (loc5) {
						RTHOOK(18);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2035, 345, dtype))(Current, uc1x);
						RTHOOK(19);
						loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					} else {
						RTHOOK(20);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
					}

					break;
			}
		}

		RTHOOK(8);
		;
	}

	RTHOOK(21);
	*(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype)) = (EIF_BOOLEAN)loc4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("last_string_not_void", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2035, 343, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2035, 172, dtype));
		if ((!((EIF_BOOLEAN) !tc1) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(7);
	RTEE;
}

/* dummy_string */

RTOID (Fovtp7b)

EIF_UNION Fovtp7b (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fovtp7b,29141,RTMS_EX_H("",0,0));
}
void EIF_Minit2036 (void)
{
	GTCX
	RTOTS (30846,Fovlyzv)
	RTOTS (30858,Fovtp7b)
}


#ifdef __cplusplus
}
#endif

