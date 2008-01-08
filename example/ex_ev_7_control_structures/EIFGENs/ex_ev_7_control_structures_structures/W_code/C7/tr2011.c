/*
 * Code for class TRAFFIC_COORDINATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Foljbz4(EIF_REFERENCE, EIF_UNION);
extern void Fok8z_6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folkmvd(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Follxqm(EIF_REFERENCE);
extern EIF_UNION Folk9s_(EIF_REFERENCE);
extern void Folcvmx(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foljzxr(EIF_REFERENCE, EIF_UNION);
extern void Fok43eg(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Foletfs(EIF_REFERENCE, EIF_UNION);
extern void Fok7o4y(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folhd59(EIF_REFERENCE);
extern EIF_UNION Folio1i(EIF_REFERENCE, EIF_UNION);
extern void Folbkro(EIF_REFERENCE, EIF_UNION);
extern void Folb7pa(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folq27l(EIF_REFERENCE);
extern EIF_UNION Fok4ggu(EIF_REFERENCE);
extern void Fok6d9p(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Folrq47(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folsd2u(EIF_REFERENCE, EIF_UNION);
extern void Foldikj(EIF_REFERENCE, EIF_UNION);
extern void Fold5h5(EIF_REFERENCE);
extern void Folf3a0(EIF_REFERENCE, EIF_UNION);
extern void Folgq8n(EIF_REFERENCE);
extern EIF_UNION Folh03w(EIF_REFERENCE);
extern EIF_UNION Folmkn8(EIF_REFERENCE, EIF_UNION);
extern void Folfgde(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fok5rb2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folnvjh(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foloig3(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Folm7lv(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folo5eq(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fok3ti7(EIF_REFERENCE);
extern EIF_UNION Folptcc(EIF_REFERENCE, EIF_UNION);
extern void Fok8b2k(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Folqf9z(EIF_REFERENCE, EIF_UNION);
extern void Fok607b(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fok9myt(EIF_REFERENCE, EIF_UNION);
extern void Fok99wf(EIF_REFERENCE, EIF_UNION);
extern void Folaxt1(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2011(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* infix "-" */

EIF_UNION Foljbz4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"-\"", RTUD(2010), Current, 0, 1, 28599);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	ur8_1 = (EIF_REAL_64)(tr8_1 - tr8_2);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	ur8_2 = (EIF_REAL_64)(tr8_3 - tr8_4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* left_by */

void Fok8z_6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	RTEAA("left_by", RTUD(2010), Current, 0, 1, 28583);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_1 = tr8_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) -= arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("moved_left", EX_POST);
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if ((EIF_BOOLEAN)(tr8_2 == (EIF_REAL_64)(tr8_1 - arg1))) {
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

/* infix "/" */

EIF_UNION Folkmvd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"/\"", RTUD(2010), Current, 0, 1, 28601);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (arg1));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	ur8_2 = (EIF_REAL_64)((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* prefix "-" */

EIF_UNION Follxqm (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
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
	RTEAA("prefix \"-\"", RTUD(2010), Current, 0, 0, 28603);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	ur8_1 = (EIF_REAL_64)-tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	ur8_2 = (EIF_REAL_64)-tr8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_is_negation", EX_POST);
		tc1 = '\0';
		tr8_1 = *(EIF_REAL_64 *)(Result + RTVA(2010, 47, "x", Result));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64)-tr8_2)) {
			tr8_1 = *(EIF_REAL_64 *)(Result + RTVA(2010, 48, "y", Result));
			tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
			tc1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64)-tr8_2);
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
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* prefix "+" */

EIF_UNION Folk9s_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
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
	RTEAA("prefix \"+\"", RTUD(2010), Current, 0, 0, 28602);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	ur8_2 = tr8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_is_same", EX_POST);
		tc1 = '\0';
		tr8_1 = *(EIF_REAL_64 *)(Result + RTVA(2010, 47, "x", Result));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
			tr8_1 = *(EIF_REAL_64 *)(Result + RTVA(2010, 48, "y", Result));
			tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
			tc1 = (EIF_BOOLEAN)(tr8_1 == tr8_2);
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
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* subtract */

