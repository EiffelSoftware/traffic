/*
 * Code for class TRAFFIC_MAIN_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fo9je2y(EIF_REFERENCE);
extern void Fo9j10k(EIF_REFERENCE);
extern void Fo9a_xv(EIF_REFERENCE);
extern void Fo89p1m(EIF_REFERENCE);
extern EIF_UNION Fo9mnr1(EIF_REFERENCE);
extern void Fo9h37p(EIF_REFERENCE);
extern void Fo9ir5b(EIF_REFERENCE);
extern void Fo8813_(EIF_REFERENCE, EIF_UNION);
extern void Fo9acz8(EIF_REFERENCE);
extern EIF_UNION Fo9napo(EIF_REFERENCE);
extern EIF_UNION Fo9kpy6(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo88e6d(EIF_REFERENCE);
extern EIF_UNION Fo9nyna(EIF_REFERENCE);
extern void Fo9bnvh(EIF_REFERENCE);
extern EIF_UNION Fo9lcwt(EIF_REFERENCE);
extern void Fo9cas3(EIF_REFERENCE);
extern EIF_UNION Fo9l_uf(EIF_REFERENCE);
extern void EIF_Minit2044(void);

extern EIF_REFERENCE _fAafjeh0();
extern EIF_REFERENCE _fAabnssn();
extern EIF_REFERENCE _fAafq5qh();
extern EIF_REFERENCE _fAafo7xm();
extern EIF_REFERENCE _fAafqisv();
extern EIF_REFERENCE _fAafirke();
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

/* zoom_in */

