/*
 * Code for class XM_EIFFEL_DECLARATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fm9ftb1(EIF_REFERENCE);
extern EIF_UNION Fm9gf9o(EIF_REFERENCE);
extern void Fm9lmrn(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm9g27a(EIF_REFERENCE);
extern EIF_UNION Fm9hq4x(EIF_REFERENCE);
extern void Fm9kzt0(EIF_REFERENCE, EIF_UNION);
extern void Fm9l9o9(EIF_REFERENCE, EIF_UNION);
extern void Fm9kbwe(EIF_REFERENCE, EIF_UNION);
extern void Fp_z1_f(EIF_REFERENCE, int);
extern void EIF_Minit1805(void);

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

/* make */

void Fm9ftb1 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
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
	RTEAA("make", RTUD(1804), Current, 0, 0, 26178);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1804, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1804, 35, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1804, 33, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1804, 36, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1804, 34, dtype))(Current)).value.EIF_BOOLEAN_value);
	*(EIF_BOOLEAN *)(Current + RTWA(1804, 37, dtype)) = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

/* default_version */

RTOID (Fm9gf9o)

EIF_UNION Fm9gf9o (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fm9gf9o,26180,RTMS_EX_H("1.0",3,3223088));
}
/* set_stand_alone */

void Fm9lmrn (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_stand_alone", RTUD(1804), Current, 0, 1, 26175);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1804, 37, Dtype(Current))) = (EIF_BOOLEAN)arg1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* default_encoding */

RTOID (Fm9g27a)

EIF_UNION Fm9g27a (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fm9g27a,26181,RTMS_EX_H("utf-8",5,1953751864));
}
/* default_stand_alone */

EIF_UNION Fm9hq4x (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = (EIF_BOOLEAN)'\01';
	return r;
}
/* set_encoding */

void Fm9kzt0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_encoding", RTUD(1804), Current, 0, 1, 26174);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1804, 36, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* process */

void Fm9l9o9 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
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

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);
	RTLR(5,ur2);
	RTLR(3,ur1);
	RTLR(4,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("process", RTUD(1804), Current, 0, 1, 26176);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1804, 35, dtype));
	ur1 = RTCCL(tr1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1804, 36, dtype));
	ur2 = RTCCL(tr2);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1804, 37, dtype));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1904, 33, "on_xml_declaration", arg1))(arg1, ur1x, ur2x, uc1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_version */

void Fm9kbwe (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_version", RTUD(1804), Current, 0, 1, 26173);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1804, 35, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp_z1_f (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("version_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1804, 35, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("encoding_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1804, 36, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1805 (void)
{
	GTCX
	RTOTS (27463,Fm9gf9o)
	RTOTS (27464,Fm9g27a)
}


#ifdef __cplusplus
}
#endif

