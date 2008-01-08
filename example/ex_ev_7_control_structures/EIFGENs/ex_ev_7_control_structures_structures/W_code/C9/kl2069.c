/*
 * Code for class KL_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpdl44g(EIF_REFERENCE);
extern void Fpddqzd(EIF_REFERENCE, EIF_UNION);
extern void Fpdlh6u(EIF_REFERENCE);
extern EIF_UNION Fpdms12(EIF_REFERENCE);
extern void Fpdjkdz(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpdfor8(EIF_REFERENCE);
extern void Fpdixgc(EIF_REFERENCE);
extern EIF_UNION Fpdhmk3(EIF_REFERENCE);
extern EIF_UNION Fpdgznh(EIF_REFERENCE);
extern EIF_UNION Fpdedw_(EIF_REFERENCE);
extern EIF_UNION Fpde0um(EIF_REFERENCE);
extern EIF_UNION Fpdh9iq(EIF_REFERENCE, EIF_UNION);
extern void Fpdj7bl(EIF_REFERENCE, EIF_UNION);
extern void Fpdku87(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fpdnf_p(EIF_REFERENCE);
extern EIF_UNION Fpdgbpv(EIF_REFERENCE);
extern void Fp1vaa2(EIF_REFERENCE, int);
extern void EIF_Minit2069(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* empty_name */

RTOID (Fpdl44g)

EIF_UNION Fpdl44g (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpdl44g,30542,RTMS_EX_H("empty_name",10,696498789));
}
/* make */

void Fpddqzd (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2068), Current, 0, 1, 30545);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2068, 41, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(4);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1966, 75, "as_string", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 56, dtype))(Current, ur1x);
	} else {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 56, dtype))(Current, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 41, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_closed", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
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

/* delete */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void Fpdlh6u (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

	RTXI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	RTEAA("delete", RTUD(2068), Current, 1, 0, 30540);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTE_T

	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (!RTCEQ(tr1, tr2)) {

			RTHOOK(4);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2068, 67, dtype))(Current);
			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(3);

	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(7);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTEOK;
	RTXE;
	RTLO(3);
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* tmp_file1 */

RTOID (Fpdms12)

EIF_UNION Fpdms12 (EIF_REFERENCE Current)
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
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fpdms12);
	dtype = Dtype(Current);
	RTLI(4);
	RTLR(0,tr1);
	RTLR(2,tr2);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("tmp_file1", RTUD(2068), Current, 0, 0, 30542);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(2075));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 55, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2075, 9, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_closed", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 272, "is_closed", Result))(Result)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

/* change_name */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void Fpdjkdz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTXI(7);
	RTLR(4,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,loc2);
	RTLR(2,loc3);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLXL;
	RTEAA("change_name", RTUD(2068), Current, 3, 1, 30554);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTE_T

	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		loc3 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1966, 75, "as_string", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(6);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (!RTCEQ(tr1, tr2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(13, 118, "count", loc2));
			tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {

			RTHOOK(7);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc1) {

				RTHOOK(8);
				ur1 = RTCCL(loc2);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 47, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				if ((EIF_BOOLEAN) !tc1) {
					RTHOOK(9);
					ur1 = RTCCL(loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 65, dtype))(Current, ur1x);
					RTHOOK(10);
					RTAR(Current, loc3);
					*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
					RTHOOK(11);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(11);
					tr2 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2075, 153, "reset", tr1))(tr1, ur1x);

					RTHOOK(12);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					RTNHOOK(12);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 220, "exists", tr1))(tr1)).value.EIF_BOOLEAN_value);
					if ((EIF_BOOLEAN) !tc1) {
						RTHOOK(13);
						RTAR(Current, arg1);
						*(EIF_REFERENCE *)(Current + RTWA(2068, 41, dtype)) = (EIF_REFERENCE)RTCCL(arg1);
						RTHOOK(14);
						RTAR(Current, loc2);
						*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc2);
					}

				}

			}

		}

	} else {
		RTHOOK(15);
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc3);
	}

	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(7);

	RTHOOK(16);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(17);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(18);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(19);
	RTEOK;
	RTXE;
	RTLO(6);
