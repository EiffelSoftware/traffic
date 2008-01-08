/*
 * Code for class TRAFFIC_MAP_NODE_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpb53ed(EIF_REFERENCE);
extern EIF_UNION Fpb6rb_(EIF_REFERENCE);
extern void Fpb7d9m(EIF_REFERENCE);
extern void EIF_Minit2065(void);

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

/* name */

RTOID (Fpb53ed)

EIF_UNION Fpb53ed (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpb53ed,30481,RTMS_EX_H("map",3,7168368));
}
/* mandatory_attributes */

RTOID (Fpb6rb_)

EIF_UNION Fpb6rb_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_CHARACTER tc1;
	RTCFDD;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpb6rb_);
	dftype = Dftype(Current);
	dtype = Dtype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(0,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("mandatory_attributes", RTUD(2064), Current, 0, 0, 30481);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static int16 typarr [] = {2064,1462,774,-1};
		int16 typres;
		static int16 typcache = -1;

		typres = RTCID2(&typcache, dftype, 1462, typarr);

		tr1 = RTLN(typres);

	}
	ui4_1 = 1L;
	ui4_2 = 5L;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	tr2 = * (EIF_REFERENCE *) tr1;
	tr4 = RTMS_EX_H("name",4,1851878757);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("scale_factor",12,476534386);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("center_x",8,1237412728);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("center_y",8,1237412729);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	tr4 = RTMS_EX_H("radius",6,1909511027);
	tr3 = tr4;
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE)tr3;
	RTAR(tr2,tr3);
	Result = (EIF_REFERENCE)tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(39, 5, "compare_objects", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("object_comparison", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Result + RTVPA(39, 3, "object_comparison", Result));
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* process */

void Fpb7d9m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur8_1x = {0, SK_REAL64};
#undef ur8_1
#define ur8_1 ur8_1x.value.EIF_REAL_64_value
	EIF_UNION ur8_2x = {0, SK_REAL64};
#undef ur8_2
#define ur8_2 ur8_2x.value.EIF_REAL_64_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_3x = {0, SK_INT32};
#undef ui4_3
#define ui4_3 ui4_3x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(7);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(0,Current);
	RTLR(6,loc1);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("process", RTUD(2064), Current, 1, 0, 30482);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("has_source", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 42, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_error", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 116, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2064, 61, dtype));
		tr2 = RTMS_EX_H("name",4,1851878757);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1840, 48, "build_map", tr1))(tr1, ur1x);
	}


	RTHOOK(5);
	tr1 = RTMS_EX_H("scale_factor",12,476534386);
	ur1 = tr1;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {

		RTHOOK(6);
		tr1 = RTMS_EX_H("scale_factor",12,476534386);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 26, "is_double", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 40, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2064,1462,774,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 1462, typarr);

				tr1 = RTLN(typres);

			}
			ui4_2 = 1L;
			ui4_3 = 1L;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
			tr2 = * (EIF_REFERENCE *) tr1;
			tr4 = RTMS_EX_H("scale_factor",12,476534386);
			tr3 = tr4;
			*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
			RTAR(tr2,tr3);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2064, 95, dtype))(Current, ui4_1x, ur1x);
		}

		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 82, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr2 = RTMS_EX_H("scale_factor",12,476534386);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 41, dtype))(Current, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		RTNHOOK(8);
		tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 106, "to_double", tr2))(tr2)).value.EIF_REAL_64_value);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1924, 120, "set_scale_factor", tr1))(tr1, ur8_1x);
	}


	RTHOOK(9);
	tc1 = '\0';
	tc2 = '\0';
	tr1 = RTMS_EX_H("center_x",8,1237412728);
	ur1 = tr1;
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc3) {
		tr1 = RTMS_EX_H("center_y",8,1237412729);
		ur1 = tr1;
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc2 = tc3;
	}
	if (tc2) {
		tr1 = RTMS_EX_H("radius",6,1909511027);
		ur1 = tr1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {

		RTHOOK(10);
		tr1 = RTMS_EX_H("center_x",8,1237412728);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 26, "is_double", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 40, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2064,1462,774,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 1462, typarr);

				tr1 = RTLN(typres);

			}
			ui4_2 = 1L;
			ui4_3 = 1L;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
			tr2 = * (EIF_REFERENCE *) tr1;
			tr4 = RTMS_EX_H("center_x",8,1237412728);
			tr3 = tr4;
			*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
			RTAR(tr2,tr3);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2064, 95, dtype))(Current, ui4_1x, ur1x);
		}


		RTHOOK(12);
		tr1 = RTMS_EX_H("center_y",8,1237412729);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(12);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 26, "is_double", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(13);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 40, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2064,1462,774,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 1462, typarr);

				tr1 = RTLN(typres);

			}
			ui4_2 = 1L;
			ui4_3 = 1L;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
			tr2 = * (EIF_REFERENCE *) tr1;
			tr4 = RTMS_EX_H("center_y",8,1237412729);
			tr3 = tr4;
			*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
			RTAR(tr2,tr3);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2064, 95, dtype))(Current, ui4_1x, ur1x);
		}


		RTHOOK(14);
		tr1 = RTMS_EX_H("radius",6,1909511027);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 41, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(14);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 26, "is_double", tr1))(tr1)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(15);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 40, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			{
				static int16 typarr [] = {2064,1462,774,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 1462, typarr);

				tr1 = RTLN(typres);

			}
			ui4_2 = 1L;
			ui4_3 = 1L;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION))RTWPF(4, 0, Dtype(tr1)))(tr1, ui4_2x, ui4_3x);
			tr2 = * (EIF_REFERENCE *) tr1;
			tr4 = RTMS_EX_H("radius",6,1909511027);
			tr3 = tr4;
			*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE)tr3;
			RTAR(tr2,tr3);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2064, 95, dtype))(Current, ui4_1x, ur1x);
		}


		RTHOOK(16);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 116, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 82, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(17);
			tr2 = RTLN(RTUD(2010));
			tr3 = RTMS_EX_H("center_x",8,1237412728);
			ur1 = tr3;
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 47, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
			ur8_1 = tr8_1;
			tr3 = RTMS_EX_H("center_y",8,1237412729);
			ur1 = tr3;
			tr8_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 47, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
			ur8_2 = tr8_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2010, 51, Dtype(tr2)))(tr2, ur8_1x, ur8_2x);
			RTNHOOK(17);
			RTCI2(tr2);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1924, 117, "set_center", tr1))(tr1, ur1x);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 82, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTNHOOK(18);
			tr2 = RTMS_EX_H("radius",6,1909511027);
			ur1 = tr2;
			tr8_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2064, 47, dtype))(Current, ur1x)).value.EIF_REAL_64_value);
			ur8_1 = tr8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1924, 118, "set_radius", tr1))(tr1, ur8_1x);
		}

	}


	RTHOOK(19);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 56, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2064, 65, dtype))(Current);
	}

	RTHOOK(21);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2064, 3, dtype));
	loc1 = RTRV(RTUD(774), loc1);

	RTHOOK(22);
	tc1 = '\0';
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2064, 116, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc2) {
		tc1 = (EIF_BOOLEAN)(loc1 != NULL);
	}
	if (tc1) {
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2064, 61, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1840, 49, "map", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(23);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1924, 119, "set_description", tr2))(tr2, ur1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTLO(3);
	RTEE;
}

void EIF_Minit2065 (void)
{
	GTCX
	RTOTS (31851,Fpb53ed)
	RTOTS (31852,Fpb6rb_)
}


#ifdef __cplusplus
}
#endif

