/*
 * Code for class KL_WINDOWS_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpeu2kv(EIF_REFERENCE);
extern void Fpeufm8(EIF_REFERENCE);
extern void Fpetspm(EIF_REFERENCE);
extern void EIF_Minit2079(void);

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

/* eol */

RTOID (Fpeu2kv)

EIF_UNION Fpeu2kv (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpeu2kv,30597,RTMS_EX_H("\015\012",2,3338));
}
/* read_new_line */

void Fpeufm8 (EIF_REFERENCE Current)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTEAA("read_new_line", RTUD(2078), Current, 0, 0, 30595);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2078, 258, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2078, 288, dtype))(Current);

	RTHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2078, 241, dtype));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(8);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2078, 257, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '\015')) {
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2078, 288, dtype))(Current);

			RTHOOK(10);
			tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2078, 241, dtype));
			if ((EIF_BOOLEAN) !tc1) {

				RTHOOK(11);
				tc1 = *(EIF_CHARACTER *)(Current + RTWA(2078, 257, dtype));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '\012')) {
					RTHOOK(12);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 353, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 64, "append_string", tr1))(tr1, ur1x);
				} else {
					RTHOOK(13);
					tc1 = *(EIF_CHARACTER *)(Current + RTWA(2078, 257, dtype));
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2078, 49, dtype))(Current, uc1x);
					RTHOOK(14);
					uc1 = (EIF_CHARACTER) '\015';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2078, 49, dtype))(Current, uc1x);
				}

			} else {
				RTHOOK(15);
				uc1 = (EIF_CHARACTER) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2078, 49, dtype))(Current, uc1x);
			}

		} else {
			RTHOOK(16);
			tc1 = *(EIF_CHARACTER *)(Current + RTWA(2078, 257, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2078, 49, dtype))(Current, uc1x);
		}

	}

	RTHOOK(17);
	*(EIF_BOOLEAN *)(Current + RTWA(2078, 241, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("not_end_of_input", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
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

/* read_line */

void Fpetspm (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc2;
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
	RTEAA("read_line", RTUD(2078), Current, 5, 0, 30594);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2078, 258, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(7);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));

	RTHOOK(8);
	while (!(loc1)) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2078, 288, dtype))(Current);

		RTHOOK(10);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2078, 241, dtype));
		if (tc1) {

			RTHOOK(11);
			if (loc4) {
				RTHOOK(12);
				uc1 = (EIF_CHARACTER) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", loc2))(loc2, uc1x);
			}

			RTHOOK(13);
			loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(14);
			loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(15);
			loc3 = *(EIF_CHARACTER *)(Current + RTWA(2078, 257, dtype));

			RTHOOK(16);
			switch (loc3) {
				case (EIF_CHARACTER) '\012':

					RTHOOK(17);
					if (loc4) {
						RTHOOK(18);
						loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					} else {
						RTHOOK(19);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", loc2))(loc2, uc1x);
					}

					break;
				case (EIF_CHARACTER) '\015':

					RTHOOK(20);
					if (loc4) {
						RTHOOK(21);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", loc2))(loc2, uc1x);
					} else {
						RTHOOK(22);
						loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					}

					break;
				default:

					RTHOOK(23);
					if (loc4) {
						RTHOOK(24);
						uc1 = (EIF_CHARACTER) '\015';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", loc2))(loc2, uc1x);
						RTHOOK(25);
						loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					}

					RTHOOK(26);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
					uc1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
					break;
			}
		}

		RTHOOK(8);
		;
	}

	RTHOOK(27);
	*(EIF_BOOLEAN *)(Current + RTWA(2078, 241, dtype)) = (EIF_BOOLEAN)loc5;
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("last_string_not_void", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2078, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2078, 258, dtype));
			tc1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTLO(7);
	RTEE;
}

void EIF_Minit2079 (void)
{
	GTCX
	RTOTS (32004,Fpeu2kv)
}


#ifdef __cplusplus
}
#endif

