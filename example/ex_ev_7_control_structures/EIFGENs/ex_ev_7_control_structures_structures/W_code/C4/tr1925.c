/*
 * Code for class TRAFFIC_MAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnwxl24(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnwwa7w(EIF_REFERENCE);
extern void Fnwfhwq(EIF_REFERENCE, EIF_UNION);
extern void Fnwf4uc(EIF_REFERENCE);
extern void Fnwh2m7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnwvn99(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnwx80r(EIF_REFERENCE);
extern void Fnwwy5i(EIF_REFERENCE);
extern EIF_UNION Fnwywzd(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fnwgsrz(EIF_REFERENCE, EIF_UNION);
extern void Fnwjdig(EIF_REFERENCE, EIF_UNION);
extern void Fnwiqku(EIF_REFERENCE, EIF_UNION);
extern void Fnwj0f2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fnwhfpl(EIF_REFERENCE, EIF_UNION);
extern void Fp0g592(EIF_REFERENCE, int);
extern void EIF_Minit1925(void);

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

/* place_position */

EIF_UNION Fnwxl24 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("place_position", RTUD(1924), Current, 1, 1, 27242);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_exmpa", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_name_in_places", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 40, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(4);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 44, "start", tr1))(tr1);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(6);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 40, "name", tr2));
	RTNHOOK(6);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		loc1++;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 43, "forth", tr1))(tr1);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 40, "name", tr2));
		RTNHOOK(6);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(9);
	Result = (EIF_INTEGER_32)loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* out */

EIF_UNION Fnwwa7w (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(1,Current);
	RTLR(5,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("out", RTUD(1924), Current, 0, 0, 27240);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("Traffic map\012named: ",19,429735200);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1924, 125, dtype));
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H("\012description: ",14,1738581024);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1924, 143, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H("\012\012places:\012",10,1704211466);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 11, "out", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
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

/* make */

