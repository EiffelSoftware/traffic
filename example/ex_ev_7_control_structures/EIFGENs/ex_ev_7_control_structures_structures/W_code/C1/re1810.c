/*
 * Code for class REAL_RECTANGLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fm969ij(EIF_REFERENCE);
extern EIF_UNION Fnafoom(EIF_REFERENCE);
extern void Fm91f2y(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fm98kds(EIF_REFERENCE);
extern void Fm90s5b(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fm99u80(EIF_REFERENCE);
extern void Fnadqvr(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm987be(EIF_REFERENCE);
extern void Fnac2x4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm93dwt(EIF_REFERENCE);
extern void Fnaah6n(EIF_REFERENCE, EIF_UNION);
extern void Fnaa439(EIF_REFERENCE, EIF_UNION);
extern void Fnabs1w(EIF_REFERENCE, EIF_UNION);
extern void Fnacf_i(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm94or1(EIF_REFERENCE);
extern EIF_UNION Fm95bpo(EIF_REFERENCE);
extern EIF_UNION Fm95zna(EIF_REFERENCE);
extern EIF_UNION Fm96mkx(EIF_REFERENCE);
extern EIF_UNION Fm97xf5(EIF_REFERENCE);
extern EIF_UNION Fnae0q_(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnaedtd(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fm930uf(EIF_REFERENCE);
extern void Fp_0cvt(EIF_REFERENCE, int);
extern void EIF_Minit1810(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
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

/* center */

EIF_UNION Fm969ij (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("center", RTUD(1809), Current, 0, 0, 26204);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 2L));
	ur4_1 = (EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_1 + tr4_2)) /  (EIF_REAL_64) (tr4_3));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_4 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_5 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	tr4_6 = (EIF_REAL_32) (((EIF_INTEGER_32) 2L));
	ur4_2 = (EIF_REAL_32)((EIF_REAL_64) ((EIF_REAL_32)(tr4_4 + tr4_5)) /  (EIF_REAL_64) (tr4_6));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* out */

