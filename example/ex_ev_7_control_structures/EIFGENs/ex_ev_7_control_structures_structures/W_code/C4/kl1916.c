/*
 * Code for class KL_OPERATING_SYSTEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fns7gp3(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fns55uv(EIF_REFERENCE);
extern EIF_UNION Fns6tsh(EIF_REFERENCE);
extern EIF_UNION Fns4vzm(EIF_REFERENCE);
extern EIF_UNION Fns5iw8(EIF_REFERENCE);
extern EIF_UNION Fns73nq(EIF_REFERENCE);
extern void EIF_Minit1916(void);

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

/* variable_value */

EIF_UNION Fns7gp3 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTEAA("variable_value", RTUD(1915), Current, 0, 1, 27041);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_variable_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1915, 36, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(113, 3, "get", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* is_dotnet */

RTOID (Fns55uv)

EIF_UNION Fns55uv (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, Fns55uv);
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(0,loc1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("is_dotnet", RTUD(1915), Current, 1, 0, 27039);
	RTGC;
	RTSA(Dtype(Current));
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(471));
	RTCI2(tr1);
	loc1 = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(118, 1, "is_dotnet", loc1))(loc1)).value.EIF_BOOLEAN_value);
	Result = (EIF_BOOLEAN)tc1;
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }

#undef Result
}

/* current_working_directory */

EIF_UNION Fns6tsh (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("current_working_directory", RTUD(1915), Current, 0, 0, 27040);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1915, 36, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(113, 1, "current_working_directory", tr1))(tr1)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("current_working_directory_not_void", EX_POST);
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

/* is_windows */

RTOID (Fns4vzm)

EIF_UNION Fns4vzm (EIF_REFERENCE Current)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, Fns4vzm);
	dtype = Dtype(Current);
	RTLI(6);
	RTLR(1,tr1);
	RTLR(3,Current);
	RTLR(5,loc1);
	RTLR(0,loc2);
	RTLR(4,loc3);
	RTLR(2,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("is_windows", RTUD(1915), Current, 3, 0, 27037);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTMS_EX_H("GOBO_OS",7,715786835);
	ur1 = tr1;
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1915, 35, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(2);
	tc1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(13, 118, "count", loc2));
		tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {

		RTHOOK(3);
		tr1 = RTMS_EX_H("windows",7,1657536371);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", loc2))(loc2, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	} else {
		RTHOOK(5);
		tr1 = RTMS_EX_H("OS",2,20307);
		ur1 = tr1;
		loc3 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1915, 35, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

		RTHOOK(6);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tr1 = RTMS_EX_H("Windows_NT",10,121334100);
			ur1 = tr1;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", loc3))(loc3, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(7);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		} else {
			RTHOOK(8);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1915, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVPA(13, 118, "count", loc1));
			if ((EIF_BOOLEAN)(ti4_1 >= ((EIF_INTEGER_32) 3L))) {

				RTHOOK(10);
				tc1 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 2L);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)).value.EIF_CHARACTER_value);
				if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER) ':')) {
					ui4_1 = ((EIF_INTEGER_32) 3L);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)).value.EIF_CHARACTER_value);
					tc1 = (EIF_BOOLEAN)(tc2 == (EIF_CHARACTER) '\\');
				}
				if (tc1) {
					RTHOOK(11);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				} else {
					RTHOOK(12);
					tc1 = '\0';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)).value.EIF_CHARACTER_value);
					if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER) '\\')) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)).value.EIF_CHARACTER_value);
						tc1 = (EIF_BOOLEAN)(tc2 == (EIF_CHARACTER) '\\');
					}
				if (tc1) {
					RTHOOK(13);
					Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				}}

			}

		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }

#undef Result
}

/* is_unix */

RTOID (Fns5iw8)

EIF_UNION Fns5iw8 (EIF_REFERENCE Current)
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
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, Fns5iw8);
	dtype = Dtype(Current);
	RTLI(5);
	RTLR(1,tr1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(0,loc2);
	RTLR(2,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("is_unix", RTUD(1915), Current, 2, 0, 27038);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTMS_EX_H("GOBO_OS",7,715786835);
	ur1 = tr1;
	loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1915, 35, dtype))(Current, ur1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

	RTHOOK(2);
	tc1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(13, 118, "count", loc2));
		tc1 = (EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tc1) {

		RTHOOK(3);
		tr1 = RTMS_EX_H("unix",4,1970170232);
		ur1 = tr1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", loc2))(loc2, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		}

	} else {
		RTHOOK(5);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1915, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVPA(13, 118, "count", loc1));
		if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", loc1))(loc1, ui4_1x)).value.EIF_CHARACTER_value);
			Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER) '/');
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }

#undef Result
}

/* execution_environment */

RTOID (Fns73nq)

EIF_UNION Fns73nq (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;

	
#define Result RTOTRR
	RTOTDR(Fns73nq);
	dtype = Dtype(Current);
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("execution_environment", RTUD(1915), Current, 0, 0, 27042);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(RTUD(129));
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("execution_environment_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }

#undef Result
}

void EIF_Minit1916 (void)
{
	GTCX
	RTOTS (28589,Fns4vzm)
	RTOTS (28590,Fns5iw8)
	RTOTS (28591,Fns55uv)
	RTOTS (28594,Fns73nq)
}


#ifdef __cplusplus
}
#endif

