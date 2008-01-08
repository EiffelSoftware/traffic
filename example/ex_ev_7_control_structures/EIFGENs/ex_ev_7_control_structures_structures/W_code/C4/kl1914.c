/*
 * Code for class KL_IMPORTED_ARRAY_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnswtvv(EIF_REFERENCE);
extern EIF_UNION Fnsvi_m(EIF_REFERENCE);
extern EIF_UNION Fnsx3q3(EIF_REFERENCE);
extern EIF_UNION Fnsxgth(EIF_REFERENCE);
extern EIF_UNION Fnsv5x8(EIF_REFERENCE);
extern void EIF_Minit1914(void);

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

/* boolean_array_ */

RTOID (Fnswtvv)

EIF_UNION Fnswtvv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnswtvv);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("boolean_array_", RTUD(1913), Current, 0, 0, 27024);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1913,2189,743,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2189, typarr);

		tr1 = RTLN(typres);

	}
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("boolean_array_routines_not_void", EX_POST);
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

/* any_array_ */

RTOID (Fnsvi_m)

EIF_UNION Fnsvi_m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnsvi_m);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("any_array_", RTUD(1913), Current, 0, 0, 27022);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1913,2194,0,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2194, typarr);

		tr1 = RTLN(typres);

	}
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("any_array_routines_not_void", EX_POST);
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

/* array_special_integer_ */

RTOID (Fnsx3q3)

EIF_UNION Fnsx3q3 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnsx3q3);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("array_special_integer_", RTUD(1913), Current, 0, 0, 27026);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1913,2194,1436,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2194, typarr);

		tr1 = RTLN(typres);

	}
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("special_integer_array_routines_not_void", EX_POST);
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

/* string_array_ */

RTOID (Fnsxgth)

EIF_UNION Fnsxgth (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnsxgth);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("string_array_", RTUD(1913), Current, 0, 0, 27025);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1913,2194,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2194, typarr);

		tr1 = RTLN(typres);

	}
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("string_array_routines_not_void", EX_POST);
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

/* integer_array_ */

RTOID (Fnsv5x8)

EIF_UNION Fnsv5x8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnsv5x8);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("integer_array_", RTUD(1913), Current, 0, 0, 27023);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {1913,2265,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2265, typarr);

		tr1 = RTLN(typres);

	}
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("integer_array_routines_not_void", EX_POST);
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

void EIF_Minit1914 (void)
{
	GTCX
	RTOTS (28573,Fnsvi_m)
	RTOTS (28574,Fnsv5x8)
	RTOTS (28575,Fnswtvv)
	RTOTS (28576,Fnsxgth)
	RTOTS (28577,Fnsx3q3)
}


#ifdef __cplusplus
}
#endif

