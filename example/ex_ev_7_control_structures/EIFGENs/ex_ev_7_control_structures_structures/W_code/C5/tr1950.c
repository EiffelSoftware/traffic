/*
 * Code for class TRAFFIC_PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fn45t3n(EIF_REFERENCE, EIF_UNION);
extern void Fn4zptt(EIF_REFERENCE);
extern EIF_UNION Fn40nmo(EIF_REFERENCE);
extern void Fn44i8e(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn41yhx(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn42lfj(EIF_REFERENCE);
extern EIF_UNION Fn43was(EIF_REFERENCE);
extern EIF_UNION Fn41aka(EIF_REFERENCE);
extern void Fn44550(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn4__o1(EIF_REFERENCE);
extern EIF_UNION Fn428c5(EIF_REFERENCE, EIF_UNION);
extern void Fp0ri9p(EIF_REFERENCE, int);
extern void EIF_Minit1950(void);

#ifdef __cplusplus
}
#endif

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

/* set_scale_factor */

void Fn45t3n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTEAA("set_scale_factor", RTUD(1949), Current, 0, 1, 27814);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_scale_factor_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype)) = (EIF_REAL_64)arg1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* default_create */

void Fn4zptt (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("default_create", RTUD(1949), Current, 0, 0, 27816);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	*(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype)) = (EIF_REAL_64)tr8_1;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(1949, 6, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1949, 6, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("scale_factor_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

/* destination */

EIF_UNION Fn40nmo (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("destination", RTUD(1949), Current, 0, 0, 27806);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("first_exists", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1949, 41, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr1 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", Result))(Result)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 67, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* append */

void Fn44i8e (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(4,Current);
	RTLR(5,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("append", RTUD(1949), Current, 1, 1, 27812);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("path_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_valid_for_insertion", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1949, 38, "first", arg1));
		RTNHOOK(2);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1815, 41, "connections", tr1));
		RTNHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 55, "first", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1949, 44, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1949, 38, "first", arg1));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1949, 47, dtype))(Current, ur1x);
	} else {

		RTHOOK(5);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
		while (!((EIF_BOOLEAN)(tr1 == NULL))) {
			RTHOOK(7);
			tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
			loc1 = (EIF_REFERENCE)RTCCL(tr2);
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
			;
		}


		RTHOOK(8);
		tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1949, 38, "first", arg1));
		ur1 = RTCCL(tr2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1815, 45, "is_joinable", loc1))(loc1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(9);
			tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1949, 38, "first", arg1));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1815, 50, "join", loc1))(loc1, ur1x);
		} else {
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(arg1 + RTVA(1949, 38, "first", arg1));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1815, 52, "set_next", loc1))(loc1, ur1x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* is_insertable */

EIF_UNION Fn41yhx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_insertable", RTUD(1949), Current, 0, 1, 27808);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* is_removable */

EIF_UNION Fn42lfj (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_removable", RTUD(1949), Current, 0, 0, 27809);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* out */

EIF_UNION Fn43was (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(10);
	RTLR(7,loc7);
	RTLR(0,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(2,Current);
	RTLR(8,loc8);
	RTLR(9,loc1);
	RTLR(1,Result);
	RTLR(5,ur1);
	RTLR(6,loc6);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTEAA("out", RTUD(1949), Current, 8, 0, 27811);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(774));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(13, 1, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Starting at: ",13,291095328);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1949, 39, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 40, "name", tr2));
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	RTHOOK(3);
	tr1 = RTLN(RTUD(1898));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1898, 32, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1898, 13, "name", tr1));
	loc6 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(4);
	tr1 = RTLN(RTUD(1897));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1897, 33, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1897, 14, "name", tr1));
	loc7 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(5);
	tr1 = RTLN(RTUD(1896));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1896, 33, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1896, 14, "name", tr1));
	loc8 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(6);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
	RTHOOK(7);
	while (!((EIF_BOOLEAN)(loc1 == NULL))) {

		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 43, "has_line", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(9);
			tr1 = RTMS_EX_H("Take ",5,1635073312);
			tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 39, "line", loc1));
			RTNHOOK(9);
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 66, "type", tr2));
			RTNHOOK(9);
			tr2 = *(EIF_REFERENCE *)(tr3 + RTVA(1894, 13, "name", tr3));
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr1 = RTMS_EX_H(" no. ",5,1853025824);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 39, "line", loc1));
			RTNHOOK(9);
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1975, 65, "name", tr2));
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr1 = RTMS_EX_H(" to ",4,544501536);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 38, "destination", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 40, "name", tr2));
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr1 = RTMS_EX_H("\012",1,10);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);

			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 39, "line", loc1));
			RTNHOOK(10);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 66, "type", tr1));
			RTNHOOK(10);
			tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
			RTNHOOK(10);
			ur1 = RTCCL(loc6);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(11);
				tr8_1 = *(EIF_REAL_64 *)(loc1 + RTVA(1815, 40, "length", loc1));
				loc3 += tr8_1;
			} else {
				RTHOOK(12);
				tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 39, "line", loc1));
				RTNHOOK(12);
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 66, "type", tr1));
				RTNHOOK(12);
				tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
				RTNHOOK(12);
				ur1 = RTCCL(loc7);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(13);
				tr8_1 = *(EIF_REAL_64 *)(loc1 + RTVA(1815, 40, "length", loc1));
				loc5 += tr8_1;
			} else {
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 39, "line", loc1));
				RTNHOOK(14);
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1975, 66, "type", tr1));
				RTNHOOK(14);
				tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
				RTNHOOK(14);
				ur1 = RTCCL(loc8);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(15);
				tr8_1 = *(EIF_REAL_64 *)(loc1 + RTVA(1815, 40, "length", loc1));
				loc4 += tr8_1;
			}}}

		} else {
			RTHOOK(16);
			tr1 = RTMS_EX_H("Walk to ",8,207367712);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 38, "destination", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(16);
			tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 40, "name", tr2));
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr1 = RTMS_EX_H("\012",1,10);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
			RTHOOK(17);
			tr8_1 = *(EIF_REAL_64 *)(loc1 + RTVA(1815, 40, "length", loc1));
			loc2 += tr8_1;
		}

		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(7);
		;
	}

	RTHOOK(19);
	tr1 = RTMS_EX_H("Arriving at: ",13,932213024);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1949, 40, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(19);
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1973, 40, "name", tr2));
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H("\012Total:",7,709270330);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);

	RTHOOK(20);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc2 > tr8_1)) {
		RTHOOK(21);
		tr1 = RTMS_EX_H("\012Walking: ",10,2117356064);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype));
		tr2 = RTLN(RTUD(740));
		*(EIF_REAL_64 *)tr2 = (EIF_REAL_64)(loc2 * tr8_1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr2))(tr2)).value.EIF_INTEGER_32_value);
		RTNHOOK(21);
		tr2 = c_outi(ti4_1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H(" m",2,8301);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	}


	RTHOOK(22);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc3 > tr8_1)) {
		RTHOOK(23);
		tr1 = RTMS_EX_H("\012Tram: ",7,391299872);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype));
		tr2 = RTLN(RTUD(740));
		*(EIF_REAL_64 *)tr2 = (EIF_REAL_64)(loc3 * tr8_1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr2))(tr2)).value.EIF_INTEGER_32_value);
		RTNHOOK(23);
		tr2 = c_outi(ti4_1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H(" m",2,8301);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	}


	RTHOOK(24);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc4 > tr8_1)) {
		RTHOOK(25);
		tr1 = RTMS_EX_H("\012Bus: ",6,1990653472);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype));
		tr2 = RTLN(RTUD(740));
		*(EIF_REAL_64 *)tr2 = (EIF_REAL_64)(loc4 * tr8_1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr2))(tr2)).value.EIF_INTEGER_32_value);
		RTNHOOK(25);
		tr2 = c_outi(ti4_1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H(" m",2,8301);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	}


	RTHOOK(26);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc5 > tr8_1)) {
		RTHOOK(27);
		tr1 = RTMS_EX_H("\012Train: ",8,1325001760);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1949, 49, dtype));
		tr2 = RTLN(RTUD(740));
		*(EIF_REAL_64 *)tr2 = (EIF_REAL_64)(loc5 * tr8_1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 10, "rounded", tr2))(tr2)).value.EIF_INTEGER_32_value);
		RTNHOOK(27);
		tr2 = c_outi(ti4_1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H(" m",2,8301);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 62, "append", Result))(Result, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* connections */

EIF_UNION Fn41aka (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLR(5,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("connections", RTUD(1949), Current, 1, 0, 27807);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("first_exists", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
	RTHOOK(3);
	{
		static int16 typarr [] = {1949,2144,1958,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2144, typarr);

		tr1 = RTLN(typres);

	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2144, 78, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 == NULL))) {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 41, "connections", loc1));
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 34, "start", tr1))(tr1);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 41, "connections", loc1));
		RTNHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 88, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 41, "connections", loc1));
			RTNHOOK(7);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 103, "force_last", Result))(Result, ur1x);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 41, "connections", loc1));
			RTNHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 41, "connections", loc1));
			RTNHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 88, "after", tr1))(tr1)).value.EIF_BOOLEAN_value);
			;
		}

		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(4);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_first */

