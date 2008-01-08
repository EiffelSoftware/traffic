/*
 * Code for class UC_UTF8_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fodjpcf(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fodftqp(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fodggob(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fod13e2(EIF_REFERENCE);
extern EIF_UNION Fodn7ws(EIF_REFERENCE);
extern EIF_UNION Fodmx0j(EIF_REFERENCE);
extern EIF_UNION Fodl92x(EIF_REFERENCE);
extern EIF_UNION Fodc7z7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fodnky5(EIF_REFERENCE);
extern EIF_UNION Fodrgkw(EIF_REFERENCE);
extern EIF_UNION Fodwm1v(EIF_REFERENCE);
extern EIF_UNION Fodp5pn(EIF_REFERENCE);
extern EIF_UNION Fodtedr(EIF_REFERENCE);
extern EIF_UNION Fodpir0(EIF_REFERENCE);
extern EIF_UNION Fodt1bd(EIF_REFERENCE);
extern EIF_UNION Fodvz38(EIF_REFERENCE);
extern EIF_UNION Fodovue(EIF_REFERENCE);
extern EIF_UNION Fod0tju(EIF_REFERENCE);
extern EIF_UNION Fod1ghg(EIF_REFERENCE);
extern EIF_UNION Fodr3ii(EIF_REFERENCE);
extern EIF_UNION Foduo8_(EIF_REFERENCE);
extern EIF_UNION Fod_5l7(EIF_REFERENCE);
extern EIF_UNION Fodqtm9(EIF_REFERENCE);
extern EIF_UNION Fodkz7o(EIF_REFERENCE);
extern EIF_UNION Fodeivg(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fodlm5a(EIF_REFERENCE);
extern EIF_UNION Fodxxx3(EIF_REFERENCE);
extern EIF_UNION Fody7tc(EIF_REFERENCE);
extern EIF_UNION Fodsrf4(EIF_REFERENCE);
extern EIF_UNION Fodvb6m(EIF_REFERENCE);
extern EIF_UNION Fodw9_h(EIF_REFERENCE);
extern EIF_UNION Fodykvq(EIF_REFERENCE);
extern EIF_UNION Fodhrjk(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fodzvqz(EIF_REFERENCE);
extern EIF_UNION Fodieg6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fodi1et(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fodbx3z(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fod_iol(EIF_REFERENCE);
extern EIF_UNION Fode5s2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fodkb91(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fodg3ly(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fodck1l(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fod3eab(EIF_REFERENCE);
extern EIF_UNION Foddvxu(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fod2rcp(EIF_REFERENCE);
extern void EIF_Minit1988(void);

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

/* to_utf8 */

EIF_UNION Fodjpcf (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(2,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(5,Current);
	RTLR(1,loc1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(7,ur2);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("to_utf8", RTUD(1987), Current, 3, 1, 28254);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTUD(2006), loc1);

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2006, 270, "to_utf8", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		loc3 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(6);
		tr1 = RTLN(RTUD(774));
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6);
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(7);
		loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		while (!((EIF_BOOLEAN)(loc2 > loc3))) {
			RTHOOK(9);
			ur1 = RTCCL(Result);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1987, 48, dtype))(Current, ur1x, ui4_1x);
			RTHOOK(10);
			loc2++;
			RTHOOK(8);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(12);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("valid_utf8", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 35, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* encoded_first_value */

EIF_UNION Fodftqp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("encoded_first_value", RTUD(1987), Current, 0, 1, 28248);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 36, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32)ti4_1;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 60, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(5);
		Result %= ((EIF_INTEGER_32) 32L);
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 64, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(7);
		Result %= ((EIF_INTEGER_32) 16L);
	} else {
		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 67, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(9);
		Result %= ((EIF_INTEGER_32) 8L);
	}}}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result < ((EIF_INTEGER_32) 128L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* encoded_next_value */

EIF_UNION Fodggob (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("encoded_next_value", RTUD(1987), Current, 0, 1, 28249);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_next_byte", EX_PRE);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 37, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 % ((EIF_INTEGER_32) 64L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result < ((EIF_INTEGER_32) 64L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* byte_bf */

EIF_UNION Fod13e2 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\277';
	return r;
}
/* code_127 */

EIF_UNION Fodn7ws (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 127L);
	return r;
}
/* code_31 */

EIF_UNION Fodmx0j (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 31L);
	return r;
}
/* code_15 */

EIF_UNION Fodl92x (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 15L);
	return r;
}
/* is_encoded_next_byte */