void Fo9je2y (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("zoom_in", RTUD(2043), Current, 0, 0, 30346);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 318, dtype))(Current)).value.EIF_REAL_32_value);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 4, "zoom_in", tr1))(tr1, ur4_1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* zoom_out */

void Fo9j10k (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("zoom_out", RTUD(2043), Current, 0, 0, 30347);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 318, dtype))(Current)).value.EIF_REAL_32_value);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 41, "zoom_out", tr1))(tr1, ur4_1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* build_standard_toolbar */

void Fo9a_xv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION up3x = {0, SK_POINTER};
#undef up3
#define up3 up3x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(9);
	RTLR(1,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(7,tr4);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(6,ur1);
	RTLR(8,ur2);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("build_standard_toolbar", RTUD(2043), Current, 2, 0, 30341);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("toolbar_not_yet_created", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype));
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2043, 301, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTLN(RTUD(966));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(3);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTLN(RTUD(933));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 292, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 292, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr3 = RTMS_EX_H("..\\image\\zoom_in.png",20,1768972903);
	ur1 = tr3;
	tr4 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 88, dtype))(Current)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr4);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2079, 39, "pathname_from_file_system", tr2))(tr2, ur1x, ur2x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 88, "absolute_pathname", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1110, 9, "set_with_named_file", loc2))(loc2, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1009, 2, "set_pixmap", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(995, 1, "select_actions", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(7);
	{
		static int16 typarr [] = {2043,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {2043,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAafqisv, (EIF_POINTER)(0),2043, 311, 0, 0, 0, 1, 0, tr2, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1037, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(9);
	tr1 = RTLN(RTUD(966));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(9);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTLN(RTUD(933));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(10);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 292, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(11);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 292, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(11);
	tr3 = RTMS_EX_H("..\\image\\zoom_out.png",21,1665859431);
	ur1 = tr3;
	tr4 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 88, dtype))(Current)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur2 = RTCCL(tr4);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2079, 39, "pathname_from_file_system", tr2))(tr2, ur1x, ur2x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 88, "absolute_pathname", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1110, 9, "set_with_named_file", loc2))(loc2, ur1x);
	RTHOOK(12);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1009, 2, "set_pixmap", loc1))(loc1, ur1x);
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(995, 1, "select_actions", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(13);
	{
		static int16 typarr [] = {2043,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {2043,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAafq5qh, (EIF_POINTER)(0),2043, 312, 0, 0, 0, 1, 0, tr2, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1037, 4, "extend", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("toolbar_created", EX_POST);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype));
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(39, 1, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
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
	RTHOOK(16);
	RTLE;
	RTLO(4);
	RTEE;
}

/* build_main_container */

void Fo89p1m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(8);
	RTLR(1,tr1);
	RTLR(5,tr2);
	RTLR(7,tr3);
	RTLR(0,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("build_main_container", RTUD(2043), Current, 3, 0, 30339);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("main_container_not_yet_created", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 306, dtype));
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2043, 308, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1020, 4, "set_offset", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(4);
	tr1 = RTLN(RTUD(905));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(4);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLN(RTUD(912));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(5);
	RTCI2(tr1);
	loc2 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTLNSMART(RTWCT(2043, 307, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1981, 313, Dtype(tr1)))(tr1);
	RTNHOOK(6);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTLNSMART(RTWCT(2043, 306, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(7);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 306, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTLN(RTUD(898));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(8);
	RTCI2(tr1);
	loc3 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ui4_1 = ((EIF_INTEGER_32) 600L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1078, 25, "set_minimum_height", tr1))(tr1, ui4_1x);
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ui4_1 = ((EIF_INTEGER_32) 600L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1078, 24, "set_minimum_width", tr1))(tr1, ui4_1x);
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", tr1))(tr1, ur1x);
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", loc2))(loc2, ur1x);
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.5);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 10.0);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1981, 24, "set_zoom_limits", tr1))(tr1, ur4_1x, ur4_2x);
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(936, 14, "resize_actions", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(14);
	{
		static int16 typarr [] = {2043,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = Current;
	RTAR(tr1,Current);
	{
		static int16 typarr [] = {2043,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAafo7xm, (EIF_POINTER)(0),2043, 309, 0, 0, 0, 1, 0, tr1, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(944, 0, "force_extend", tr2))(tr2, ur1x);
	RTHOOK(15);
	tr1 = RTLNSMART(RTWCT(2043, 305, Current));
	tr2 = RTMS_EX_H("Run example",11,1252952165);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(927, 0, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(15);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 305, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 305, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", loc3))(loc3, ur1x);
	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 305, dtype));
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1093, 4, "set_item_position", loc3))(loc3, ur1x, ui4_1x, ui4_2x);
	RTHOOK(18);
	tr1 = RTLNSMART(RTWCT(2043, 304, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1982, 5, Dtype(tr1)))(tr1);
	RTNHOOK(18);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 304, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(19);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 304, dtype));
	ui4_1 = ((EIF_INTEGER_32) 200L);
	ui4_2 = ((EIF_INTEGER_32) 400L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1982, 18, "set_minimum_size", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(20);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 304, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1982, 218, "disable_edit", tr1))(tr1);
	RTHOOK(21);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 304, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", loc3))(loc3, ur1x);
	RTHOOK(22);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 304, dtype));
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 35L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1093, 4, "set_item_position", loc3))(loc3, ur1x, ui4_1x, ui4_2x);
	RTHOOK(23);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", loc1))(loc1, ur1x);
	RTHOOK(24);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1130, 11, "disable_item_expand", loc1))(loc1, ur1x);
	RTHOOK(25);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", loc1))(loc1, ur1x);
	RTHOOK(26);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 306, dtype));
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", tr1))(tr1, ur1x);
	RTHOOK(27);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 306, dtype));
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1130, 9, "set_padding", tr1))(tr1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("main_container_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 306, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTLO(5);
	RTEE;
}

/* window_height */

EIF_UNION Fo9mnr1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 600L);
	return r;
}
/* resize_canvas */