void Fn44550 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(5,Current);
	RTLR(3,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_first", RTUD(1949), Current, 0, 1, 27813);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_path_section_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 37, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1973, 40, "name", tr1));
	RTNHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 38, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr3 = *(EIF_REFERENCE *)(tr1 + RTVA(1973, 40, "name", tr1));
	ur1 = RTCCL(tr3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr2))(tr2, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTHOOK(3);
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* origin */

EIF_UNION Fn4__o1 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("origin", RTUD(1949), Current, 0, 0, 27817);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("first_exists", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 37, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* is_valid_for_insertion */

EIF_UNION Fn428c5 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	RTLR(5,tr3);
	RTLR(3,loc1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("is_valid_for_insertion", RTUD(1949), Current, 1, 1, 27810);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("connection_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {

		RTHOOK(4);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(1949, 38, dtype));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
		while (!((EIF_BOOLEAN)(tr1 == NULL))) {
			RTHOOK(6);
			tr2 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
			loc1 = (EIF_REFERENCE)RTCCL(tr2);
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(1815, 42, "next", loc1));
			;
		}

		RTHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1815, 38, "destination", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1958, 66, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_BOOLEAN)RTCEQ(tr2, tr3);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

void Fp0ri9p (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("scale_factor_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(1949, 49, Dtype(Current)));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(tr8_1 > tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1950 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

