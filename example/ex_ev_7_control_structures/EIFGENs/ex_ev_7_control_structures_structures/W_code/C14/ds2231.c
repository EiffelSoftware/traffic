/*
 * Code for class DS_SPARSE_TABLE [BOOLEAN, REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo7du4j(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo63427(EIF_REFERENCE, EIF_UNION);
extern void Fo7e4_s(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo63h5l(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo7joj4(EIF_REFERENCE);
extern void Fo6zzl8(EIF_REFERENCE, EIF_UNION);
extern void Fo60xe3(EIF_REFERENCE, EIF_UNION);
extern void Fo61kcq(EIF_REFERENCE, EIF_UNION);
extern void Fo617ac(EIF_REFERENCE);
extern EIF_UNION Fo7a9d1(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo69bk6(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo670py(EIF_REFERENCE);
extern void Fo7fsye(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo6_mjv(EIF_REFERENCE, EIF_UNION);
extern void Fo6_9hh(EIF_REFERENCE);
extern void Fo7gfv0(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo7eh15(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo67dsb(EIF_REFERENCE);
extern EIF_UNION Fo69zit(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo65fzg(EIF_REFERENCE);
extern void Fo7bxbo(EIF_REFERENCE, EIF_UNION);
extern void Fo7amgf(EIF_REFERENCE, EIF_UNION);
extern void Fo7c66x(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo68onk(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo652w2(EIF_REFERENCE);
extern EIF_UNION Fo64s0u(EIF_REFERENCE, EIF_UNION);
extern void Fo7cj9a(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo7kbhr(EIF_REFERENCE, EIF_UNION);
extern void Fo62u7z(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo66qup(EIF_REFERENCE);
extern void Fo7hqq9(EIF_REFERENCE, EIF_UNION);
extern void Fo7idow(EIF_REFERENCE, EIF_UNION);
extern void Fo7g2tn(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fp1r1rc(EIF_REFERENCE, int);
extern void EIF_Minit2231(void);

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

void Fo7du4j (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(1,arg2);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("put", RTUD(2230), Current, 2, 2, 30162);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_full", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 40, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg2);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);

	RTHOOK(4);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_3 != ti4_4)) {
		RTHOOK(5);
		uc1 = arg1;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ui4_1 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	} else {
		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype));

		RTHOOK(7);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(loc1 == ti4_3)) {
			RTHOOK(8);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype)))++;
			RTHOOK(9);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
		} else {
			RTHOOK(10);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = loc1;
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 164, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			*(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_3 - ti4_4);
		}

		RTHOOK(11);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 91, dtype));
		RTHOOK(12);
		ui4_1 = loc2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 155, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_3;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 176, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(13);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 161, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(14);
		uc1 = arg1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(15);
		ur1 = RTCCL(arg2);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 172, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(16);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype)))++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("same_count", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("one_more", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		tc3 = '\0';
		ur1 = RTCCL(arg2);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc4) {
			ur1 = RTCCL(arg2);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = (EIF_BOOLEAN)(tc4 == arg1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* item */

EIF_UNION Fo63427 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("item", RTUD(2230), Current, 0, 1, 30147);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_k", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("hash_k", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 166, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* put_last */

