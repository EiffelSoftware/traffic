/*
 * Code for class TRAFFIC_LINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Foal_4o(EIF_REFERENCE);
extern void Foa4e7b(EIF_REFERENCE, EIF_UNION);
extern void Foah4iy(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Foavp5_(EIF_REFERENCE);
extern void Foawc3m(EIF_REFERENCE);
extern void Foaxnzv(EIF_REFERENCE, EIF_UNION);
extern void Foayaxh(EIF_REFERENCE);
extern EIF_UNION Foas4fi(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foalc61(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foa06i7(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foajfd6(EIF_REFERENCE);
extern EIF_UNION Foa7nwf(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Foaj2bt(EIF_REFERENCE);
extern void Foaisgk(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Foatsc4(EIF_REFERENCE);
extern void Foaz8qc(EIF_REFERENCE);
extern EIF_UNION Foamn2a(EIF_REFERENCE);
extern EIF_UNION Foaufar(EIF_REFERENCE);
extern void Foa_wnz(EIF_REFERENCE);
extern void Foazlsq(EIF_REFERENCE);
extern EIF_UNION Foau18d(EIF_REFERENCE);
extern void Foa24b2(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Foaq6mn(EIF_REFERENCE);
extern void Foa0jll(EIF_REFERENCE);
extern EIF_UNION Foa1ugu(EIF_REFERENCE);
extern EIF_UNION Foa2heg(EIF_REFERENCE, EIF_UNION);
extern void Foa3r9p(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Foaruj9(EIF_REFERENCE);
extern void Foashhw(EIF_REFERENCE);
extern void Foaw_08(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foa5p2k(EIF_REFERENCE);
extern void Foa414y(EIF_REFERENCE, EIF_UNION);
extern void Foayyu3(EIF_REFERENCE);
extern void Fp0zaiv(EIF_REFERENCE, int);
extern void EIF_Minit1976(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* item */

EIF_UNION Foal_4o (EIF_REFERENCE Current)
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
	RTEAA("item", RTUD(1975), Current, 0, 0, 28092);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 76, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype));
	ui4_1 = ti4_1;
	Result = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 62, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* extend */