void Folcvmx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_CHARACTER tc1;
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
	RTEAA("subtract", RTUD(2010), Current, 0, 1, 28589);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_1 = tr8_2;
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_2 = tr8_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) -= tr8_4;
	RTHOOK(4);
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) -= tr8_4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("moved", EX_POST);
		tc1 = '\0';
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
		if ((EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_1 - tr8_4))) {
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
			tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
			tc1 = (EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_2 - tr8_4));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* infix "*" */

EIF_UNION Foljzxr (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"*\"", RTUD(2010), Current, 0, 1, 28600);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	ur8_1 = (EIF_REAL_64)(tr8_1 * arg1);
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	ur8_2 = (EIF_REAL_64)(tr8_2 * arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* make */

void Fok43eg (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2010), Current, 0, 2, 28577);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)arg1;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* scale */

void Foletfs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
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
	RTEAA("scale", RTUD(2010), Current, 0, 1, 28592);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_1 = tr8_2;
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_2 = tr8_3;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) *= arg1;
	RTHOOK(2);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) *= arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("scaled", EX_POST);
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_1 * arg1)) && (EIF_BOOLEAN)(tr8_4 == (EIF_REAL_64)(tr8_2 * arg1)))) {
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

/* set_x */

void Fok7o4y (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_x", RTUD(2010), Current, 0, 1, 28581);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("x_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
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

/* length */

EIF_UNION Folhd59 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("length", RTUD(2010), Current, 0, 0, 28596);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) (tr8_1), (EIF_REAL_64) (tr8_2)) + (EIF_REAL_64) pow ((EIF_REAL_64) (tr8_3), (EIF_REAL_64) (tr8_4)));
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 2, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_calculated", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) (tr8_1), (EIF_REAL_64) (tr8_2)) + (EIF_REAL_64) pow ((EIF_REAL_64) (tr8_3), (EIF_REAL_64) (tr8_4)));
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 2, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		if ((EIF_BOOLEAN)(Result == tr8_1)) {
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
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* infix "+" */

EIF_UNION Folio1i (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"+\"", RTUD(2010), Current, 0, 1, 28598);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	ur8_1 = (EIF_REAL_64)(tr8_1 + tr8_2);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	ur8_2 = (EIF_REAL_64)(tr8_3 + tr8_4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* move_by */

void Folbkro (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_CHARACTER tc1;
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
	RTEAA("move_by", RTUD(2010), Current, 0, 1, 28587);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_1 = tr8_2;
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_2 = tr8_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) += tr8_4;
	RTHOOK(4);
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) += tr8_4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("moved", EX_POST);
		tc1 = '\0';
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
		if ((EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_1 + tr8_4))) {
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
			tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
			tc1 = (EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_2 + tr8_4));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add */

void Folb7pa (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_CHARACTER tc1;
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
	RTEAA("add", RTUD(2010), Current, 0, 1, 28588);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_1 = tr8_2;
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_2 = tr8_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) += tr8_4;
	RTHOOK(4);
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) += tr8_4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("moved", EX_POST);
		tc1 = '\0';
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
		if ((EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_1 + tr8_4))) {
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
			tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
			tc1 = (EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_2 + tr8_4));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* out */