#undef arg1
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* count */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_UNION Fpdfor8 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

	RTXI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	RTEAA("count", RTUD(2068), Current, 1, 0, 30548);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);

	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {

		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (!RTCEQ(tr1, tr2)) {

			RTHOOK(5);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(6);
				Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 58, dtype))(Current)).value.EIF_INTEGER_32_value);
			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("valid_values", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(3);

	RTHOOK(8);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(9);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(10);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTEOK;
	RTXE;
	RTLO(3);
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* close */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void Fpdixgc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

	RTXI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	RTEAA("close", RTUD(2068), Current, 1, 0, 30553);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("is_closable", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTE_T

	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2068, 66, dtype))(Current);
	}

	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(1);

	RTHOOK(4);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(5);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(6);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(7);
	RTEOK;
	RTXE;
	RTLO(3);
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* is_closed */

EIF_UNION Fpdhmk3 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("is_closed", RTUD(2068), Current, 0, 0, 30551);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 63, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 68, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tc1)) {
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* is_readable */

EIF_UNION Fpdgznh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
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
	RTEAA("is_readable", RTUD(2068), Current, 0, 0, 30550);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (!RTCEQ(tr1, tr2)) {
		RTHOOK(2);
		Result = '\0';
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			tc1 = '\0';
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 62, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc2) {
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			Result = tc1;
		}
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
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
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* name */

EIF_UNION Fpdedw_ (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2068,41, Dtype(Current)));
	return r;
}