void Foa4e7b (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(16);
	RTLR(14,ur4);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(11,loc4);
	RTLR(12,loc5);
	RTLR(0,Current);
	RTLR(10,arg1);
	RTLR(13,loc1);
	RTLR(15,loc2);
	RTLR(3,loc3);
	RTLR(2,ur1);
	RTLR(5,ur2);
	RTLR(9,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("extend", RTUD(1975), Current, 5, 1, 28116);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_terminal_1", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			ur1 = RTCCL(Current);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc3 = (EIF_REFERENCE)RTCCL(tr2);
		} else {
			RTHOOK(5);
			tr1 = RTLN(RTUD(1977));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			ur1 = RTCCL(tr2);
			ur2 = RTCCL(Current);
			tr3 = RTLN(RTUD(2010));
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur3 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr3)))(tr3, ur3x);
			RTNHOOK(5);
			RTCI2(tr3);
			ur3 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1977, 65, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(5);
			RTCI2(tr1);
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
		}

	} else {

		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			ur1 = RTCCL(Current);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc3 = (EIF_REFERENCE)RTCCL(tr2);
		} else {
			RTHOOK(8);
			tr1 = RTLN(RTUD(1977));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			ur1 = RTCCL(tr2);
			ur2 = RTCCL(Current);
			tr3 = RTLN(RTUD(2010));
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur3 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr3)))(tr3, ur3x);
			RTNHOOK(8);
			RTCI2(tr3);
			ur3 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1977, 65, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(8);
			RTCI2(tr1);
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
		}

	}


	RTHOOK(9);
	ur1 = RTCCL(Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(10);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc4 = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(11);
		tr1 = RTLN(RTUD(1977));
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(Current);
		tr2 = RTLN(RTUD(2010));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur3 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr2)))(tr2, ur3x);
		RTNHOOK(11);
		RTCI2(tr2);
		ur3 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1977, 65, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
		RTNHOOK(11);
		RTCI2(tr1);
		loc4 = (EIF_REFERENCE)RTCCL(tr1);
	}

	RTHOOK(12);
	{
		static int16 typarr [] = {1975,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(12);
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(13);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc3 + RTVA(1977, 43, "position", loc3));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(13);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(14);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc4 + RTVA(1977, 43, "position", loc4));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(14);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(15);
	tr1 = RTLN(RTUD(1974));
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc4);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	ur3 = RTCCL(tr2);
	ur4 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1974, 69, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
	RTNHOOK(15);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(16);
	{
		static int16 typarr [] = {1975,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(16);
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(17);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc4 + RTVA(1977, 43, "position", loc4));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(17);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(18);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc3 + RTVA(1977, 43, "position", loc3));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(18);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(19);
	tr1 = RTLN(RTUD(1974));
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc3);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	ur3 = RTCCL(tr2);
	ur4 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1974, 69, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
	RTNHOOK(19);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(20);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 92, dtype))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("new_place_added", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 62, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("added_at_end", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("one_more", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg1
}

/* make */

void Foah4iy (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(5,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("make", RTUD(1975), Current, 1, 2, 28087);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_type_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(5);
	loc1 = RTCCL(arg2);
	loc1 = RTRV(RTUD(1894), loc1);

	RTHOOK(6);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	}

	RTHOOK(8);
	tr1 = RTLNSMART(RTWCT(1975, 96, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2144, 78, Dtype(tr1)))(tr1);
	RTNHOOK(8);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = RTLNSMART(RTWCT(1975, 97, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2144, 78, Dtype(tr1)))(tr1);
	RTNHOOK(9);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTLNSMART(RTWCT(1975, 10, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(10);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 10, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(11);
	tr1 = RTLNSMART(RTWCT(1975, 11, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(11);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(12);
	tr1 = RTLNSMART(RTWCT(1975, 12, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2197, 30, Dtype(tr1)))(tr1);
	RTNHOOK(12);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype));
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 36, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("has_type_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("type_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("count_line_section_not_void", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("element_inserted_event_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("element_removed_event_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("one_direction_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("other_direction_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* highlight */

void Foavp5_ (EIF_REFERENCE Current)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("highlight", RTUD(1975), Current, 1, 0, 28101);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1975, 20, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1813));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 12, "highlight", tr1))(tr1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(8);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", loc1))(loc1, uc1x);
	RTHOOK(9);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 12, "highlight", tr1))(tr1);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(9);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 10, dtype));
	{
		static int16 typarr [] = {1975,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("highlighted", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 20, dtype));
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(3);
	RTEE;
}

/* unhighlight */

void Foawc3m (EIF_REFERENCE Current)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("unhighlight", RTUD(1975), Current, 1, 0, 28102);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1975, 20, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(2);
	tr1 = RTLN(RTUD(1813));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 45, "unhighlight", tr1))(tr1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(8);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", loc1))(loc1, uc1x);
	RTHOOK(9);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 45, "unhighlight", tr1))(tr1);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(9);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 10, dtype));
	{
		static int16 typarr [] = {1975,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("unhighlighted", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 20, dtype));
		if ((EIF_BOOLEAN) !tc3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTLO(3);
	RTEE;
}

/* add_to_map */

void Foaxnzv (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,loc1);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("add_to_map", RTUD(1975), Current, 1, 1, 28104);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_map_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype));
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("insertable", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 88, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(6);
	tr1 = RTLN(RTUD(1813));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(8);
	uc1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", loc1))(loc1, uc1x);
	RTHOOK(9);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 84, "add_to_map", tr1))(tr1, ur1x);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(13);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", loc1))(loc1, uc1x);
	RTHOOK(14);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(15);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 84, "add_to_map", tr1))(tr1, ur1x);
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(14);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("is_in_map", EX_POST);
		tc3 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype));
		if (tc3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* remove_from_map */

void Foayaxh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("remove_from_map", RTUD(1975), Current, 0, 0, 28105);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_in_map", EX_PRE);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype));
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_removable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 89, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1975, 84, dtype))(Current);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("not_in_map", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype));
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("map_unset", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(2);
	RTEE;
}

/* has */

EIF_UNION Foas4fi (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("has", RTUD(1975), Current, 0, 1, 28097);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 90, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (!tc1) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 90, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		Result = tc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
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
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* i_th */

EIF_UNION Foalc61 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,Current);
	RTLR(1,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("i_th", RTUD(1975), Current, 0, 1, 28091);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(4);
		Result = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
	} else {
		RTHOOK(5);
		Result = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 84, "item", Result))(Result, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_insertable */

EIF_UNION Foa06i7 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(2,Current);
	RTLR(0,loc1);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("is_insertable", RTUD(1975), Current, 1, 1, 28111);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

	RTHOOK(2);
	tr1 = RTLN(RTUD(1813));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc1))(loc1);
	RTHOOK(4);
	tc1 = '\01';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
	if (!tc2) {
		tc1 = (EIF_BOOLEAN) !Result;
	}
	while (!(tc1)) {

		RTHOOK(5);
		tc2 = '\0';
		tc3 = '\0';
		tc4 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 79, "start_node", tr1));
		RTNHOOK(5);
		tc5 = *(EIF_BOOLEAN *)(tr2 + RTVA(1977, 33, "is_in_map", tr2));
		if (tc5) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 80, "end_node", tr1));
			RTNHOOK(5);
			tc5 = *(EIF_BOOLEAN *)(tr2 + RTVA(1977, 33, "is_in_map", tr2));
			tc4 = tc5;
		}
		if (tc4) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tc4 = *(EIF_BOOLEAN *)(tr2 + RTVA(1973, 16, "is_in_map", tr2));
			tc3 = tc4;
		}
		if (tc3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(5);
			tc3 = *(EIF_BOOLEAN *)(tr2 + RTVA(1973, 16, "is_in_map", tr2));
			tc2 = tc3;
		}
		if (tc2) {
			RTHOOK(6);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		}

		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc1))(loc1);
		RTHOOK(4);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			tc1 = (EIF_BOOLEAN) !Result;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* connection_count */

