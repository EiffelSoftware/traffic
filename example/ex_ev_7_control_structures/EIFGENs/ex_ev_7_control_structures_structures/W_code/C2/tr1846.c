/*
 * Code for class TRAFFIC_MAP_WIDGET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnipoam(EIF_REFERENCE, EIF_UNION);
extern void Fniqa78(EIF_REFERENCE, EIF_UNION);
extern void Fniqy5v(EIF_REFERENCE, EIF_UNION);
extern void Fnirl3h(EIF_REFERENCE, EIF_UNION);
extern void Fniodfd(EIF_REFERENCE, EIF_UNION);
extern void Fnir803(EIF_REFERENCE, EIF_UNION);
extern void Fnim2j4(EIF_REFERENCE, EIF_UNION);
extern void Fninqhr(EIF_REFERENCE, EIF_UNION);
extern void Fnimfmi(EIF_REFERENCE, EIF_UNION);
extern void Fnitjxc(EIF_REFERENCE, EIF_UNION);
extern void Fniyqeb(EIF_REFERENCE, EIF_UNION);
extern void Fniwslg(EIF_REFERENCE, EIF_UNION);
extern void Fnixfi2(EIF_REFERENCE, EIF_UNION);
extern void Fniv4nu(EIF_REFERENCE, EIF_UNION);
extern void Fnix2gp(EIF_REFERENCE, EIF_UNION);
extern void Fnizdby(EIF_REFERENCE, EIF_UNION);
extern void Fnivhp7(EIF_REFERENCE, EIF_UNION);
extern void Fnii6ye(EIF_REFERENCE, EIF_UNION);
extern void Fnik4q9(EIF_REFERENCE);
extern void Fnilsow(EIF_REFERENCE);
extern void Fniswzq(EIF_REFERENCE, EIF_UNION);
extern void Fniuusl(EIF_REFERENCE, EIF_UNION);
extern void Fniz_9k(EIF_REFERENCE, EIF_UNION);
extern void Fnit6uz(EIF_REFERENCE, EIF_UNION);
extern void Fnio0c_(EIF_REFERENCE, EIF_UNION);
extern void Fp_56bd(EIF_REFERENCE, int);
extern void EIF_Minit1846(void);

extern EIF_REFERENCE _fAabd2lc_2();
extern EIF_REFERENCE _fAaa96zm_2();
extern EIF_REFERENCE _fAabeqiz_2();
extern EIF_REFERENCE _fAabb4sh_2();
extern EIF_REFERENCE _fAaa4dj0_2();
extern EIF_REFERENCE _fAabdfnq_2();
extern EIF_REFERENCE _fAaa3qme_2();
extern EIF_REFERENCE _fAaa6bcw_2();
extern EIF_REFERENCE _fAaa5oe9_2();
extern EIF_REFERENCE _fAaa2fq5_2();
extern EIF_REFERENCE _fAaa1stj_2();
extern EIF_REFERENCE _fAaa40hn_2();
extern EIF_REFERENCE _fAaa8w3d_2();
extern EIF_REFERENCE _fAabbhuv_2();
extern EIF_REFERENCE _fAaa22os_2();
extern EIF_REFERENCE _fAabcsp3_2();
extern EIF_REFERENCE _fAaa7l74_2();
extern EIF_REFERENCE _fAaa6zai_2();
extern EIF_REFERENCE _fAabauw8_2();
extern EIF_REFERENCE _fAaa9j0__2();
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

/* add_tram */

void Fnipoam (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_tram", RTUD(1845), Current, 0, 1, 26587);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_tram_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 36, "new_tram_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_bus */

void Fniqa78 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_bus", RTUD(1845), Current, 0, 1, 26588);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_bus_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 37, "new_bus_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_free_moving */

void Fniqy5v (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_free_moving", RTUD(1845), Current, 0, 1, 26589);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_free_moving_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 40, "new_free_moving_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_passenger */

void Fnirl3h (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_passenger", RTUD(1845), Current, 0, 1, 26590);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_passenger_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 39, "new_passenger_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_path */

void Fniodfd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_path", RTUD(1845), Current, 0, 1, 26585);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_path_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 32, "new_path_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_taxi_office */

void Fnir803 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_taxi_office", RTUD(1845), Current, 0, 1, 26591);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_taxi_office_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(2);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2195, 98, "element_inserted_event", tr1));
	RTNHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 66, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2195, 99, "element_removed_event", tr1));
	RTNHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 67, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr2))(tr2, ur1x);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 97, "is_empty", tr1))(tr1)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
		RTNHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 34, "start", tr1))(tr1);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
		RTNHOOK(6);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 73, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		while (!(tc1)) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
			RTNHOOK(7);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 54, dtype))(Current, ur1x);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
			RTNHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
			RTNHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 73, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_line */