EIF_UNION Folq27l (EIF_REFERENCE Current)
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
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(4,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("out", RTUD(2010), Current, 0, 0, 28611);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("(x = ",5,2015685920);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr2 = c_outr64(tr8_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(", y = ",6,2118909216);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr2 = c_outr64(tr8_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(")",1,41);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
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

/* zero */

EIF_UNION Fok4ggu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("zero", RTUD(2010), Current, 0, 0, 28576);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	ur8_1 = (EIF_REAL_64) 0.0;
	ur8_2 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* make_moved */

void Fok6d9p (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_moved", RTUD(2010), Current, 0, 2, 28579);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_distance_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr8_2 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 47, "x", arg2));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 + tr8_2);
	RTHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr8_2 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 48, "y", arg2));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 + tr8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("equal_to_moved_other", EX_POST);
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 72, "infix \"+\"", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 27, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* cos */

EIF_UNION Folrq47 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cos", RTUD(2010), Current, 0, 1, 28612);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)) - arg1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
#undef arg1
}

/* sin */

EIF_UNION Folsd2u (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTEAA("sin", RTUD(2010), Current, 1, 1, 28613);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = (EIF_REAL_64)arg1;
	RTHOOK(2);
	tc1 = '\0';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc1 >= tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
		tc1 = (EIF_BOOLEAN)(loc1 <= (EIF_REAL_64)(tr8_1 * tr8_2));
	}
	while (!(tc1)) {

		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(loc1 < tr8_1)) {
			RTHOOK(4);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
			loc1 += (EIF_REAL_64)(tr8_1 * tr8_2);
		} else {
			RTHOOK(5);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
			loc1 -= (EIF_REAL_64)(tr8_1 * tr8_2);
		}

		RTHOOK(2);
		tc1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(loc1 >= tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
			tc1 = (EIF_BOOLEAN)(loc1 <= (EIF_REAL_64)(tr8_1 * tr8_2));
		}
		;
	}


	RTHOOK(6);
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 4L));
	if ((EIF_BOOLEAN)(loc1 <= (EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)))) {
		RTHOOK(7);
		ur8_1 = loc1;
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 44, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	} else {
		RTHOOK(8);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	if ((EIF_BOOLEAN)(loc1 <= (EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)))) {
		RTHOOK(9);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)) - loc1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 23, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	} else {
		RTHOOK(10);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
	if ((EIF_BOOLEAN)(loc1 <= tr8_1)) {
		RTHOOK(11);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)(tr8_1 - loc1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	} else {
		RTHOOK(12);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
	if ((EIF_BOOLEAN)(loc1 <= (EIF_REAL_64)((EIF_REAL_64)((EIF_REAL_64) (((EIF_INTEGER_32) 3L)) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L))) * tr8_1))) {
		RTHOOK(13);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)(loc1 - tr8_1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		Result = (EIF_REAL_64)(EIF_REAL_64)-Result;
	} else {
		RTHOOK(14);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 35, dtype))(Current)).value.EIF_REAL_64_value);
		ur8_1 = (EIF_REAL_64)((EIF_REAL_64)(tr8_1 * tr8_2) - loc1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
		Result = (EIF_REAL_64)(EIF_REAL_64)-Result;
	}}}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
#undef arg1
}

/* rotate */

void Foldikj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTEAA("rotate", RTUD(2010), Current, 3, 1, 28590);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ur8_1 = arg1;
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTHOOK(2);
	ur8_1 = arg1;
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 86, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTHOOK(3);
	loc1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	loc1 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(loc1 * loc3) - (EIF_REAL_64)(tr8_1 * loc2));
	RTHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 * loc2) + (EIF_REAL_64)(tr8_2 * loc3));
	RTHOOK(5);
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* rotate_rectangularly */

void Fold5h5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTEAA("rotate_rectangularly", RTUD(2010), Current, 1, 0, 28591);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	loc1 = (EIF_REAL_64)(EIF_REAL_64)-loc1;
	RTHOOK(2);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)tr8_1;
	RTHOOK(3);
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
}

/* scale_to */

void Folf3a0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	RTLU(SK_REAL64, &loc1);
	RTEAA("scale_to", RTUD(2010), Current, 1, 1, 28594);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("current_not_zero", EX_PRE);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 70, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN)(tr8_1 > tr8_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 70, dtype))(Current)).value.EIF_REAL_64_value);
	loc1 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (loc1));
	RTHOOK(3);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) *= loc1;
	RTHOOK(4);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) *= loc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* normalize */