EIF_UNION Foajfd6 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("connection_count", RTUD(1975), Current, 0, 0, 28089);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, Dtype(Current)));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2144, 88, "count", tr1));
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* angle */

EIF_UNION Foa7nwf (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
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

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);

	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTEAA("angle", RTUD(1975), Current, 5, 2, 28085);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 47, "x", arg1));
	tr8_2 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 47, "x", arg2));
	loc1 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	RTHOOK(2);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(2010, 48, "y", arg1));
	tr8_2 = *(EIF_REAL_64 *)(arg2 + RTVA(2010, 48, "y", arg2));
	loc2 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	RTHOOK(3);
	ur8_1 = (EIF_REAL_64)((EIF_REAL_64)(loc1 * loc1) + (EIF_REAL_64)(loc2 * loc2));
	loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 30, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);

	RTHOOK(4);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(loc3 != tr8_1)) {
		RTHOOK(5);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		loc4 = (EIF_REAL_64)tr8_1;

		RTHOOK(6);
		tc1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(loc1 >= tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tc1 = (EIF_BOOLEAN)(loc2 >= tr8_1);
		}
		if (tc1) {
			RTHOOK(7);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 27, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			RTHOOK(8);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 6, dtype))(Current)).value.EIF_REAL_64_value);
			loc5 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(loc5 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
			RTHOOK(9);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
			loc5 += tr8_1;
		} else {
			RTHOOK(10);
			tc1 = '\0';
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN)(loc1 < tr8_1)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(loc2 >= tr8_1);
			}
		if (tc1) {
			RTHOOK(11);
			tr8_1 = eif_abs_real64 (loc1);
			loc1 = (EIF_REAL_64)tr8_1;
			RTHOOK(12);
			tr8_1 = eif_abs_real64 (loc2);
			loc2 = (EIF_REAL_64)tr8_1;
			RTHOOK(13);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 27, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			RTHOOK(14);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 6, dtype))(Current)).value.EIF_REAL_64_value);
			loc5 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(loc5 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
			RTHOOK(15);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
			loc5 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - loc5);
		} else {
			RTHOOK(16);
			tc1 = '\0';
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN)(loc1 < tr8_1)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(loc2 < tr8_1);
			}
		if (tc1) {
			RTHOOK(17);
			tr8_1 = eif_abs_real64 (loc1);
			loc1 = (EIF_REAL_64)tr8_1;
			RTHOOK(18);
			tr8_1 = eif_abs_real64 (loc2);
			loc2 = (EIF_REAL_64)tr8_1;
			RTHOOK(19);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 27, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			RTHOOK(20);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 6, dtype))(Current)).value.EIF_REAL_64_value);
			loc5 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(loc5 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
		} else {
			RTHOOK(21);
			tc1 = '\0';
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN)(loc1 >= tr8_1)) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tc1 = (EIF_BOOLEAN)(loc2 < tr8_1);
			}
		if (tc1) {
			RTHOOK(22);
			tr8_1 = eif_abs_real64 (loc1);
			loc1 = (EIF_REAL_64)tr8_1;
			RTHOOK(23);
			tr8_1 = eif_abs_real64 (loc2);
			loc2 = (EIF_REAL_64)tr8_1;
			RTHOOK(24);
			ur8_1 = (EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (loc3));
			loc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 27, dtype))(Current, ur8_1x)).value.EIF_REAL_64_value);
			RTHOOK(25);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 6, dtype))(Current)).value.EIF_REAL_64_value);
			loc5 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(loc5 * tr8_1)) /  (EIF_REAL_64) (tr8_2));
			RTHOOK(26);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 360L));
			loc5 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - loc5);
		}}}}


		RTHOOK(27);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(loc5 < tr8_1)) {
			RTHOOK(28);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 360L));
			loc5 += tr8_1;
		} else {
			RTHOOK(29);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 360L));
		if ((EIF_BOOLEAN)(loc5 > tr8_1)) {
			RTHOOK(30);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 360L));
			loc5 -= tr8_1;
		}}

	}


	RTHOOK(31);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
	if ((EIF_BOOLEAN)(loc5 > tr8_1)) {
		RTHOOK(32);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 180L));
		Result = (EIF_REAL_64)(EIF_REAL_64)(loc5 - tr8_1);
	} else {
		RTHOOK(33);
		Result = (EIF_REAL_64)loc5;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_UNION r; r.type = SK_REAL64; r.value.EIF_REAL_64_value = Result; return r; }