void Fnim2j4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_line", RTUD(1845), Current, 0, 1, 26583);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 33, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 33, "new_line_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_road */

void Fninqhr (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_road", RTUD(1845), Current, 0, 1, 26584);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_road_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 34, "new_road_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_place */

void Fnimfmi (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_place", RTUD(1845), Current, 0, 1, 26582);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_place_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 31, "new_place_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_place */

void Fnitjxc (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_place", RTUD(1845), Current, 0, 1, 26593);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_place_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 35, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_building */

void Fniyqeb (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_building", RTUD(1845), Current, 0, 1, 26601);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_building_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 36, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 36, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_tram */

void Fniwslg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_tram", RTUD(1845), Current, 0, 1, 26598);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_tram_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_bus */

void Fnixfi2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_bus", RTUD(1845), Current, 0, 1, 26599);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_bus_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_free_moving */

void Fniv4nu (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_free_moving", RTUD(1845), Current, 0, 1, 26597);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_free_moving_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_passenger */

void Fnix2gp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_passenger", RTUD(1845), Current, 0, 1, 26600);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_passenger_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_taxi_office */

void Fnizdby (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,arg1);
	RTLR(3,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_taxi_office", RTUD(1845), Current, 0, 1, 26602);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_taxi_office_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(2);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2195, 98, "element_inserted_event", tr1));
	RTNHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 66, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 35, "unsubscribe", tr2))(tr2, ur1x);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(3);
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(2195, 99, "element_removed_event", tr1));
	RTNHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 67, dtype));
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 35, "unsubscribe", tr2))(tr2, ur1x);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 34, "start", tr1))(tr1);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
	RTNHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 73, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
		RTNHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 95, "item_for_iteration", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 65, dtype))(Current, ur1x);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
		RTNHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2195, 77, "forth", tr1))(tr1);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(arg1 + RTVA(1947, 57, "taxis", arg1));
		RTNHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2195, 73, "off", tr1))(tr1)).value.EIF_BOOLEAN_value);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_path */

void Fnivhp7 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_path", RTUD(1845), Current, 0, 1, 26596);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_path_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 38, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* set_map */