/* time_stamp */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_UNION Fpde0um (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

	RTXI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	RTEAA("time_stamp", RTUD(2068), Current, 1, 0, 30547);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTE_T
	RTHOOK(1);
	Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);

	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {

		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (!RTCEQ(tr1, tr2)) {

			RTHOOK(4);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(5);
				Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 60, dtype))(Current)).value.EIF_INTEGER_32_value);

				RTHOOK(6);
				if ((EIF_BOOLEAN)(Result < ((EIF_INTEGER_32) 0L))) {
					RTHOOK(7);
					Result = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
				}

			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("valid_values", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(3);

	RTHOOK(9);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(10);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(11);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(12);
	RTEOK;
	RTXE;
	RTLO(3);
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* same_physical_file */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_UNION Fpdh9iq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc10 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	EIF_CHARACTER  EIF_VOLATILE tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTXI(13);
	RTLR(3,loc7);
	RTLR(4,tr1);
	RTLR(6,tr2);
	RTLR(0,arg1);
	RTLR(11,loc3);
	RTLR(12,loc4);
	RTLR(1,Current);
	RTLR(8,loc1);
	RTLR(9,loc2);
	RTLR(10,ur2);
	RTLR(5,ur1);
	RTLR(7,loc5);
	RTLR(2,loc6);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLXL;
	RTEAA("same_physical_file", RTUD(2068), Current, 10, 1, 30552);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTE_T

	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc9) {
		RTHOOK(4);
		loc6 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(5);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1966, 75, "as_string", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		loc7 = (EIF_REFERENCE)RTCCL(tr2);

		RTHOOK(6);
		tc1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (!RTCEQ(tr1, tr2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVPA(13, 118, "count", loc7));
			tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tc1) {

			RTHOOK(7);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(8);
				ur1 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2075, 153, "reset", tr1))(tr1, ur1x);

				RTHOOK(9);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				RTNHOOK(9);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 220, "exists", tr1))(tr1)).value.EIF_BOOLEAN_value);
				if (tc1) {

					RTHOOK(10);
					tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
					ur1 = RTCCL(loc7);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 22, "same_string", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
					if (tc1) {
						RTHOOK(11);
						Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
					} else {
						RTHOOK(12);
						loc5 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
						RTHOOK(13);
						RTAR(Current, loc7);
						*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc7);
						RTHOOK(14);
						loc10 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
						RTHOOK(15);
						RTAR(Current, loc5);
						*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc5);

						RTHOOK(16);
						ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 64, dtype))(Current)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(ti4_1 != loc10)) {
						} else {
							RTHOOK(17);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(17);
							ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 20, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
							ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 43, dtype))(Current)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						} else {
							RTHOOK(18);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(18);
							ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 347, "time_stamp", tr1))(tr1)).value.EIF_INTEGER_32_value);
							ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 42, dtype))(Current)).value.EIF_INTEGER_32_value);
						if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						} else {
							RTHOOK(19);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 5, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(19);
							tr2 = *(EIF_REFERENCE *)(Current + RTWA(2068, 41, dtype));
							ur1 = RTCCL(tr2);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 88, "absolute_pathname", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							loc1 = (EIF_REFERENCE)RTCCL(tr2);
							RTHOOK(20);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 5, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(20);
							ur1 = RTCCL(arg1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 88, "absolute_pathname", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
							loc2 = (EIF_REFERENCE)RTCCL(tr2);

							RTHOOK(21);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
							RTNHOOK(21);
							ur1 = RTCCL(loc1);
							ur2 = RTCCL(loc2);
							tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
							if (tc1) {
								RTHOOK(22);
								Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
							} else {
								RTHOOK(23);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 5, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
								RTNHOOK(23);
								ur1 = RTCCL(loc1);
								tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 6, "canonical_pathname", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
								loc3 = (EIF_REFERENCE)RTCCL(tr2);
								RTHOOK(24);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 5, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
								RTNHOOK(24);
								ur1 = RTCCL(loc2);
								tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2079, 6, "canonical_pathname", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
								loc4 = (EIF_REFERENCE)RTCCL(tr2);

								RTHOOK(25);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
								RTNHOOK(25);
								ur1 = RTCCL(loc3);
								ur2 = RTCCL(loc4);
								tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1966, 61, "same_string", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
								if (tc1) {
									RTHOOK(26);
									Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
								} else {

									RTHOOK(27);
									loc8 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
									RTHOOK(28);
									tr1 = RTMS_EX_H("gobotmp",7,243490928);
									tr2 = c_outi(loc8);
									ur1 = RTCCL(tr2);
									tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
									loc5 = (EIF_REFERENCE)RTCCL(tr2);
									RTHOOK(29);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
									RTNHOOK(29);
									ur1 = RTCCL(loc5);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2075, 153, "reset", tr1))(tr1, ur1x);
									RTHOOK(30);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
									RTNHOOK(30);
									tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 220, "exists", tr1))(tr1)).value.EIF_BOOLEAN_value);
									while (!((EIF_BOOLEAN) !tc1)) {
										RTHOOK(31);
										loc8++;
										RTHOOK(32);
										tr1 = RTMS_EX_H("gobotmp",7,243490928);
										tr2 = c_outi(loc8);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 63, "infix \"+\"", tr1))(tr1, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
										loc5 = (EIF_REFERENCE)RTCCL(tr2);
										RTHOOK(33);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
										RTNHOOK(33);
										ur1 = RTCCL(loc5);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2075, 153, "reset", tr1))(tr1, ur1x);
										RTHOOK(30);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
										RTNHOOK(30);
										tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 220, "exists", tr1))(tr1)).value.EIF_BOOLEAN_value);
										;
									}

									RTHOOK(34);
									ur1 = RTCCL(loc5);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 65, dtype))(Current, ur1x);
									RTHOOK(35);
									RTAR(Current, loc6);
									*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc6);

									RTHOOK(36);
									tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
									if ((EIF_BOOLEAN) !tc2) {
										RTHOOK(37);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
										RTNHOOK(37);
										ur1 = RTCCL(loc7);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2075, 153, "reset", tr1))(tr1, ur1x);
										RTHOOK(38);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 54, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
										RTNHOOK(38);
										tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2075, 220, "exists", tr1))(tr1)).value.EIF_BOOLEAN_value);
										Result = (EIF_BOOLEAN)(EIF_BOOLEAN) !tc2;
										RTHOOK(39);
										RTAR(Current, loc5);
										*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc5);
										RTHOOK(40);
										ur1 = RTCCL(loc6);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 65, dtype))(Current, ur1x);
										RTHOOK(41);
										RTAR(Current, loc6);
										*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc6);
									} else {
										RTHOOK(42);
										Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
									}

								}

							}

						}}}

					}

				}

			}

		}

	} else {
		RTHOOK(43);
		RTAR(Current, loc6);
		*(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype)) = (EIF_REFERENCE)RTCCL(loc6);
		RTHOOK(44);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	}

	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(13);

	RTHOOK(45);
	if ((EIF_BOOLEAN) !loc9) {
		RTHOOK(46);
		loc9 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(47);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(48);
	RTEOK;
	RTXE;
	RTLO(13);
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
/* copy_file */

void Fpdj7bl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(8);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(2,loc3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("copy_file", RTUD(2068), Current, 3, 1, 30538);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1966, 75, "as_string", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	loc3 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(4);
	tc1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (!RTCEQ(tr1, tr2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVPA(13, 118, "count", loc3));
		tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {

		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 44, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {

			RTHOOK(6);
			ur1 = RTCCL(loc3);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2068, 47, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc1) {
				RTHOOK(7);
				tr1 = RTLN(RTUD(2076));
				tr2 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2076, 8, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(7);
				RTCI2(tr1);
				loc1 = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2076, 208, "open_read", loc1))(loc1);

				RTHOOK(9);
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2076, 203, "is_open_read", loc1))(loc1)).value.EIF_BOOLEAN_value);
				if (tc1) {
					RTHOOK(10);
					tr1 = RTLN(RTUD(2071));
					ur1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2071, 7, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(10);
					RTCI2(tr1);
					loc2 = (EIF_REFERENCE)RTCCL(tr1);
					RTHOOK(11);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2071, 217, "open_write", loc2))(loc2);

					RTHOOK(12);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2071, 211, "is_open_write", loc2))(loc2)).value.EIF_BOOLEAN_value);
					if (tc1) {

						RTHOOK(13);
						ui4_1 = ((EIF_INTEGER_32) 512L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2076, 3, "read_string", loc1))(loc1, ui4_1x);
						RTHOOK(14);
						tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2076, 241, "end_of_file", loc1));
						while (!(tc1)) {
							RTHOOK(15);
							tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2076, 349, "last_string", loc1));
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2071, 111, "put_string", loc2))(loc2, ur1x);
							RTHOOK(16);
							ui4_1 = ((EIF_INTEGER_32) 512L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2076, 3, "read_string", loc1))(loc1, ui4_1x);
							RTHOOK(14);
							tc1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2076, 241, "end_of_file", loc1));
							;
						}

						RTHOOK(17);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2071, 205, "close", loc2))(loc2);
					}

					RTHOOK(18);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2076, 209, "close", loc1))(loc1);
				}

			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* concat */