void Fo9h37p (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("resize_canvas", RTUD(2043), Current, 2, 0, 30344);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(925, 4, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = eif_max_int32 (ti4_1,ui4_1);
	loc1 = (EIF_INTEGER_32)ti4_2;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(925, 5, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = eif_max_int32 (ti4_1,ui4_1);
	loc2 = (EIF_INTEGER_32)ti4_2;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1981, 229, "set_size", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1981, 251, "set_minimum_size", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 308, dtype));
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1020, 7, "set_item_size", tr1))(tr1, ui4_1x, ui4_2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
}

/* move_to_center */

void Fo9ir5b (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(1,Current);
	RTLR(0,loc3);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("move_to_center", RTUD(2043), Current, 3, 0, 30345);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1981, 299, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = RTLN(RTUD(740));
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_2;
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1981, 42, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr1 = RTLN(RTUD(740));
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64)((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_3;
	loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2043, 313, dtype))(Current, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1981, 10, "map", tr1));
	RTNHOOK(2);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1924, 122, "center", tr2));
	RTNHOOK(2);
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 47, "x", tr1));
	tr4_1 = *(EIF_REAL_32 *)(loc3 + RTVA(1925, 48, "x", loc3));
	tr8_2 = (EIF_REAL_64) (tr4_1);
	loc1 = (EIF_REAL_64)(EIF_REAL_64)(tr8_1 - tr8_2);
	RTHOOK(3);
	tr8_1 = (EIF_REAL_64) ((((EIF_INTEGER_32) -1L)));
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1981, 10, "map", tr1));
	RTNHOOK(3);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(1924, 122, "center", tr2));
	RTNHOOK(3);
	tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(2010, 48, "y", tr1));
	tr4_1 = *(EIF_REAL_32 *)(loc3 + RTVA(1925, 49, "y", loc3));
	tr8_3 = (EIF_REAL_64) (tr4_1);
	loc2 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64)(tr8_1 * tr8_2) - tr8_3);

	RTHOOK(4);
	tc1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN)(loc1 != tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tc1 = (EIF_BOOLEAN)(loc2 != tr8_1);
	}
	if (tc1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
		tr4_1 = (EIF_REAL_32) (loc2);
		ur4_1 = tr4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 17, "go_down", tr1))(tr1, ur4_1x);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
		tr4_1 = (EIF_REAL_32) (loc1);
		ur4_1 = tr4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 18, "go_left", tr1))(tr1, ur4_1x);
	}

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1981, 258, "redraw", tr1))(tr1);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
}

/* set_example */