EIF_UNION Fnafoom (EIF_REFERENCE Current)
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
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(2,tr2);
	RTLR(4,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("out", RTUD(1809), Current, 0, 0, 26217);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("(X1: ",5,1479928352);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	RTNHOOK(1);
	tr2 = c_outr32(tr4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(", Y1: ",6,1583151648);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	RTNHOOK(1);
	tr2 = c_outr32(tr4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(", X2: ",6,1566439968);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	RTNHOOK(1);
	tr2 = c_outr32(tr4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(", Y2: ",6,1583217184);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	RTNHOOK(1);
	tr2 = c_outr32(tr4_1);
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

/* make_from_reals */

void Fm91f2y (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;

	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_32_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(3,ur2);
	RTLR(2,tr2);
	RTLR(4,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	RTEAA("make_from_reals", RTUD(1809), Current, 0, 4, 26197);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	ur4_1 = arg1;
	ur4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	tr2 = RTLN(RTUD(1925));
	ur4_1 = arg3;
	ur4_2 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr2);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1809, 30, Dtype(Current)))(Current, ur1x, ur2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* lower_bound */

EIF_UNION Fm98kds (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("lower_bound", RTUD(1809), Current, 0, 0, 26206);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
	RTNHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
	ur4_1 = tr4_2;
	tr4_2 = eif_min_real32 (tr4_1,ur4_1);
	Result = (EIF_REAL_32)tr4_2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

/* make */

void Fm90s5b (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1809), Current, 0, 2, 26219);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_point_a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_point_b_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("point_a_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("point_b_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* right_bound */

EIF_UNION Fm99u80 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("right_bound", RTUD(1809), Current, 0, 0, 26208);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
	RTNHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
	ur4_1 = tr4_2;
	tr4_2 = eif_max_real32 (tr4_1,ur4_1);
	Result = (EIF_REAL_32)tr4_2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

/* scale */

void Fnadqvr (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("scale", RTUD(1809), Current, 0, 1, 26214);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 59, "infix \"*\"", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 59, "infix \"*\"", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* left_bound */

EIF_UNION Fm987be (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("left_bound", RTUD(1809), Current, 0, 0, 26207);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
	RTNHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
	ur4_1 = tr4_2;
	tr4_2 = eif_min_real32 (tr4_1,ur4_1);
	Result = (EIF_REAL_32)tr4_2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

/* translate */

void Fnac2x4 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(4,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("translate", RTUD(1809), Current, 0, 1, 26213);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_distance_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 55, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 55, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* width */

EIF_UNION Fm93dwt (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("width", RTUD(1809), Current, 0, 0, 26198);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
	tr4_3 = eif_abs_real32 ((EIF_REAL_32)(tr4_1 - tr4_2));
	Result = (EIF_REAL_32)tr4_3;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

/* right_by */

void Fnaah6n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("right_by", RTUD(1809), Current, 0, 1, 26209);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 50, "right_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 50, "right_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* up_by */

void Fnaa439 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("up_by", RTUD(1809), Current, 0, 1, 26210);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 51, "up_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 51, "up_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* down_by */

void Fnabs1w (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("down_by", RTUD(1809), Current, 0, 1, 26211);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 52, "down_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 52, "down_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* left_by */

void Fnacf_i (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,tr2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("left_by", RTUD(1809), Current, 0, 1, 26212);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 53, "left_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	ur4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1925, 53, "left_by", tr1))(tr1, ur4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* upper_left */

EIF_UNION Fm94or1 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("upper_left", RTUD(1809), Current, 0, 0, 26200);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	ur4_1 = tr4_2;
	tr4_2 = eif_min_real32 (tr4_1,ur4_1);
	ur4_1 = tr4_2;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_3 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	ur4_2 = tr4_3;
	tr4_3 = eif_max_real32 (tr4_1,ur4_2);
	ur4_2 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* upper_right */

EIF_UNION Fm95bpo (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("upper_right", RTUD(1809), Current, 0, 0, 26201);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	ur4_1 = tr4_2;
	tr4_2 = eif_max_real32 (tr4_1,ur4_1);
	ur4_1 = tr4_2;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_3 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	ur4_2 = tr4_3;
	tr4_3 = eif_max_real32 (tr4_1,ur4_2);
	ur4_2 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* lower_left */

EIF_UNION Fm95zna (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("lower_left", RTUD(1809), Current, 0, 0, 26202);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	ur4_1 = tr4_2;
	tr4_2 = eif_min_real32 (tr4_1,ur4_1);
	ur4_1 = tr4_2;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_3 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	ur4_2 = tr4_3;
	tr4_3 = eif_min_real32 (tr4_1,ur4_2);
	ur4_2 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* lower_right */

EIF_UNION Fm96mkx (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("lower_right", RTUD(1809), Current, 0, 0, 26203);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 48, "x", tr2));
	ur4_1 = tr4_2;
	tr4_2 = eif_max_real32 (tr4_1,ur4_1);
	ur4_1 = tr4_2;
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	RTNHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_3 = *(EIF_REAL_32 *)(tr2 + RTVA(1925, 49, "y", tr2));
	ur4_2 = tr4_3;
	tr4_3 = eif_min_real32 (tr4_1,ur4_2);
	ur4_2 = tr4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* upper_bound */

EIF_UNION Fm97xf5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("upper_bound", RTUD(1809), Current, 0, 0, 26205);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
	RTNHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
	ur4_1 = tr4_2;
	tr4_2 = eif_max_real32 (tr4_1,ur4_1);
	Result = (EIF_REAL_32)tr4_2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

/* intersects */

EIF_UNION Fnae0q_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("intersects", RTUD(1809), Current, 0, 1, 26216);
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
	Result = '\01';
	tc1 = '\01';
	tc2 = '\01';
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 44, dtype))(Current)).value.EIF_REAL_32_value);
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 43, "left_bound", arg1))(arg1)).value.EIF_REAL_32_value);
	if (!((EIF_BOOLEAN)(tr4_1 < tr4_2))) {
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 43, dtype))(Current)).value.EIF_REAL_32_value);
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 44, "right_bound", arg1))(arg1)).value.EIF_REAL_32_value);
		tc2 = (EIF_BOOLEAN)(tr4_1 > tr4_2);
	}
	if (!tc2) {
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 41, dtype))(Current)).value.EIF_REAL_32_value);
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 42, "lower_bound", arg1))(arg1)).value.EIF_REAL_32_value);
		tc1 = (EIF_BOOLEAN)(tr4_1 < tr4_2);
	}
	if (!tc1) {
		tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 42, dtype))(Current)).value.EIF_REAL_32_value);
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 41, "upper_bound", arg1))(arg1)).value.EIF_REAL_32_value);
		Result = (EIF_BOOLEAN)(tr4_1 > tr4_2);
	}
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !Result;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* has */

EIF_UNION Fnaedtd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,loc1);
	RTLR(3,loc2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has", RTUD(1809), Current, 2, 1, 26215);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_coordinate_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(3);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(4);
	Result = '\0';
	tc1 = '\0';
	tc2 = '\0';
	tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 48, "x", arg1));
	tr4_2 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 48, "x", loc1));
	if ((EIF_BOOLEAN)(tr4_1 >= tr4_2)) {
		tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 49, "y", arg1));
		tr4_2 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 49, "y", loc1));
		tc2 = (EIF_BOOLEAN)(tr4_1 >= tr4_2);
	}
	if (tc2) {
		tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 48, "x", arg1));
		tr4_2 = *(EIF_REAL_32 *)(loc2 + RTVA(1925, 48, "x", loc2));
		tc1 = (EIF_BOOLEAN)(tr4_1 <= tr4_2);
	}
	if (tc1) {
		tr4_1 = *(EIF_REAL_32 *)(arg1 + RTVA(1925, 49, "y", arg1));
		tr4_2 = *(EIF_REAL_32 *)(loc2 + RTVA(1925, 49, "y", loc2));
		Result = (EIF_BOOLEAN)(tr4_1 <= tr4_2);
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* height */

EIF_UNION Fm930uf (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 Result = (EIF_REAL_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("height", RTUD(1809), Current, 0, 0, 26199);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	tr4_2 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
	tr4_3 = eif_abs_real32 ((EIF_REAL_32)(tr4_1 - tr4_2));
	Result = (EIF_REAL_32)tr4_3;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL32; r.value.EIF_REAL_32_value = Result; return r; }
}

void Fp_0cvt (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("width_positive", Current);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 34, dtype))(Current)).value.EIF_REAL_32_value);
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr4_1 >= tr4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("height_positive", Current);
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1809, 35, dtype))(Current)).value.EIF_REAL_32_value);
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr4_1 >= tr4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("point_a_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 32, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("point_b_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1809, 33, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1810 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

