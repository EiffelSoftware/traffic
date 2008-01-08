/*
 * Code for class DATE_TIME_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fnon9ee(EIF_REFERENCE, EIF_UNION);
extern void Fnooxb0(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit1876(void);

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

void Fnon9ee (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(1875), Current, 0, 1, 26841);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 29, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 58, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
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

/* set_value */

void Fnooxb0 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("set_value", RTUD(1875), Current, 0, 1, 26840);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 29, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", arg1))(arg1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype)) = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
	ur1 = RTCCL(tr1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 30, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		tr1 = RTMS_EX_H("day-numeric",11,781450083);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 31L);
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(10);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(11);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 31, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(14);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(16);
		tr1 = RTMS_EX_H("day-numeric-on-2-digits",23,1405532275);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(17);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 31L);
		RTHOOK(18);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(19);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(20);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(21);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(22);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 36, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(23);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
		RTHOOK(24);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
		RTHOOK(25);
		tr1 = RTMS_EX_H("day-text",8,1643751284);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(26);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
		RTHOOK(27);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(28);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(29);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(30);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(31);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 32, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(32);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
		RTHOOK(33);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
		RTHOOK(34);
		tr1 = RTMS_EX_H("year-on-4-digits",16,2124624499);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(35);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(36);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(37);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
		RTHOOK(38);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		RTHOOK(39);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(40);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 33, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(41);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(42);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(43);
		tr1 = RTMS_EX_H("year-on-2-digits",16,2124163699);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(44);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(45);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(46);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 5L);
		RTHOOK(47);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		RTHOOK(48);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(49);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 34, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(50);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(51);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(52);
		tr1 = RTMS_EX_H("month-numeric",13,457640547);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(53);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
		RTHOOK(54);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(55);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(56);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(57);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 6L);
	} else {
		RTHOOK(58);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 35, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(59);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(60);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(61);
		tr1 = RTMS_EX_H("month-numeric-on-2-digits",25,275202163);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(62);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
		RTHOOK(63);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(64);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(65);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(66);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 7L);
	} else {
		RTHOOK(67);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 38, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(68);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
		RTHOOK(69);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
		RTHOOK(70);
		tr1 = RTMS_EX_H("month-text",10,1418209652);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(71);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
		RTHOOK(72);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(73);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(74);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(75);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 8L);
	} else {
		RTHOOK(76);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 40, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(77);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(78);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(79);
		tr1 = RTMS_EX_H("hour-numeric",12,1129144675);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(80);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 24L);
		RTHOOK(81);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(82);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(83);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(84);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 9L);
	} else {
		RTHOOK(85);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 37, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(86);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(87);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(88);
		tr1 = RTMS_EX_H("hour-numeric-on-2-digits",24,638152307);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(89);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 24L);
		RTHOOK(90);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(91);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(92);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(93);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 10L);
	} else {
		RTHOOK(94);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 42, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(95);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(96);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(97);
		tr1 = RTMS_EX_H("hour-12-clock-scale",19,1508112997);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(98);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
		RTHOOK(99);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(100);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(101);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(102);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 11L);
	} else {
		RTHOOK(103);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 39, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(104);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(105);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(106);
		tr1 = RTMS_EX_H("minute-numeric",14,220677219);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(107);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 59L);
		RTHOOK(108);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(109);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(110);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(111);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
	} else {
		RTHOOK(112);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 52, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(113);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(114);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(115);
		tr1 = RTMS_EX_H("minute-numeric-on-2-digits",26,1724761203);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(116);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 59L);
		RTHOOK(117);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(118);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(119);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(120);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 13L);
	} else {
		RTHOOK(121);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 41, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(122);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(123);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(124);
		tr1 = RTMS_EX_H("second-numeric",14,1358324579);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(125);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 59L);
		RTHOOK(126);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(127);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(128);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(129);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 14L);
	} else {
		RTHOOK(130);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 55, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(131);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(132);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(133);
		tr1 = RTMS_EX_H("second-numeric-on-2-digits",26,1763349363);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(134);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 59L);
		RTHOOK(135);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(136);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(137);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(138);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 15L);
	} else {
		RTHOOK(139);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 43, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(140);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr2 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(13, 118, "count", tr2));
		ui4_2 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(123, 19, "substring", tr1))(tr1, ui4_1x, ui4_2x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(140);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(13, 97, "to_integer", tr2))(tr2)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(141);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(142);
		tr1 = RTMS_EX_H("fractional-second-numeric",25,941051235);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(143);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(144);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(145);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 16L);
		RTHOOK(146);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
		RTHOOK(147);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(148);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 44, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(149);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(150);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(151);
		tr1 = RTMS_EX_H("colon",5,1870137710);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(152);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(153);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(154);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 17L);
	} else {
		RTHOOK(155);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 45, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(156);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(157);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(158);
		tr1 = RTMS_EX_H("slash",5,1819209064);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(159);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(160);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(161);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 18L);
	} else {
		RTHOOK(162);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 46, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(163);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(164);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(165);
		tr1 = RTMS_EX_H("minus",5,1769683827);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(166);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(167);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(168);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 19L);
	} else {
		RTHOOK(169);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 47, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(170);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(171);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(172);
		tr1 = RTMS_EX_H("comma",5,1870202721);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(173);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(174);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(175);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 20L);
	} else {
		RTHOOK(176);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 25, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(177);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(178);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(179);
		tr1 = RTMS_EX_H("space",5,1886313829);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(180);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(181);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(182);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 21L);
	} else {
		RTHOOK(183);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(184);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(185);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(186);
		tr1 = RTMS_EX_H("dot",3,6582132);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(187);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(188);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(189);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 22L);
	} else {
		RTHOOK(190);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 9, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(191);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(192);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(193);
		tr1 = RTMS_EX_H("meridiem",8,1230131053);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(194);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(195);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(196);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 23L);
	} else {
		RTHOOK(197);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(tr1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(1875, 49, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(198);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 60, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(199);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 61, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 2L);
		RTHOOK(200);
		tr1 = RTMS_EX_H("hour-12-clock-scale-on-2-digits",31,1799302003);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1875, 62, dtype)) = (EIF_REFERENCE)tr1;
		RTHOOK(201);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 63, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 12L);
		RTHOOK(202);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 64, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(203);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 66, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
		RTHOOK(204);
		*(EIF_BOOLEAN *)(Current + RTWA(1875, 67, dtype)) = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(205);
		*(EIF_INTEGER_32 *)(Current + RTWA(1875, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 24L);
	}}}}}}}}}}}}}}}}}}}}}}}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(206);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(1875, 59, dtype));
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(207);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit1876 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

