/*
 * Code for class YY_PARSER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fpq37hm(EIF_REFERENCE);
extern void Fprbbsg(EIF_REFERENCE);
extern EIF_UNION Fpsc4xr(EIF_REFERENCE);
extern void Fpq8q0z(EIF_REFERENCE);
extern EIF_UNION Fpr50mx(EIF_REFERENCE);
extern void Fpraouu(EIF_REFERENCE);
extern EIF_UNION Fpschz4(EIF_REFERENCE);
extern void Fpq4ve8(EIF_REFERENCE);
extern void Fpq723c(EIF_REFERENCE);
extern EIF_UNION Fpr5dpa(EIF_REFERENCE);
extern EIF_UNION Fpr2syt(EIF_REFERENCE);
extern EIF_UNION Fpr3fwf(EIF_REFERENCE);
extern EIF_UNION Fpr7bh5(EIF_REFERENCE);
extern EIF_UNION Fpq5icv(EIF_REFERENCE);
extern EIF_UNION Fpr4qro(EIF_REFERENCE);
extern EIF_UNION Fpr32t1(EIF_REFERENCE);
extern void Fpq9dzl(EIF_REFERENCE);
extern void Fpq90w7(EIF_REFERENCE);
extern void Fprc9lb(EIF_REFERENCE);
extern EIF_UNION Fprdxiy(EIF_REFERENCE);
extern EIF_UNION Fprekgk(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpre7d6(EIF_REFERENCE);
extern void Fpq7f5q(EIF_REFERENCE);
extern void Fprcmnp(EIF_REFERENCE);
extern void Fprbzp2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fprwonz(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpsdsvd(EIF_REFERENCE);
extern EIF_UNION Fpr6okj(EIF_REFERENCE);
extern EIF_UNION Fpq6s73(EIF_REFERENCE);
extern EIF_UNION Fpr_67b(EIF_REFERENCE);
extern EIF_UNION Fpr0u4y(EIF_REFERENCE);
extern EIF_UNION Fpr7zfs(EIF_REFERENCE);
extern EIF_UNION Fpr14_6(EIF_REFERENCE);
extern EIF_UNION Fpr1h2k(EIF_REFERENCE);
extern void Fpr_j9p(EIF_REFERENCE);
extern EIF_UNION Fpq55ah(EIF_REFERENCE);
extern void Fp15x6x(EIF_REFERENCE, int);
extern void EIF_Minit2130(void);

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

void Fpq37hm (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2129), Current, 0, 0, 31233);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 7, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 112, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 31, "make", tr1))(tr1, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype)) = (EIF_REFERENCE)tr2;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 80, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 79, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
}

/* recover */

void Fprbbsg (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("recover", RTUD(2129), Current, 0, 0, 31244);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 102, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yyinitial_yyvs_size */

EIF_UNION Fpsc4xr (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 10L);
	return r;
}
/* clear_all */

void Fpq8q0z (EIF_REFERENCE Current)
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
	RTEAA("clear_all", RTUD(2129), Current, 0, 0, 31240);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 50, Dtype(Current)))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yycontinue */

EIF_UNION Fpr50mx (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 104L);
	return r;
}
/* raise_error */

