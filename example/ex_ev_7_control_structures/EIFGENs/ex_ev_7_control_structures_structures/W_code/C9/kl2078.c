/*
 * Code for class KL_UNIX_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpes4rz(EIF_REFERENCE);
extern void Fpeshuc(EIF_REFERENCE);
extern void Fperuwq(EIF_REFERENCE);
extern void EIF_Minit2078(void);

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

RTOID (Fpes4rz)

EIF_UNION Fpes4rz (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpes4rz,30594,RTMS_EX_H("\012",1,10));
}
/* read_new_line */

void Fpeshuc (EIF_REFERENCE Current)
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
	RTEAA("read_new_line", RTUD(2077), Current, 0, 0, 30592);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2077, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2077, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2077, 258, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2077, 288, dtype))(Current);

	RTHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2077, 241, dtype));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(8);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2077, 257, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '\012')) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
			uc1 = (EIF_CHARACTER) '\012';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
		} else {
			RTHOOK(10);
			tc1 = *(EIF_CHARACTER *)(Current + RTWA(2077, 257, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2077, 49, dtype))(Current, uc1x);
		}

	}

	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current + RTWA(2077, 241, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("not_end_of_input", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2077, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(2);
	RTEE;
}

/* read_line */

void Fperuwq (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
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
	RTEAA("read_line", RTUD(2077), Current, 4, 0, 30591);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2077, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2077, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2077, 258, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(7);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));

	RTHOOK(8);
	while (!(loc1)) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2077, 288, dtype))(Current);

		RTHOOK(10);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2077, 241, dtype));
		if (tc1) {
			RTHOOK(11);
			loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(13);
			loc3 = *(EIF_CHARACTER *)(Current + RTWA(2077, 257, dtype));

			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER) '\012')) {
				RTHOOK(15);
				loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			} else {
				RTHOOK(16);
				uc1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", loc2))(loc2, uc1x);
			}

		}

		RTHOOK(8);
		;
	}

	RTHOOK(17);
	*(EIF_BOOLEAN *)(Current + RTWA(2077, 241, dtype)) = (EIF_BOOLEAN)loc4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("last_string_not_void", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2077, 111, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2077, 258, dtype));
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
	RTHOOK(19);
	RTLE;
	RTLO(6);
	RTEE;
}

void EIF_Minit2078 (void)
{
	GTCX
	RTOTS (32001,Fpes4rz)
}


#ifdef __cplusplus
}
#endif

