/*
 * Code for class KL_SHARED_OPERATING_SYSTEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fnqyc1k(EIF_REFERENCE);
extern void EIF_Minit1889(void);

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

/* operating_system */

RTOID (Fnqyc1k)

EIF_UNION Fnqyc1k (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fnqyc1k);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("operating_system", RTUD(1888), Current, 0, 0, 26933);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(1915));
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("operating_system_not_void", EX_POST);
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

void EIF_Minit1889 (void)
{
	GTCX
	RTOTS (28463,Fnqyc1k)
}


#ifdef __cplusplus
}
#endif