#undef arg2
#undef arg1
}

/* count */

EIF_UNION Foaj2bt (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("count", RTUD(1975), Current, 0, 0, 28090);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, Dtype(Current)))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(Result + ((EIF_INTEGER_32) 1L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* make_with_terminal */

void Foaisgk (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg3 arg3x.value.EIF_REFERENCE_value
#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(6,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(5,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTEAA("make_with_terminal", RTUD(1975), Current, 0, 3, 28088);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", arg1))(arg1)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_type_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_place_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 57, dtype))(Current, ur1x, ur2x);
	RTHOOK(6);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype)) = (EIF_REFERENCE)RTCCL(arg3);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype));
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 36, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("has_type_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("type_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_line_section_not_void", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("element_inserted_event_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("element_removed_event_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("one_direction_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("other_direction_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* is_empty */

EIF_UNION Foatsc4 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_empty", RTUD(1975), Current, 0, 0, 28098);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, Dtype(Current)));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 77, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* remove_color */

void Foaz8qc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_color", RTUD(1975), Current, 0, 0, 28108);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 70, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 10, dtype));
	{
		static int16 typarr [] = {1975,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("color_removed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 70, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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

/* hash_code */

EIF_UNION Foamn2a (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(0,Current);
	RTLR(4,ur1);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("hash_code", RTUD(1975), Current, 0, 0, 28093);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1894, 13, "name", tr2));
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(105, 0, "hash_code", tr2))(tr2)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

/* after */

EIF_UNION Foaufar (EIF_REFERENCE Current)
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
	RTEAA("after", RTUD(1975), Current, 0, 0, 28099);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 > ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* remove_last */

void Foa_wnz (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(9);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,tr7);
	RTLR(0,Current);
	RTLR(8,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_last", RTUD(1975), Current, 0, 0, 28109);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("count_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		tr1 = tr2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		tr2 = tr3;
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		tr3 = tr4;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr5 = RTLNTS(typres, 2, 0);

	}
	tr6 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tr7 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr6))(tr6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	((EIF_TYPED_ELEMENT *)tr5+1)->element.rarg = tr7;
	RTAR(tr5,tr7);
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr4))(tr4, ur1x);

	RTHOOK(3);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	tc1 = *(EIF_BOOLEAN *)(tr5 + RTVA(1974, 31, "is_in_map", tr5));
	if (tc1) {
		RTHOOK(4);
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr5))(tr5);
	}

	RTHOOK(5);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 123, "remove_last", tr4))(tr4);
	RTHOOK(6);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr5 = RTLNTS(typres, 2, 0);

	}
	tr6 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	tr7 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr6))(tr6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	((EIF_TYPED_ELEMENT *)tr5+1)->element.rarg = tr7;
	RTAR(tr5,tr7);
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr4))(tr4, ur1x);

	RTHOOK(7);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(7);
	tc1 = *(EIF_BOOLEAN *)(tr5 + RTVA(1974, 31, "is_in_map", tr5));
	if (tc1) {
		RTHOOK(8);
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr5))(tr5);
	}

	RTHOOK(9);
	tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 122, "remove_first", tr4))(tr4);

	RTHOOK(10);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(11);
		tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr5))(tr5)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)RTCCL(tr4);
	} else {
		RTHOOK(12);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)NULL;
		RTHOOK(14);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)NULL;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("count_smaller", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("terminals_set", EX_POST);
		tc1 = '\01';
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 0L))) {
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tr5 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tr6 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)(RTCEQ(tr4, tr1) && (EIF_BOOLEAN)(tr5 != NULL)) && RTCEQ(tr6, tr2));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("terminals_set", EX_POST);
		tc1 = '\01';
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tr5 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tr6 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(tr4 == NULL) && (EIF_BOOLEAN)(tr5 == NULL)) && RTCEQ(tr6, tr3));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(2);
	RTEE;
}

/* wipe_out */