void Fpraouu (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("raise_error", RTUD(2129), Current, 0, 0, 31243);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 101, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* yyinitial_stack_size */

EIF_UNION Fpschz4 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 200L);
	return r;
}
/* parse */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void Fpq4ve8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_INTEGER_32  EIF_VOLATILE ti4_4;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	EIF_CHARACTER  EIF_VOLATILE tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

	RTXI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLXL;
	RTEAA("parse", RTUD(2129), Current, 7, 0, 31234);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTE_T


	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 103, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(2);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 70, dtype));
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 71, dtype));
		RTHOOK(4);
		loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 72, dtype));
		RTHOOK(5);
		loc4 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 73, dtype));
		RTHOOK(6);
		loc5 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 74, dtype));
		RTHOOK(7);
		loc6 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 75, dtype));
		RTHOOK(8);
		loc7 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 76, dtype));
		RTHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 102, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	} else {
		RTHOOK(10);
		*(EIF_INTEGER_32 *)(Current + RTWA(2129, 46, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(11);
		*(EIF_BOOLEAN *)(Current + RTWA(2129, 89, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 81, dtype))(Current);
		RTHOOK(14);
		*(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(16);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 102, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(17);
		loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 93, dtype))(Current)).value.EIF_INTEGER_32_value);
		loc7 = (EIF_INTEGER_32)loc7;
	}

	RTHOOK(18);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 102, dtype))(Current)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_1 != ti4_2))) {

		RTHOOK(19);
		switch (loc7) {
			case 1L:
				RTHOOK(20);
				(*(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype)))++;

				RTHOOK(21);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
				if ((EIF_BOOLEAN)(ti4_3 >= loc1)) {
					RTHOOK(22);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 112, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc1 += ti4_3;
					RTHOOK(23);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 7, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(23);
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
					ur1 = tr2;
					ui4_1 = loc1;
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2264, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTAR(Current, tr2);
					*(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype)) = (EIF_REFERENCE)tr2;
					if (
						WDBG(RTUD(2129),"geyacc")
					) {
						RTHOOK(24);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(24);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
						RTNHOOK(24);
						tr1 = RTMS_EX_H("Stack (yyss) size increased to ",31,309752864);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
						RTHOOK(25);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(25);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
						RTNHOOK(25);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
						RTHOOK(26);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
						RTNHOOK(26);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
						RTNHOOK(26);
						uc1 = (EIF_CHARACTER) '\012';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
					}
				}

				if (
					WDBG(RTUD(2129),"geyacc")
				) {
					RTHOOK(27);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(27);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTNHOOK(27);
					tr1 = RTMS_EX_H("Entering state ",15,679182112);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
					RTHOOK(28);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(28);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTNHOOK(28);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
					RTHOOK(29);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(29);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTNHOOK(29);
					uc1 = (EIF_CHARACTER) '\012';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
				}
				RTHOOK(30);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
				ui4_1 = loc2;
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
				ui4_2 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
				RTHOOK(31);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 64, dtype));
				ui4_1 = loc2;
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_3;

				RTHOOK(32);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
					RTHOOK(33);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 94, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				} else {

					RTHOOK(34);
					tc1 = *(EIF_BOOLEAN *)(Current + RTWA(2129, 89, dtype));
					if (tc1) {
						if (
							WDBG(RTUD(2129),"geyacc")
						) {
							RTHOOK(35);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(35);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(35);
							tr1 = RTMS_EX_H("Reading a token\012",16,871802122);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
						}
						RTHOOK(36);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 116, dtype))(Current);
						RTHOOK(37);
						*(EIF_BOOLEAN *)(Current + RTWA(2129, 89, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
					}


					RTHOOK(38);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 105, dtype))(Current)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(ti4_3 > ti4_4)) {
						if (
							WDBG(RTUD(2129),"geyacc")
						) {
							RTHOOK(39);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(39);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(39);
							tr1 = RTMS_EX_H("Next token is ",14,279921184);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
							RTHOOK(40);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(40);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(40);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
							ui4_1 = ti4_3;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
							RTHOOK(41);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(41);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(41);
							uc1 = (EIF_CHARACTER) '\012';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
						}

						RTHOOK(42);
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 110, dtype))(Current)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(ti4_3 <= ti4_4)) {
							RTHOOK(43);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 60, dtype));
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
							ui4_1 = ti4_3;
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc4 = (EIF_INTEGER_32)ti4_3;
						} else {
							RTHOOK(44);
							loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 111, dtype))(Current)).value.EIF_INTEGER_32_value);
						}

						RTHOOK(45);
						loc3 += loc4;
					} else {
						RTHOOK(46);
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 105, dtype))(Current)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
						if (
							WDBG(RTUD(2129),"geyacc")
						) {
							RTHOOK(47);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(47);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(47);
							tr1 = RTMS_EX_H("Now at end of input.\012",21,522064138);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
						}
						RTHOOK(48);
						loc4 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
					} else {
						if (
							WDBG(RTUD(2129),"geyacc")
						) {
							RTHOOK(49);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(49);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(49);
							tr1 = RTMS_EX_H("Error in scanner.\012",18,468832266);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
						}
						RTHOOK(50);
						(*(EIF_INTEGER_32 *)(Current + RTWA(2129, 46, dtype)))++;
						RTHOOK(51);
						ui4_1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 78, dtype))(Current, ui4_1x);
						RTHOOK(52);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 48, dtype))(Current);
						RTHOOK(53);
						loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
					}}


					RTHOOK(54);
					tc1 = '\01';
					tc2 = '\01';
					if (!(EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))) {
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 109, dtype))(Current)).value.EIF_INTEGER_32_value);
						tc2 = (EIF_BOOLEAN)(loc3 > ti4_3);
					}
					if (!(tc2)) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 67, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						tc1 = (EIF_BOOLEAN)(ti4_3 != loc4);
					}
					if (tc1) {
						RTHOOK(55);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 94, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
					} else {
						RTHOOK(56);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 66, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc3 = (EIF_INTEGER_32)ti4_3;

						RTHOOK(57);
						if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))) {

							RTHOOK(58);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
							if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
								RTHOOK(59);
								loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 96, dtype))(Current)).value.EIF_INTEGER_32_value);
								loc7 = (EIF_INTEGER_32)loc7;
							} else {
								RTHOOK(60);
								loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)-loc3;
								RTHOOK(61);
								loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 95, dtype))(Current)).value.EIF_INTEGER_32_value);
								loc7 = (EIF_INTEGER_32)loc7;
							}

						} else {
							RTHOOK(62);
						if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
							RTHOOK(63);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 96, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						} else {
							RTHOOK(64);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 106, dtype))(Current)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
							RTHOOK(65);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 47, dtype))(Current);
						} else {
							if (
								WDBG(RTUD(2129),"geyacc")
							) {
								RTHOOK(66);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
								RTNHOOK(66);
								tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
								RTNHOOK(66);
								tr1 = RTMS_EX_H("Shifting token ",15,857266208);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
								RTHOOK(67);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
								RTNHOOK(67);
								tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
								RTNHOOK(67);
								ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
								ui4_1 = ti4_3;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
								RTHOOK(68);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
								RTNHOOK(68);
								tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
								RTNHOOK(68);
								uc1 = (EIF_CHARACTER) '\012';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
							}

							RTHOOK(69);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
							ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 105, dtype))(Current)).value.EIF_INTEGER_32_value);
							if ((EIF_BOOLEAN)(ti4_3 > ti4_4)) {
								RTHOOK(70);
								*(EIF_BOOLEAN *)(Current + RTWA(2129, 89, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
							}

							RTHOOK(71);
							ui4_1 = loc4;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 83, dtype))(Current, ui4_1x);

							RTHOOK(72);
							ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype));
							if ((EIF_BOOLEAN)(ti4_3 != ((EIF_INTEGER_32) 0L))) {
								RTHOOK(73);
								(*(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype)))--;
							}

							RTHOOK(74);
							loc2 = (EIF_INTEGER_32)loc3;
							if (RTAL & CK_CHECK) {
								RTHOOK(75);
								RTCT("newstate", EX_CHECK);
								ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 93, dtype))(Current)).value.EIF_INTEGER_32_value);
								if ((EIF_BOOLEAN)(loc7 == ti4_3)) {
									RTCK;
								} else {
									RTCF;
								}
							}
						}}}

					}

				}

				break;
			case 2L:
				RTHOOK(76);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 62, dtype));
				ui4_1 = loc2;
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_3;

				RTHOOK(77);
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(78);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 96, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				} else {
					RTHOOK(79);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 95, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				}

				break;
			case 3L:
				if (
					WDBG(RTUD(2129),"geyacc")
				) {
					RTHOOK(80);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(80);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTNHOOK(80);
					tr1 = RTMS_EX_H("Reducing via rule #",19,1958487075);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
					RTHOOK(81);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(81);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTNHOOK(81);
					ui4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
					RTHOOK(82);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(82);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
					RTNHOOK(82);
					uc1 = (EIF_CHARACTER) '\012';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
				}
				RTHOOK(83);
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 77, dtype))(Current, ui4_1x);

				RTHOOK(84);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
				switch (ti4_3) {
					case 104L:
						RTHOOK(85);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 61, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc3 = (EIF_INTEGER_32)ti4_3;
						RTHOOK(86);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
						ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
						ui4_1 = ti4_3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc6 = (EIF_INTEGER_32)ti4_3;
						RTHOOK(87);
						loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 108, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc5 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 - loc5);
						RTHOOK(88);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 65, dtype));
						ui4_1 = loc5;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc2 = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_3 + loc6);

						RTHOOK(89);
						tc1 = '\0';
						tc2 = '\0';
						if ((EIF_BOOLEAN)(loc2 >= ((EIF_INTEGER_32) 0L))) {
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 109, dtype))(Current)).value.EIF_INTEGER_32_value);
							tc2 = (EIF_BOOLEAN)(loc2 <= ti4_3);
						}
						if (tc2) {
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 67, dtype));
							ui4_1 = loc2;
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							tc1 = (EIF_BOOLEAN)(ti4_3 == loc6);
						}
						if (tc1) {
							RTHOOK(90);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 66, dtype));
							ui4_1 = loc2;
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc2 = (EIF_INTEGER_32)ti4_3;
						} else {
							RTHOOK(91);
							tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 63, dtype));
							ui4_1 = loc5;
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
							loc2 = (EIF_INTEGER_32)ti4_3;
						}

						RTHOOK(92);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 93, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
						break;
					case 105L:
						RTHOOK(93);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 70, dtype)) = (EIF_INTEGER_32)loc1;
						RTHOOK(94);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 71, dtype)) = (EIF_INTEGER_32)loc2;
						RTHOOK(95);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 72, dtype)) = (EIF_INTEGER_32)loc3;
						RTHOOK(96);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 73, dtype)) = (EIF_INTEGER_32)loc4;
						RTHOOK(97);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 74, dtype)) = (EIF_INTEGER_32)loc5;
						RTHOOK(98);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 75, dtype)) = (EIF_INTEGER_32)loc6;
						RTHOOK(99);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 76, dtype)) = (EIF_INTEGER_32)loc7;
						break;
					case 103L:
						RTHOOK(100);
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 102, dtype))(Current)).value.EIF_INTEGER_32_value);
						*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_3;
						RTHOOK(101);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 96, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
						break;
				}
				break;
			case 4L:

				RTHOOK(102);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype));
				if ((EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 3L))) {

					RTHOOK(103);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
					ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 105, dtype))(Current)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(ti4_3 <= ti4_4)) {
						RTHOOK(104);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 48, dtype))(Current);
					} else {
						if (
							WDBG(RTUD(2129),"geyacc")
						) {
							RTHOOK(105);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(105);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(105);
							tr1 = RTMS_EX_H("Discarding token ",17,1205924896);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
							RTHOOK(106);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(106);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(106);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 117, dtype))(Current)).value.EIF_INTEGER_32_value);
							ui4_1 = ti4_3;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 257, "put_integer", tr2))(tr2, ui4_1x);
							RTHOOK(107);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(107);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							RTNHOOK(107);
							uc1 = (EIF_CHARACTER) '\012';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 349, "put_character", tr2))(tr2, uc1x);
						}
						RTHOOK(108);
						*(EIF_BOOLEAN *)(Current + RTWA(2129, 89, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
						RTHOOK(109);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 97, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
					}

				} else {

					RTHOOK(110);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype));
					if ((EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(111);
						(*(EIF_INTEGER_32 *)(Current + RTWA(2129, 46, dtype)))++;
						RTHOOK(112);
						ui4_1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 78, dtype))(Current, ui4_1x);
					}

					RTHOOK(113);
					*(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
					RTHOOK(114);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 97, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				}

				break;
			case 5L:
				RTHOOK(115);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 64, dtype));
				ui4_1 = loc2;
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc3 = (EIF_INTEGER_32)ti4_3;

				RTHOOK(116);
				ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
					RTHOOK(117);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				} else {
					RTHOOK(118);
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 104, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc3 += ti4_3;

					RTHOOK(119);
					tc1 = '\01';
					tc2 = '\01';
					if (!(EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))) {
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 109, dtype))(Current)).value.EIF_INTEGER_32_value);
						tc2 = (EIF_BOOLEAN)(loc3 > ti4_3);
					}
					if (!(tc2)) {
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 67, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 104, dtype))(Current)).value.EIF_INTEGER_32_value);
						tc1 = (EIF_BOOLEAN)(ti4_3 != ti4_4);
					}
					if (tc1) {
						RTHOOK(120);
						loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc7 = (EIF_INTEGER_32)loc7;
					} else {
						RTHOOK(121);
						tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 66, dtype));
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
						loc3 = (EIF_INTEGER_32)ti4_3;

						RTHOOK(122);
						if ((EIF_BOOLEAN)(loc3 < ((EIF_INTEGER_32) 0L))) {

							RTHOOK(123);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
							if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
								RTHOOK(124);
								loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
								loc7 = (EIF_INTEGER_32)loc7;
							} else {
								RTHOOK(125);
								loc3 = (EIF_INTEGER_32)(EIF_INTEGER_32)-loc3;
								RTHOOK(126);
								loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 95, dtype))(Current)).value.EIF_INTEGER_32_value);
								loc7 = (EIF_INTEGER_32)loc7;
							}

						} else {
							RTHOOK(127);
						if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
							RTHOOK(128);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 98, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						} else {
							RTHOOK(129);
							ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 106, dtype))(Current)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
							RTHOOK(130);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 47, dtype))(Current);
						} else {
							RTHOOK(131);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 84, dtype))(Current);
							RTHOOK(132);
							loc2 = (EIF_INTEGER_32)loc3;
							RTHOOK(133);
							loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 93, dtype))(Current)).value.EIF_INTEGER_32_value);
							loc7 = (EIF_INTEGER_32)loc7;
						}}}

					}

				}

				break;
			case 6L:

				RTHOOK(134);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
				if ((EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(135);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 48, dtype))(Current);
				} else {
					RTHOOK(136);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 85, dtype))(Current, ui4_1x);
					RTHOOK(137);
					(*(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype)))--;
					RTHOOK(138);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
					ui4_1 = ti4_3;
					ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc2 = (EIF_INTEGER_32)ti4_3;
					RTHOOK(139);
					loc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 97, dtype))(Current)).value.EIF_INTEGER_32_value);
					loc7 = (EIF_INTEGER_32)loc7;
				}

				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(18);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 102, dtype))(Current)).value.EIF_INTEGER_32_value);
		;
	}


	RTHOOK(140);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 103, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_3 != ti4_4)) {
		RTHOOK(141);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 92, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(4);
	if (
		WDBG(RTUD(2129),"geyacc")
	) {
		RTHOOK(142);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(142);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(142);
		tr1 = RTMS_EX_H("Entering rescue clause of parser",32,1719387250);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 344, "put_line", tr2))(tr2, ur1x);
	}
	RTHOOK(143);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 48, dtype))(Current);
	RTHOOK(144);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 92, dtype))(Current);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(145);
	RTEOK;
	RTXE;
	RTLO(9);
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* abort */

