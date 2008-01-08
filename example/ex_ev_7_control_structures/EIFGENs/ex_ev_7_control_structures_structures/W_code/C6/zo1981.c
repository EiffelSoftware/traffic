/*
 * Code for class ZOOMABLE_CANVAS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fob58cr(EIF_REFERENCE);
extern void Focb1sc(EIF_REFERENCE, EIF_UNION);
extern void Focbeuq(EIF_REFERENCE, EIF_UNION);
extern void Focglbp(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Focfagg(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Foceniu(EIF_REFERENCE, EIF_UNION);
extern void Focii4k(EIF_REFERENCE);
extern void Foccppz(EIF_REFERENCE, EIF_UNION);
extern void Focarw3(EIF_REFERENCE, EIF_UNION);
extern void Fochv6y(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
extern void Fob8t28(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Focd_k7(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Focdcnl(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Foci516(EIF_REFERENCE);
extern void Fob93zh(EIF_REFERENCE, EIF_UNION);
extern void Fob9g0v(EIF_REFERENCE);
extern void EIF_Minit1981(void);

extern EIF_REFERENCE _fAae8ejr_2_3_4_5_6_7_8();
extern EIF_REFERENCE _fAae63oi_2_3_4_5_6_7_8_9();
extern EIF_REFERENCE _fAafaccm();
extern EIF_REFERENCE _fAae9pe__2_3_4_5_6_7_8_9();
extern EIF_REFERENCE _fAae6gqw_2();
extern EIF_REFERENCE _fAaaq41_();
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

/* make */

void Fob58cr (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(0,Current);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1980), Current, 0, 0, 28164);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1979, 258, RTUD(1979)))(Current);
	RTHOOK(2);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.5);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 2L));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1980, 271, dtype))(Current, ur4_1x, ur4_2x);
	RTHOOK(3);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	*(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype)) = (EIF_REAL_32)tr4_1;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current + RTWA(1980, 50, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	RTHOOK(5);
	{
		static int16 typarr [] = {1980,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1980,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr2 = RTLNRW(typres, 0, (EIF_POINTER) _fAaaq41_, (EIF_POINTER)(0),1980, 26, 0, 0, 0, 1, 0, tr1, 0);

	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(1980, 51, dtype)) = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 147, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(6);
	{
		static int16 typarr [] = {1980,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1980,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr3 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 1L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	tr4 = * (EIF_REFERENCE *) tr3;
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	{
		static int16 typarr [] = {1980,1419,0,-7,1,726,737,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAae6gqw_2, (EIF_POINTER)(0),1980, 280, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(7);
	{
		static int16 typarr [] = {1980,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {1980,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr2 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 7L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr2)))(tr2, ui4_1x, ui4_2x);
	tr3 = * (EIF_REFERENCE *) tr2;
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr3+2) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr3+3) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr3+4) = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr3+5) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr3+6) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	{
		static int16 typarr [] = {1980,1419,0,-7,7,726,737,737,740,740,740,737,737,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr4 = RTLNRW(typres, 0, (EIF_POINTER) _fAae8ejr_2_3_4_5_6_7_8, (EIF_POINTER)(0),1980, 283, tr2, 0, 0, 1, 0, tr1, 7);

	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + RTWA(1980, 282, dtype)) = (EIF_REFERENCE)RTCCL(tr4);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(8);
	{
		static int16 typarr [] = {1980,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1980,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr3 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 8L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	tr4 = * (EIF_REFERENCE *) tr3;
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr4+2) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr4+3) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr4+4) = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr4+5) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr4+6) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr4+7) = (EIF_INTEGER_32)((EIF_INTEGER_32) 9L);
	{
		static int16 typarr [] = {1980,1419,0,-7,8,726,737,737,737,740,740,740,737,737,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAae9pe__2_3_4_5_6_7_8_9, (EIF_POINTER)(0),1980, 285, tr3, 0, 0, 1, 0, tr2, 8);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 152, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(9);
	{
		static int16 typarr [] = {1980,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1980,1438,737,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1438, typarr);

		tr3 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 8L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	tr4 = * (EIF_REFERENCE *) tr3;
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr4+2) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr4+3) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr4+4) = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr4+5) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr4+6) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr4+7) = (EIF_INTEGER_32)((EIF_INTEGER_32) 9L);
	{
		static int16 typarr [] = {1980,1419,0,-7,8,726,737,737,737,740,740,740,737,737,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAae63oi_2_3_4_5_6_7_8_9, (EIF_POINTER)(0),1980, 281, tr3, 0, 0, 1, 0, tr2, 8);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 49, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(10);
	{
		static int16 typarr [] = {1980,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1980,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAafaccm, (EIF_POINTER)(0),1980, 286, 0, 0, 0, 1, 0, tr2, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(2);
	RTEE;
}

/* go_left */

void Focb1sc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("go_left", RTUD(1980), Current, 0, 1, 28170);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 45, "right_by", tr1))(tr1, ur4_1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* go_right */

void Focbeuq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("go_right", RTUD(1980), Current, 0, 1, 28169);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 48, "left_by", tr1))(tr1, ur4_1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* pan */

void Focglbp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x, EIF_UNION arg6x, EIF_UNION arg7x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg7x.type == SK_REF) arg7x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg7x.value.EIF_REFERENCE_value;
#define arg7 arg7x.value.EIF_INTEGER_32_value
	if (arg6x.type == SK_REF) arg6x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg6x.value.EIF_REFERENCE_value;