void Fnwfhwq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("make", RTUD(1924), Current, 1, 1, 27245);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 100L);
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 125, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(1924, 124, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1926, 147, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 124, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(1924, 128, Current));
	ui4_1 = (EIF_INTEGER_32)(loc1 * loc1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2270, 33, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(1924, 130, Current));
	ui4_1 = loc1;
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2270, 33, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTLNSMART(RTWCT(1924, 129, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2144, 78, Dtype(tr1)))(tr1);
	RTNHOOK(8);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 129, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = RTLNSMART(RTWCT(1924, 131, Current));
	ui4_1 = loc1;
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2272, 33, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	RTNHOOK(9);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 131, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTLNSMART(RTWCT(1924, 135, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(10);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 135, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(11);
	tr1 = RTLNSMART(RTWCT(1924, 136, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(11);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 136, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(12);
	tr1 = RTLNSMART(RTWCT(1924, 137, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(12);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 137, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(13);
	tr1 = RTLNSMART(RTWCT(1924, 134, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(13);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 134, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(14);
	tr1 = RTLNSMART(RTWCT(1924, 132, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(14);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 132, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(15);
	tr1 = RTLNSMART(RTWCT(1924, 133, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(15);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 133, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(16);
	tr1 = RTLNSMART(RTWCT(1924, 138, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2271, 33, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(16);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 138, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 125, dtype));
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1924, 61, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("places_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("lines_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("line_sections_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 129, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* display */

void Fnwf4uc (EIF_REFERENCE Current)
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
	RTEAA("display", RTUD(1924), Current, 0, 0, 27246);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* set_radius */

void Fnwh2m7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_radius", RTUD(1924), Current, 0, 1, 27249);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_radius_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(1924, 123, dtype)) = (EIF_REAL_64)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("radius_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1924, 123, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
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
#undef arg1
}

/* line_sections_of_stop */

EIF_UNION Fnwvn99 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(2,arg1);
	RTLR(5,arg2);
	RTLR(9,loc2);
	RTLR(0,Current);
	RTLR(7,tr3);
	RTLR(8,loc1);
	RTLR(6,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("line_sections_of_stop", RTUD(1924), Current, 2, 2, 27239);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCS(EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 40, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			ur1 = RTCCL(arg1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 36, "item", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(1);
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static int16 typarr [] = {1924,1461,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 1461, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(160, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 124, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	ur1 = RTCCL(arg1);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2270, 36, "item", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	ur1 = RTCCL(arg2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", tr3))(tr3, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1926, 49, "search", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 124, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1926, 115, "incident_edges", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(RTUD(1974), loc2);

		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(9);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", Result))(Result, ur1x);
		}

		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* description_out */

EIF_UNION Fnwx80r (EIF_REFERENCE Current)
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
	RTEAA("description_out", RTUD(1924), Current, 0, 0, 27243);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 126, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(2);
		Result = RTMS_EX_H("",0,0);
	} else {
		RTHOOK(3);
		Result = *(EIF_REFERENCE *)(Current + RTWA(1924, 126, dtype));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* recalculate_weights_and_connect_stops */

void Fnwwy5i (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_CHARACTER tc1;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(1,Current);
	RTLR(0,loc1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_INT32, &loc5);
	RTEAA("recalculate_weights_and_connect_stops", RTUD(1924), Current, 5, 0, 27241);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 124, Dtype(Current)));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1926, 129, "edges", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 69, "length", tr1))(tr1)).value.EIF_REAL_64_value);
		loc4 = (EIF_REAL_64)tr8_1;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr4_1 = (EIF_REAL_32) (loc4);
		ur4_1 = tr4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1958, 1, "set_weight", tr1))(tr1, ur4_1x);
		RTHOOK(6);
		loc2 += loc4;
		RTHOOK(7);
		loc5++;
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc5 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		tr8_1 = (EIF_REAL_64) (loc5);
		loc3 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (loc2) /  (EIF_REAL_64) (tr8_1));
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(7);
	RTEE;
}

/* position_from_connections */

EIF_UNION Fnwywzd (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(5,Current);
	RTLR(4,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("position_from_connections", RTUD(1924), Current, 0, 2, 27244);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 0, "first", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1958, 71, "start_node", tr1));
	if (RTCEQ(tr2, arg2)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 0, "first", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1958, 68, "polypoints", tr1));
		RTNHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 96, "first", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 0, "first", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(3);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1958, 68, "polypoints", tr1));
		RTNHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 97, "last", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* place_at_position */

EIF_UNION Fnwgsrz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTEAA("place_at_position", RTUD(1924), Current, 1, 1, 27247);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_point_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_REAL_64)(EIF_REAL_64) 2.0;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 44, "start", tr1))(tr1);
	RTHOOK(4);
	tc1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc1 = (EIF_BOOLEAN)(Result != NULL);
	}
	while (!(tc1)) {

		RTHOOK(5);
		tc2 = '\0';
		tc3 = '\0';
		tc4 = '\0';
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(1973, 48, "width", tr2));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(tr8_1 > (EIF_REAL_64)((EIF_REAL_64)(tr8_2 - (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))) - loc1))) {
			tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(1973, 48, "width", tr2));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tc4 = (EIF_BOOLEAN)(tr8_1 < (EIF_REAL_64)((EIF_REAL_64)(tr8_2 + (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))) + loc1));
		}
		if (tc4) {
			tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(1973, 49, "breadth", tr2));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tc3 = (EIF_BOOLEAN)(tr8_1 > (EIF_REAL_64)((EIF_REAL_64)(tr8_2 - (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))) - loc1));
		}
		if (tc3) {
			tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(1973, 49, "breadth", tr2));
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tc2 = (EIF_BOOLEAN)(tr8_1 < (EIF_REAL_64)((EIF_REAL_64)(tr8_2 + (EIF_REAL_64)((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (tr8_4))) + loc1));
		}
		if (tc2) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr2);
		}

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 43, "forth", tr1))(tr1);
		RTHOOK(4);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc1 = (EIF_BOOLEAN)(Result != NULL);
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* set_scale_factor */