void Fpq723c (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("abort", RTUD(2129), Current, 0, 0, 31239);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 100, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("aborted", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
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
}

/* yyerror_raised */

EIF_UNION Fpr5dpa (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 103L);
	return r;
}
/* yyerrhandle */

EIF_UNION Fpr2syt (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	return r;
}
/* yyerrpop */

EIF_UNION Fpr3fwf (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	return r;
}
/* yyterror */

EIF_UNION Fpr7bh5 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* syntax_error */

EIF_UNION Fpq5icv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("syntax_error", RTUD(2129), Current, 0, 0, 31235);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 100, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* yyaborted */

EIF_UNION Fpr4qro (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 102L);
	return r;
}
/* yyaccepted */

EIF_UNION Fpr32t1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 101L);
	return r;
}
/* clear_stacks */

void Fpq9dzl (EIF_REFERENCE Current)
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
	RTEAA("clear_stacks", RTUD(2129), Current, 0, 0, 31241);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 82, Dtype(Current)))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* suspend */

void Fpq90w7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("suspend", RTUD(2129), Current, 0, 0, 31242);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 103, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("suspended", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 45, dtype))(Current)).value.EIF_BOOLEAN_value);
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
}

/* clear_token */

void Fprc9lb (EIF_REFERENCE Current)
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
	RTEAA("clear_token", RTUD(2129), Current, 0, 0, 31247);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(2129, 89, Dtype(Current))) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* is_recovering */

