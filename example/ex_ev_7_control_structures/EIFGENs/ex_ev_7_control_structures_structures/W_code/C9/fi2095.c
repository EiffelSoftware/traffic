/*
 * Code for class FIND_SEPARATOR_FACILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpikvwp(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpil5ry(EIF_REFERENCE, EIF_UNION);
extern void Fpiliub(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
extern EIF_UNION Fpiix2u(EIF_REFERENCE);
extern void EIF_Minit2095(void);

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

/* find_separator */

EIF_UNION Fpikvwp (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER loc3 = (EIF_CHARACTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(4,ur1);
	RTLR(3,loc4);
	RTLR(5,ur2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTEAA("find_separator", RTUD(2094), Current, 5, 2, 30794);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_in_range", EX_PRE);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			tc1 = (EIF_BOOLEAN)(arg2 <= ti4_1);
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));

	RTHOOK(4);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCT("inside_bounds", EX_LINV);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(Result >= arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			tc1 = (EIF_BOOLEAN)(Result <= (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2094, 63, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2094, 63, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		uc1 = tc1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 14, "index_of", arg1))(arg1, uc1x, ui4_1x)).value.EIF_INTEGER_32_value);
		loc2 = (EIF_INTEGER_32)ti4_2;

		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			loc5 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2094, 63, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
			uc1 = tc1;
			ui4_1 = arg2;
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(13, 14, "index_of", arg1))(arg1, uc1x, ui4_1x)).value.EIF_INTEGER_32_value);
			loc2 = (EIF_INTEGER_32)ti4_2;

			RTHOOK(11);
			if ((EIF_BOOLEAN)((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc2 < Result))) {
				RTHOOK(12);
				Result = (EIF_INTEGER_32)loc2;
			}

		}

		RTHOOK(13);
		loc1++;
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCT("inside_bounds", EX_LINV);
			tc1 = '\0';
			if ((EIF_BOOLEAN)(Result >= arg2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
				tc1 = (EIF_BOOLEAN)(Result <= (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			if (tc1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2094, 63, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVPA(13, 118, "count", tr1));
		;
	}


	RTHOOK(14);
	if ((EIF_BOOLEAN) !loc5) {

		RTHOOK(15);
		loc1 = (EIF_INTEGER_32)arg2;
		RTHOOK(16);
		ui4_1 = loc1;
		ui4_2 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 2L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		loc4 = (EIF_REFERENCE)RTCCL(tr1);

		RTHOOK(17);
		ur1 = RTCCL(loc4);
		tr1 = RTMS_EX_H("[0]",3,5976157);
		ur2 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2094, 41, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(18);
			loc1 += ((EIF_INTEGER_32) 3L);
		}

		RTHOOK(19);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
		loc3 = (EIF_CHARACTER)tc1;
		RTHOOK(20);
		tc1 = '\01';
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if (!(EIF_BOOLEAN)(loc1 > ti4_2)) {
			ui4_1 = loc1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
			tc1 = (EIF_BOOLEAN)(tc2 != loc3);
		}
		while (!(tc1)) {
			RTHOOK(21);
			loc1++;

			RTHOOK(22);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			if ((EIF_BOOLEAN)(loc1 <= ti4_2)) {

				RTHOOK(23);
				tc2 = '\0';
				if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER) 'm')) {
					ui4_1 = loc1;
					tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
					tc2 = (EIF_BOOLEAN)(tc3 == (EIF_CHARACTER) 'i');
				}
				if (tc2) {
					RTHOOK(24);
					ui4_1 = loc1;
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
					loc3 = (EIF_CHARACTER)tc2;
				} else {
					RTHOOK(25);
					tc2 = '\0';
					tc3 = '\0';
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER) 'h')) {
						ui4_1 = loc1;
						tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
						tc3 = (EIF_BOOLEAN)(tc4 == (EIF_CHARACTER) '1');
					}
					if (tc3) {
						tc3 = '\0';
						ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
						tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 2, "valid_index", arg1))(arg1, ui4_1x)).value.EIF_BOOLEAN_value);
						if (tc4) {
							ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
							tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
							tc3 = (EIF_BOOLEAN)(tc4 == (EIF_CHARACTER) '2');
						}
						tc2 = tc3;
					}
				if (tc2) {
					RTHOOK(26);
					loc1++;
					RTHOOK(27);
					ui4_1 = loc1;
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
					loc3 = (EIF_CHARACTER)tc2;
				}}

			}

			RTHOOK(20);
			tc1 = '\01';
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
			if (!(EIF_BOOLEAN)(loc1 > ti4_2)) {
				ui4_1 = loc1;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 1, "infix \"@\"", arg1))(arg1, ui4_1x)).value.EIF_CHARACTER_value);
				tc1 = (EIF_BOOLEAN)(tc2 != loc3);
			}
			;
		}

		RTHOOK(28);
		Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)(loc1 - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("not_zero", EX_POST);
		if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg2
#undef arg1
}

/* has_separators */

EIF_UNION Fpil5ry (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(2,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("has_separators", RTUD(2094), Current, 1, 1, 30796);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tc1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
	if (!(EIF_BOOLEAN)(loc1 > ti4_1)) {
		tc1 = Result;
	}
	while (!(tc1)) {
		RTHOOK(4);
		ui4_1 = loc1;
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2094, 19, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTHOOK(5);
		loc1++;
		RTHOOK(3);
		tc1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(13, 118, "count", arg1));
		if (!(EIF_BOOLEAN)(loc1 > ti4_1)) {
			tc1 = Result;
		}
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* extract_substrings */

void Fpiliub (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x, EIF_UNION arg3x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg3x.type == SK_REF) arg3x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg3x.value.EIF_REFERENCE_value;
#define arg3 arg3x.value.EIF_INTEGER_32_value
	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("extract_substrings", RTUD(2094), Current, 1, 3, 30795);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("range_correct", EX_PRE);
		ui4_1 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2094, 29, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ui4_1 = arg2;
		ui4_2 = (EIF_INTEGER_32)(arg3 - ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2094, 64, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		ui4_1 = arg3;
		ui4_2 = arg3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2094, 65, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(6);
		ui4_1 = arg3;
		loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2094, 29, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		RTHOOK(7);
		ui4_1 = arg2;
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", arg1))(arg1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2094, 64, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(8);
		tr1 = RTLNSMART(RTWCT(2094, 65, Current));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(8);
		RTCI2(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(2094, 65, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("substrings_extracted", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2094, 64, dtype));
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(2094, 65, dtype));
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
	RTLO(6);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* separator_characters */

RTOID (Fpiix2u)

EIF_UNION Fpiix2u (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (Fpiix2u,30794,RTMS_EX_H(":/-, .",6,872260142));
}
void EIF_Minit2095 (void)
{
	GTCX
	RTOTS (32214,Fpiix2u)
}


#ifdef __cplusplus
}
#endif