void Fo7e4_s (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(1,arg2);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("put_last", RTUD(2230), Current, 2, 2, 30164);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_full", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 40, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg2);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_2 = ti4_3;
		ur1 = RTCCL(arg2);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc3 = tc4;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);

	RTHOOK(4);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_3 != ti4_4)) {
		RTHOOK(5);
		uc1 = arg1;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ui4_1 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	} else {
		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));

		RTHOOK(7);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(loc1 > ti4_3)) {
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 76, dtype))(Current);
			RTHOOK(9);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
			loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
		}

		RTHOOK(10);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 91, dtype));
		RTHOOK(11);
		ui4_1 = loc2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 155, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_3;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 176, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(12);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 161, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(13);
		uc1 = arg1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(14);
		ur1 = RTCCL(arg2);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 172, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype)) = (EIF_INTEGER_32)loc1;
		RTHOOK(16);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype)))++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("same_count", EX_POST);
		tc4 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc4 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("one_more", EX_POST);
		tc4 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc4 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		tc4 = '\0';
		ur1 = RTCCL(arg2);
		tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc5) {
			ur1 = RTCCL(arg2);
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc4 = (EIF_BOOLEAN)(tc5 == arg1);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("last", EX_POST);
		tc4 = '\01';
		if ((EIF_BOOLEAN) !tc3) {
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc4 = (EIF_BOOLEAN)(tc5 == arg1);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* infix "@" */

EIF_UNION Fo63h5l (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("infix \"@\"", RTUD(2230), Current, 0, 1, 30146);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_k", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("hash_k", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 166, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* initialized */

EIF_UNION Fo7joj4 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("initialized", RTUD(2230), Current, 0, 0, 30170);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 96, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* make */

void Fo6zzl8 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2230), Current, 0, 1, 30139);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2230, 134, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = arg1;
	ur1 = NULL;
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype));
	ur2 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2230, 127, dtype))(Current, ui4_1x, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make_map */

void Fo60xe3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(2,Current);
	RTLR(0,ur1);
	RTLR(1,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_map", RTUD(2230), Current, 0, 1, 30142);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	ur1 = NULL;
	ur2 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2230, 127, dtype))(Current, ui4_1x, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
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

/* make_map_equal */

void Fo61kcq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(3,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_map_equal", RTUD(2230), Current, 0, 1, 30143);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2230, 118, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 118, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = arg1;
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 118, dtype));
	ur1 = RTCCL(tr1);
	ur2 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2230, 127, dtype))(Current, ui4_1x, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make_map_default */

void Fo617ac (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_map_default", RTUD(2230), Current, 0, 0, 30144);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 36, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 124, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 36, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTLO(2);
	RTEE;
}

/* is_equal */

EIF_UNION Fo7a9d1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,loc1);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("is_equal", RTUD(2230), Current, 2, 1, 30158);
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
	if (RTCEQ(Current, arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		tc1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 23, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2230, 11, "count", arg1));
			tc1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
	if (tc1) {

		RTHOOK(5);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
		RTHOOK(6);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(7);
		while (!((EIF_BOOLEAN)((EIF_BOOLEAN) !Result || (EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 1L))))) {

			RTHOOK(8);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 164, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 69, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
				RTHOOK(9);
				ui4_1 = loc2;
				loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 162, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTHOOK(10);
				Result = '\0';
				ur1 = RTCCL(loc1);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2230, 136, "has", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
				if (tc1) {
					ur1 = RTCCL(loc1);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2230, 129, "item", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
					ui4_1 = loc2;
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 166, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
					Result = (EIF_BOOLEAN)(tc1 == tc2);
				}
			}

			RTHOOK(11);
			loc2--;
			RTHOOK(7);
			;
		}

	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("symmetric", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2230, 140, "is_equal", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("consistent", EX_POST);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 16, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = Result;
		}
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
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* valid_key */

EIF_UNION Fo69bk6 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("valid_key", RTUD(2230), Current, 0, 1, 30155);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("defintion", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 1)) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* keys */

EIF_UNION Fo670py (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("keys", RTUD(2230), Current, 0, 0, 30153);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("keys_not_void", EX_POST);
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

/* force */

void Fo7fsye (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("force", RTUD(2230), Current, 2, 2, 30165);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 137, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg2);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);

	RTHOOK(4);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_3 != ti4_4)) {
		RTHOOK(5);
		uc1 = arg1;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ui4_1 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	} else {

		RTHOOK(6);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTHOOK(7);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			ui4_1 = (EIF_INTEGER_32)(ti4_3 + ((EIF_INTEGER_32) 1L));
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 8, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 111, dtype))(Current, ui4_1x);
			RTHOOK(8);
			ur1 = RTCCL(arg2);
			loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 163, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		} else {
			RTHOOK(9);
			loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 91, dtype));
		}

		RTHOOK(10);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype));

		RTHOOK(11);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(loc1 == ti4_3)) {
			RTHOOK(12);
			(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype)))++;
			RTHOOK(13);
			loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
		} else {
			RTHOOK(14);
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = loc1;
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 164, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			*(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_3 - ti4_4);
		}

		RTHOOK(15);
		ui4_1 = loc2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 155, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_3;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 176, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(16);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 161, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(17);
		uc1 = arg1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(18);
		ur1 = RTCCL(arg2);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 172, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(19);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype)))++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("inserted", EX_POST);
		tc3 = '\0';
		ur1 = RTCCL(arg2);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc4) {
			ur1 = RTCCL(arg2);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = (EIF_BOOLEAN)(tc4 == arg1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("same_count", EX_POST);
		tc3 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("one_more", EX_POST);
		tc3 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc3 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* make_equal */

void Fo6_mjv (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_equal", RTUD(2230), Current, 0, 1, 30140);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2230, 118, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 118, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTLNSMART(RTWCT(2230, 134, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	ui4_1 = arg1;
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 118, dtype));
	ur1 = RTCCL(tr1);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype));
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(2230, 127, dtype))(Current, ui4_1x, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make_default */

void Fo6_9hh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make_default", RTUD(2230), Current, 0, 0, 30141);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 36, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 121, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 36, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTLO(2);
	RTEE;
}

