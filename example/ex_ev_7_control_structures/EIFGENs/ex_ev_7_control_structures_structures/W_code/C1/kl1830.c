/*
 * Code for class KL_CHARACTER_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnen74l(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fneov17(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fneqtv2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnepi_u(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnenk6z(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnep5yg(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1830(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* is_hex_digit */

EIF_UNION Fnen74l (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_hex_digit", RTUD(1829), Current, 0, 1, 26385);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= (EIF_CHARACTER) '0') && (EIF_BOOLEAN)(arg1 <= (EIF_CHARACTER) '9')) || (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= (EIF_CHARACTER) 'a') && (EIF_BOOLEAN)(arg1 <= (EIF_CHARACTER) 'f'))) || (EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= (EIF_CHARACTER) 'A') && (EIF_BOOLEAN)(arg1 <= (EIF_CHARACTER) 'F')));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* next */

EIF_UNION Fneov17 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER Result = (EIF_CHARACTER) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_CHAR, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("next", RTUD(1829), Current, 0, 1, 26386);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("c_small_enough", EX_PRE);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1829, 30, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1928, 91, "maximum_character_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 < ti4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(761));
	*(EIF_CHARACTER *)tr1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(41, 8, "next", tr1))(tr1)).value.EIF_CHARACTER_value);
	Result = (EIF_CHARACTER)tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (Result);
		ti4_2 = (EIF_INTEGER_32) (arg1);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)))) {
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
	{ EIF_UNION r; r.type = SK_CHAR; r.value.EIF_CHARACTER_value = Result; return r; }
#undef arg1
}

/* as_upper */

EIF_UNION Fneqtv2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_CHARACTER Result = (EIF_CHARACTER) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_CHAR, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("as_upper", RTUD(1829), Current, 0, 1, 26389);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tc1 = (EIF_CHARACTER) toupper(arg1);
	Result = (EIF_CHARACTER)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_CHAR; r.value.EIF_CHARACTER_value = Result; return r; }
#undef arg1
}

/* previous */

EIF_UNION Fnepi_u (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER Result = (EIF_CHARACTER) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_CHAR, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("previous", RTUD(1829), Current, 0, 1, 26387);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("c_small_enough", EX_PRE);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1829, 30, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1928, 90, "minimum_character_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 > ti4_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLN(RTUD(761));
	*(EIF_CHARACTER *)tr1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(41, 9, "previous", tr1))(tr1)).value.EIF_CHARACTER_value);
	Result = (EIF_CHARACTER)tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (Result);
		ti4_2 = (EIF_INTEGER_32) (arg1);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 - ((EIF_INTEGER_32) 1L)))) {
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
	{ EIF_UNION r; r.type = SK_CHAR; r.value.EIF_CHARACTER_value = Result; return r; }
#undef arg1
}

/* is_digit */

EIF_UNION Fnenk6z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_digit", RTUD(1829), Current, 0, 1, 26384);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 >= (EIF_CHARACTER) '0') && (EIF_BOOLEAN)(arg1 <= (EIF_CHARACTER) '9'));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* as_lower */

EIF_UNION Fnep5yg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_CHARACTER Result = (EIF_CHARACTER) 0;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_CHAR, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("as_lower", RTUD(1829), Current, 0, 1, 26388);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tc1 = (EIF_CHARACTER) tolower(arg1);
	Result = (EIF_CHARACTER)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_CHAR; r.value.EIF_CHARACTER_value = Result; return r; }
#undef arg1
}

void EIF_Minit1830 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