void Folgq8n (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("normalize", RTUD(2010), Current, 0, 0, 28595);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("current_not_zero", EX_PRE);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 70, dtype))(Current)).value.EIF_REAL_64_value);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN)(tr8_1 > tr8_2), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2010, 70, dtype))(Current)).value.EIF_REAL_64_value);
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 66, dtype))(Current, ur8_1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* length_squared */

EIF_UNION Folh03w (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("length_squared", RTUD(2010), Current, 0, 0, 28597);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	Result = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) (Result), (EIF_REAL_64) (tr8_1)) + (EIF_REAL_64) pow ((EIF_REAL_64) (tr8_2), (EIF_REAL_64) (tr8_3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_calculated", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(Result == (EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) (tr8_1), (EIF_REAL_64) (tr8_2)) + (EIF_REAL_64) pow ((EIF_REAL_64) (tr8_3), (EIF_REAL_64) (tr8_4))))) {
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
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* scalar_product */

EIF_UNION Folmkn8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("scalar_product", RTUD(2010), Current, 0, 1, 28604);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	Result = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(Result * tr8_1) + (EIF_REAL_64)(tr8_2 * tr8_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_calculated", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
		if ((EIF_BOOLEAN)(Result == (EIF_REAL_64)((EIF_REAL_64)(tr8_1 * tr8_2) + (EIF_REAL_64)(tr8_3 * tr8_4)))) {
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
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
#undef arg1
}

/* stretch */

void Folfgde (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("stretch", RTUD(2010), Current, 0, 2, 28593);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_1 = tr8_2;
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_2 = tr8_3;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) *= arg1;
	RTHOOK(2);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) *= arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("stretched", EX_POST);
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr8_3 == (EIF_REAL_64)(tr8_1 * arg1)) && (EIF_BOOLEAN)(tr8_4 == (EIF_REAL_64)(tr8_2 * arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* make_from_other */

void Fok5rb2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REAL_64 tr8_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_from_other", RTUD(2010), Current, 0, 1, 28578);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)tr8_1;
	RTHOOK(3);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("equal_to_other", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 27, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
#undef arg1
}

/* is_parallel_to */

EIF_UNION Folnvjh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(1,arg1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_parallel_to", RTUD(2010), Current, 0, 1, 28606);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_REAL_64)((EIF_REAL_64)(tr8_1 * tr8_2) - (EIF_REAL_64)(tr8_3 * tr8_4)) == (EIF_REAL_64) 0.0);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* straight_line_intersection_point */

EIF_UNION Foloig3 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(5,tr1);
	RTLR(0,arg1);
	RTLR(4,arg2);
	RTLR(1,arg3);
	RTLR(3,Current);
	RTLR(6,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTEAA("straight_line_intersection_point", RTUD(2010), Current, 4, 3, 28607);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("directions_not_parallel", EX_PRE);
		ur1 = RTCCL(arg3);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 80, "is_parallel_to", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 47, "x", arg2));
	loc1 = (EIF_REAL_64)(EIF_REAL_64)(loc1 - tr8_1);
	RTHOOK(3);
	loc2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 48, "y", arg2));
	loc2 = (EIF_REAL_64)(EIF_REAL_64)(loc2 - tr8_1);
	RTHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(arg3 + RTVA(2010, 48, "y", arg3));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr8_3 = *(EIF_REAL_64 *)(arg3 + RTVA(2010, 47, "x", arg3));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	loc4 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 * tr8_2) - (EIF_REAL_64)(tr8_3 * tr8_4));
	RTHOOK(5);
	tr8_1 = *(EIF_REAL_64 *)(arg3 + RTVA(2010, 47, "x", arg3));
	tr8_2 = *(EIF_REAL_64 *)(arg3 + RTVA(2010, 48, "y", arg3));
	loc3 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)((EIF_REAL_64)(tr8_1 * loc2) - (EIF_REAL_64)(tr8_2 * loc1))) /  (EIF_REAL_64) (loc4));
	RTHOOK(6);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	ur8_1 = (EIF_REAL_64)(tr8_1 + (EIF_REAL_64)(tr8_2 * loc3));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	ur8_2 = (EIF_REAL_64)(tr8_3 + (EIF_REAL_64)(tr8_4 * loc3));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(6);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_created", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* rotation_around_zero */