void Foazlsq (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(0,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(1975), Current, 0, 0, 28107);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("old_terminal_set", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 30, "start", tr1))(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
		{
			static int16 typarr [] = {1975,-7,1,726,1974,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr4;
		RTAR(tr2,tr4);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr2))(tr2);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 51, "forth", tr1))(tr1);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 136, "wipe_out", tr1))(tr1);

	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 30, "start", tr1))(tr1);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr2))(tr2);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
		{
			static int16 typarr [] = {1975,-7,1,726,1974,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr4;
		RTAR(tr2,tr4);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 51, "forth", tr1))(tr1);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 136, "wipe_out", tr1))(tr1);
	RTHOOK(14);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(15);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("terminals_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("only_one_left", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(2);
	RTEE;
}

/* is_before */

EIF_UNION Foau18d (EIF_REFERENCE Current)
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
	RTEAA("is_before", RTUD(1975), Current, 0, 0, 28100);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, Dtype(Current)));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* put_first */

void Foa24b2 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("put_first", RTUD(1975), Current, 0, 2, 28114);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("l1_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("l2_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("l1_fits", EX_PRE);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tc1 = RTCEQ(tr1, tr2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("l2_fits", EX_PRE);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tc1 = RTCEQ(tr1, tr2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("l1_fits_l2", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 79, "start_node", arg1));
		tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1974, 80, "end_node", arg2));
		if (RTCEQ(tr1, tr2)) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 80, "end_node", arg1));
			tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1974, 79, "start_node", arg2));
			tc1 = RTCEQ(tr1, tr2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 100, "put_first", tr1))(tr1, ur1x);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype)) = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}

	RTHOOK(12);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 82, "set_line", arg1))(arg1, ur1x);
	RTHOOK(13);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 82, "set_line", arg2))(arg2, ur1x);

	RTHOOK(14);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype));
	if (tc1) {
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 84, "add_to_map", arg1))(arg1, ur1x);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 84, "add_to_map", arg2))(arg2, ur1x);
	}

	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = arg1;
	RTAR(tr2,arg1);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTHOOK(18);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = arg2;
	RTAR(tr2,arg2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* road_points */

EIF_UNION Foaq6mn (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(11);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,loc2);
	RTLR(0,Current);
	RTLR(5,loc1);
	RTLR(2,Result);
	RTLR(4,ur1);
	RTLR(10,loc5);
	RTLR(3,loc6);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTEAA("road_points", RTUD(1975), Current, 6, 0, 28094);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {1975,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tr1 = RTLN(RTUD(1813));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2);
	RTCI2(tr1);
	loc6 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc6))(loc6);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc6))(loc6)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1974, 72, "roads", tr1));
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(6);
		loc4 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

		RTHOOK(7);
		tc2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 0, "first", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr2, tr3)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(7);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tc2 = RTCEQ(tr2, tr3);
		}
		if (tc2) {
			RTHOOK(8);
			loc3 = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		} else {
			RTHOOK(9);
			tc2 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 1, "last", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(9);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			if (RTCEQ(tr2, tr3)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(9);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(171, 0, "first", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(9);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1960, 69, "origin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc2 = RTCEQ(tr2, tr3);
			}
		if (tc2) {
			RTHOOK(10);
			loc3 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 47, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(11);
			tr2 = RTMS_EX_H("Invalid roads for given line section\012",37,1924112650);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(152, 30, "putstring", tr1))(tr1, ur1x);
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 47, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr2 = RTMS_EX_H("Line section origin: ",21,640604960);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr4 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr3))(tr3)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr3 = *(EIF_REFERENCE *)(tr4 + RTVA(1973, 40, "name", tr4));
			ur1 = RTCCL(tr3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			tr2 = RTMS_EX_H(" - Line section destination:",28,726767418);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr3))(tr3, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc6))(loc6)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr4 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", tr3))(tr3)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			RTNHOOK(12);
			tr3 = *(EIF_REFERENCE *)(tr4 + RTVA(1973, 40, "name", tr4));
			ur1 = RTCCL(tr3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr3))(tr3, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(152, 30, "putstring", tr1))(tr1, ur1x);
		}}


		RTHOOK(13);
		if (loc3) {

			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 6, "finish", loc1))(loc1);
			RTHOOK(15);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(200, 0, "before", loc1))(loc1)).value.EIF_BOOLEAN_value);
			while (!(tc2)) {
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(16);
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1960, 27, "polypoints", tr1));
				loc2 = (EIF_REFERENCE)RTCCL(tr2);

				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 54, "finish", loc2))(loc2);
				RTHOOK(18);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 70, "before", loc2))(loc2)).value.EIF_BOOLEAN_value);
				while (!(tc3)) {
					RTHOOK(19);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					loc5 = (EIF_REFERENCE)RTCCL(tr1);
					RTHOOK(20);
					ur1 = RTCCL(loc5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", Result))(Result, ur1x);
					RTHOOK(21);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 68, "back", loc2))(loc2);
					RTHOOK(18);
					tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 70, "before", loc2))(loc2)).value.EIF_BOOLEAN_value);
					;
				}

				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(200, 1, "back", loc1))(loc1);
				RTHOOK(15);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(200, 0, "before", loc1))(loc1)).value.EIF_BOOLEAN_value);
				;
			}

		} else {

			RTHOOK(23);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", loc1))(loc1);
			RTHOOK(24);
			tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
			while (!(tc4)) {
				RTHOOK(25);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(25);
				tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1960, 27, "polypoints", tr1));
				loc2 = (EIF_REFERENCE)RTCCL(tr2);

				RTHOOK(26);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 30, "start", loc2))(loc2);
				RTHOOK(27);
				tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
				while (!(tc5)) {
					RTHOOK(28);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 66, "item_for_iteration", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					loc5 = (EIF_REFERENCE)RTCCL(tr1);
					RTHOOK(29);
					ur1 = RTCCL(loc5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", Result))(Result, ur1x);
					RTHOOK(30);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2190, 55, "forth", loc2))(loc2);
					RTHOOK(27);
					tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2190, 69, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
					;
				}

				RTHOOK(31);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", loc1))(loc1);
				RTHOOK(24);
				tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(115, 5, "after", loc1))(loc1)).value.EIF_BOOLEAN_value);
				;
			}

		}

		RTHOOK(32);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1975, 73, dtype))(Current);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc6))(loc6)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* remove_first */