EIF_UNION Fodc7z7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
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
	RTEAA("is_encoded_next_byte", RTUD(1987), Current, 0, 1, 28244);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 57, dtype))(Current)).value.EIF_CHARACTER_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(Result < arg1) && (EIF_BOOLEAN)(arg1 <= tc1));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* byte_127 */

EIF_UNION Fodnky5 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '';
	return r;
}
/* byte_194 */

EIF_UNION Fodrgkw (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\302';
	return r;
}
/* byte_244 */

EIF_UNION Fodwm1v (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\364';
	return r;
}
/* byte_191 */

EIF_UNION Fodp5pn (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\277';
	return r;
}
/* byte_224 */

EIF_UNION Fodtedr (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\340';
	return r;
}
/* byte_159 */

EIF_UNION Fodpir0 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\237';
	return r;
}
/* byte_237 */

EIF_UNION Fodt1bd (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\355';
	return r;
}
/* byte_240 */

EIF_UNION Fodvz38 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\360';
	return r;
}
/* byte_143 */

EIF_UNION Fodovue (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\217';
	return r;
}
/* byte_ef */

EIF_UNION Fod0tju (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\357';
	return r;
}
/* byte_bb */

EIF_UNION Fod1ghg (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\273';
	return r;
}
/* byte_223 */

EIF_UNION Fodr3ii (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\337';
	return r;
}
/* byte_239 */

EIF_UNION Foduo8_ (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\357';
	return r;
}
/* byte_255 */

EIF_UNION Fod_5l7 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\377';
	return r;
}
/* code_191 */

EIF_UNION Fodqtm9 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 191L);
	return r;
}
/* code_3 */

EIF_UNION Fodkz7o (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	return r;
}
/* is_endian_detection_character */

EIF_UNION Fodeivg (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_CHARACTER_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_CHARACTER_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU(SK_CHAR,&arg2);
	RTLU(SK_CHAR,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("is_endian_detection_character", RTUD(1987), Current, 0, 3, 28246);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	uc1 = arg1;
	uc2 = arg2;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1987, 40, dtype))(Current, uc1x, uc2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 77, dtype))(Current)).value.EIF_CHARACTER_value);
		Result = (EIF_BOOLEAN)(arg3 == tc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_start", EX_POST);
		tc1 = '\01';
		if (Result) {
			uc1 = arg1;
			uc2 = arg2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1987, 40, dtype))(Current, uc1x, uc2x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(3);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* code_7 */

EIF_UNION Fodlm5a (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	return r;
}
/* code_247 */

EIF_UNION Fodxxx3 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 247L);
	return r;
}
/* code_251 */

EIF_UNION Fody7tc (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 251L);
	return r;
}
/* code_223 */

EIF_UNION Fodsrf4 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 223L);
	return r;
}
/* code_239 */

EIF_UNION Fodvb6m (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 239L);
	return r;
}
/* byte_247 */

EIF_UNION Fodw9_h (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\367';
	return r;
}
/* byte_251 */

EIF_UNION Fodykvq (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\373';
	return r;
}
/* substring_byte_count */

