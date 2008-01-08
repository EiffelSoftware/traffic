/*
 * Code for class YY_FILE_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnc_r77(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fncz4al(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnc0e5u(EIF_REFERENCE);
extern EIF_UNION Fnc4yp6(EIF_REFERENCE);
extern void Fnc3nuy(EIF_REFERENCE);
extern void Fnc4ask(EIF_REFERENCE);
extern void Fnc2czp(EIF_REFERENCE, EIF_UNION);
extern void Fnc2_xb(EIF_REFERENCE);
extern void Fp_3lj4(EIF_REFERENCE, int);
extern void EIF_Minit1818(void);

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

/* make_with_size */

void Fnc_r77 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_size", RTUD(1817), Current, 0, 2, 26354);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_file_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_file_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 43, "is_open_read", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("size_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current + RTWA(1817, 45, dtype)) = (EIF_INTEGER_32)arg2;
	RTHOOK(5);
	ui4_1 = (EIF_INTEGER_32)(arg2 + ((EIF_INTEGER_32) 2L));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1817, 33, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1817, 49, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1817, 60, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 45, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("file_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("beginning_of_line", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 26, dtype));
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* make */

void Fncz4al (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(3,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1817), Current, 0, 1, 26353);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_file_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_file_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 43, "is_open_read", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1817, 2, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1817, 56, dtype))(Current, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("file_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("beginning_of_line", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 26, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* name */

EIF_UNION Fnc0e5u (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("name", RTUD(1817), Current, 0, 0, 26355);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 44, "name", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("name_not_void", EX_POST);
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

/* read_buffer_capacity */

EIF_UNION Fnc4yp6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 8192L);
	return r;
}
/* fill */

void Fnc3nuy (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(1,loc3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("fill", RTUD(1817), Current, 3, 0, 26358);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype));
	tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype));
	if ((EIF_BOOLEAN)(tc1 && (EIF_BOOLEAN) !tc2)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1817, 34, dtype))(Current);
		RTHOOK(3);
		loc3 = *(EIF_REFERENCE *)(Current + RTWA(1817, 49, dtype));
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 45, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 - ti4_1);

		RTHOOK(5);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 39, dtype));
		if (tc1) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1967, 45, "read_character", tr1))(tr1);

			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 42, "end_of_input", tr1))(tr1)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc1) {
				RTHOOK(8);
				(*(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype)))++;
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 46, "last_character", tr1))(tr1)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2000, 44, "put", loc3))(loc3, uc1x, ui4_1x);
				RTHOOK(10);
				*(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			} else {
				RTHOOK(11);
				*(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(12);
				*(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			}

		} else {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
			ur1 = RTCCL(tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
			ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
			ui4_2 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(2000, 42, "fill_from_stream", loc3))(loc3, ur1x, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
			loc2 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc2 < loc1)) {
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 42, "end_of_input", tr1))(tr1)).value.EIF_BOOLEAN_value);
				*(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype)) = (EIF_BOOLEAN)tc1;
			}


			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc2 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				*(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			} else {
				RTHOOK(18);
				*(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			}

			RTHOOK(19);
			(*(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype))) += loc2;
		}

		RTHOOK(20);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1817, 35, dtype))(Current)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2000, 44, "put", loc3))(loc3, uc1x, ui4_1x);
		RTHOOK(21);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1817, 35, dtype))(Current)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2000, 44, "put", loc3))(loc3, uc1x, ui4_1x);
	} else {
		RTHOOK(22);
		*(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(5);
	RTEE;
}

/* wipe_out */

void Fnc4ask (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(1817), Current, 0, 0, 26359);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1817, 22, dtype))(Current);
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("wiped_out", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("beginning_of_line", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 26, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("not_filled", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 32, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("end_of_file", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_file */

void Fnc2czp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_file", RTUD(1817), Current, 0, 1, 26356);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_file_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_file_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 43, "is_open_read", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 42, "end_of_input", arg1))(arg1)).value.EIF_BOOLEAN_value);
	*(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype)) = (EIF_BOOLEAN)tc1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1817, 22, dtype))(Current);
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1817, 24, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("file_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("beginning_of_line", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 26, dtype));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_end_of_file */

void Fnc2_xb (EIF_REFERENCE Current)
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
	RTEAA("set_end_of_file", RTUD(1817), Current, 0, 0, 26357);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("end_of_file_set", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype));
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
}

void Fp_3lj4 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("file_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("file_open_read", Current);
	tc1 = '\01';
	tc2 = *(EIF_BOOLEAN *)(Current + RTWA(1817, 59, dtype));
	if ((EIF_BOOLEAN) !tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1817, 58, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 43, "is_open_read", tr1))(tr1)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1818 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