/* force_new */

void Fo7gfv0 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("force_new", RTUD(2230), Current, 2, 2, 30166);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 137, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_item", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);

	RTHOOK(4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
		RTHOOK(5);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ui4_1 = (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 8, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 111, dtype))(Current, ui4_1x);
	}

	RTHOOK(6);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype));

	RTHOOK(7);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(loc1 == ti4_2)) {
		RTHOOK(8);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype)))++;
		RTHOOK(9);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
	} else {
		RTHOOK(10);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 164, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_2 - ti4_3);
	}

	RTHOOK(11);
	ur1 = RTCCL(arg2);
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 163, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
	RTHOOK(12);
	ui4_1 = loc2;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 155, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_2;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 176, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(13);
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 161, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(14);
	uc1 = arg1;
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	RTHOOK(15);
	ur1 = RTCCL(arg2);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 172, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(16);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("inserted", EX_POST);
		tc1 = '\0';
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(tc2 == arg1);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* put_new */

void Fo7eh15 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(1,arg2);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("put_new", RTUD(2230), Current, 2, 2, 30163);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_full", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 40, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_item", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype));

	RTHOOK(5);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(loc1 == ti4_2)) {
		RTHOOK(6);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype)))++;
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
	} else {
		RTHOOK(8);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 74, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 164, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2230, 72, dtype)) = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_2 - ti4_3);
	}

	RTHOOK(9);
	ur1 = RTCCL(arg2);
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 163, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
	RTHOOK(10);
	ui4_1 = loc2;
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 155, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_2;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 176, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(11);
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 161, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(12);
	uc1 = arg1;
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	RTHOOK(13);
	ur1 = RTCCL(arg2);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 172, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(14);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("inserted", EX_POST);
		tc1 = '\0';
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ur1 = RTCCL(arg2);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(tc2 == arg1);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* key_equality_tester */

EIF_UNION Fo67dsb (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2230,134, Dtype(Current)));
	return r;
}

/* key_equality_tester_settable */

EIF_UNION Fo69zit (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("key_equality_tester_settable", RTUD(2230), Current, 0, 1, 30156);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, Dtype(Current)))(Current)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* found_key */

EIF_UNION Fo65fzg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("found_key", RTUD(2230), Current, 0, 0, 30149);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("key_found", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 98, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 63, dtype));
	ui4_1 = ti4_1;
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 162, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* set_key_equality_tester */

void Fo7bxbo (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_key_equality_tester", RTUD(2230), Current, 0, 1, 30159);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("key_equality_tester_settable", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 138, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2236, 92, "internal_set_equality_tester", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("key_equality_tester_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype));
		if (RTCEQ(tr1, arg1)) {
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

/* search */

void Fo7amgf (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("search", RTUD(2230), Current, 0, 1, 30157);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(2230, 63, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("found_set", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 98, dtype))(Current)).value.EIF_BOOLEAN_value);
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("found_item_set", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 98, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 102, dtype))(Current)).value.EIF_BOOLEAN_value);
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
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

/* replace_found_item */