EIF_UNION Fprdxiy (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_recovering", RTUD(2129), Current, 0, 0, 31248);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 90, Dtype(Current)));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_expected_token */

EIF_UNION Fprekgk (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("is_expected_token", RTUD(2129), Current, 3, 1, 31249);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_token_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
	if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 88, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc1 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 64, dtype));
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_1;

		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 62, dtype));
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
			loc2 = (EIF_INTEGER_32)ti4_1;

			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			}

		} else {

			RTHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 105, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
				RTHOOK(10);
				loc3 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			} else {

				RTHOOK(11);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 110, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(arg1 <= ti4_1)) {
					RTHOOK(12);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 60, dtype));
					ui4_1 = arg1;
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
					loc3 = (EIF_INTEGER_32)ti4_1;
				} else {
					RTHOOK(13);
					loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 111, dtype))(Current)).value.EIF_INTEGER_32_value);
				}

				RTHOOK(14);
				loc2 += loc3;
			}


			RTHOOK(15);
			tc1 = '\01';
			tc2 = '\01';
			if (!(EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L))) {
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 109, dtype))(Current)).value.EIF_INTEGER_32_value);
				tc2 = (EIF_BOOLEAN)(loc2 > ti4_1);
			}
			if (!(tc2)) {
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 67, dtype));
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				tc1 = (EIF_BOOLEAN)(ti4_1 != loc3);
			}
			if (tc1) {
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 62, dtype));
				ui4_1 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc2 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(17);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(18);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				}

			} else {
				RTHOOK(19);
				tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 66, dtype));
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
				loc2 = (EIF_INTEGER_32)ti4_1;

				RTHOOK(20);
				if ((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L))) {

					RTHOOK(21);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 107, dtype))(Current)).value.EIF_INTEGER_32_value);
					if ((EIF_BOOLEAN)(loc2 != ti4_1)) {
						RTHOOK(22);
						Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					}

				} else {
					RTHOOK(23);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 106, dtype))(Current)).value.EIF_INTEGER_32_value);
				if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
					RTHOOK(24);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				} else {
					RTHOOK(25);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(26);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				}}}

			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* expected_tokens */