void Fo8813_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(2,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(6,tr3);
	RTLR(3,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_example", RTUD(2043), Current, 0, 1, 30338);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 304, dtype));
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2066, 76, "run", arg1))(arg1, ur1x, ur2x);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 305, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1084, 1, "select_actions", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	{
		static int16 typarr [] = {2043,-7,1,726,2066,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 726, typarr);

		tr1 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr1+1)->element.rarg = arg1;
	RTAR(tr1,arg1);
	{
		static int16 typarr [] = {2043,1419,2066,-7,0,726,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAabnssn, (EIF_POINTER)(0),2066, 78, 0, 0, 0, 1, 0, tr1, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr2))(tr2, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* build_standard_status_bar */

void Fo9acz8 (EIF_REFERENCE Current)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(5,tr3);
	RTLR(0,Current);
	RTLR(4,loc1);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("build_standard_status_bar", RTUD(2043), Current, 1, 0, 30340);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("status_bar_not_yet_created", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 302, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 303, dtype));
		RTTE((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 == NULL) && (EIF_BOOLEAN)(tr2 == NULL)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2043, 302, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(2);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 302, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 302, dtype));
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1130, 7, "set_border_width", tr1))(tr1, ui4_1x);
	RTHOOK(4);
	tr1 = RTLNSMART(RTWCT(2043, 303, Current));
	tr2 = RTMS_EX_H("Please run the example...",25,1645000750);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(927, 0, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2043, 303, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 303, dtype));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1022, 6, "align_text_left", tr1))(tr1);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 302, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 303, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", tr1))(tr1, ur1x);
	RTHOOK(7);
	tr1 = RTLN(RTUD(846));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
	RTNHOOK(7);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", loc1))(loc1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(8);
	{
		static int16 typarr [] = {2043,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {2043,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAafjeh0, (EIF_POINTER)(0),2043, 300, 0, 0, 0, 1, 0, tr2, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(986, 29, "add_idle_action", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("status_bar_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 302, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 303, dtype));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(tr1 != NULL) && (EIF_BOOLEAN)(tr2 != NULL))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(3);
	RTEE;
}

/* label_confirm_close_window */

RTOID (Fo9napo)

EIF_UNION Fo9napo (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fo9napo,30353,RTMS_EX_H("You are about to close this window.\012Click OK to proceed.",56,788708910));
}
/* client_to_map_coordinates */

EIF_UNION Fo9kpy6 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur4_1x = {0, SK_REAL32};
#undef ur4_1
#define ur4_1 ur4_1x.value.EIF_REAL_32_value
	EIF_UNION ur4_2x = {0, SK_REAL32};
#undef ur4_2
#define ur4_2 ur4_2x.value.EIF_REAL_32_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(5,Result);
	RTLR(3,loc6);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTEAA("client_to_map_coordinates", RTUD(2043), Current, 6, 2, 30348);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1L)));
	RTHOOK(2);
	loc2 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (arg2) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1981, 33, "parent", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(970, 11, "client_width", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr8_1 = (EIF_REAL_64) ((ti4_1));
	loc3 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (tr8_1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1981, 33, "parent", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(970, 12, "client_height", tr2))(tr2)).value.EIF_INTEGER_32_value);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = eif_max_int32 (ti4_1,ui4_1);
	loc5 = (EIF_INTEGER_32)ti4_2;
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (loc5);
	tr8_2 = (EIF_REAL_64) (loc5);
	loc4 = (EIF_REAL_64)(EIF_REAL_64)((EIF_REAL_64) ((EIF_REAL_64)(tr8_1 - loc2)) /  (EIF_REAL_64) (tr8_2));
	RTHOOK(6);
	loc6 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr1 = *(EIF_REFERENCE *)(loc6 + RTVA(1981, 22, "visible_area", loc6));
	RTNHOOK(6);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 38, "lower_left", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	loc6 = (EIF_REFERENCE)RTCCL(tr2);
	RTHOOK(7);
	tr1 = RTLN(RTUD(1925));
	tr4_1 = *(EIF_REAL_32 *)(loc6 + RTVA(1925, 48, "x", loc6));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 22, "visible_area", tr2));
	RTNHOOK(7);
	tr4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 34, "width", tr3))(tr3)).value.EIF_REAL_32_value);
	tr8_1 = (EIF_REAL_64) (tr4_2);
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64)(loc3 * tr8_1));
	tr2 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr2 = (EIF_REAL_32)(tr4_1 + tr4_2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(loc6 + RTVA(1925, 49, "y", loc6));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 22, "visible_area", tr2));
	RTNHOOK(7);
	tr4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1809, 35, "height", tr3))(tr3)).value.EIF_REAL_32_value);
	tr8_1 = (EIF_REAL_64) (tr4_3);
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64)(loc4 * tr8_1));
	tr2 = RTLN(RTUD(758));
	*(EIF_REAL_32 *)tr2 = (EIF_REAL_32)(tr4_2 + tr4_3);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(49, 10, "rounded", tr2))(tr2)).value.EIF_INTEGER_32_value);
	tr4_2 = (EIF_REAL_32) (ti4_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(1925, 47, Dtype(tr1)))(tr1, ur4_1x, ur4_2x);
	RTNHOOK(7);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

/* initialize */

