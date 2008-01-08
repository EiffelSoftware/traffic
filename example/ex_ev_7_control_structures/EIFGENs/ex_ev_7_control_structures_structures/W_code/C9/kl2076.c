/*
 * Code for class KL_TEXT_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpeo846(EIF_REFERENCE);
extern EIF_UNION Fpenbcb(EIF_REFERENCE);
extern void Fpeol7k(EIF_REFERENCE);
extern EIF_UNION Fpel0g2(EIF_REFERENCE);
extern EIF_UNION Fpemoep(EIF_REFERENCE);
extern void Fpeny9y(EIF_REFERENCE);
extern void EIF_Minit2076(void);

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

/* string_name */

EIF_UNION Fpeo846 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2075,354, Dtype(Current)));
	return r;
}

/* eol */

RTOID (Fpenbcb)

EIF_UNION Fpenbcb (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpenbcb,30583,RTMS_EX_H("\012",1,10));
}
/* read_new_line */

void Fpeol7k (EIF_REFERENCE Current)
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
	RTEAA("read_new_line", RTUD(2075), Current, 0, 0, 30584);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2075, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2075, 103, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2075, 350, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2075, 287, dtype))(Current);

	RTHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2075, 237, dtype));
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(8);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2075, 349, dtype));
		switch (tc1) {
			case (EIF_CHARACTER) '\012':
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
				uc1 = (EIF_CHARACTER) '\012';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
				break;
			case (EIF_CHARACTER) '\015':
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
				uc1 = (EIF_CHARACTER) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
				RTHOOK(11);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2075, 287, dtype))(Current);

				RTHOOK(12);
				tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2075, 237, dtype));
				if ((EIF_BOOLEAN) !tc1) {

					RTHOOK(13);
					tc1 = *(EIF_CHARACTER *)(Current + RTWA(2075, 349, dtype));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '\012')) {
						RTHOOK(14);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
						uc1 = (EIF_CHARACTER) '\012';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", tr1))(tr1, uc1x);
					} else {
						RTHOOK(15);
						tc1 = *(EIF_CHARACTER *)(Current + RTWA(2075, 349, dtype));
						uc1 = tc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2075, 47, dtype))(Current, uc1x);
					}

				}

				break;
			default:
				RTHOOK(16);
				tc1 = *(EIF_CHARACTER *)(Current + RTWA(2075, 349, dtype));
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2075, 47, dtype))(Current, uc1x);
				break;
		}
	}

	RTHOOK(17);
	*(EIF_BOOLEAN *)(Current + RTWA(2075, 237, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("not_end_of_input", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2075, 103, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
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

/* last_character */

EIF_UNION Fpel0g2 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = *(EIF_CHARACTER *)(Current + RTWA(2075,349, Dtype(Current)));
	return r;
}

/* last_string */

EIF_UNION Fpemoep (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2075,350, Dtype(Current)));
	return r;
}

/* read_line */

void Fpeny9y (EIF_REFERENCE Current)
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
	RTEAA("read_line", RTUD(2075), Current, 5, 0, 30583);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2075, 4, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2075, 103, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = RTLNSMART(RTWCT(2075, 350, Current));
		ui4_1 = ((EIF_INTEGER_32) 256L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(13, 85, "clear_all", tr1))(tr1);
	}

	RTHOOK(6);
	loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(7);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));

	RTHOOK(8);
	while (!(loc1)) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2075, 287, dtype))(Current);

		RTHOOK(10);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2075, 237, dtype));
		if (tc1) {
			RTHOOK(11);
			loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(13);
			loc3 = *(EIF_CHARACTER *)(Current + RTWA(2075, 349, dtype));

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
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2075, 47, dtype))(Current, uc1x);
						RTHOOK(19);
						loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					} else {
						RTHOOK(20);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", loc2))(loc2, uc1x);
					}

					break;
			}
		}

		RTHOOK(8);
		;
	}

	RTHOOK(21);
	*(EIF_BOOLEAN *)(Current + RTWA(2075, 237, dtype)) = (EIF_BOOLEAN)loc4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("last_string_not_void", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2075, 103, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, 350, dtype));
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
	RTHOOK(23);
	RTLE;
	RTLO(7);
	RTEE;
}

void EIF_Minit2076 (void)
{
	GTCX
	RTOTS (31992,Fpenbcb)
}


#ifdef __cplusplus
}
#endif