void Foa0jll (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(0,Current);
	RTLR(7,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_first", RTUD(1975), Current, 0, 0, 28110);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("count_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		tr1 = tr2;
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		tr2 = tr3;
		in_assertion = 0;
	}
	RTHOOK(2);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr4 = RTLNTS(typres, 2, 0);

	}
	tr5 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tr6 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr5))(tr5)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	((EIF_TYPED_ELEMENT *)tr4+1)->element.rarg = tr6;
	RTAR(tr4,tr6);
	ur1 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr3))(tr3, ur1x);
	RTHOOK(3);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr4 = RTLNTS(typres, 2, 0);

	}
	tr5 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	tr6 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr5))(tr5)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	((EIF_TYPED_ELEMENT *)tr4+1)->element.rarg = tr6;
	RTAR(tr4,tr6);
	ur1 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr3))(tr3, ur1x);

	RTHOOK(4);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tc1 = *(EIF_BOOLEAN *)(tr4 + RTVA(1974, 31, "is_in_map", tr4));
	if (tc1) {
		RTHOOK(5);
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr4))(tr4);
	}


	RTHOOK(6);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(6);
	tc1 = *(EIF_BOOLEAN *)(tr4 + RTVA(1974, 31, "is_in_map", tr4));
	if (tc1) {
		RTHOOK(7);
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 86, "last", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr4))(tr4);
	}

	RTHOOK(8);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 122, "remove_first", tr3))(tr3);
	RTHOOK(9);
	tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 123, "remove_last", tr3))(tr3);

	RTHOOK(10);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_2 >= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(11);
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 85, "first", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(11);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)RTCCL(tr3);
		RTHOOK(12);
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype)) = (EIF_REFERENCE)RTCCL(tr3);
	} else {
		RTHOOK(13);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)NULL;
		RTHOOK(15);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)NULL;
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("count_smaller", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("terminals_set", EX_POST);
		tc1 = '\01';
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 0L))) {
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tr5 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			tr6 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)(RTCEQ(tr3, tr1) && (EIF_BOOLEAN)(tr4 != NULL)) && RTCEQ(tr5, tr6));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("terminals_set", EX_POST);
		tc1 = '\01';
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
			tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tr5 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			tc1 = (EIF_BOOLEAN)((EIF_BOOLEAN)((EIF_BOOLEAN)(tr3 == NULL) && (EIF_BOOLEAN)(tr4 == NULL)) && RTCEQ(tr5, tr2));
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
	RTLO(2);
	RTEE;
}

/* is_removable */

EIF_UNION Foa1ugu (EIF_REFERENCE Current)
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
	RTEAA("is_removable", RTUD(1975), Current, 0, 0, 28112);
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

/* is_terminal */

