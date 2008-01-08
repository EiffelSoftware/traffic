/*
 * Code for class TRAFFIC_PLACE_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnay2rb(EIF_REFERENCE);
extern void Fna0oht(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fna2mao(EIF_REFERENCE);
extern void Fna1bff(EIF_REFERENCE, EIF_UNION);
extern void Fna1zc1(EIF_REFERENCE);
extern void Fna_0j6(EIF_REFERENCE, EIF_UNION);
extern void Fp_1nq3(EIF_REFERENCE, int);
extern void EIF_Minit1812(void);

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

void Fnay2rb (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1811), Current, 0, 0, 26265);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(RTWCT(1811, 31, Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(90, 0, Dtype(tr1)))(tr1);
	RTNHOOK(1);
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("pictures_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* set_description */

void Fna0oht (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_description", RTUD(1811), Current, 0, 1, 26267);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_description_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1811, 32, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("description_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 32, dtype));
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

/* out */

EIF_UNION Fna2mao (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(5);
	RTLR(2,tr1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(0,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("out", RTUD(1811), Current, 0, 0, 26270);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = RTMS_EX_H("",0,0);

	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(90, 11, "count", tr1));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(163, 2, "start", tr1))(tr1);
		RTHOOK(4);
		tr1 = RTMS_EX_H("pictures: ",10,1038520352);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		tc1 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
		while (!(tc1)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(163, 0, "item", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(115, 7, "forth", tr1))(tr1);

			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
			tc2 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
			if ((EIF_BOOLEAN) !tc2) {
				RTHOOK(9);
				tr1 = RTMS_EX_H(", ",2,11296);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				Result = (EIF_REFERENCE)RTCCL(tr1);
			}

			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
			tc1 = *(EIF_BOOLEAN *)(tr1 + RTVPA(90, 10, "after", tr1));
			;
		}

	}


	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 32, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {

		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(90, 11, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			tr1 = RTMS_EX_H(", ",2,11296);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			Result = (EIF_REFERENCE)RTCCL(tr1);
		}

		RTHOOK(13);
		tr1 = RTMS_EX_H("description: ",13,1812460832);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", Result))(Result, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1811, 32, dtype));
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		Result = (EIF_REFERENCE)RTCCL(tr2);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* remove_picture */

void Fna1bff (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(2,arg1);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_picture", RTUD(1811), Current, 0, 1, 26268);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("picture_in_pictures", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 6, "prune", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("picture_removed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
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

/* remove_description */

void Fna1zc1 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_description", RTUD(1811), Current, 0, 0, 26269);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, NULL);
	*(EIF_REFERENCE *)(Current + RTWA(1811, 32, dtype)) = (EIF_REFERENCE)NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("description_removed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 32, dtype));
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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

/* extend_picture */

void Fna_0j6 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(0,arg1);
	RTLR(2,tr1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("extend_picture", RTUD(1811), Current, 0, 1, 26266);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_picture_path_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(131, 4, "extend", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("picture_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(39, 0, "has", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
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
#undef arg1
}

void Fp_1nq3 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("pictures_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1811, 31, Dtype(Current)));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1812 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