#define arg6 arg6x.value.EIF_INTEGER_32_value
	if (arg5x.type == SK_REF) arg5x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_REAL_64_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_64_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_REAL_64_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(0,loc1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTEAA("pan", RTUD(1980), Current, 3, 7, 28176);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr4_1 = (EIF_REAL_32) (arg1);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) (arg2);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype));
		tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
		tr4_2 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 48, "x", loc1));
		tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype));
		tr8_1 = (EIF_REAL_64) (((EIF_REAL_32)((EIF_REAL_32)(tr4_1 - tr4_2) * tr4_3)));
		loc2 = (EIF_REAL_64)tr8_1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype));
		tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
		tr4_2 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 49, "y", loc1));
		tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype));
		tr8_1 = (EIF_REAL_64) (((EIF_REAL_32)((EIF_REAL_32)(tr4_1 - tr4_2) * tr4_3)));
		loc3 = (EIF_REAL_64)tr8_1;

		RTHOOK(5);
		tc1 = '\01';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if (!(EIF_BOOLEAN)(loc2 != tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tc1 = (EIF_BOOLEAN)(loc3 != tr8_1);
		}
		if (tc1) {
			RTHOOK(6);
			tr4_1 = (EIF_REAL_32) ((EIF_REAL_64)-loc3);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1980, 278, dtype))(Current, ur4_1x);
			RTHOOK(7);
			tr4_1 = (EIF_REAL_32) (loc2);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1980, 276, dtype))(Current, ur4_1x);
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
		}

	}

	RTHOOK(9);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(12);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* move_start */

void Focfagg (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x, EIF_UNION arg6x, EIF_UNION arg7x, EIF_UNION arg8x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg8x.type == SK_REF) arg8x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg8x.value.EIF_REFERENCE_value;
#define arg8 arg8x.value.EIF_INTEGER_32_value
	if (arg7x.type == SK_REF) arg7x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg7x.value.EIF_REFERENCE_value;
#define arg7 arg7x.value.EIF_INTEGER_32_value
	if (arg6x.type == SK_REF) arg6x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg6x.value.EIF_REFERENCE_value;
#define arg6 arg6x.value.EIF_REAL_64_value
	if (arg5x.type == SK_REF) arg5x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_REAL_64_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_64_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(4,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("move_start", RTUD(1980), Current, 1, 8, 28175);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 105, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1980, 282, dtype));
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
		RTHOOK(3);
		tr1 = RTLN(RTUD(1925));
		tr4_1 = (EIF_REAL_32) (arg1);
		ur4_1 = tr4_1;
		tr4_2 = (EIF_REAL_32) (arg2);
		ur4_2 = tr4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
		RTNHOOK(3);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(11);
	RTEE;
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* zoom */

void Foceniu (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("zoom", RTUD(1980), Current, 0, 1, 28174);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		tr4_1 = (EIF_REAL_32) (arg1);
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 287, dtype))(Current)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(tr4_1 * tr4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1980, 273, dtype))(Current, ur4_1x);
	} else {
		RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr4_1 = (EIF_REAL_32) (arg1);
		tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 287, dtype))(Current)).value.EIF_REAL_32_value);
		ur4_1 = (EIF_REAL_32)(tr4_1 * (EIF_REAL_32)-tr4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1980, 274, dtype))(Current, ur4_1x);
	}}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* release */

void Focii4k (EIF_REFERENCE Current)
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

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("release", RTUD(1980), Current, 0, 0, 28178);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 105, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1980, 282, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 6, "prune", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* go_up */

void Foccppz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("go_up", RTUD(1980), Current, 0, 1, 28171);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 47, "down_by", tr1))(tr1, ur4_1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* zoom_out */

void Focarw3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("zoom_out", RTUD(1980), Current, 0, 1, 28168);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype));
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(1980, 269, dtype));
	ur4_1 = tr4_2;
	tr4_2 = eif_min_real32 ((EIF_REAL_32)(tr4_1 + arg1),ur4_1);
	*(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype)) = (EIF_REAL_32)tr4_2;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 272, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* move_end */

void Fochv6y (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x, EIF_UNION arg4x, EIF_UNION arg5x, EIF_UNION arg6x, EIF_UNION arg7x, EIF_UNION arg8x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg8x.type == SK_REF) arg8x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg8x.value.EIF_REFERENCE_value;
#define arg8 arg8x.value.EIF_INTEGER_32_value
	if (arg7x.type == SK_REF) arg7x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg7x.value.EIF_REFERENCE_value;
#define arg7 arg7x.value.EIF_INTEGER_32_value
	if (arg6x.type == SK_REF) arg6x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg6x.value.EIF_REFERENCE_value;