EIF_UNION Foa2heg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);
	RTLR(4,ur2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("is_terminal", RTUD(1975), Current, 0, 1, 28113);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_terminal_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\01';
	ur1 = RTCCL(arg1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
	ur2 = RTCCL(tr1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 36, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (!tc1) {
		ur1 = RTCCL(arg1);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		ur2 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 36, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		Result = tc1;
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

/* put_last */

void Foa3r9p (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
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
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("put_last", RTUD(1975), Current, 0, 2, 28115);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("l1_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("l2_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("l1_fits", EX_PRE);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tc1 = RTCEQ(tr1, tr2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("l2_fits", EX_PRE);
		tc1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", arg2))(arg2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
			tc1 = RTCEQ(tr1, tr2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("l1_fits_l2", EX_PRE);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 79, "start_node", arg1));
		tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1974, 80, "end_node", arg2));
		if (RTCEQ(tr1, tr2)) {
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1974, 80, "end_node", arg1));
			tr2 = *(EIF_REFERENCE *)(arg2 + RTVA(1974, 79, "start_node", arg2));
			tc1 = RTCEQ(tr1, tr2);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 102, "put_last", tr1))(tr1, ur1x);
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2144, 100, "put_first", tr1))(tr1, ur1x);

	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 67, "origin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}

	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 19, "destination", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(12);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 82, "set_line", arg1))(arg1, ur1x);
	RTHOOK(13);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 82, "set_line", arg2))(arg2, ur1x);

	RTHOOK(14);
	tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1975, 24, dtype));
	if (tc1) {
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 84, "add_to_map", arg1))(arg1, ur1x);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 56, dtype));
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1974, 84, "add_to_map", arg2))(arg2, ur1x);
	}

	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = arg1;
	RTAR(tr2,arg1);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTHOOK(18);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 11, dtype));
	{
		static int16 typarr [] = {1975,-7,1,726,1974,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = arg2;
	RTAR(tr2,arg2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* start */

void Foaruj9 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("start", RTUD(1975), Current, 0, 0, 28095);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("at_first", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype));
			tc1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("empty_convention", EX_POST);
		tc1 = '\01';
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 75, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 76, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTLO(2);
	RTEE;
}

/* forth */

void Foashhw (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	RTEAA("forth", RTUD(1975), Current, 0, 0, 28096);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 76, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("moved_forth", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* set_color */

void Foaw_08 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	RTEAA("set_color", RTUD(1975), Current, 0, 1, 28103);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_color_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 70, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 10, dtype));
	{
		static int16 typarr [] = {1975,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

		tr2 = RTLNTS(typres, 1, 1);

	}
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("color_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 70, dtype));
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

/* out */

EIF_UNION Foa5p2k (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(7,loc2);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(6,Result);
	RTLR(5,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("out", RTUD(1975), Current, 2, 0, 28118);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 70, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 70, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1814, 29, "out", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
	} else {
		RTHOOK(3);
		loc1 = RTMS_EX_H("",0,0);
	}

	RTHOOK(4);
	tr1 = RTMS_EX_H("Traffic ",8,1325153312);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1894, 9, "out", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(" line: ",7,991559712);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype));
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H(", ",2,11296);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(loc1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr1 = RTMS_EX_H("\012  one direction",16,34941294);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(5);
	tr1 = RTLN(RTUD(1813));
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1813, 31, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc2))(loc2);
	RTHOOK(7);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(8);
		tr1 = RTMS_EX_H("\011",1,9);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 81, "out", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc2))(loc2);
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(10);
	tr1 = RTMS_EX_H("\012  one direction",16,34941294);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(11);
	uc1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1813, 34, "set_cursor_direction", loc2))(loc2, uc1x);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 35, "start", loc2))(loc2);
	RTHOOK(13);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(14);
		tr1 = RTMS_EX_H("\011",1,9);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 32, "item_for_iteration", loc2))(loc2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(14);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1974, 81, "out", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr2))(tr2, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1813, 36, "forth", loc2))(loc2);
		RTHOOK(13);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1813, 38, "after", loc2))(loc2)).value.EIF_BOOLEAN_value);
		;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* prepend */