void Fo88e6d (EIF_REFERENCE Current)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("initialize", RTUD(2043), Current, 0, 0, 30337);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_already_initialized", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 232, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(939, 7, RTUD(918)))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2043, 298, dtype))(Current);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 20, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(4);
	tr2 = RTLN(RTUD(937));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr2)))(tr2);
	RTNHOOK(4);
	RTCI2(tr2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", tr1))(tr1, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 20, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(5);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 301, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", tr1))(tr1, ur1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2043, 297, dtype))(Current);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 21, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(7);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 302, dtype));
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(970, 8, "extend", tr1))(tr1, ur1x);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2043, 296, dtype))(Current);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 306, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2043, 267, dtype))(Current, ur1x);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 285, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(10);
	{
		static int16 typarr [] = {2043,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {2043,1419,0,-7,0,726,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr3 = RTLNRW(typres, 0, (EIF_POINTER) _fAafirke, (EIF_POINTER)(0),2043, 299, 0, 0, 0, 1, 0, tr2, 0);

	}
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 314, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2043, 177, dtype))(Current, ur1x);
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1981, 299, "width", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr8_1 = (EIF_REAL_64) (ti4_1);
	tr1 = RTLN(RTUD(740));
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64)(tr8_1 * (EIF_REAL_64) 1.2);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1981, 42, "height", tr1))(tr1)).value.EIF_INTEGER_32_value);
	tr8_1 = (EIF_REAL_64) (ti4_2);
	tr1 = RTLN(RTUD(740));
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64)(tr8_1 * (EIF_REAL_64) 1.2);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(154, 9, "floor", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2043, 118, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("is_initialized", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 232, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	RTLO(2);
	RTEE;
}

/* zoom_factor_stepwise */

EIF_UNION Fo9nyna (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = (EIF_REAL_32)0.05f;
	return r;
}
/* request_close_window */

void Fo9bnvh (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(5,tr3);
	RTLR(2,Current);
	RTLR(0,loc1);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("request_close_window", RTUD(2043), Current, 1, 0, 30342);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(RTUD(925));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2043, 317, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(833, 0, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1004, 9, "show_modal_to_window", loc1))(loc1, ur1x);

	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(loc1 + RTVPA(833, 12, "selected_button", loc1));
	RTNHOOK(3);
	tr2 = RTLN(RTUD(428));
	RTCI2(tr2);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(865, 0, "ev_ok", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(123, 17, "as_string_32", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2043, 249, dtype))(Current);
		RTHOOK(5);
		tr1 = RTLN(RTUD(846));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(1, 25, Dtype(tr1)))(tr1);
		RTNHOOK(5);
		RTCI2(tr1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(964, 0, "application", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(939, 2, "destroy", tr2))(tr2);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(3);
	RTEE;
}

/* window_title */

RTOID (Fo9lcwt)

EIF_UNION Fo9lcwt (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fo9lcwt,30350,RTMS_EX_H("touch example",13,480353893));
}
/* update_status_label */

void Fo9cas3 (EIF_REFERENCE Current)
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
	EIF_CHARACTER tc2;
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

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("update_status_label", RTUD(2043), Current, 0, 0, 30343);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1981, 10, "map", tr1));
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1981, 10, "map", tr1));
		RTNHOOK(1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		tc2 = *(EIF_BOOLEAN *)(tr1 + RTVA(1841, 35, "is_time_running", tr1));
		tc1 = tc2;
	}
	if (tc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2043, 303, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2043, 307, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1981, 10, "map", tr2));
		RTNHOOK(2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1924, 95, "time", tr3))(tr3)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1841, 43, "out", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(927, 2, "set_text", tr1))(tr1, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
}

/* window_width */

EIF_UNION Fo9l_uf (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 800L);
	return r;
}
void EIF_Minit2044 (void)
{
	GTCX
	RTOTS (31703,Fo9lcwt)
	RTOTS (31706,Fo9napo)
}


#ifdef __cplusplus
}
#endif

