/*
 * Code for class DS_CELL [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnqiuxj(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fnqh6zx(EIF_REFERENCE);
extern void Fnqjhu5(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2329(void);

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

/* put */

void Fnqiuxj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("put", RTUD(2328), Current, 0, 1, 26907);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_CHARACTER *)(Current + RTWA(2328, 31, dtype)) = (EIF_CHARACTER)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2328, 31, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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

/* item */

EIF_UNION Fnqh6zx (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = *(EIF_CHARACTER *)(Current + RTWA(2328,31, Dtype(Current)));
	return r;
}

/* make */

void Fnqjhu5 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_CHARACTER_value = * (EIF_CHARACTER *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_CHARACTER_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2328), Current, 0, 1, 26908);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_CHARACTER *)(Current + RTWA(2328, 31, dtype)) = (EIF_CHARACTER)arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		tc1 = *(EIF_CHARACTER *)(Current + RTWA(2328, 31, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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

void EIF_Minit2329 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