#define arg6 arg6x.value.EIF_REAL_64_value
	if (arg5x.type == SK_REF) arg5x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg5x.value.EIF_REFERENCE_value;
#define arg5 arg5x.value.EIF_REAL_64_value
	if (arg4x.type == SK_REF) arg4x.value.EIF_REAL_64_value = * (EIF_REAL_64 *) arg4x.value.EIF_REFERENCE_value;
#define arg4 arg4x.value.EIF_REAL_64_value
	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(2,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTEAA("move_end", RTUD(1980), Current, 3, 8, 28177);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(1925));
	tr4_1 = (EIF_REAL_32) (arg1);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) (arg2);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype));
		tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 48, "x", tr1));
		tr4_2 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 48, "x", loc1));
		tr8_1 = (EIF_REAL_64) ((EIF_REAL_32)(tr4_1 - tr4_2));
		loc2 = (EIF_REAL_64)tr8_1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype));
		tr4_1 = *(EIF_REAL_32 *)(tr1 + RTVA(1925, 49, "y", tr1));
		tr4_2 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 49, "y", loc1));
		tr8_1 = (EIF_REAL_64) ((EIF_REAL_32)(tr4_1 - tr4_2));
		loc3 = (EIF_REAL_64)tr8_1;

		RTHOOK(5);
		tc1 = '\01';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if (!(EIF_BOOLEAN)(loc2 != tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tc1 = (EIF_BOOLEAN)(loc3 != tr8_1);
		}
		if (tc1) {
			RTHOOK(6);
			tr4_1 = (EIF_REAL_32) (loc3);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1980, 278, dtype))(Current, ur4_1x);
			RTHOOK(7);
			tr4_1 = (EIF_REAL_32) (loc2);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1980, 276, dtype))(Current, ur4_1x);
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
		}

	}

	RTHOOK(9);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1980, 284, dtype)) = (EIF_REFERENCE)NULL;
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 105, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(10);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1980, 282, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 6, "prune", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(13);
	RTEE;
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* set_zoom_limits */

void Fob8t28 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_REAL_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("set_zoom_limits", RTUD(1980), Current, 0, 2, 28165);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("min_smaller_than_max", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 < arg2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("min_greater_than_zero", EX_PRE);
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN)(arg1 > tr4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REAL_32 *)(Current + RTWA(1980, 270, dtype)) = (EIF_REAL_32)arg1;
	RTHOOK(4);
	*(EIF_REAL_32 *)(Current + RTWA(1980, 269, dtype)) = (EIF_REAL_32)arg2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* set_size */

void Focd_k7 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("set_size", RTUD(1980), Current, 0, 2, 28173);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_destroyed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 208, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_width_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_height_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1979, 181, RTUD(1979)))(Current, ui4_1x, ui4_2x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 272, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("width_assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("height_assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 165, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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

/* go_down */

void Focdcnl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("go_down", RTUD(1980), Current, 0, 1, 28172);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 46, "up_by", tr1))(tr1, ur4_1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* zoom_factor_stepwise */

EIF_UNION Foci516 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = (EIF_REAL_32)0.05f;
	return r;
}
/* zoom_in */

void Fob93zh (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_REAL_32_value = * (EIF_REAL_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_REAL_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("zoom_in", RTUD(1980), Current, 0, 1, 28167);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype));
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(1980, 270, dtype));
	ur4_1 = tr4_2;
	tr4_2 = eif_max_real32 ((EIF_REAL_32)(tr4_1 - arg1),ur4_1);
	*(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype)) = (EIF_REAL_32)tr4_2;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 272, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* update_visible_area */

void Fob9g0v (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(1,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);
	RTLR(6,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("update_visible_area", RTUD(1980), Current, 1, 0, 28166);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 40, "center", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc1 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr2 = RTLN(RTUD(1925));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr2)))(tr2, ur4_1x, ur4_2x);
	RTNHOOK(2);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(RTUD(1925));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	ur4_1 = tr4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1980, 165, dtype))(Current)).value.EIF_INTEGER_32_value);
	tr4_2 = (EIF_REAL_32) (ti4_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr3)))(tr3, ur4_1x, ur4_2x);
	RTNHOOK(2);
	RTCI2(tr3);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1809, 30, "make", tr1))(tr1, ur1x, ur2x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1980, 268, dtype));
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 50, "scale", tr1))(tr1, ur4_1x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr4_1 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 49, "y", loc1));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 40, "center", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr4_2 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 49, "y", tr3));
	ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 46, "up_by", tr1))(tr1, ur4_1x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr4_1 = *(EIF_REAL_32 *)(loc1 + RTVA(1925, 48, "x", loc1));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(1980, 168, dtype));
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 40, "center", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr4_2 = *(EIF_REAL_32 *)(tr3 + RTVA(1925, 48, "x", tr3));
	ur4_1 = (EIF_REAL_32)(tr4_1 - tr4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1809, 45, "right_by", tr1))(tr1, ur4_1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1980, 65, dtype))(Current);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
}

void EIF_Minit1981 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

