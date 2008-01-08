/*
 * Code for class KI_CHARACTER_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Foibyq5(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Foidwj0(EIF_REFERENCE, EIF_UNION);
extern void Foiclos(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foie6e9(EIF_REFERENCE);
extern EIF_UNION Foifucw(EIF_REFERENCE);
extern void Foic8me(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2003(void);

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

/* put_substring */

void Foibyq5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
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
	RTLR(2,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("put_substring", RTUD(2002), Current, 0, 3, 28440);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2002, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 <= (EIF_INTEGER_32)(arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(6);
	if ((EIF_BOOLEAN)(arg2 <= arg3)) {
		RTHOOK(7);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 34, dtype))(Current, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* append */

void Foidwj0 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("append", RTUD(2002), Current, 1, 1, 28443);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2002, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_input_stream_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("an_input_stream_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2313, 35, "is_open_read", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(1967), loc1);

	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {


		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 42, "end_of_input", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 512L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1967, 37, "read_string", loc1))(loc1, ui4_1x);
		}

		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 42, "end_of_input", loc1))(loc1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 39, "last_string", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 34, dtype))(Current, ur1x);
			RTHOOK(10);
			ui4_1 = ((EIF_INTEGER_32) 512L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1967, 37, "read_string", loc1))(loc1, ui4_1x);
			RTHOOK(8);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1967, 42, "end_of_input", loc1))(loc1)).value.EIF_BOOLEAN_value);
			;
		}

	} else {
		RTHOOK(11);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2332, 32, RTUD(2332)))(Current, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("end_of_input", EX_POST);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2313, 37, "end_of_input", arg1))(arg1)).value.EIF_BOOLEAN_value);
		if (tc2) {
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

/* put_integer */

void Foiclos (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("put_integer", RTUD(2002), Current, 2, 1, 28441);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2002, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		uc1 = (EIF_CHARACTER) '0';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
	} else {
		RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		uc1 = (EIF_CHARACTER) '-';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)-(EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(7);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 / ((EIF_INTEGER_32) 10L));

		RTHOOK(8);
		switch ((EIF_INTEGER_32)(loc1 % ((EIF_INTEGER_32) 10L))) {
			case 0L:

				RTHOOK(9);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(10);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(11);
				uc1 = (EIF_CHARACTER) '1';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 1L:

				RTHOOK(12);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(13);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(14);
				uc1 = (EIF_CHARACTER) '2';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 2L:

				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(16);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(17);
				uc1 = (EIF_CHARACTER) '3';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 3L:

				RTHOOK(18);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(19);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(20);
				uc1 = (EIF_CHARACTER) '4';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 4L:

				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(22);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(23);
				uc1 = (EIF_CHARACTER) '5';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 5L:

				RTHOOK(24);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(25);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(26);
				uc1 = (EIF_CHARACTER) '6';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 6L:

				RTHOOK(27);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(28);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(29);
				uc1 = (EIF_CHARACTER) '7';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 7L:

				RTHOOK(30);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(31);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(32);
				uc1 = (EIF_CHARACTER) '8';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 8L:

				RTHOOK(33);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(34);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				}

				RTHOOK(35);
				uc1 = (EIF_CHARACTER) '9';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 9L:
				RTHOOK(36);
				ui4_1 = (EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
				RTHOOK(37);
				uc1 = (EIF_CHARACTER) '0';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			default:
				RTEC(EN_WHEN);
		}
	} else {
		RTHOOK(38);
		loc1 = (EIF_INTEGER_32)arg1;
		RTHOOK(39);
		loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 / ((EIF_INTEGER_32) 10L));

		RTHOOK(40);
		if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(41);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 36, dtype))(Current, ui4_1x);
		}


		RTHOOK(42);
		switch ((EIF_INTEGER_32)(loc1 % ((EIF_INTEGER_32) 10L))) {
			case 0L:
				RTHOOK(43);
				uc1 = (EIF_CHARACTER) '0';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 1L:
				RTHOOK(44);
				uc1 = (EIF_CHARACTER) '1';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 2L:
				RTHOOK(45);
				uc1 = (EIF_CHARACTER) '2';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 3L:
				RTHOOK(46);
				uc1 = (EIF_CHARACTER) '3';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 4L:
				RTHOOK(47);
				uc1 = (EIF_CHARACTER) '4';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 5L:
				RTHOOK(48);
				uc1 = (EIF_CHARACTER) '5';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 6L:
				RTHOOK(49);
				uc1 = (EIF_CHARACTER) '6';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 7L:
				RTHOOK(50);
				uc1 = (EIF_CHARACTER) '7';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 8L:
				RTHOOK(51);
				uc1 = (EIF_CHARACTER) '8';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			case 9L:
				RTHOOK(52);
				uc1 = (EIF_CHARACTER) '9';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 44, dtype))(Current, uc1x);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(53);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* true_constant */

RTOID (Foie6e9)

EIF_UNION Foie6e9 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Foie6e9,28445,RTMS_EX_H("True",4,1416787301));
}
/* false_constant */

RTOID (Foifucw)

EIF_UNION Foifucw (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Foifucw,28446,RTMS_EX_H("False",5,1635034981));
}
/* put_boolean */

void Foic8me (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put_boolean", RTUD(2002), Current, 0, 1, 28442);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2002, 43, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2002, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 34, dtype))(Current, ur1x);
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2002, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2002, 34, dtype))(Current, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit2003 (void)
{
	GTCX
	RTOTS (30092,Foie6e9)
	RTOTS (30093,Foifucw)
}


#ifdef __cplusplus
}
#endif