EIF_UNION Fodhrjk (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc7 = (EIF_CHARACTER) 0;
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
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(7,loc1);
	RTLR(6,loc2);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_CHAR, &loc7);
	RTEAA("substring_byte_count", RTUD(1987), Current, 7, 3, 28251);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		RTTE((EIF_BOOLEAN)(arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 <= (EIF_INTEGER_32)(arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg2 <= arg3)) {

		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 78, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur2 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(7);
			if ((EIF_BOOLEAN)((EIF_INTEGER_32)(arg3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				loc6 = (EIF_INTEGER_32)arg3;
			} else {
				RTHOOK(9);
				loc6 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg3 - ((EIF_INTEGER_32) 1L));
			}


			RTHOOK(10);
			loc5 = (EIF_INTEGER_32)arg2;
			RTHOOK(11);
			while (!((EIF_BOOLEAN)(loc5 > loc6))) {
				RTHOOK(12);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				loc7 = (EIF_CHARACTER)tc1;

				RTHOOK(13);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
				if ((EIF_BOOLEAN)(loc7 <= tc1)) {
					RTHOOK(14);
					Result++;
				} else {
					RTHOOK(15);
					uc1 = loc7;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 46, dtype))(Current, uc1x)).value.EIF_INTEGER_32_value);
					Result += ti4_1;
				}

				RTHOOK(16);
				ui4_1 = (EIF_INTEGER_32)(loc5 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				loc7 = (EIF_CHARACTER)tc1;

				RTHOOK(17);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
				if ((EIF_BOOLEAN)(loc7 <= tc1)) {
					RTHOOK(18);
					Result++;
				} else {
					RTHOOK(19);
					uc1 = loc7;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 46, dtype))(Current, uc1x)).value.EIF_INTEGER_32_value);
					Result += ti4_1;
				}

				RTHOOK(20);
				loc5 += ((EIF_INTEGER_32) 2L);
				RTHOOK(11);
				;
			}


			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc6 < arg3)) {
				RTHOOK(22);
				ui4_1 = arg3;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				uc1 = tc1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 46, dtype))(Current, uc1x)).value.EIF_INTEGER_32_value);
				Result += ti4_1;
			}

		} else {
			RTHOOK(23);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(23);
			ur1 = RTCCL(arg1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 79, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur2 = RTCCL(tr2);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(24);
			loc2 = RTCCL(arg1);
			loc2 = RTRV(RTUD(2006), loc2);
			if (RTAL & CK_CHECK) {
				RTHOOK(25);
				RTCT("is_uc_string", EX_CHECK);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}

			RTHOOK(26);
			tc1 = '\0';
			if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2006, 220, "count", loc2));
				tc1 = (EIF_BOOLEAN)(arg3 == ti4_1);
			}
			if (tc1) {
				RTHOOK(27);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2006, 221, "byte_count", loc2));
				Result = (EIF_INTEGER_32)ti4_1;
			} else {
				RTHOOK(28);
				ui4_1 = arg2;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2006, 284, "byte_index", loc2))(loc2, ui4_1x)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(29);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2006, 220, "count", loc2));
				if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
					RTHOOK(30);
					ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2006, 221, "byte_count", loc2));
					Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - loc3) + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(31);
					ui4_1 = loc3;
					ui4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(arg3 - arg2) + ((EIF_INTEGER_32) 1L));
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2006, 283, "shifted_byte_index", loc2))(loc2, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
					loc4 = (EIF_INTEGER_32)ti4_1;
					RTHOOK(32);
					Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 - loc3);
				}

			}

		} else {
			RTHOOK(33);
			loc1 = RTCCL(arg1);
			loc1 = RTRV(RTUD(2007), loc1);

			RTHOOK(34);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {

				RTHOOK(35);
				tc1 = '\0';
				if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2007, 34, "count", loc1));
					tc1 = (EIF_BOOLEAN)(arg3 == ti4_1);
				}
				if (tc1) {
					RTHOOK(36);
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2007, 178, "byte_count", loc1));
					Result = (EIF_INTEGER_32)ti4_1;
				} else {
					RTHOOK(37);
					ui4_1 = arg2;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2007, 28, "byte_index", loc1))(loc1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc3 = (EIF_INTEGER_32)ti4_1;

					RTHOOK(38);
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2007, 34, "count", loc1));
					if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
						RTHOOK(39);
						ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2007, 178, "byte_count", loc1));
						Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(ti4_1 - loc3) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(40);
						ui4_1 = loc3;
						ui4_2 = (EIF_INTEGER_32)((EIF_INTEGER_32)(arg3 - arg2) + ((EIF_INTEGER_32) 1L));
						ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2007, 190, "shifted_byte_index", loc1))(loc1, ui4_1x, ui4_2x)).value.EIF_INTEGER_32_value);
						loc4 = (EIF_INTEGER_32)ti4_1;
						RTHOOK(41);
						Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 - loc3);
					}

				}

			} else {

				RTHOOK(42);
				loc5 = (EIF_INTEGER_32)arg2;
				RTHOOK(43);
				while (!((EIF_BOOLEAN)(loc5 > arg3))) {
					RTHOOK(44);
					ui4_1 = loc5;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 10, "item_code", arg1))(arg1, ui4_1x)).value.EIF_INTEGER_32_value);
					ui4_1 = ti4_1;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 45, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
					Result += ti4_1;
					RTHOOK(45);
					loc5++;
					RTHOOK(43);
					;
				}

			}

		}}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(46);
		RTCT("substring_byte_count_positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(47);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* byte_253 */

EIF_UNION Fodzvqz (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = (EIF_CHARACTER)(EIF_CHARACTER) '\375';
	return r;
}
/* code_byte_count */

EIF_UNION Fodieg6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("code_byte_count", RTUD(1987), Current, 0, 1, 28252);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 154, "valid_non_surrogate_code", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 128L))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 2048L))) {
		RTHOOK(5);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(6);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 65536L))) {
		RTHOOK(7);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(8);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	}}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("code_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("code_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 4L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* character_byte_count */

EIF_UNION Fodi1et (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("character_byte_count", RTUD(1987), Current, 1, 1, 28253);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 74, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(5);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		loc1 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 2048L))) {
			RTHOOK(7);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 65536L))) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
		} else {
			RTHOOK(10);
			Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
		}}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("character_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("character_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 4L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* valid_utf8 */

EIF_UNION Fodbx3z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc6 = (EIF_CHARACTER) 0;
	EIF_CHARACTER loc7 = (EIF_CHARACTER) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_CHAR, &loc6);
	RTLU(SK_CHAR, &loc7);
	RTEAA("valid_utf8", RTUD(1987), Current, 7, 1, 28242);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	loc2 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(5);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {
		RTHOOK(7);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		loc7 = (EIF_CHARACTER)tc1;

		RTHOOK(8);
		uc1 = loc7;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 36, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(9);
			uc1 = loc7;
			loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 43, dtype))(Current, uc1x)).value.EIF_INTEGER_32_value);

			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(11);
				loc1++;
			} else {
				RTHOOK(12);
				loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 + loc4) - ((EIF_INTEGER_32) 1L));

				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc3 > loc2)) {
					RTHOOK(14);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					RTHOOK(15);
					loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(16);
					uc1 = loc7;
					loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 41, dtype))(Current, uc1x)).value.EIF_INTEGER_32_value);
					RTHOOK(17);
					loc1++;
					RTHOOK(18);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
					loc6 = (EIF_CHARACTER)tc1;

					RTHOOK(19);
					uc1 = loc6;
					uc2 = loc7;
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1987, 38, dtype))(Current, uc1x, uc2x)).value.EIF_BOOLEAN_value);
					if ((EIF_BOOLEAN) !tc1) {
						RTHOOK(20);
						Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
						RTHOOK(21);
						loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(22);
						uc1 = loc6;
						ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 42, dtype))(Current, uc1x)).value.EIF_INTEGER_32_value);
						loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc5 * ((EIF_INTEGER_32) 64L)) + ti4_1);

						RTHOOK(23);
						switch (loc4) {
							case 2L:

								RTHOOK(24);
								ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 54, dtype))(Current)).value.EIF_INTEGER_32_value);
								if ((EIF_BOOLEAN)(loc5 <= ti4_1)) {
									RTHOOK(25);
									Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
								}

								break;
							case 3L:

								RTHOOK(26);
								ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 52, dtype))(Current)).value.EIF_INTEGER_32_value);
								if ((EIF_BOOLEAN)(loc5 <= ti4_1)) {
									RTHOOK(27);
									Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
								}

								break;
							case 4L:

								RTHOOK(28);
								ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 51, dtype))(Current)).value.EIF_INTEGER_32_value);
								if ((EIF_BOOLEAN)(loc5 <= ti4_1)) {
									RTHOOK(29);
									Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
								}

								break;
							default:
								RTEC(EN_WHEN);
						}

						RTHOOK(30);
						if (Result) {

							RTHOOK(31);
							loc1++;
							RTHOOK(32);
							while (!((EIF_BOOLEAN)(loc1 > loc3))) {

								RTHOOK(33);
								ui4_1 = loc1;
								tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
								uc1 = tc1;
								tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 37, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
								if (tc1) {
									RTHOOK(34);
									loc1++;
								} else {
									RTHOOK(35);
									Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
									RTHOOK(36);
									loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
								}

								RTHOOK(32);
								;
							}

						}

					}

				}

			}

		} else {
			RTHOOK(37);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
			RTHOOK(38);
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
		}

		RTHOOK(6);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* code_253 */