void Fo7c66x (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
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
	RTEAA("replace_found_item", RTUD(2230), Current, 0, 1, 30161);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("item_found", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 98, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	uc1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 63, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("replaced", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 102, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
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

/* has */

EIF_UNION Fo68onk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has", RTUD(2230), Current, 0, 1, 30154);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 != ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_key", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 137, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* key_for_iteration */

EIF_UNION Fo652w2 (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("key_for_iteration", RTUD(2230), Current, 0, 0, 30150);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 92, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 96, dtype));
	ur1 = RTCCL(tr1);
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 154, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* key */

EIF_UNION Fo64s0u (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(1,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("key", RTUD(2230), Current, 0, 1, 30148);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_k", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("hash_k", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ui4_1 = ti4_1;
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 162, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* replace */

void Fo7cj9a (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("replace", RTUD(2230), Current, 0, 2, 30160);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_k", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("has_k", EX_CHECK);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 != ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	uc1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("replaced", EX_POST);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* cursor_key */

EIF_UNION Fo7kbhr (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(1,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cursor_key", RTUD(2230), Current, 0, 1, 30171);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 90, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_off", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 106, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2235, 8, "position", arg1));
	ui4_1 = ti4_1;
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 162, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* make_with_equality_testers */

void Fo62u7z (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_equality_testers", RTUD(2230), Current, 0, 3, 30145);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 118, dtype)) = (EIF_REFERENCE)RTCCL(arg2);
	RTHOOK(3);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype)) = (EIF_REFERENCE)RTCCL(arg3);
	RTHOOK(4);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 62, dtype))(Current, ui4_1x);
	RTHOOK(5);
	tr1 = RTLNSMART(RTWCT(2230, 152, Current));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2236, 60, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 94, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 101, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("equality_tester_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 118, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("key_equality_tester_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype));
		if (RTCEQ(tr1, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* new_cursor */

EIF_UNION Fo66qup (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("new_cursor", RTUD(2230), Current, 0, 0, 30151);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2230,2235,743,-8,2,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2235, typarr);

		tr1 = RTLN(typres);

	}
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2235, 6, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_cursor", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 90, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* copy */

void Fo7hqq9 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(2,loc1);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("copy", RTUD(2230), Current, 1, 1, 30168);
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
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 55, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 77, RTUD(2233)))(Current, ur1x);
	RTHOOK(5);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 140, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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
#undef arg1
}

/* internal_set_key_equality_tester */

void Fo7idow (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("internal_set_key_equality_tester", RTUD(2230), Current, 0, 1, 30169);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2236, 92, "internal_set_equality_tester", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("key_equality_tester_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 134, dtype));
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

/* force_last */

void Fo7g2tn (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(3);
	RTLR(0,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("force_last", RTUD(2230), Current, 2, 2, 30167);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ur1 = RTCCL(arg2);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_1 = ti4_2;
		ur1 = RTCCL(arg2);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
		ti4_2 = ti4_3;
		ur1 = RTCCL(arg2);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc3 = tc4;
		in_assertion = 0;
	}
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2230, 86, dtype))(Current);
	RTHOOK(2);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 60, dtype))(Current, ur1x);

	RTHOOK(3);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 120, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_3 != ti4_4)) {
		RTHOOK(4);
		uc1 = arg1;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 114, dtype));
		ui4_1 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
	} else {
		RTHOOK(5);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype));
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));

		RTHOOK(6);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 1, dtype));
		if ((EIF_BOOLEAN)(loc1 > ti4_3)) {
			RTHOOK(7);
			ui4_1 = loc1;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 8, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 111, dtype))(Current, ui4_1x);
			RTHOOK(8);
			ur1 = RTCCL(arg2);
			loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 163, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		} else {
			RTHOOK(9);
			loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 91, dtype));
		}

		RTHOOK(10);
		ui4_1 = loc2;
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 155, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_3;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 176, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(11);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 161, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(12);
		uc1 = arg1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 167, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(13);
		ur1 = RTCCL(arg2);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2230, 172, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(14);
		*(EIF_INTEGER_32 *)(Current + RTWA(2230, 70, dtype)) = (EIF_INTEGER_32)loc1;
		RTHOOK(15);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype)))++;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("same_count", EX_POST);
		tc4 = '\01';
		if (tc1) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc4 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("one_more", EX_POST);
		tc4 = '\01';
		if ((EIF_BOOLEAN) !tc2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2230, 11, dtype));
			tc4 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("inserted", EX_POST);
		tc4 = '\0';
		ur1 = RTCCL(arg2);
		tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 136, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc5) {
			ur1 = RTCCL(arg2);
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2230, 129, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc4 = (EIF_BOOLEAN)(tc5 == arg1);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("last", EX_POST);
		tc4 = '\01';
		if ((EIF_BOOLEAN) !tc3) {
			tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc4 = (EIF_BOOLEAN)(tc5 == arg1);
		}
		if (tc4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

void Fp1r1rc (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("internal_keys_not_void", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 153, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
		tc1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("internal_keys_consistent", Current);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2230, 153, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc2) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2230, 152, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2236, 91, "table", tr1));
		tc1 = RTCEQ(tr2, Current);
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2231 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