void Fnii6ye (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_CHARACTER tc4;
	EIF_CHARACTER tc5;
	EIF_CHARACTER tc6;
	EIF_CHARACTER tc7;
	EIF_CHARACTER tc8;
	EIF_CHARACTER tc9;
	EIF_CHARACTER tc10;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(11);
	RTLR(1,tr1);
	RTLR(3,tr2);
	RTLR(2,arg1);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLR(0,Current);
	RTLR(5,tr3);
	RTLR(7,loc1);
	RTLR(8,loc2);
	RTLR(4,loc3);
	RTLR(6,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("set_map", RTUD(1845), Current, 3, 1, 26579);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("line_representations_exists", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 33, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("place_representations_exists", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("building_representations_exists", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 36, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("moving_representations_exists", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("path_representations_exists", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype)) = (EIF_REFERENCE)RTCCL(arg1);

	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 131, "roads", tr1));
	RTNHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2272, 44, "start", tr2))(tr2);
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 131, "roads", tr1));
	RTNHOOK(8);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2272, 39, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc1)) {
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(9);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1924, 131, "roads", tr2));
		RTNHOOK(9);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2272, 37, "item_for_iteration", tr3))(tr3)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 34, "new_road_view", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		loc3 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(10);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 131, "roads", tr1));
		RTNHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2272, 43, "forth", tr2))(tr2);
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 131, "roads", tr1));
		RTNHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2272, 39, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 130, "lines", tr1));
	RTNHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 44, "start", tr2))(tr2);
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 130, "lines", tr1));
	RTNHOOK(13);
	tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc2)) {
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(14);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1924, 130, "lines", tr2));
		RTNHOOK(14);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr3))(tr3)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 33, "new_line_view", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		loc1 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 33, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(15);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 130, "lines", tr1));
		RTNHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 43, "forth", tr2))(tr2);
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 130, "lines", tr1));
		RTNHOOK(13);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
	RTNHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 44, "start", tr2))(tr2);
	RTHOOK(18);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
	RTNHOOK(18);
	tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc3)) {
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(19);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr3 = *(EIF_REFERENCE *)(tr2 + RTVA(1924, 128, "places", tr2));
		RTNHOOK(19);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 37, "item_for_iteration", tr3))(tr3)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 31, "new_place_view", tr1))(tr1, ur1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
		loc2 = (EIF_REFERENCE)RTCCL(tr2);
		RTHOOK(20);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(20);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
		RTHOOK(21);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
		RTNHOOK(21);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2270, 43, "forth", tr2))(tr2);
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
		RTNHOOK(18);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2270, 39, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(22);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
	RTNHOOK(22);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(23);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
	RTNHOOK(23);
	tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc4)) {
		RTHOOK(24);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
		RTNHOOK(24);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 48, dtype))(Current, ur1x);
		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
		RTNHOOK(25);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
		RTNHOOK(23);
		tc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(26);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
	RTNHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(27);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
	RTNHOOK(27);
	tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc5)) {
		RTHOOK(28);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
		RTNHOOK(28);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 49, dtype))(Current, ur1x);
		RTHOOK(29);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
		RTNHOOK(29);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(27);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
		RTNHOOK(27);
		tc5 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(30);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
	RTNHOOK(30);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(31);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
	RTNHOOK(31);
	tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc6)) {
		RTHOOK(32);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
		RTNHOOK(32);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 50, dtype))(Current, ur1x);
		RTHOOK(33);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
		RTNHOOK(33);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(31);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
		RTNHOOK(31);
		tc6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(34);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
	RTNHOOK(34);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(35);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
	RTNHOOK(35);
	tc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc7)) {
		RTHOOK(36);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
		RTNHOOK(36);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 51, dtype))(Current, ur1x);
		RTHOOK(37);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
		RTNHOOK(37);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(35);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
		RTNHOOK(35);
		tc7 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(38);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
	RTNHOOK(38);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(39);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
	RTNHOOK(39);
	tc8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc8)) {
		RTHOOK(40);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
		RTNHOOK(40);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 52, dtype))(Current, ur1x);
		RTHOOK(41);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
		RTNHOOK(41);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(39);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
		RTNHOOK(39);
		tc8 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(42);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
	RTNHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(43);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
	RTNHOOK(43);
	tc9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc9)) {
		RTHOOK(44);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
		RTNHOOK(44);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 47, dtype))(Current, ur1x);
		RTHOOK(45);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
		RTNHOOK(45);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(43);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
		RTNHOOK(43);
		tc9 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}


	RTHOOK(46);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
	RTNHOOK(46);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 40, "start", tr2))(tr2);
	RTHOOK(47);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
	RTNHOOK(47);
	tc10 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
	while (!(tc10)) {
		RTHOOK(48);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
		RTNHOOK(48);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 37, "item_for_iteration", tr2))(tr2)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1845, 53, dtype))(Current, ur1x);
		RTHOOK(49);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
		RTNHOOK(49);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2271, 41, "forth", tr2))(tr2);
		RTHOOK(47);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
		RTNHOOK(47);
		tc10 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(2271, 44, "after", tr2))(tr2)).value.EIF_BOOLEAN_value);
		;
	}

	RTHOOK(50);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 130, "lines", tr1));
	RTNHOOK(50);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2270, 5, "element_inserted_event", tr2));
	RTNHOOK(50);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1975,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa2fq5_2, (EIF_POINTER)(0),1845, 45, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(51);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 130, "lines", tr1));
	RTNHOOK(51);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2270, 6, "element_removed_event", tr2));
	RTNHOOK(51);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1975,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa9j0__2, (EIF_POINTER)(0),1845, 56, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(52);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 131, "roads", tr1));
	RTNHOOK(52);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2272, 5, "element_inserted_event", tr2));
	RTNHOOK(52);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1948,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa22os_2, (EIF_POINTER)(0),1845, 46, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(53);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 131, "roads", tr1));
	RTNHOOK(53);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2272, 6, "element_removed_event", tr2));
	RTNHOOK(53);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1948,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa96zm_2, (EIF_POINTER)(0),1845, 57, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(54);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
	RTNHOOK(54);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2270, 5, "element_inserted_event", tr2));
	RTNHOOK(54);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1973,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa1stj_2, (EIF_POINTER)(0),1845, 44, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(55);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 128, "places", tr1));
	RTNHOOK(55);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2270, 6, "element_removed_event", tr2));
	RTNHOOK(55);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1973,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa8w3d_2, (EIF_POINTER)(0),1845, 55, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(56);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
	RTNHOOK(56);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(56);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,2126,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa4dj0_2, (EIF_POINTER)(0),1845, 48, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(57);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 133, "buildings", tr1));
	RTNHOOK(57);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(57);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,2126,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabd2lc_2, (EIF_POINTER)(0),1845, 63, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(58);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
	RTNHOOK(58);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(58);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1957,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa40hn_2, (EIF_POINTER)(0),1845, 49, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(59);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 136, "trams", tr1));
	RTNHOOK(59);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(59);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1957,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabb4sh_2, (EIF_POINTER)(0),1845, 60, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(60);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
	RTNHOOK(60);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(60);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1956,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa5oe9_2, (EIF_POINTER)(0),1845, 50, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(61);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 137, "busses", tr1));
	RTNHOOK(61);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(61);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1956,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabcsp3_2, (EIF_POINTER)(0),1845, 61, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(62);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
	RTNHOOK(62);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(62);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1951,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa6bcw_2, (EIF_POINTER)(0),1845, 51, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(63);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 138, "free_movings", tr1));
	RTNHOOK(63);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(63);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1951,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabbhuv_2, (EIF_POINTER)(0),1845, 59, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(64);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
	RTNHOOK(64);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(64);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1952,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa6zai_2, (EIF_POINTER)(0),1845, 52, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(65);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 135, "passengers", tr1));
	RTNHOOK(65);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(65);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1952,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabdfnq_2, (EIF_POINTER)(0),1845, 62, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(66);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
	RTNHOOK(66);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(66);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1949,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa3qme_2, (EIF_POINTER)(0),1845, 47, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(67);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 132, "paths", tr1));
	RTNHOOK(67);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(67);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1949,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabauw8_2, (EIF_POINTER)(0),1845, 58, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(68);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
	RTNHOOK(68);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 5, "element_inserted_event", tr2));
	RTNHOOK(68);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1947,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAaa7l74_2, (EIF_POINTER)(0),1845, 53, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	RTHOOK(69);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
	tr2 = *(EIF_REFERENCE *)(tr1 + RTVA(1924, 134, "taxi_offices", tr1));
	RTNHOOK(69);
	tr1 = *(EIF_REFERENCE *)(tr2 + RTVA(2271, 6, "element_removed_event", tr2));
	RTNHOOK(69);
	{
		static int16 typarr [] = {1845,-7,1,726,0,-1};
		int16 typres;

		typarr[4] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 726, typarr);

		tr2 = RTLNTS(typres, 2, 0);

	}
	((EIF_TYPED_ELEMENT *)tr2+1)->element.rarg = Current;
	RTAR(tr2,Current);
	{
		static int16 typarr [] = {1845,1438,737,-1};
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
		static int16 typarr [] = {1845,1419,0,-7,1,726,1947,-1};
		int16 typres;

		typarr[2] = RTID(dftype);
		typres = RTCID2(NULL, dftype, 1419, typarr);

		tr5 = RTLNRW(typres, 0, (EIF_POINTER) _fAabeqiz_2, (EIF_POINTER)(0),1845, 64, tr3, 0, 0, 1, 0, tr2, 1);

	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2197, 33, "subscribe", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(70);
		RTCT("map_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 31, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(71);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* enable_map_hidden */

void Fnik4q9 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("enable_map_hidden", RTUD(1845), Current, 0, 0, 26580);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1845, 40, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("map_hidden", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1845, 40, dtype));
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

/* disable_map_hidden */

void Fnilsow (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("disable_map_hidden", RTUD(1845), Current, 0, 0, 26581);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + RTWA(1845, 40, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("map_not_hidden", EX_POST);
		tc1 = *(EIF_BOOLEAN *)(Current + RTWA(1845, 40, dtype));
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

/* add_taxi */

void Fniswzq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_taxi", RTUD(1845), Current, 0, 1, 26592);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_taxi_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 38, "new_taxi_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_road */

void Fniuusl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_road", RTUD(1845), Current, 0, 1, 26595);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_road_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 34, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_taxi */

void Fniz_9k (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_taxi", RTUD(1845), Current, 0, 1, 26603);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_taxi_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* remove_line */

void Fnit6uz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove_line", RTUD(1845), Current, 0, 1, 26594);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_line_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 33, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 33, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 34, "view_for_item", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 48, "delete", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* add_building */

void Fnio0c_ (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(5,tr3);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("add_building", RTUD(1845), Current, 0, 1, 26586);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_building_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 36, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ur1 = RTCCL(arg1);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1846, 35, "new_building_view", tr2))(tr2, ur1x)), ((up3x.type == SK_REF)? (EIF_REFERENCE) 0: (up3x.value.EIF_REFERENCE_value = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.value.EIF_REFERENCE_value);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2199, 42, "put_last", tr1))(tr1, ur1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp_56bd (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("factory_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 32, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("line_representations_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 33, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("road_representations_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 34, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("place_representations_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 35, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("building_representations_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 36, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("moving_representations_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 37, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("path_representations_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(1845, 38, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("add_taxi_agent_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 66, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("remove_taxi_agent_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1845, 67, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit1846 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