EIF_UNION Fod_iol (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 253L);
	return r;
}
/* is_endian_detection_character_start */

EIF_UNION Fode5s2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_CHARACTER_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU(SK_CHAR,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("is_endian_detection_character_start", RTUD(1987), Current, 0, 2, 28247);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 75, dtype))(Current)).value.EIF_CHARACTER_value);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 76, dtype))(Current)).value.EIF_CHARACTER_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 == Result) && (EIF_BOOLEAN)(arg2 == tc1));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* append_code_to_utf8 */

void Fodkb91 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_CHARACTER loc1 = (EIF_CHARACTER) 0;
	EIF_CHARACTER loc2 = (EIF_CHARACTER) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR, &loc1);
	RTLU(SK_CHAR, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("append_code_to_utf8", RTUD(1987), Current, 4, 2, 28255);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 18, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 35, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ui4_1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2120, 154, "valid_non_surrogate_code", tr1))(tr1, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(5);
	ui4_1 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 45, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	switch (ti4_1) {
		case 1L:
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(6);
			ui4_1 = arg2;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			break;
		case 2L:
			RTHOOK(7);
			loc4 = (EIF_INTEGER_32)arg2;
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc1 = (EIF_CHARACTER)tc1;
			RTHOOK(9);
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(10);
			ui4_1 = (EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 192L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(11);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			break;
		case 3L:
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32)arg2;
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(13);
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc2 = (EIF_CHARACTER)tc1;
			RTHOOK(14);
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(15);
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc1 = (EIF_CHARACTER)tc1;
			RTHOOK(16);
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			ui4_1 = (EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 224L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(18);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(19);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			break;
		case 4L:
			RTHOOK(20);
			loc4 = (EIF_INTEGER_32)arg2;
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(21);
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc3 = (EIF_CHARACTER)tc1;
			RTHOOK(22);
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(23);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(23);
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc2 = (EIF_CHARACTER)tc1;
			RTHOOK(24);
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(25);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(25);
			ui4_1 = (EIF_INTEGER_32)((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			loc1 = (EIF_CHARACTER)tc1;
			RTHOOK(26);
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(27);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(27);
			ui4_1 = (EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 240L));
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(28);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(29);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			RTHOOK(30);
			uc1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", arg1))(arg1, uc1x);
			break;
		default:
			RTEC(EN_WHEN);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("a_utf8_valid", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 35, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg2
#undef arg1
}

/* encoded_byte_count */

EIF_UNION Fodg3ly (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("encoded_byte_count", RTUD(1987), Current, 0, 1, 28250);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 36, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 60, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(5);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 64, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg1 <= tc1)) {
		RTHOOK(7);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(8);
		Result = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	}}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("encoded_byte_code_large_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("encoded_byte_code_small_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result <= ((EIF_INTEGER_32) 4L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* is_encoded_first_byte */

EIF_UNION Fodck1l (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
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
	RTEAA("is_encoded_first_byte", RTUD(1987), Current, 0, 1, 28243);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 59, dtype))(Current)).value.EIF_CHARACTER_value);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 67, dtype))(Current)).value.EIF_CHARACTER_value);
	Result = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(arg1 <= Result) || (EIF_BOOLEAN)((EIF_BOOLEAN)(tc1 <= arg1) && (EIF_BOOLEAN)(arg1 <= tc2))));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* dummy_uc_string */

