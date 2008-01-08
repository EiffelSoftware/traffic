/*
 * Code for class XM_UNICODE_CHARACTERS_1_1
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnj9wio(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnj7ypt(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnj8lnf(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnj88k1(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1850(void);

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

/* is_space */

EIF_UNION Fnj9wio (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_space", RTUD(1849), Current, 0, 1, 26631);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 32L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 9L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 10L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L)));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_char */

EIF_UNION Fnj7ypt (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_char", RTUD(1849), Current, 0, 1, 26628);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 55295L))) || (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 57344L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 65533L)))) || (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 65536L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 1114111L))));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_name_first */

EIF_UNION Fnj8lnf (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_CHARACTER tc6;
	EIF_CHARACTER tc7;
	EIF_CHARACTER tc8;
	EIF_CHARACTER tc9;
	EIF_CHARACTER tc10;
	EIF_CHARACTER tc11;
	EIF_CHARACTER tc12;
	EIF_CHARACTER tc13;
	EIF_CHARACTER tc14;
	EIF_CHARACTER tc15;
	EIF_CHARACTER tc16;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_name_first", RTUD(1849), Current, 0, 1, 26629);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tc1 = '\01';
	tc2 = '\01';
	tc3 = '\01';
	tc4 = '\01';
	tc5 = '\01';
	tc6 = '\01';
	tc7 = '\01';
	tc8 = '\01';
	tc9 = '\01';
	tc10 = '\01';
	tc11 = '\01';
	tc12 = '\01';
	tc13 = '\01';
	tc14 = '\01';
	tc15 = '\01';
	ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) ':');
	if (!((EIF_BOOLEAN)(arg1 == ti4_1))) {
		tc16 = '\0';
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) 'A');
		if ((EIF_BOOLEAN)(arg1 >= ti4_1)) {
			ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) 'Z');
			tc16 = (EIF_BOOLEAN)(arg1 <= ti4_1);
		}
		tc15 = tc16;
	}
	if (!tc15) {
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) '_');
		tc14 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc14) {
		tc14 = '\0';
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) 'a');
		if ((EIF_BOOLEAN)(arg1 >= ti4_1)) {
			ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) 'z');
			tc14 = (EIF_BOOLEAN)(arg1 <= ti4_1);
		}
		tc13 = tc14;
	}
	if (!tc13) {
		tc12 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 192L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 214L)));
	}
	if (!tc12) {
		tc11 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 216L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 246L)));
	}
	if (!tc11) {
		tc10 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 248L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 767L)));
	}
	if (!tc10) {
		tc9 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 880L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 893L)));
	}
	if (!tc9) {
		tc8 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 895L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 8191L)));
	}
	if (!tc8) {
		tc7 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 8204L));
	}
	if (!tc7) {
		tc6 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 8205L));
	}
	if (!tc6) {
		tc5 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 8304L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 8591L)));
	}
	if (!tc5) {
		tc4 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 11264L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 12271L)));
	}
	if (!tc4) {
		tc3 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 12289L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 55295L)));
	}
	if (!tc3) {
		tc2 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 63744L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 64975L)));
	}
	if (!tc2) {
		tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 65008L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 65533L)));
	}
	if (!tc1) {
		Result = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 65536L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 983039L)));
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

/* is_name_char */

EIF_UNION Fnj88k1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_CHARACTER tc6;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_name_char", RTUD(1849), Current, 0, 1, 26630);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tc1 = '\01';
	tc2 = '\01';
	tc3 = '\01';
	tc4 = '\01';
	tc5 = '\01';
	ui4_1 = arg1;
	tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1849, 39, Dtype(Current)))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	if (!tc6) {
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) '-');
		tc5 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc5) {
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) '.');
		tc4 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tc4) {
		tc4 = '\0';
		ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) '0');
		if ((EIF_BOOLEAN)(arg1 >= ti4_1)) {
			ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER) '9');
			tc4 = (EIF_BOOLEAN)(arg1 <= ti4_1);
		}
		tc3 = tc4;
	}
	if (!tc3) {
		tc2 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 183L));
	}
	if (!tc2) {
		tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 768L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 879L)));
	}
	if (!tc1) {
		Result = (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 8255L)) && (EIF_BOOLEAN)(arg1 <= ((EIF_INTEGER_32) 8256L)));
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

void EIF_Minit1850 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