void Foa414y (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ur3x = {0, SK_REF};
#undef ur3
#define ur3 ur3x.value.EIF_REFERENCE_value
	EIF_UNION ur4x = {0, SK_REF};
#undef ur4
#define ur4 ur4x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(16);
	RTLR(14,ur4);
	RTLR(1,tr1);
	RTLR(6,tr2);
	RTLR(2,arg1);
	RTLR(10,tr4);
	RTLR(11,tr5);
	RTLR(9,loc4);
	RTLR(12,loc5);
	RTLR(0,Current);
	RTLR(7,tr3);
	RTLR(13,loc1);
	RTLR(15,loc2);
	RTLR(4,loc3);
	RTLR(3,ur1);
	RTLR(5,ur2);
	RTLR(8,ur3);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("prepend", RTUD(1975), Current, 5, 1, 28117);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_terminal_1", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(2);
	ur1 = RTCCL(Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(3);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", arg1))(arg1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(4);
		tr1 = RTLN(RTUD(1977));
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(Current);
		tr2 = RTLN(RTUD(2010));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur3 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr2)))(tr2, ur3x);
		RTNHOOK(4);
		RTCI2(tr2);
		ur3 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1977, 65, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
		RTNHOOK(4);
		RTCI2(tr1);
		loc3 = (EIF_REFERENCE)RTCCL(tr1);
	}


	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			ur1 = RTCCL(Current);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc4 = (EIF_REFERENCE)RTCCL(tr2);
		} else {
			RTHOOK(8);
			tr1 = RTLN(RTUD(1977));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			ur1 = RTCCL(tr2);
			ur2 = RTCCL(Current);
			tr3 = RTLN(RTUD(2010));
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
			tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur3 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr3)))(tr3, ur3x);
			RTNHOOK(8);
			RTCI2(tr3);
			ur3 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1977, 65, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(8);
			RTCI2(tr1);
			loc4 = (EIF_REFERENCE)RTCCL(tr1);
		}

	} else {

		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
		ur1 = RTCCL(Current);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 53, "has_stop", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			ur1 = RTCCL(Current);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1973, 47, "stop", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			loc4 = (EIF_REFERENCE)RTCCL(tr2);
		} else {
			RTHOOK(11);
			tr1 = RTLN(RTUD(1977));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			ur1 = RTCCL(tr2);
			ur2 = RTCCL(Current);
			tr3 = RTLN(RTUD(2010));
			tr4 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
			tr5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1973, 41, "position", tr4))(tr4)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur3 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr3)))(tr3, ur3x);
			RTNHOOK(11);
			RTCI2(tr3);
			ur3 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1977, 65, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(11);
			RTCI2(tr1);
			loc4 = (EIF_REFERENCE)RTCCL(tr1);
		}

	}

	RTHOOK(12);
	{
		static int16 typarr [] = {1975,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(12);
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(13);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc3 + RTVA(1977, 43, "position", loc3));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(13);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(14);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc4 + RTVA(1977, 43, "position", loc4));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(14);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(15);
	tr1 = RTLN(RTUD(1974));
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc4);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	ur3 = RTCCL(tr2);
	ur4 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1974, 69, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
	RTNHOOK(15);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(16);
	{
		static int16 typarr [] = {1975,2190,2010,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 2190, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2190, 89, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(16);
	RTCI2(tr1);
	loc5 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(17);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc4 + RTVA(1977, 43, "position", loc4));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(17);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(18);
	tr1 = RTLN(RTUD(2010));
	tr2 = *(EIF_REFERENCE *)(loc3 + RTVA(1977, 43, "position", loc3));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2010, 52, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(18);
	RTCI2(tr1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2190, 113, "force_last", loc5))(loc5, ur1x);
	RTHOOK(19);
	tr1 = RTLN(RTUD(1974));
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc3);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	ur3 = RTCCL(tr2);
	ur4 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTWF(1974, 69, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
	RTNHOOK(19);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(20);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1975, 91, dtype))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("new_place_added", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 62, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("added_at_end", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("one_more", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg1
}

/* remove_all_connections */

void Foayyu3 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(0,Current);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_all_connections", RTUD(1975), Current, 0, 0, 28106);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("old_terminal_set", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 67, dtype));
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 30, "start", tr1))(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
		{
			static int16 typarr [] = {1975,-7,1,726,1974,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr4;
		RTAR(tr2,tr4);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr2))(tr2);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 51, "forth", tr1))(tr1);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 136, "wipe_out", tr1))(tr1);

	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 30, "start", tr1))(tr1);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1974, 85, "remove_from_map", tr2))(tr2);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 12, dtype));
		{
			static int16 typarr [] = {1975,-7,1,726,1974,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 726, typarr);

			tr2 = RTLNTS(typres, 2, 0);

		}
		tr3 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tr4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 58, "item_for_iteration", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = tr4;
		RTAR(tr2,tr4);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 37, "publish", tr1))(tr1, ur1x);
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 51, "forth", tr1))(tr1);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2144, 12, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2144, 136, "wipe_out", tr1))(tr1);
	RTHOOK(14);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(15);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 59, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("terminals_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("only_one_left", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(2);
	RTEE;
}

void Fp0zaiv (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTIT("name_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("name_not_empty", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 65, dtype));
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("connections_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("type_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 66, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("counts_are_equal", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 96, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2144, 88, "count", tr1));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 97, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2144, 88, "count", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("terminal_1_is_first", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 68, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 62, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (RTCEQ(tr1, tr2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("terminal_2_is_last", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1975, 69, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1975, 62, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (RTCEQ(tr1, tr2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("after", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 76, dtype))(Current)).value.EIF_BOOLEAN_value);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1975, 61, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1975, 60, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1976 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