void Fpdku87 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(9);
	RTLR(3,tr1);
	RTLR(5,tr2);
	RTLR(0,arg1);
	RTLR(8,loc4);
	RTLR(1,Current);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(2,loc3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTEAA("concat", RTUD(2068), Current, 5, 1, 30539);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_filename_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 46, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(3);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1966, 75, "as_string", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	loc3 = (EIF_REFERENCE)RTCCL(tr2);

	RTHOOK(4);
	tc1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if (!RTCEQ(tr1, tr2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVPA(13, 118, "count", loc3));
		tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {
		RTHOOK(5);
		tr1 = RTLN(RTUD(2076));
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2076, 8, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5);
		RTCI2(tr1);
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2076, 19, "count", loc1))(loc1)).value.EIF_INTEGER_32_value);
		loc5 = (EIF_INTEGER_32)ti4_1;
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2076, 208, "open_read", loc1))(loc1);

		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2076, 203, "is_open_read", loc1))(loc1)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(9);
			tr1 = RTLN(RTUD(2071));
			tr2 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2071, 7, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(9);
			RTCI2(tr1);
			loc2 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2071, 116, "open_append", loc2))(loc2);

			RTHOOK(11);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2071, 211, "is_open_write", loc2))(loc2)).value.EIF_BOOLEAN_value);
			if (tc1) {


				RTHOOK(12);
				if ((EIF_BOOLEAN)(loc5 >= ((EIF_INTEGER_32) 512L))) {
					RTHOOK(13);
					ui4_1 = ((EIF_INTEGER_32) 512L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2076, 3, "read_string", loc1))(loc1, ui4_1x);
				} else {
					RTHOOK(14);
				if ((EIF_BOOLEAN)(loc5 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(15);
					ui4_1 = loc5;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2076, 3, "read_string", loc1))(loc1, ui4_1x);
				}}

				RTHOOK(16);
				tc1 = '\01';
				if (!(EIF_BOOLEAN)(loc5 <= ((EIF_INTEGER_32) 0L))) {
					tc2 = *(EIF_BOOLEAN *)(loc1 + RTVA(2076, 241, "end_of_file", loc1));
					tc1 = tc2;
				}
				while (!(tc1)) {
					RTHOOK(17);
					tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2076, 349, "last_string", loc1));
					loc4 = (EIF_REFERENCE)RTCCL(tr1);
					RTHOOK(18);
					ur1 = RTCCL(loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2071, 111, "put_string", loc2))(loc2, ur1x);
					RTHOOK(19);
					ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVPA(13, 118, "count", loc4));
					loc5 -= ti4_1;

					RTHOOK(20);
					if ((EIF_BOOLEAN)(loc5 >= ((EIF_INTEGER_32) 512L))) {
						RTHOOK(21);
						ui4_1 = ((EIF_INTEGER_32) 512L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2076, 3, "read_string", loc1))(loc1, ui4_1x);
					} else {
						RTHOOK(22);
					if ((EIF_BOOLEAN)(loc5 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(23);
						ui4_1 = loc5;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2076, 3, "read_string", loc1))(loc1, ui4_1x);
					}}

					RTHOOK(16);
					tc1 = '\01';
					if (!(EIF_BOOLEAN)(loc5 <= ((EIF_INTEGER_32) 0L))) {
						tc2 = *(EIF_BOOLEAN *)(loc1 + RTVA(2076, 241, "end_of_file", loc1));
						tc1 = tc2;
					}
					;
				}

				RTHOOK(24);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2071, 205, "close", loc2))(loc2);
			}

			RTHOOK(25);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2076, 209, "close", loc1))(loc1);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg1
}

