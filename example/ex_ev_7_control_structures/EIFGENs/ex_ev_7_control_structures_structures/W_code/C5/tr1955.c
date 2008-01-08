/*
 * Code for class TRAFFIC_TAXI
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fn5w_ew(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fn5xnci(EIF_REFERENCE);
extern void Fn5z72_(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fp0tg2p(EIF_REFERENCE, int);
extern void EIF_Minit1955(void);

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

/* is_insertable */

EIF_UNION Fn5w_ew (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("is_insertable", RTUD(1954), Current, 0, 1, 27838);
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

EIF_UNION Fn5xnci (EIF_REFERENCE Current)
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
	RTEAA("is_removable", RTUD(1954), Current, 0, 0, 27839);
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

/* set_request_information */

void Fn5z72_ (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(3,Current);
	RTLR(2,loc1);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("set_request_information", RTUD(1954), Current, 1, 2, 27841);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_from_location", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_to_locaton", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static int16 typarr [] = {1954,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(7);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(8);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(9);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(10);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(11);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(12);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(13);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(14);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(15);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(16);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(17);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc1))(loc1, ur1x);
	RTHOOK(18);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(1954, 86, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	RTHOOK(19);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1954, 86, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 30, "start", tr1))(tr1);
	RTHOOK(20);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1954, 52, dtype));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1954, 76, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(21);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1954, 15, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(22);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1954, 40, dtype))(Current, uc1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

void Fp0tg2p (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("office_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1954, 81, Dtype(Current)))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1955 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

