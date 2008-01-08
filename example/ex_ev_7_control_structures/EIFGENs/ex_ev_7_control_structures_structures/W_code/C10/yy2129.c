/*
 * Code for class YY_PARSER_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fpq3kjz(EIF_REFERENCE, EIF_UNION);
extern void EIF_Minit2129(void);

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

/* yy_character_token_name */

EIF_UNION Fpq3kjz (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_CHARACTER loc1 = (EIF_CHARACTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("yy_character_token_name", RTUD(2128), Current, 4, 1, 31215);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	tc1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2128, 21, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1928, 90, "minimum_character_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(arg1 >= ti4_1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2128, 21, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(1);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVF(1928, 91, "maximum_character_code", tr1))(tr1)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(arg1 <= ti4_1);
	}
	if (tc1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2128, 14, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTNHOOK(2);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1995, 35, "to_character", tr1))(tr1, ui4_1x)).value.EIF_CHARACTER_value);
		loc1 = (EIF_CHARACTER)tc1;

		RTHOOK(3);
		switch (loc1) {
			case (EIF_CHARACTER) '\010':
				RTHOOK(4);
				Result = RTMS_EX_H("\'\\b\'",4,660365863);
				break;
			case (EIF_CHARACTER) '\014':
				RTHOOK(5);
				Result = RTMS_EX_H("\'\\f\'",4,660366887);
				break;
			case (EIF_CHARACTER) '\012':
				RTHOOK(6);
				Result = RTMS_EX_H("\'\\n\'",4,660368935);
				break;
			case (EIF_CHARACTER) '\015':
				RTHOOK(7);
				Result = RTMS_EX_H("\'\\r\'",4,660369959);
				break;
			case (EIF_CHARACTER) '\011':
				RTHOOK(8);
				Result = RTMS_EX_H("\'\\t\'",4,660370471);
				break;
			case (EIF_CHARACTER) '\'':
				RTHOOK(9);
				Result = RTMS_EX_H("\'\\\'\'",4,660350759);
				break;
			case (EIF_CHARACTER) '\"':
				RTHOOK(10);
				Result = RTMS_EX_H("\'\\\"\'",4,660349479);
				break;
			case (EIF_CHARACTER) ' ':
			case (EIF_CHARACTER) '!':
			case (EIF_CHARACTER) '#':
			case (EIF_CHARACTER) '$':
			case (EIF_CHARACTER) '&':
			case (EIF_CHARACTER) '(':
			case (EIF_CHARACTER) ')':
			case (EIF_CHARACTER) '*':
			case (EIF_CHARACTER) '+':
			case (EIF_CHARACTER) ',':
			case (EIF_CHARACTER) '-':
			case (EIF_CHARACTER) '.':
			case (EIF_CHARACTER) '/':
			case (EIF_CHARACTER) '0':
			case (EIF_CHARACTER) '1':
			case (EIF_CHARACTER) '2':
			case (EIF_CHARACTER) '3':
			case (EIF_CHARACTER) '4':
			case (EIF_CHARACTER) '5':
			case (EIF_CHARACTER) '6':
			case (EIF_CHARACTER) '7':
			case (EIF_CHARACTER) '8':
			case (EIF_CHARACTER) '9':
			case (EIF_CHARACTER) ':':
			case (EIF_CHARACTER) ';':
			case (EIF_CHARACTER) '<':
			case (EIF_CHARACTER) '=':
			case (EIF_CHARACTER) '>':
			case (EIF_CHARACTER) '\?':
			case (EIF_CHARACTER) '@':
			case (EIF_CHARACTER) 'A':
			case (EIF_CHARACTER) 'B':
			case (EIF_CHARACTER) 'C':
			case (EIF_CHARACTER) 'D':
			case (EIF_CHARACTER) 'E':
			case (EIF_CHARACTER) 'F':
			case (EIF_CHARACTER) 'G':
			case (EIF_CHARACTER) 'H':
			case (EIF_CHARACTER) 'I':
			case (EIF_CHARACTER) 'J':
			case (EIF_CHARACTER) 'K':
			case (EIF_CHARACTER) 'L':
			case (EIF_CHARACTER) 'M':
			case (EIF_CHARACTER) 'N':
			case (EIF_CHARACTER) 'O':
			case (EIF_CHARACTER) 'P':
			case (EIF_CHARACTER) 'Q':
			case (EIF_CHARACTER) 'R':
			case (EIF_CHARACTER) 'S':
			case (EIF_CHARACTER) 'T':
			case (EIF_CHARACTER) 'U':
			case (EIF_CHARACTER) 'V':
			case (EIF_CHARACTER) 'W':
			case (EIF_CHARACTER) 'X':
			case (EIF_CHARACTER) 'Y':
			case (EIF_CHARACTER) 'Z':
			case (EIF_CHARACTER) '[':
			case (EIF_CHARACTER) '\\':
			case (EIF_CHARACTER) ']':
			case (EIF_CHARACTER) '^':
			case (EIF_CHARACTER) '_':
			case (EIF_CHARACTER) '`':
			case (EIF_CHARACTER) 'a':
			case (EIF_CHARACTER) 'b':
			case (EIF_CHARACTER) 'c':
			case (EIF_CHARACTER) 'd':
			case (EIF_CHARACTER) 'e':
			case (EIF_CHARACTER) 'f':
			case (EIF_CHARACTER) 'g':
			case (EIF_CHARACTER) 'h':
			case (EIF_CHARACTER) 'i':
			case (EIF_CHARACTER) 'j':
			case (EIF_CHARACTER) 'k':
			case (EIF_CHARACTER) 'l':
			case (EIF_CHARACTER) 'm':
			case (EIF_CHARACTER) 'n':
			case (EIF_CHARACTER) 'o':
			case (EIF_CHARACTER) 'p':
			case (EIF_CHARACTER) 'q':
			case (EIF_CHARACTER) 'r':
			case (EIF_CHARACTER) 's':
			case (EIF_CHARACTER) 't':
			case (EIF_CHARACTER) 'u':
			case (EIF_CHARACTER) 'v':
			case (EIF_CHARACTER) 'w':
			case (EIF_CHARACTER) 'x':
			case (EIF_CHARACTER) 'y':
			case (EIF_CHARACTER) 'z':
			case (EIF_CHARACTER) '{':
			case (EIF_CHARACTER) '|':
			case (EIF_CHARACTER) '}':
			case (EIF_CHARACTER) '~':
				RTHOOK(11);
				tr1 = RTLN(RTUD(774));
				ui4_1 = ((EIF_INTEGER_32) 3L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(11);
				RTCI2(tr1);
				Result = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(12);
				uc1 = (EIF_CHARACTER) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(13);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(14);
				uc1 = (EIF_CHARACTER) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				break;
			default:
				RTHOOK(15);
				tr1 = RTLN(RTUD(774));
				ui4_1 = ((EIF_INTEGER_32) 6L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(13, 0, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(15);
				RTCI2(tr1);
				Result = (EIF_REFERENCE)RTCCL(tr1);
				RTHOOK(16);
				uc1 = (EIF_CHARACTER) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				RTHOOK(17);
				uc1 = (EIF_CHARACTER) '\\';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);

				RTHOOK(18);
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(19);
					uc1 = (EIF_CHARACTER) '0';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				} else {

					RTHOOK(20);
					if ((EIF_BOOLEAN)(arg1 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(21);
						uc1 = (EIF_CHARACTER) '-';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
						RTHOOK(22);
						loc4 = (EIF_INTEGER_32)(EIF_INTEGER_32)-arg1;
						RTHOOK(23);
						loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32)arg1;
						RTHOOK(25);
						loc2 = (EIF_INTEGER_32)((EIF_INTEGER_32) 3L);
					}


					RTHOOK(26);
					while (!((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)))) {

						RTHOOK(27);
						switch ((EIF_INTEGER_32)(loc4 % ((EIF_INTEGER_32) 8L))) {
							case 0L:
								RTHOOK(28);
								uc1 = (EIF_CHARACTER) '0';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 1L:
								RTHOOK(29);
								uc1 = (EIF_CHARACTER) '1';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 2L:
								RTHOOK(30);
								uc1 = (EIF_CHARACTER) '2';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 3L:
								RTHOOK(31);
								uc1 = (EIF_CHARACTER) '3';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 4L:
								RTHOOK(32);
								uc1 = (EIF_CHARACTER) '4';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 5L:
								RTHOOK(33);
								uc1 = (EIF_CHARACTER) '5';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 6L:
								RTHOOK(34);
								uc1 = (EIF_CHARACTER) '6';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							case 7L:
								RTHOOK(35);
								uc1 = (EIF_CHARACTER) '7';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
								break;
							default:
								RTEC(EN_WHEN);
						}
						RTHOOK(36);
						loc4 /= ((EIF_INTEGER_32) 8L);
						RTHOOK(26);
						;
					}


					RTHOOK(37);
					ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVPA(13, 118, "count", Result));
					loc3 = (EIF_INTEGER_32)ti4_1;
					RTHOOK(38);
					while (!((EIF_BOOLEAN)(loc2 >= loc3))) {
						RTHOOK(39);
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
						loc1 = (EIF_CHARACTER)tc1;
						RTHOOK(40);
						ui4_1 = loc3;
						tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(102, 0, "item", Result))(Result, ui4_1x)).value.EIF_CHARACTER_value);
						uc1 = tc1;
						ui4_1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", Result))(Result, uc1x, ui4_1x);
						RTHOOK(41);
						uc1 = loc1;
						ui4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", Result))(Result, uc1x, ui4_1x);
						RTHOOK(42);
						loc2++;
						RTHOOK(43);
						loc3--;
						RTHOOK(38);
						;
					}

				}

				RTHOOK(44);
				uc1 = (EIF_CHARACTER) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(13, 75, "append_character", Result))(Result, uc1x);
				break;
		}
	} else {
		RTHOOK(45);
		Result = RTMS_EX_H("Unknown token",13,1896573550);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(46);
		RTCT("character_token_name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(47);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

void EIF_Minit2129 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