void Fnwjdig (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_scale_factor", RTUD(1924), Current, 0, 1, 27251);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_scale_factor_valid", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN)(arg1 > tr8_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(1924, 127, dtype)) = (EIF_REAL_64)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("scale_factor_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1924, 127, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
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
#undef arg1
}

/* set_description */

void Fnwiqku (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_description", RTUD(1924), Current, 0, 1, 27250);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 126, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("description_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 126, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_tram_per_line_with_schedule */

void Fnwj0f2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(10);
	RTLR(9,loc1);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(5,Current);
	RTLR(7,tr3);
	RTLR(8,ur2);
	RTLR(6,loc3);
	RTLR(4,ur1);
	RTLR(2,loc5);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("add_tram_per_line_with_schedule", RTUD(1924), Current, 5, 2, 27252);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_map_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("number_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(740));
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64)((EIF_REAL_64) (((EIF_INTEGER_32) 60L)) /  (EIF_REAL_64) (arg2));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr1))(tr1)).value.EIF_INTEGER_32_value);
	loc4 = (EIF_INTEGER_32)ti4_1;
	RTHOOK(4);
	tr1 = RTLN(RTUD(2041));
	tr2 = RTMS_EX_H("timetable_tram.xml",18,2135812204);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2041, 94, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4);
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2041, 95, "load_schedule", loc5))(loc5);

	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 44, "start", tr1))(tr1);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {

		RTHOOK(8);
		tc2 = '\01';
		tc3 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 66, "type", tr2));
		RTNHOOK(8);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1894, 13, "name", tr1));
		RTNHOOK(8);
		tr1 = RTMS_EX_H("tram",4,1953653101);
		ur1 = tr1;
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
		if (!tc4) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 66, "type", tr2));
			RTNHOOK(8);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1894, 13, "name", tr1));
			RTNHOOK(8);
			tr1 = RTMS_EX_H("rail",4,1918986604);
			ur1 = tr1;
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = tc4;
		}
		if (!tc3) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(8);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 66, "type", tr2));
			RTNHOOK(8);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1894, 13, "name", tr1));
			RTNHOOK(8);
			tr1 = RTMS_EX_H("bus",3,6452595);
			ur1 = tr1;
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(9);
			tr1 = RTLN(RTUD(1929));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr3);
			ur2 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1929, 150, Dtype(tr1)))(tr1, ur1x, ur2x);
			RTNHOOK(9);
			RTCI2(tr1);
			loc3 = (EIF_REFERENCE)RTCCL(tr1);

			RTHOOK(10);
			loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
			RTHOOK(11);
			while (!((EIF_BOOLEAN)(loc2 > arg2))) {
				RTHOOK(12);
				tr1 = RTLN(RTUD(1957));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur1 = RTCCL(tr3);
				ur2 = RTCCL(loc3);
				ui4_1 = (EIF_INTEGER_32)(loc4 * (EIF_INTEGER_32)(loc2 - ((EIF_INTEGER_32) 1L)));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1957, 93, Dtype(tr1)))(tr1, ur1x, ur2x, ui4_1x);
				RTNHOOK(12);
				RTCI2(tr1);
				loc1 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(13);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 136, dtype));
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2271, 46, "put_last", tr1))(tr1, ur1x);
				RTHOOK(14);
				loc2++;
				RTHOOK(11);
				;
			}

		}

		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 43, "forth", tr1))(tr1);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 130, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg2
#undef arg1
}

/* set_center */

void Fnwhfpl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_center", RTUD(1924), Current, 0, 1, 27248);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_center_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1924, 122, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("center_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 122, dtype));
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

void Fp0g592 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("name_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 125, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("name_not_empty", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 125, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("places_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1924, 128, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1925 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