EIF_UNION Folm7lv (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_64_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTEAA("rotation_around_zero", RTUD(2010), Current, 2, 1, 28605);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ur8_1 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 86, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTHOOK(2);
	ur8_1 = arg1;
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTHOOK(3);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64)(tr8_1 * loc1) - (EIF_REAL_64)(tr8_2 * loc2));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	ur8_2 = (EIF_REAL_64)((EIF_REAL_64)(tr8_3 * loc2) + (EIF_REAL_64)(tr8_4 * loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(3);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* rotation */

EIF_UNION Folo5eq (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_64_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTEAA("rotation", RTUD(2010), Current, 6, 2, 28608);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("center_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("center_not_equal_current", EX_PRE);
		tc1 = '\01';
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if (!(EIF_BOOLEAN)(tr8_1 != tr8_2)) {
			tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
			tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
			tc1 = (EIF_BOOLEAN)(tr8_1 != tr8_2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	loc1 = (EIF_REAL_64)(EIF_REAL_64)(loc1 - tr8_1);
	RTHOOK(4);
	loc2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	loc2 = (EIF_REAL_64)(EIF_REAL_64)(loc2 - tr8_1);
	RTHOOK(5);
	ur8_1 = arg2;
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 86, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTHOOK(6);
	ur8_1 = arg2;
	loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 87, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTHOOK(7);
	loc5 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(loc1 * loc3) - (EIF_REAL_64)(loc2 * loc4));
	RTHOOK(8);
	loc6 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(loc1 * loc4) + (EIF_REAL_64)(loc2 * loc3));
	RTHOOK(9);
	tr1 = RTLNSMART(Dftype(Current));
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	ur8_1 = (EIF_REAL_64)(loc5 + tr8_1);
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	ur8_2 = (EIF_REAL_64)(loc6 + tr8_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(9);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("result_set", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* one */

EIF_UNION Fok3ti7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("one", RTUD(2010), Current, 0, 0, 28575);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_REAL_64)(EIF_REAL_64) 1.0;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
}

/* reflection */

EIF_UNION Folptcc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("reflection", RTUD(2010), Current, 0, 1, 28609);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("axis_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 78, "scalar_product", Current))(Current, ur1x)).value.EIF_REAL_64_value);
	tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2010, 71, "length_squared", arg1))(arg1)).value.EIF_REAL_64_value);
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 74, "infix \"*\"", arg1))(arg1, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = tr8_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 74, "infix \"*\"", tr1))(tr1, ur8_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 73, "infix \"-\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* set_y */

void Fok8b2k (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("set_y", RTUD(2010), Current, 0, 1, 28582);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("y_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
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

/* distance */

EIF_UNION Folqf9z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 Result = (EIF_REAL_64) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("distance", RTUD(2010), Current, 0, 1, 28610);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 - tr8_2)), (EIF_REAL_64) (tr8_3)) + (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64)(tr8_4 - tr8_5)), (EIF_REAL_64) (tr8_6)));
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 2, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
#undef arg1
}

/* make_distance */

void Fok607b (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make_distance", RTUD(2010), Current, 0, 2, 28580);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("from_vector_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("to_vector_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 47, "x", arg2));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype)) = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	RTHOOK(4);
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 48, "y", arg2));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype)) = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("equal_to_distance", EX_POST);
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2010, 73, "infix \"-\"", arg2))(arg2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 27, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* right_by */

void Fok9myt (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	RTEAA("right_by", RTUD(2010), Current, 0, 1, 28584);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		tr8_1 = tr8_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("moved_right", EX_POST);
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 47, dtype));
		if ((EIF_BOOLEAN)(tr8_2 == (EIF_REAL_64)(tr8_1 + arg1))) {
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

/* up_by */

void Fok99wf (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	RTEAA("up_by", RTUD(2010), Current, 0, 1, 28585);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_1 = tr8_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) -= arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("moved_up", EX_POST);
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		if ((EIF_BOOLEAN)(tr8_2 == (EIF_REAL_64)(tr8_1 - arg1))) {
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

/* down_by */

void Folaxt1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	RTEAA("down_by", RTUD(2010), Current, 0, 1, 28586);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		tr8_1 = tr8_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype))) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("moved_down", EX_POST);
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(2010, 48, dtype));
		if ((EIF_BOOLEAN)(tr8_2 == (EIF_REAL_64)(tr8_1 + arg1))) {
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

void EIF_Minit2011 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