/* dummy_name */

RTOID (Fpdnf_p)

EIF_UNION Fpdnf_p (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpdnf_p,30544,RTMS_EX_H("dummy",5,1970873721));
}
/* exists */

#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_UNION Fpdgbpv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_CHARACTER  EIF_VOLATILE tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;

	RTXI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	RTEAA("exists", RTUD(2068), Current, 1, 0, 30549);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTE_T

	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {

		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 53, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (!RTCEQ(tr1, tr2)) {
			RTHOOK(3);
			Result = '\0';
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 59, dtype))(Current)).value.EIF_BOOLEAN_value);
			if (tc1) {
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 61, dtype))(Current)).value.EIF_BOOLEAN_value);
				Result = tc1;
			}
		}

	} else {
		RTHOOK(4);
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	}

	RTVI2(Current, RTAL);
	RTRS;

	RTE_E
	RTLXE;
	RTXS(3);

	RTHOOK(5);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(6);
		loc1 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(7);
		RTTS;
		RTPS;
		RTER;
	}

	/* NOTREACHED */
	RTE_EE
	RTHOOK(8);
	RTEOK;
	RTXE;
	RTLO(3);
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

#undef EIF_VOLATILE
#define EIF_VOLATILE
void Fp1vaa2 (EIF_REFERENCE Current, int where)
{
	GTCX
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
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(6);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(4,tr3);
	RTLR(0,Current);
	RTLR(3,ur1);
	RTLR(5,ur2);

	RTIT("string_name_is_string", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2068, 16, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2068, 57, dtype));
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("",0,0);
	ur2 = tr3;
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1808, 31, "same_types", tr1))(tr1, ur1x, ur2x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2069 (void)
{
	GTCX
	RTOTS (31933,Fpdl44g)
	RTOTS (31934,Fpdms12)
	RTOTS (31935,Fpdnf_p)
}


#ifdef __cplusplus
}
#endif