RTOID (Fod3eab)

EIF_UNION Fod3eab (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fod3eab);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("dummy_uc_string", RTUD(1987), Current, 0, 0, 28241);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2006));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2006, 195, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dummy_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* is_encoded_second_byte */

EIF_UNION Foddvxu (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_CHARACTER_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR,&arg1);
	RTLU(SK_CHAR,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("is_encoded_second_byte", RTUD(1987), Current, 0, 2, 28245);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_first_byte", EX_PRE);
		uc1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1987, 36, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 62, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg2 == tc1)) {
		RTHOOK(3);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 56, dtype))(Current)).value.EIF_CHARACTER_value);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 57, dtype))(Current)).value.EIF_CHARACTER_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(Result < arg1) && (EIF_BOOLEAN)(arg1 <= tc1));
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 63, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg2 == tc1)) {
		RTHOOK(5);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 56, dtype))(Current)).value.EIF_CHARACTER_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(Result < arg1) && (EIF_BOOLEAN)(arg1 <= tc1));
	} else {
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 66, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg2 == tc1)) {
		RTHOOK(7);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 55, dtype))(Current)).value.EIF_CHARACTER_value);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 57, dtype))(Current)).value.EIF_CHARACTER_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(Result < arg1) && (EIF_BOOLEAN)(arg1 <= tc1));
	} else {
		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 67, dtype))(Current)).value.EIF_CHARACTER_value);
	if ((EIF_BOOLEAN)(arg2 == tc1)) {
		RTHOOK(9);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 55, dtype))(Current)).value.EIF_CHARACTER_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(Result < arg1) && (EIF_BOOLEAN)(arg1 <= tc1));
	} else {
		RTHOOK(10);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 53, dtype))(Current)).value.EIF_CHARACTER_value);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1987, 57, dtype))(Current)).value.EIF_CHARACTER_value);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(Result < arg1) && (EIF_BOOLEAN)(arg1 <= tc1));
	}}}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* dummy_string */

RTOID (Fod2rcp)

EIF_UNION Fod2rcp (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fod2rcp,28241,RTMS_EX_H("",0,0));
}
void EIF_Minit1988 (void)
{
	GTCX
	RTOTS (29844,Fod2rcp)
	RTOTS (29845,Fod3eab)
}


#ifdef __cplusplus
}
#endif