EIF_UNION Fpre7d6 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(1,loc3);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("expected_tokens", RTUD(2129), Current, 4, 0, 31250);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 110, dtype))(Current)).value.EIF_INTEGER_32_value);
	RTHOOK(2);
	{
		static int16 typarr [] = {2129,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32)(loc2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	while (!((EIF_BOOLEAN)(loc1 > loc2))) {

		RTHOOK(4);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 58, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(5);
			loc4++;
			RTHOOK(6);
			ui4_1 = loc1;
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", loc3))(loc3, ui4_1x, ui4_2x);
		}

		RTHOOK(7);
		loc1++;
		RTHOOK(3);
		;
	}

	RTHOOK(8);
	{
		static int16 typarr [] = {2129,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = loc4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(8);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(9);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	while (!((EIF_BOOLEAN)(loc1 > loc4))) {
		RTHOOK(11);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc3))(loc3, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", Result))(Result, ui4_1x, ui4_2x);
		RTHOOK(12);
		loc1++;
		RTHOOK(10);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("expected_tokens_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* accept */

void Fpq7f5q (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("accept", RTUD(2129), Current, 0, 0, 31238);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 99, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("accepted", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
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
}

/* report_eof_expected_error */

void Fprcmnp (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(0,tr1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("report_eof_expected_error", RTUD(2129), Current, 0, 0, 31246);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("parse error",11,283683698);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2129, 54, Dtype(Current)))(Current, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* report_error */

void Fprbzp2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
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
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("report_error", RTUD(2129), Current, 0, 1, 31245);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_message_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2033, 350, "put_string", tr2))(tr2, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1801, 33, "error", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2033, 264, "put_new_line", tr2))(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* yyfixed_array */

EIF_UNION Fprwonz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
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
	RTLR(5,Result);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("yyfixed_array", RTUD(2129), Current, 0, 1, 31216);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 7, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 33, "to_special", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", Result))(Result)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(43, 0, "count", arg1))(arg1)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* yydummy */

EIF_UNION Fpsdsvd (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2147483647L);
	return r;
}
/* yysuspended */

EIF_UNION Fpr6okj (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 105L);
	return r;
}
/* error_count */

EIF_UNION Fpq6s73 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2129,46, Dtype(Current)));
	return r;
}

/* yynewstate */

EIF_UNION Fpr_67b (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	return r;
}
/* yydefault */

EIF_UNION Fpr0u4y (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	return r;
}
/* yyeof */

EIF_UNION Fpr7zfs (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	return r;
}
/* yyerrlab */

EIF_UNION Fpr14_6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	return r;
}
/* yyreduce */

EIF_UNION Fpr1h2k (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	return r;
}
/* yy_clear_all */

void Fpr_j9p (EIF_REFERENCE Current)
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
	RTEAA("yy_clear_all", RTUD(2129), Current, 0, 0, 31217);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2129, 49, Dtype(Current)))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* is_suspended */

EIF_UNION Fpq55ah (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_suspended", RTUD(2129), Current, 0, 0, 31236);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2129, 91, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2129, 103, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

void Fp15x6x (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("yyss_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 87, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yytranslate_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 60, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yyr1_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 61, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yytypes1_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 68, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yytypes2_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 69, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yydefact_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 62, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yydefgoto_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 63, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yypact_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 64, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yypgoto_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 65, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yytable_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 66, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yycheck_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2129, 67, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2130 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

