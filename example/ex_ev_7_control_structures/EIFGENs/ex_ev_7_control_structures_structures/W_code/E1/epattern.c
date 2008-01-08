#include "eif_macros.h"
#include "eif_struct.h"
#include "eif_interp.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_UNION toi365(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi365 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_INTEGER_32*  *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc365(fnptr);
static void toc365 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi75(EIF_REFERENCE);
static EIF_UNION toi75 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc75(fnptr);
static void toc75 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static EIF_UNION toi114(EIF_REFERENCE);
static EIF_UNION toi114 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_WCHAR;
	r.value.EIF_WIDE_CHAR_value = it->it_wchar;
	return r;
}

static void toc114(fnptr);
static void toc114 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = result.value.EIF_WIDE_CHAR_value;
}

static EIF_UNION toi11(EIF_REFERENCE);
static EIF_UNION toi11 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc11(fnptr);
static void toc11 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi76(EIF_REFERENCE);
static EIF_UNION toi76 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc76(fnptr);
static void toc76 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static EIF_UNION toi74(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi74 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc74(fnptr);
static void toc74 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi9(EIF_REFERENCE);
static EIF_UNION toi9 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc9(fnptr);
static void toc9 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi35(EIF_REFERENCE);
static EIF_UNION toi35 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc35(fnptr);
static void toc35 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static EIF_UNION toi21(EIF_REFERENCE);
static EIF_UNION toi21 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc21(fnptr);
static void toc21 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static EIF_UNION toi34(EIF_REFERENCE);
static EIF_UNION toi34 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc34(fnptr);
static void toc34 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static EIF_UNION toi22(EIF_REFERENCE);
static EIF_UNION toi22 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc22(fnptr);
static void toc22 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi77(EIF_REFERENCE);
static EIF_UNION toi77 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc77(fnptr);
static void toc77 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static EIF_UNION toi67(EIF_REFERENCE);
static EIF_UNION toi67 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc67(fnptr);
static void toc67 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi79(EIF_REFERENCE);
static EIF_UNION toi79 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc79(fnptr);
static void toc79 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static EIF_UNION toi7(EIF_REFERENCE);
static EIF_UNION toi7 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc7(fnptr);
static void toc7 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi15(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi15 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc15(fnptr);
static void toc15 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi6(EIF_REFERENCE);
static void toi6 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc6(fnptr);
static void toc6 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	Current = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) ptr)(Current);
}

static EIF_UNION toi1(EIF_REFERENCE);
static EIF_UNION toi1 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc1(fnptr);
static void toc1 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi14(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi14 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc14(fnptr);
static void toc14 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi94(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi94 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc94(fnptr);
static void toc94 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi115(EIF_REFERENCE, EIF_UNION);
static void toi115 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc115(fnptr);
static void toc115 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi58(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi58 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc58(fnptr);
static void toc58 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi19(EIF_REFERENCE, EIF_UNION);
static void toi19 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc19(fnptr);
static void toc19 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi59(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi59 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc59(fnptr);
static void toc59 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi82(EIF_REFERENCE, EIF_UNION);
static void toi82 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg1.type == SK_REF)? * (EIF_INTEGER_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc82(fnptr);
static void toc82 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT8;
	arg1.value.EIF_INTEGER_8_value = opop()->it_int8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi121(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi121 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc121(fnptr);
static void toc121 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static EIF_UNION toi39(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi39 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc39(fnptr);
static void toc39 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi86(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi86 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc86(fnptr);
static void toc86 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static void toi13(EIF_REFERENCE, EIF_UNION);
static void toi13 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc13(fnptr);
static void toc13 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi38(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi38 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc38(fnptr);
static void toc38 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi84(EIF_REFERENCE, EIF_UNION);
static void toi84 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg1.type == SK_REF)? * (EIF_INTEGER_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc84(fnptr);
static void toc84 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT64;
	arg1.value.EIF_INTEGER_64_value = opop()->it_int64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi41(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi41 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc41(fnptr);
static void toc41 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi23(EIF_REFERENCE, EIF_UNION);
static void toi23 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc23(fnptr);
static void toc23 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi118(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi118 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc118(fnptr);
static void toc118 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static EIF_UNION toi28(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi28 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc28(fnptr);
static void toc28 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi78(EIF_REFERENCE);
static EIF_UNION toi78 (EIF_REFERENCE Current)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc78(fnptr);
static void toc78 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	Current = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static void toi25(EIF_REFERENCE, EIF_UNION);
static void toi25 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc25(fnptr);
static void toc25 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi2(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi2 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc2(fnptr);
static void toc2 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi37(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi37 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc37(fnptr);
static void toc37 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi97(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi97 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc97(fnptr);
static void toc97 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi66(EIF_REFERENCE, EIF_UNION);
static void toi66 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc66(fnptr);
static void toc66 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi98(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi98 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc98(fnptr);
static void toc98 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi30(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi30 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc30(fnptr);
static void toc30 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi124(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi124 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc124(fnptr);
static void toc124 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static void toi17(EIF_REFERENCE, EIF_UNION);
static void toi17 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc17(fnptr);
static void toc17 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi93(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi93 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc93(fnptr);
static void toc93 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi99(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi99 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc99(fnptr);
static void toc99 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi123(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi123 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc123(fnptr);
static void toc123 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static EIF_UNION toi62(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi62 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc62(fnptr);
static void toc62 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi117(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi117 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc117(fnptr);
static void toc117 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static void toi4(EIF_REFERENCE, EIF_UNION);
static void toi4 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc4(fnptr);
static void toc4 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi5(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi5 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc5(fnptr);
static void toc5 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi12(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi12 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc12(fnptr);
static void toc12 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi83(EIF_REFERENCE, EIF_UNION);
static void toi83 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg1.type == SK_REF)? * (EIF_INTEGER_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc83(fnptr);
static void toc83 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT16;
	arg1.value.EIF_INTEGER_16_value = opop()->it_int16;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi129(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi129 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc129(fnptr);
static void toc129 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi100(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi100 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc100(fnptr);
static void toc100 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi80(EIF_REFERENCE, EIF_UNION);
static void toi80 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc80(fnptr);
static void toc80 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi272(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi272 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc272(fnptr);
static void toc272 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi54(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi54 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc54(fnptr);
static void toc54 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi120(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi120 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc120(fnptr);
static void toc120 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static void toi147(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi147 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc147(fnptr);
static void toc147 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi87(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi87 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc87(fnptr);
static void toc87 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi96(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi96 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc96(fnptr);
static void toc96 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi113(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi113 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc113(fnptr);
static void toc113 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi27(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi27 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg2.type == SK_REF)? * (EIF_NATURAL_8 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc27(fnptr);
static void toc27 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT8;
	arg2.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi128(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi128 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc128(fnptr);
static void toc128 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi146(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi146 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc146(fnptr);
static void toc146 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi53(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi53 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg6.type == SK_REF)? * (EIF_BOOLEAN *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc53(fnptr);
static void toc53 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_BOOL;
	arg6.value.EIF_BOOLEAN_value = opop()->it_char;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi29(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi29 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc29(fnptr);
static void toc29 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi33(EIF_REFERENCE, EIF_UNION);
static void toi33 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg1.type == SK_REF)? * (EIF_NATURAL_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc33(fnptr);
static void toc33 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT16;
	arg1.value.EIF_NATURAL_16_value = opop()->it_uint16;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi200(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi200 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_WCHAR;
	r.value.EIF_WIDE_CHAR_value = it->it_wchar;
	return r;
}

static void toc200(fnptr);
static void toc200 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = result.value.EIF_WIDE_CHAR_value;
}

static EIF_UNION toi119(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi119 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc119(fnptr);
static void toc119 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static EIF_UNION toi205(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi205 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc205(fnptr);
static void toc205 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static EIF_UNION toi134(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi134 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc134(fnptr);
static void toc134 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi18(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi18 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc18(fnptr);
static void toc18 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi20(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi20 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc20(fnptr);
static void toc20 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi26(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi26 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc26(fnptr);
static void toc26 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi85(EIF_REFERENCE, EIF_UNION);
static void toi85 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc85(fnptr);
static void toc85 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi203(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi203 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc203(fnptr);
static void toc203 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi269(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi269 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc269(fnptr);
static void toc269 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi208(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi208 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc208(fnptr);
static void toc208 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi69(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi69 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc69(fnptr);
static void toc69 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi169(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi169 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_WCHAR;
	r.value.EIF_WIDE_CHAR_value = it->it_wchar;
	return r;
}

static void toc169(fnptr);
static void toc169 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = result.value.EIF_WIDE_CHAR_value;
}

static EIF_UNION toi116(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi116 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc116(fnptr);
static void toc116 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi36(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi36 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc36(fnptr);
static void toc36 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi81(EIF_REFERENCE, EIF_UNION);
static void toi81 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc81(fnptr);
static void toc81 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static EIF_UNION toi167(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi167 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc167(fnptr);
static void toc167 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi92(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi92 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc92(fnptr);
static void toc92 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi171(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi171 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc171(fnptr);
static void toc171 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static EIF_UNION toi111(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi111 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc111(fnptr);
static void toc111 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi44(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi44 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc44(fnptr);
static void toc44 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi122(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi122 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc122(fnptr);
static void toc122 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static void toi68(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi68 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg2.type == SK_REF)? * (EIF_REAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc68(fnptr);
static void toc68 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL32;
	arg2.value.EIF_REAL_32_value = opop()->it_real32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi127(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi127 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc127(fnptr);
static void toc127 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi158(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi158 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc158(fnptr);
static void toc158 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi237(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi237 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc237(fnptr);
static void toc237 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi154(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi154 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg1.type == SK_REF)? * (EIF_INTEGER_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc154(fnptr);
static void toc154 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT8;
	arg1.value.EIF_INTEGER_8_value = opop()->it_int8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi110(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi110 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc110(fnptr);
static void toc110 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi40(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi40 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc40(fnptr);
static void toc40 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi260(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi260 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc260(fnptr);
static void toc260 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi31(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi31 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc31(fnptr);
static void toc31 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi102(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi102 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc102(fnptr);
static void toc102 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi156(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi156 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg1.type == SK_REF)? * (EIF_INTEGER_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc156(fnptr);
static void toc156 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT64;
	arg1.value.EIF_INTEGER_64_value = opop()->it_int64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi267(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi267 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc267(fnptr);
static void toc267 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi103(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi103 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc103(fnptr);
static void toc103 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi3(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi3 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc3(fnptr);
static void toc3 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi104(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi104 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc104(fnptr);
static void toc104 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi108(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi108 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc108(fnptr);
static void toc108 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi160(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi160 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc160(fnptr);
static void toc160 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi145(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi145 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg1.type == SK_REF)? * (EIF_INTEGER_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc145(fnptr);
static void toc145 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT64;
	arg1.value.EIF_INTEGER_64_value = opop()->it_int64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi161(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi161 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc161(fnptr);
static void toc161 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi266(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi266 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc266(fnptr);
static void toc266 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi64(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi64 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc64(fnptr);
static void toc64 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi133(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi133 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc133(fnptr);
static void toc133 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi56(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi56 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc56(fnptr);
static void toc56 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi405(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi405 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc405(fnptr);
static void toc405 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static EIF_UNION toi130(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi130 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg1.type == SK_REF)? * (EIF_INTEGER_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc130(fnptr);
static void toc130 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT8;
	arg1.value.EIF_INTEGER_8_value = opop()->it_int8;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi149(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi149 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg1.type == SK_REF)? * (EIF_NATURAL_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc149(fnptr);
static void toc149 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT16;
	arg1.value.EIF_NATURAL_16_value = opop()->it_uint16;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi8(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi8 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc8(fnptr);
static void toc8 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi125(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi125 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_WCHAR;
	r.value.EIF_WIDE_CHAR_value = it->it_wchar;
	return r;
}

static void toc125(fnptr);
static void toc125 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = result.value.EIF_WIDE_CHAR_value;
}

static void toi185(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi185 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc185(fnptr);
static void toc185 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi43(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi43 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc43(fnptr);
static void toc43 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi95(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi95 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc95(fnptr);
static void toc95 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi16(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi16 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc16(fnptr);
static void toc16 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi221(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi221 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg3.type == SK_REF)? * (EIF_INTEGER_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc221(fnptr);
static void toc221 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT16;
	arg3.value.EIF_INTEGER_16_value = opop()->it_int16;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi148(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi148 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc148(fnptr);
static void toc148 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi403(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi403 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc403(fnptr);
static void toc403 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static EIF_UNION toi88(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi88 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc88(fnptr);
static void toc88 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi126(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi126 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc126(fnptr);
static void toc126 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi305(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi305 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc305(fnptr);
static void toc305 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi241(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi241 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc241(fnptr);
static void toc241 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi222(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi222 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc222(fnptr);
static void toc222 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi322(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi322 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc322(fnptr);
static void toc322 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi132(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi132 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg1.type == SK_REF)? * (EIF_INTEGER_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc132(fnptr);
static void toc132 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT64;
	arg1.value.EIF_INTEGER_64_value = opop()->it_int64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi435(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi435 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc435(fnptr);
static void toc435 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi191(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi191 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg3.type == SK_REF)? * (EIF_INTEGER_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc191(fnptr);
static void toc191 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT16;
	arg3.value.EIF_INTEGER_16_value = opop()->it_int16;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi270(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi270 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc270(fnptr);
static void toc270 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi316(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi316 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc316(fnptr);
static void toc316 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi101(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi101 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc101(fnptr);
static void toc101 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi223(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi223 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg3.type == SK_REF)? * (EIF_INTEGER_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc223(fnptr);
static void toc223 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT64;
	arg3.value.EIF_INTEGER_64_value = opop()->it_int64;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi363(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi363 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc363(fnptr);
static void toc363 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static void toi112(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi112 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc112(fnptr);
static void toc112 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi196(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi196 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc196(fnptr);
static void toc196 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi192(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi192 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc192(fnptr);
static void toc192 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi287(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi287 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc287(fnptr);
static void toc287 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi137(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi137 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg1.type == SK_REF)? * (EIF_NATURAL_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc137(fnptr);
static void toc137 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT16;
	arg1.value.EIF_NATURAL_16_value = opop()->it_uint16;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi107(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi107 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc107(fnptr);
static void toc107 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi216(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi216 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg3.type == SK_REF)? * (EIF_NATURAL_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc216(fnptr);
static void toc216 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT8;
	arg3.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi57(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi57 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc57(fnptr);
static void toc57 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi522(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi522 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc522(fnptr);
static void toc522 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static EIF_UNION toi207(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi207 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc207(fnptr);
static void toc207 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static EIF_UNION toi135(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi135 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc135(fnptr);
static void toc135 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi201(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi201 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc201(fnptr);
static void toc201 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static EIF_UNION toi258(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi258 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc258(fnptr);
static void toc258 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi202(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi202 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc202(fnptr);
static void toc202 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static void toi217(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi217 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg3.type == SK_REF)? * (EIF_NATURAL_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc217(fnptr);
static void toc217 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT16;
	arg3.value.EIF_NATURAL_16_value = opop()->it_uint16;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi253(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi253 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg7.type == SK_REF)? * (EIF_REAL_64 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc253(fnptr);
static void toc253 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_REAL64;
	arg7.value.EIF_REAL_64_value = opop()->it_real64;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi136(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi136 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc136(fnptr);
static void toc136 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi165(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi165 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc165(fnptr);
static void toc165 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi186(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi186 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg3.type == SK_REF)? * (EIF_NATURAL_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc186(fnptr);
static void toc186 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT8;
	arg3.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi271(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi271 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc271(fnptr);
static void toc271 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi131(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi131 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg1.type == SK_REF)? * (EIF_INTEGER_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc131(fnptr);
static void toc131 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT16;
	arg1.value.EIF_INTEGER_16_value = opop()->it_int16;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi218(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi218 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc218(fnptr);
static void toc218 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi209(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi209 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc209(fnptr);
static void toc209 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi70(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi70 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc70(fnptr);
static void toc70 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi170(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi170 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc170(fnptr);
static void toc170 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi187(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi187 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg3.type == SK_REF)? * (EIF_NATURAL_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc187(fnptr);
static void toc187 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT16;
	arg3.value.EIF_NATURAL_16_value = opop()->it_uint16;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi106(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi106 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc106(fnptr);
static void toc106 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi140(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi140 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc140(fnptr);
static void toc140 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi141(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi141 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc141(fnptr);
static void toc141 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi219(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi219 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg3.type == SK_REF)? * (EIF_NATURAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc219(fnptr);
static void toc219 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT64;
	arg3.value.EIF_NATURAL_64_value = opop()->it_uint64;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi313(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi313 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc313(fnptr);
static void toc313 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi138(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi138 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc138(fnptr);
static void toc138 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi177(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi177 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc177(fnptr);
static void toc177 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static void toi188(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi188 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc188(fnptr);
static void toc188 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi351(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi351 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_INTEGER_32*  *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc351(fnptr);
static void toc351 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static EIF_UNION toi323(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi323 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc323(fnptr);
static void toc323 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi150(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi150 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc150(fnptr);
static void toc150 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi224(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi224 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc224(fnptr);
static void toc224 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi173(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi173 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc173(fnptr);
static void toc173 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi352(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi352 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg2.type == SK_REF)? * (EIF_INTEGER_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_INTEGER_32*  *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc352(fnptr);
static void toc352 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT64;
	arg2.value.EIF_INTEGER_64_value = opop()->it_int64;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi174(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi174 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc174(fnptr);
static void toc174 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static void toi189(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi189 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg3.type == SK_REF)? * (EIF_NATURAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc189(fnptr);
static void toc189 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT64;
	arg3.value.EIF_NATURAL_64_value = opop()->it_uint64;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi139(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi139 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc139(fnptr);
static void toc139 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi242(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi242 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc242(fnptr);
static void toc242 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi180(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi180 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc180(fnptr);
static void toc180 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi212(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi212 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc212(fnptr);
static void toc212 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi264(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi264 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc264(fnptr);
static void toc264 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi445(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi445 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc445(fnptr);
static void toc445 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi332(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi332 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc332(fnptr);
static void toc332 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi194(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi194 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc194(fnptr);
static void toc194 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi236(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi236 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc236(fnptr);
static void toc236 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi142(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi142 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc142(fnptr);
static void toc142 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi143(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi143 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg1.type == SK_REF)? * (EIF_INTEGER_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc143(fnptr);
static void toc143 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT8;
	arg1.value.EIF_INTEGER_8_value = opop()->it_int8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi10(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi10 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc10(fnptr);
static void toc10 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi155(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi155 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg1.type == SK_REF)? * (EIF_INTEGER_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc155(fnptr);
static void toc155 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT16;
	arg1.value.EIF_INTEGER_16_value = opop()->it_int16;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi508(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi508 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc508(fnptr);
static void toc508 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi240(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi240 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc240(fnptr);
static void toc240 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi182(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi182 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc182(fnptr);
static void toc182 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi73(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi73 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc73(fnptr);
static void toc73 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi301(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi301 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc301(fnptr);
static void toc301 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi198(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi198 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc198(fnptr);
static void toc198 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi232(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi232 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc232(fnptr);
static void toc232 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi452(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi452 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc452(fnptr);
static void toc452 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi357(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi357 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_INTEGER_32*  *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc357(fnptr);
static void toc357 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi273(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi273 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc273(fnptr);
static void toc273 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi195(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi195 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc195(fnptr);
static void toc195 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi152(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi152 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc152(fnptr);
static void toc152 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi91(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi91 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc91(fnptr);
static void toc91 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi475(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi475 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc475(fnptr);
static void toc475 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi259(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi259 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc259(fnptr);
static void toc259 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi162(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi162 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg1.type == SK_REF)? * (EIF_NATURAL_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc162(fnptr);
static void toc162 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_UINT16;
	arg1.value.EIF_NATURAL_16_value = opop()->it_uint16;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi571(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi571 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc571(fnptr);
static void toc571 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi283(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi283 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc283(fnptr);
static void toc283 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static void toi344(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi344 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc344(fnptr);
static void toc344 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi215(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi215 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc215(fnptr);
static void toc215 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi164(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi164 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc164(fnptr);
static void toc164 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi265(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi265 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc265(fnptr);
static void toc265 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi509(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi509 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc509(fnptr);
static void toc509 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi206(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi206 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc206(fnptr);
static void toc206 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static void toi366(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi366 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg4.type == SK_REF)? * (EIF_NATURAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_NATURAL_32*  *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_INTEGER_32*  *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc366(fnptr);
static void toc366 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_UINT32;
	arg4.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi278(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi278 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc278(fnptr);
static void toc278 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi61(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi61 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc61(fnptr);
static void toc61 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi511(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi511 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc511(fnptr);
static void toc511 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi290(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi290 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc290(fnptr);
static void toc290 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi281(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi281 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg4.type == SK_REF)? * (EIF_NATURAL_8 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc281(fnptr);
static void toc281 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_UINT8;
	arg4.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi157(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi157 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc157(fnptr);
static void toc157 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi250(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi250 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc250(fnptr);
static void toc250 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi389(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi389 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc389(fnptr);
static void toc389 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi181(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi181 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc181(fnptr);
static void toc181 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi159(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi159 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc159(fnptr);
static void toc159 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi325(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi325 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc325(fnptr);
static void toc325 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi407(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi407 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc407(fnptr);
static void toc407 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi296(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi296 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc296(fnptr);
static void toc296 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi252(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi252 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc252(fnptr);
static void toc252 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi519(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi519 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc519(fnptr);
static void toc519 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi277(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi277 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc277(fnptr);
static void toc277 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi502(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi502 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg7.type == SK_REF)? * (EIF_REAL_64 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg10.type == SK_REF)? * (EIF_BOOLEAN *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc502(fnptr);
static void toc502 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	Current = opop()->it_ref;
	arg10.type = SK_BOOL;
	arg10.value.EIF_BOOLEAN_value = opop()->it_char;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_REAL64;
	arg7.value.EIF_REAL_64_value = opop()->it_real64;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

static EIF_UNION toi433(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi433 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc433(fnptr);
static void toc433 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi354(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi354 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg2.type == SK_REF)? * (EIF_REAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc354(fnptr);
static void toc354 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REAL32;
	arg2.value.EIF_REAL_32_value = opop()->it_real32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi384(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi384 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc384(fnptr);
static void toc384 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi285(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi285 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc285(fnptr);
static void toc285 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi210(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi210 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc210(fnptr);
static void toc210 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static EIF_UNION toi561(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi561 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg8.type == SK_REF)? * (EIF_BOOLEAN *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg9.type == SK_REF)? * (EIF_BOOLEAN *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_POINTER *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc561(fnptr);
static void toc561 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_BOOL;
	arg9.value.EIF_BOOLEAN_value = opop()->it_char;
	arg8.type = SK_BOOL;
	arg8.value.EIF_BOOLEAN_value = opop()->it_char;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi401(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi401 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc401(fnptr);
static void toc401 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static void toi291(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi291 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc291(fnptr);
static void toc291 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi418(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi418 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg3.type == SK_REF)? * (EIF_INTEGER_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc418(fnptr);
static void toc418 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT64;
	arg3.value.EIF_INTEGER_64_value = opop()->it_int64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi263(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi263 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc263(fnptr);
static void toc263 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static EIF_UNION toi89(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi89 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc89(fnptr);
static void toc89 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi360(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi360 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_INTEGER_32*  *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc360(fnptr);
static void toc360 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi144(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi144 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg1.type == SK_REF)? * (EIF_INTEGER_16 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc144(fnptr);
static void toc144 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT16;
	arg1.value.EIF_INTEGER_16_value = opop()->it_int16;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi426(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi426 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg2.type == SK_REF)? * (EIF_INTEGER_16 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc426(fnptr);
static void toc426 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT16;
	arg2.value.EIF_INTEGER_16_value = opop()->it_int16;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static void toi24(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi24 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg1.type == SK_REF)? * (EIF_NATURAL_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg2.type == SK_REF)? * (EIF_NATURAL_8 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg3.type == SK_REF)? * (EIF_NATURAL_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg4.type == SK_REF)? * (EIF_NATURAL_8 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc24(fnptr);
static void toc24 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_UINT8;
	arg4.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg3.type = SK_UINT8;
	arg3.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg2.type = SK_UINT8;
	arg2.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg1.type = SK_UINT8;
	arg1.value.EIF_NATURAL_8_value = opop()->it_uint8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi176(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi176 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc176(fnptr);
static void toc176 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static EIF_UNION toi239(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi239 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc239(fnptr);
static void toc239 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi400(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi400 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc400(fnptr);
static void toc400 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi520(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi520 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc520(fnptr);
static void toc520 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi472(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi472 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg11.type == SK_REF)? * (EIF_POINTER *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_INTEGER_32*  *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc472(fnptr);
static void toc472 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_POINTER;
	arg11.value.EIF_POINTER_value = opop()->it_ptr;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
}

static void toi284(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi284 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc284(fnptr);
static void toc284 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi249(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi249 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc249(fnptr);
static void toc249 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi229(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi229 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg7.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc229(fnptr);
static void toc229 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_REF;
	arg7.value.EIF_REFERENCE_value = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi412(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi412 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg3.type == SK_REF)? * (EIF_NATURAL_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc412(fnptr);
static void toc412 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT8;
	arg3.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi52(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi52 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc52(fnptr);
static void toc52 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi558(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi558 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc558(fnptr);
static void toc558 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi583(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi583 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc583(fnptr);
static void toc583 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi172(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi172 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc172(fnptr);
static void toc172 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static EIF_UNION toi565(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi565 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc565(fnptr);
static void toc565 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static void toi153(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi153 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc153(fnptr);
static void toc153 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi534(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi534 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_POINTER *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg10.type == SK_REF)? * (EIF_POINTER *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc534(fnptr);
static void toc534 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	Current = opop()->it_ref;
	arg10.type = SK_POINTER;
	arg10.value.EIF_POINTER_value = opop()->it_ptr;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi398(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi398 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_WCHAR;
	r.value.EIF_WIDE_CHAR_value = it->it_wchar;
	return r;
}

static void toc398(fnptr);
static void toc398 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = result.value.EIF_WIDE_CHAR_value;
}

static EIF_UNION toi248(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi248 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc248(fnptr);
static void toc248 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static EIF_UNION toi254(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi254 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc254(fnptr);
static void toc254 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi213(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi213 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg3.type == SK_REF)? * (EIF_CHARACTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc213(fnptr);
static void toc213 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_CHAR;
	arg3.value.EIF_CHARACTER_value = opop()->it_char;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi199(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi199 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc199(fnptr);
static void toc199 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static void toi383(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi383 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc383(fnptr);
static void toc383 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi413(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi413 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg3.type == SK_REF)? * (EIF_NATURAL_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc413(fnptr);
static void toc413 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT16;
	arg3.value.EIF_NATURAL_16_value = opop()->it_uint16;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi580(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi580 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc580(fnptr);
static void toc580 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi523(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi523 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc523(fnptr);
static void toc523 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi179(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi179 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc179(fnptr);
static void toc179 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi457(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi457 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg10.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc457(fnptr);
static void toc457 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	Current = opop()->it_ref;
	arg10.type = SK_REF;
	arg10.value.EIF_REFERENCE_value = opop()->it_ref;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi423(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi423 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc423(fnptr);
static void toc423 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi425(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi425 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT16;
	r.value.EIF_INTEGER_16_value = it->it_int16;
	return r;
}

static void toc425(fnptr);
static void toc425 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = result.value.EIF_INTEGER_16_value;
}

static EIF_UNION toi566(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi566 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc566(fnptr);
static void toc566 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi329(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi329 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc329(fnptr);
static void toc329 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi500(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi500 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc500(fnptr);
static void toc500 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi166(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi166 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc166(fnptr);
static void toc166 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi394(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi394 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg7.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc394(fnptr);
static void toc394 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_REF;
	arg7.value.EIF_REFERENCE_value = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static EIF_UNION toi306(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi306 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc306(fnptr);
static void toc306 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi302(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi302 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc302(fnptr);
static void toc302 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi327(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi327 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc327(fnptr);
static void toc327 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi71(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi71 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc71(fnptr);
static void toc71 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi268(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi268 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc268(fnptr);
static void toc268 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi538(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi538 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER*  *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc538(fnptr);
static void toc538 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi214(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi214 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg3.type == SK_REF)? * (EIF_WIDE_CHAR *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc214(fnptr);
static void toc214 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_WCHAR;
	arg3.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi427(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi427 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc427(fnptr);
static void toc427 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static EIF_UNION toi396(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi396 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc396(fnptr);
static void toc396 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi193(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi193 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg3.type == SK_REF)? * (EIF_INTEGER_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc193(fnptr);
static void toc193 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT64;
	arg3.value.EIF_INTEGER_64_value = opop()->it_int64;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi408(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi408 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg3.type == SK_REF)? * (EIF_CHARACTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc408(fnptr);
static void toc408 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_CHAR;
	arg3.value.EIF_CHARACTER_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi63(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi63 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg4.type == SK_REF)? * (EIF_REAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc63(fnptr);
static void toc63 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL32;
	arg4.value.EIF_REAL_32_value = opop()->it_real32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi391(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi391 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc391(fnptr);
static void toc391 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi376(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi376 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc376(fnptr);
static void toc376 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi550(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi550 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc550(fnptr);
static void toc550 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi362(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi362 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc362(fnptr);
static void toc362 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi183(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi183 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg3.type == SK_REF)? * (EIF_CHARACTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc183(fnptr);
static void toc183 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_CHAR;
	arg3.value.EIF_CHARACTER_value = opop()->it_char;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi541(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi541 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc541(fnptr);
static void toc541 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi261(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi261 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_POINTER *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc261(fnptr);
static void toc261 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static EIF_UNION toi204(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi204 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc204(fnptr);
static void toc204 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static EIF_UNION toi446(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi446 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc446(fnptr);
static void toc446 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi368(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi368 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg4.type == SK_REF)? * (EIF_NATURAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_INTEGER_32*  *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc368(fnptr);
static void toc368 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_UINT32;
	arg4.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static EIF_UNION toi397(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi397 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc397(fnptr);
static void toc397 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static void toi515(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi515 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc515(fnptr);
static void toc515 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi288(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi288 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc288(fnptr);
static void toc288 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi168(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi168 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc168(fnptr);
static void toc168 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static EIF_UNION toi378(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi378 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc378(fnptr);
static void toc378 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi324(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi324 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc324(fnptr);
static void toc324 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static EIF_UNION toi46(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi46 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc46(fnptr);
static void toc46 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi388(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi388 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc388(fnptr);
static void toc388 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi228(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi228 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc228(fnptr);
static void toc228 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi393(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi393 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc393(fnptr);
static void toc393 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi255(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi255 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg7.type == SK_REF)? * (EIF_REAL_64 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg8.type == SK_REF)? * (EIF_REAL_64 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc255(fnptr);
static void toc255 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_REAL64;
	arg8.value.EIF_REAL_64_value = opop()->it_real64;
	arg7.type = SK_REAL64;
	arg7.value.EIF_REAL_64_value = opop()->it_real64;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi184(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi184 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg3.type == SK_REF)? * (EIF_WIDE_CHAR *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc184(fnptr);
static void toc184 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_WCHAR;
	arg3.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi175(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi175 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc175(fnptr);
static void toc175 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static void toi466(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi466 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc466(fnptr);
static void toc466 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi320(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi320 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc320(fnptr);
static void toc320 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi328(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi328 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc328(fnptr);
static void toc328 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi197(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi197 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc197(fnptr);
static void toc197 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi334(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi334 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc334(fnptr);
static void toc334 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi294(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi294 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_POINTER *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc294(fnptr);
static void toc294 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi105(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi105 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc105(fnptr);
static void toc105 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi497(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi497 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg1.type == SK_REF)? * (EIF_INTEGER_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc497(fnptr);
static void toc497 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT8;
	arg1.value.EIF_INTEGER_8_value = opop()->it_int8;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi421(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi421 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc421(fnptr);
static void toc421 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static void toi220(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi220 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg3.type == SK_REF)? * (EIF_INTEGER_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc220(fnptr);
static void toc220 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT8;
	arg3.value.EIF_INTEGER_8_value = opop()->it_int8;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi247(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi247 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc247(fnptr);
static void toc247 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi486(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi486 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc486(fnptr);
static void toc486 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi575(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi575 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg2.type == SK_REF)? * (EIF_REAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc575(fnptr);
static void toc575 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL32;
	arg2.value.EIF_REAL_32_value = opop()->it_real32;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi437(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi437 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc437(fnptr);
static void toc437 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi595(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi595 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc595(fnptr);
static void toc595 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi227(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi227 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc227(fnptr);
static void toc227 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static EIF_UNION toi406(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi406 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc406(fnptr);
static void toc406 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static void toi536(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi536 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc536(fnptr);
static void toc536 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi336(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi336 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc336(fnptr);
static void toc336 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi47(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi47 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc47(fnptr);
static void toc47 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi225(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi225 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc225(fnptr);
static void toc225 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi527(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi527 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_WCHAR;
	r.value.EIF_WIDE_CHAR_value = it->it_wchar;
	return r;
}

static void toc527(fnptr);
static void toc527 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = result.value.EIF_WIDE_CHAR_value;
}

static EIF_UNION toi490(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi490 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc490(fnptr);
static void toc490 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi151(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi151 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc151(fnptr);
static void toc151 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi485(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi485 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg2.type == SK_REF)? * (EIF_REAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc485(fnptr);
static void toc485 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REAL32;
	arg2.value.EIF_REAL_32_value = opop()->it_real32;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi257(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi257 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc257(fnptr);
static void toc257 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi318(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi318 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc318(fnptr);
static void toc318 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi562(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi562 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc562(fnptr);
static void toc562 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi476(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi476 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc476(fnptr);
static void toc476 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi420(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi420 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg2.type == SK_REF)? * (EIF_NATURAL_8 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc420(fnptr);
static void toc420 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT8;
	arg2.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi65(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi65 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg2.type == SK_REF)? * (EIF_REAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg4.type == SK_REF)? * (EIF_REAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc65(fnptr);
static void toc65 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL32;
	arg4.value.EIF_REAL_32_value = opop()->it_real32;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REAL32;
	arg2.value.EIF_REAL_32_value = opop()->it_real32;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi279(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi279 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc279(fnptr);
static void toc279 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi109(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi109 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc109(fnptr);
static void toc109 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi471(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi471 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc471(fnptr);
static void toc471 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static void toi535(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi535 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc535(fnptr);
static void toc535 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi594(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi594 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc594(fnptr);
static void toc594 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi547(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi547 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc547(fnptr);
static void toc547 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi444(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi444 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc444(fnptr);
static void toc444 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi55(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi55 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc55(fnptr);
static void toc55 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi244(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi244 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc244(fnptr);
static void toc244 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi461(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi461 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc461(fnptr);
static void toc461 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi375(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi375 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc375(fnptr);
static void toc375 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi49(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi49 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc49(fnptr);
static void toc49 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi498(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi498 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg7.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg8.type == SK_REF)? * (EIF_BOOLEAN *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc498(fnptr);
static void toc498 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_BOOL;
	arg8.value.EIF_BOOLEAN_value = opop()->it_char;
	arg7.type = SK_REF;
	arg7.value.EIF_REFERENCE_value = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static void toi211(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi211 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc211(fnptr);
static void toc211 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi51(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi51 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc51(fnptr);
static void toc51 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi298(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi298 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc298(fnptr);
static void toc298 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi459(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi459 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc459(fnptr);
static void toc459 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	Current = opop()->it_ref;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

static void toi387(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi387 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc387(fnptr);
static void toc387 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi386(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi386 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc386(fnptr);
static void toc386 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi555(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi555 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc555(fnptr);
static void toc555 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi48(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi48 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc48(fnptr);
static void toc48 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi251(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi251 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc251(fnptr);
static void toc251 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi50(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi50 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc50(fnptr);
static void toc50 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi491(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi491 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc491(fnptr);
static void toc491 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi395(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi395 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc395(fnptr);
static void toc395 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi286(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi286 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc286(fnptr);
static void toc286 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	Current = opop()->it_ref;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

static void toi72(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi72 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc72(fnptr);
static void toc72 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi579(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi579 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc579(fnptr);
static void toc579 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi567(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi567 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc567(fnptr);
static void toc567 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi358(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi358 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_INTEGER_32*  *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc358(fnptr);
static void toc358 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi512(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi512 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc512(fnptr);
static void toc512 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi370(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi370 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc370(fnptr);
static void toc370 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi32(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi32 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg2.type == SK_REF)? * (EIF_NATURAL_16 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg3.type == SK_REF)? * (EIF_NATURAL_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc32(fnptr);
static void toc32 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_UINT16;
	arg3.value.EIF_NATURAL_16_value = opop()->it_uint16;
	arg2.type = SK_UINT16;
	arg2.value.EIF_NATURAL_16_value = opop()->it_uint16;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi314(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi314 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc314(fnptr);
static void toc314 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi289(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi289 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc289(fnptr);
static void toc289 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi505(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi505 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc505(fnptr);
static void toc505 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi347(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi347 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_INTEGER_32*  *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc347(fnptr);
static void toc347 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi549(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi549 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc549(fnptr);
static void toc549 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi390(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi390 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc390(fnptr);
static void toc390 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi330(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi330 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc330(fnptr);
static void toc330 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi274(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi274 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc274(fnptr);
static void toc274 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi299(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi299 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc299(fnptr);
static void toc299 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi238(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi238 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg1.type == SK_REF)? * (EIF_NATURAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg2.type == SK_REF)? * (EIF_NATURAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc238(fnptr);
static void toc238 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_UINT64;
	arg2.value.EIF_NATURAL_64_value = opop()->it_uint64;
	arg1.type = SK_UINT64;
	arg1.value.EIF_NATURAL_64_value = opop()->it_uint64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi419(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi419 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc419(fnptr);
static void toc419 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi480(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi480 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12, EIF_UNION arg13)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg10.type == SK_REF)? * (EIF_POINTER *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg13.type == SK_REF)? * (EIF_INTEGER_32 *)arg13.value.EIF_REFERENCE_value: arg13.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc480(fnptr);
static void toc480 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	EIF_UNION arg13;
	Current = opop()->it_ref;
	arg13.type = SK_INT32;
	arg13.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_POINTER;
	arg10.value.EIF_POINTER_value = opop()->it_ptr;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13);
}

static EIF_UNION toi422(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi422 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg2.type == SK_REF)? * (EIF_INTEGER_8 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc422(fnptr);
static void toc422 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT8;
	arg2.value.EIF_INTEGER_8_value = opop()->it_int8;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static EIF_UNION toi432(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi432 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg2.type == SK_REF)? * (EIF_NATURAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc432(fnptr);
static void toc432 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT64;
	arg2.value.EIF_NATURAL_64_value = opop()->it_uint64;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static EIF_UNION toi337(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi337 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_INTEGER_32*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc337(fnptr);
static void toc337 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi256(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi256 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc256(fnptr);
static void toc256 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi319(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi319 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc319(fnptr);
static void toc319 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi276(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi276 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc276(fnptr);
static void toc276 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi429(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi429 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc429(fnptr);
static void toc429 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static EIF_UNION toi372(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi372 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc372(fnptr);
static void toc372 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi589(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi589 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc589(fnptr);
static void toc589 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi458(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi458 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg8.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc458(fnptr);
static void toc458 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	Current = opop()->it_ref;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_REF;
	arg8.value.EIF_REFERENCE_value = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11);
}

static void toi310(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi310 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc310(fnptr);
static void toc310 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi90(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi90 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc90(fnptr);
static void toc90 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi343(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi343 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc343(fnptr);
static void toc343 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi333(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi333 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc333(fnptr);
static void toc333 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi531(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi531 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12, EIF_UNION arg13, EIF_UNION arg14)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg13.type == SK_REF)? * (EIF_INTEGER_32 *)arg13.value.EIF_REFERENCE_value: arg13.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg14.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc531(fnptr);
static void toc531 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	EIF_UNION arg13;
	EIF_UNION arg14;
	Current = opop()->it_ref;
	arg14.type = SK_REF;
	arg14.value.EIF_REFERENCE_value = opop()->it_ref;
	arg13.type = SK_INT32;
	arg13.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14);
}

static void toi495(EIF_REFERENCE, EIF_UNION);
static void toi495 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_INTEGER_32*  *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc495(fnptr);
static void toc495 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static void toi377(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi377 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc377(fnptr);
static void toc377 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi293(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi293 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc293(fnptr);
static void toc293 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi451(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi451 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc451(fnptr);
static void toc451 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi404(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi404 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT8;
	r.value.EIF_INTEGER_8_value = it->it_int8;
	return r;
}

static void toc404(fnptr);
static void toc404 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = result.value.EIF_INTEGER_8_value;
}

static void toi570(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi570 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc570(fnptr);
static void toc570 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi526(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi526 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc526(fnptr);
static void toc526 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi233(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi233 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg8.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg9.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc233(fnptr);
static void toc233 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_REF;
	arg9.value.EIF_REFERENCE_value = opop()->it_ref;
	arg8.type = SK_REF;
	arg8.value.EIF_REFERENCE_value = opop()->it_ref;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static void toi311(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi311 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc311(fnptr);
static void toc311 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi399(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi399 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc399(fnptr);
static void toc399 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static EIF_UNION toi564(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi564 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc564(fnptr);
static void toc564 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi163(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi163 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg1.type == SK_REF)? * (EIF_WIDE_CHAR *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc163(fnptr);
static void toc163 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_WCHAR;
	arg1.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi578(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi578 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg4.type == SK_REF)? * (EIF_REAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc578(fnptr);
static void toc578 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL32;
	arg4.value.EIF_REAL_32_value = opop()->it_real32;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi280(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi280 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = (arg3.type == SK_REF)? * (EIF_NATURAL_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc280(fnptr);
static void toc280 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT8;
	arg3.value.EIF_NATURAL_8_value = opop()->it_uint8;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi560(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi560 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc560(fnptr);
static void toc560 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static void toi415(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi415 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg3.type == SK_REF)? * (EIF_NATURAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc415(fnptr);
static void toc415 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT64;
	arg3.value.EIF_NATURAL_64_value = opop()->it_uint64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi559(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi559 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc559(fnptr);
static void toc559 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi303(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi303 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc303(fnptr);
static void toc303 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi292(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi292 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc292(fnptr);
static void toc292 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi537(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi537 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc537(fnptr);
static void toc537 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi496(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi496 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg1.type == SK_REF)? * (EIF_INTEGER_8 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc496(fnptr);
static void toc496 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_INT8;
	arg1.value.EIF_INTEGER_8_value = opop()->it_int8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi530(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi530 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg1.type == SK_REF)? * (EIF_INTEGER_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc530(fnptr);
static void toc530 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_INT64;
	arg1.value.EIF_INTEGER_64_value = opop()->it_int64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi529(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi529 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc529(fnptr);
static void toc529 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static void toi380(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi380 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc380(fnptr);
static void toc380 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi532(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi532 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc532(fnptr);
static void toc532 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi510(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi510 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc510(fnptr);
static void toc510 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi468(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi468 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc468(fnptr);
static void toc468 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi317(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi317 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc317(fnptr);
static void toc317 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi548(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi548 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc548(fnptr);
static void toc548 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi338(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi338 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_INTEGER_32*  *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc338(fnptr);
static void toc338 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi528(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi528 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc528(fnptr);
static void toc528 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi382(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi382 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc382(fnptr);
static void toc382 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi503(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi503 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc503(fnptr);
static void toc503 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi402(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi402 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc402(fnptr);
static void toc402 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static void toi416(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi416 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg3.type == SK_REF)? * (EIF_INTEGER_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc416(fnptr);
static void toc416 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT8;
	arg3.value.EIF_INTEGER_8_value = opop()->it_int8;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi545(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi545 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_POINTER *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg11.type == SK_REF)? * (EIF_POINTER *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_POINTER *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc545(fnptr);
static void toc545 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_POINTER;
	arg11.value.EIF_POINTER_value = opop()->it_ptr;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi60(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi60 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc60(fnptr);
static void toc60 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi309(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi309 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc309(fnptr);
static void toc309 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi392(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi392 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc392(fnptr);
static void toc392 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi349(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi349 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_INTEGER_32*  *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc349(fnptr);
static void toc349 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static void toi190(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi190 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT8;
	it->it_int8 = (arg3.type == SK_REF)? * (EIF_INTEGER_8 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_8_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc190(fnptr);
static void toc190 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT8;
	arg3.value.EIF_INTEGER_8_value = opop()->it_int8;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi573(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi573 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc573(fnptr);
static void toc573 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi478(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi478 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc478(fnptr);
static void toc478 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi410(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi410 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc410(fnptr);
static void toc410 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi430(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi430 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = (arg2.type == SK_REF)? * (EIF_NATURAL_16 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT16;
	r.value.EIF_NATURAL_16_value = it->it_uint16;
	return r;
}

static void toc430(fnptr);
static void toc430 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT16;
	arg2.value.EIF_NATURAL_16_value = opop()->it_uint16;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT16;
	it->it_uint16 = result.value.EIF_NATURAL_16_value;
}

static void toi231(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi231 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc231(fnptr);
static void toc231 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi542(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi542 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc542(fnptr);
static void toc542 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi348(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi348 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_INTEGER_32*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc348(fnptr);
static void toc348 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi449(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi449 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc449(fnptr);
static void toc449 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi230(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi230 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc230(fnptr);
static void toc230 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi581(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi581 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc581(fnptr);
static void toc581 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi463(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi463 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc463(fnptr);
static void toc463 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi553(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi553 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg7.type == SK_REF)? * (EIF_REAL_64 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc553(fnptr);
static void toc553 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_REAL64;
	arg7.value.EIF_REAL_64_value = opop()->it_real64;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static void toi506(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi506 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg6.type == SK_REF)? * (EIF_BOOLEAN *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc506(fnptr);
static void toc506 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_BOOL;
	arg6.value.EIF_BOOLEAN_value = opop()->it_char;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi556(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi556 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc556(fnptr);
static void toc556 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi484(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi484 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc484(fnptr);
static void toc484 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi346(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi346 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc346(fnptr);
static void toc346 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi572(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi572 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg4.type == SK_REF)? * (EIF_REAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc572(fnptr);
static void toc572 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL32;
	arg4.value.EIF_REAL_32_value = opop()->it_real32;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi443(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi443 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc443(fnptr);
static void toc443 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi525(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi525 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc525(fnptr);
static void toc525 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static void toi417(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi417 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT16;
	it->it_int16 = (arg3.type == SK_REF)? * (EIF_INTEGER_16 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_16_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc417(fnptr);
static void toc417 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT16;
	arg3.value.EIF_INTEGER_16_value = opop()->it_int16;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi428(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi428 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg2.type == SK_REF)? * (EIF_INTEGER_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc428(fnptr);
static void toc428 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT64;
	arg2.value.EIF_INTEGER_64_value = opop()->it_int64;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static EIF_UNION toi494(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi494 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc494(fnptr);
static void toc494 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi300(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi300 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_POINTER *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg10.type == SK_REF)? * (EIF_POINTER *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg11.type == SK_REF)? * (EIF_POINTER *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_POINTER *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc300(fnptr);
static void toc300 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_POINTER;
	arg11.value.EIF_POINTER_value = opop()->it_ptr;
	arg10.type = SK_POINTER;
	arg10.value.EIF_POINTER_value = opop()->it_ptr;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi315(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi315 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc315(fnptr);
static void toc315 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static EIF_UNION toi178(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi178 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL32;
	r.value.EIF_REAL_32_value = it->it_real32;
	return r;
}

static void toc178(fnptr);
static void toc178 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = result.value.EIF_REAL_32_value;
}

static EIF_UNION toi361(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi361 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc361(fnptr);
static void toc361 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi297(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi297 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc297(fnptr);
static void toc297 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi487(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi487 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg5.type == SK_REF)? * (EIF_REAL_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg6.type == SK_REF)? * (EIF_REAL_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc487(fnptr);
static void toc487 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REAL32;
	arg6.value.EIF_REAL_32_value = opop()->it_real32;
	arg5.type = SK_REAL32;
	arg5.value.EIF_REAL_32_value = opop()->it_real32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi321(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi321 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc321(fnptr);
static void toc321 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi456(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi456 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc456(fnptr);
static void toc456 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static void toi488(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi488 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc488(fnptr);
static void toc488 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi424(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi424 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc424(fnptr);
static void toc424 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static EIF_UNION toi569(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi569 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc569(fnptr);
static void toc569 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi453(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi453 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg7.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc453(fnptr);
static void toc453 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_REF;
	arg7.value.EIF_REFERENCE_value = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static void toi489(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi489 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc489(fnptr);
static void toc489 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static EIF_UNION toi588(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi588 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg3.type == SK_REF)? * (EIF_CHARACTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc588(fnptr);
static void toc588 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_CHAR;
	arg3.value.EIF_CHARACTER_value = opop()->it_char;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi462(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi462 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc462(fnptr);
static void toc462 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi42(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi42 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg6.type == SK_REF)? * (EIF_BOOLEAN *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc42(fnptr);
static void toc42 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_BOOL;
	arg6.value.EIF_BOOLEAN_value = opop()->it_char;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi539(EIF_REFERENCE, EIF_UNION);
static void toi539 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER*  *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc539(fnptr);
static void toc539 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static void toi369(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi369 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc369(fnptr);
static void toc369 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi381(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi381 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc381(fnptr);
static void toc381 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi447(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi447 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc447(fnptr);
static void toc447 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi355(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi355 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_INTEGER_32*  *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc355(fnptr);
static void toc355 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi353(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi353 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg2.type == SK_REF)? * (EIF_REAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc353(fnptr);
static void toc353 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL32;
	arg2.value.EIF_REAL_32_value = opop()->it_real32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi409(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi409 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_WCHAR;
	it->it_wchar = (arg3.type == SK_REF)? * (EIF_WIDE_CHAR *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_WIDE_CHAR_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc409(fnptr);
static void toc409 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_WCHAR;
	arg3.value.EIF_WIDE_CHAR_value = opop()->it_wchar;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi414(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi414 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc414(fnptr);
static void toc414 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi546(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi546 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg6.type == SK_REF)? * (EIF_BOOLEAN *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc546(fnptr);
static void toc546 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_BOOL;
	arg6.value.EIF_BOOLEAN_value = opop()->it_char;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi507(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi507 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REAL64;
	r.value.EIF_REAL_64_value = it->it_real64;
	return r;
}

static void toc507(fnptr);
static void toc507 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = result.value.EIF_REAL_64_value;
}

static void toi492(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi492 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc492(fnptr);
static void toc492 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static EIF_UNION toi552(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi552 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc552(fnptr);
static void toc552 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi342(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi342 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_INTEGER_32*  *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc342(fnptr);
static void toc342 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi359(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi359 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_NATURAL_32*  *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_NATURAL_32*  *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_INTEGER_32*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc359(fnptr);
static void toc359 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi592(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi592 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_CHAR;
	r.value.EIF_CHARACTER_value = it->it_char;
	return r;
}

static void toc592(fnptr);
static void toc592 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = result.value.EIF_CHARACTER_value;
}

static void toi516(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi516 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc516(fnptr);
static void toc516 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi477(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi477 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc477(fnptr);
static void toc477 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi593(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi593 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc593(fnptr);
static void toc593 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi326(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi326 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc326(fnptr);
static void toc326 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi483(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi483 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc483(fnptr);
static void toc483 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi448(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi448 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc448(fnptr);
static void toc448 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi464(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi464 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc464(fnptr);
static void toc464 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static void toi597(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi597 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc597(fnptr);
static void toc597 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi434(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi434 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc434(fnptr);
static void toc434 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi431(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi431 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT64;
	r.value.EIF_NATURAL_64_value = it->it_uint64;
	return r;
}

static void toc431(fnptr);
static void toc431 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = result.value.EIF_NATURAL_64_value;
}

static void toi436(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi436 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg8.type == SK_REF)? * (EIF_BOOLEAN *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg9.type == SK_REF)? * (EIF_BOOLEAN *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg10.type == SK_REF)? * (EIF_BOOLEAN *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg11.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc436(fnptr);
static void toc436 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_REF;
	arg11.value.EIF_REFERENCE_value = opop()->it_ref;
	arg10.type = SK_BOOL;
	arg10.value.EIF_BOOLEAN_value = opop()->it_char;
	arg9.type = SK_BOOL;
	arg9.value.EIF_BOOLEAN_value = opop()->it_char;
	arg8.type = SK_BOOL;
	arg8.value.EIF_BOOLEAN_value = opop()->it_char;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
}

static void toi591(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi591 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg1.type == SK_REF)? * (EIF_BOOLEAN *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc591(fnptr);
static void toc591 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_BOOL;
	arg1.value.EIF_BOOLEAN_value = opop()->it_char;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi543(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi543 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg9.type == SK_REF)? * (EIF_POINTER *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc543(fnptr);
static void toc543 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_POINTER;
	arg9.value.EIF_POINTER_value = opop()->it_ptr;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static void toi340(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi340 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_INTEGER_32*  *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc340(fnptr);
static void toc340 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi350(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi350 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12, EIF_UNION arg13, EIF_UNION arg14, EIF_UNION arg15, EIF_UNION arg16)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg13.type == SK_REF)? * (EIF_POINTER *)arg13.value.EIF_REFERENCE_value: arg13.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg14.type == SK_REF)? * (EIF_POINTER *)arg14.value.EIF_REFERENCE_value: arg14.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg15.type == SK_REF)? * (EIF_POINTER *)arg15.value.EIF_REFERENCE_value: arg15.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg16.type == SK_REF)? * (EIF_INTEGER_32*  *)arg16.value.EIF_REFERENCE_value: arg16.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc350(fnptr);
static void toc350 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	EIF_UNION arg13;
	EIF_UNION arg14;
	EIF_UNION arg15;
	EIF_UNION arg16;
	Current = opop()->it_ref;
	arg16.type = SK_POINTER;
	arg16.value.EIF_POINTER_value = opop()->it_ptr;
	arg15.type = SK_POINTER;
	arg15.value.EIF_POINTER_value = opop()->it_ptr;
	arg14.type = SK_POINTER;
	arg14.value.EIF_POINTER_value = opop()->it_ptr;
	arg13.type = SK_POINTER;
	arg13.value.EIF_POINTER_value = opop()->it_ptr;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16);
}

static void toi554(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi554 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc554(fnptr);
static void toc554 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi373(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi373 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc373(fnptr);
static void toc373 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi514(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi514 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc514(fnptr);
static void toc514 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi467(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi467 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc467(fnptr);
static void toc467 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static EIF_UNION toi577(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi577 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc577(fnptr);
static void toc577 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi308(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi308 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc308(fnptr);
static void toc308 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi563(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi563 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg2.type == SK_REF)? * (EIF_BOOLEAN *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc563(fnptr);
static void toc563 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_BOOL;
	arg2.value.EIF_BOOLEAN_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi275(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi275 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg1.type == SK_REF)? * (EIF_NATURAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc275(fnptr);
static void toc275 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_UINT32;
	arg1.value.EIF_NATURAL_32_value = opop()->it_uint32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi450(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi450 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc450(fnptr);
static void toc450 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static EIF_UNION toi582(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi582 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc582(fnptr);
static void toc582 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi469(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi469 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc469(fnptr);
static void toc469 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static void toi596(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi596 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc596(fnptr);
static void toc596 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi411(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi411 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc411(fnptr);
static void toc411 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi385(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi385 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc385(fnptr);
static void toc385 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static EIF_UNION toi521(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi521 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT32;
	r.value.EIF_NATURAL_32_value = it->it_uint32;
	return r;
}

static void toc521(fnptr);
static void toc521 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = result.value.EIF_NATURAL_32_value;
}

static void toi474(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi474 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc474(fnptr);
static void toc474 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	Current = opop()->it_ref;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11);
}

static EIF_UNION toi576(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi576 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg1.type == SK_REF)? * (EIF_REAL_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc576(fnptr);
static void toc576 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REAL32;
	arg1.value.EIF_REAL_32_value = opop()->it_real32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi540(EIF_REFERENCE, EIF_UNION);
static void toi540 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_BOOLEAN*  *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc540(fnptr);
static void toc540 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
}

static void toi517(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi517 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg7.type == SK_REF)? * (EIF_REAL_64 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc517(fnptr);
static void toc517 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_REAL64;
	arg7.value.EIF_REAL_64_value = opop()->it_real64;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi544(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi544 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg5.type == SK_REF)? * (EIF_BOOLEAN *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc544(fnptr);
static void toc544 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_BOOL;
	arg5.value.EIF_BOOLEAN_value = opop()->it_char;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi364(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi364 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_INTEGER_32*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc364(fnptr);
static void toc364 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi499(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi499 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg1.type == SK_REF)? * (EIF_CHARACTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc499(fnptr);
static void toc499 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_CHAR;
	arg1.value.EIF_CHARACTER_value = opop()->it_char;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi295(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi295 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc295(fnptr);
static void toc295 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi479(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi479 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc479(fnptr);
static void toc479 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi501(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi501 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc501(fnptr);
static void toc501 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi379(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi379 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc379(fnptr);
static void toc379 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi304(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi304 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc304(fnptr);
static void toc304 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi473(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi473 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12, EIF_UNION arg13)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg10.type == SK_REF)? * (EIF_POINTER *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg11.type == SK_REF)? * (EIF_POINTER *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg13.type == SK_REF)? * (EIF_INTEGER_32 *)arg13.value.EIF_REFERENCE_value: arg13.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc473(fnptr);
static void toc473 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	EIF_UNION arg13;
	Current = opop()->it_ref;
	arg13.type = SK_INT32;
	arg13.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_POINTER;
	arg11.value.EIF_POINTER_value = opop()->it_ptr;
	arg10.type = SK_POINTER;
	arg10.value.EIF_POINTER_value = opop()->it_ptr;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13);
}

static void toi442(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi442 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc442(fnptr);
static void toc442 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static EIF_UNION toi518(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi518 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc518(fnptr);
static void toc518 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi262(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi262 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg8.type == SK_REF)? * (EIF_POINTER *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc262(fnptr);
static void toc262 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_POINTER;
	arg8.value.EIF_POINTER_value = opop()->it_ptr;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static EIF_UNION toi356(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi356 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = (arg2.type == SK_REF)? * (EIF_INTEGER_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_64_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg3.type == SK_REF)? * (EIF_REAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_INTEGER_32*  *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc356(fnptr);
static void toc356 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REAL32;
	arg3.value.EIF_REAL_32_value = opop()->it_real32;
	arg2.type = SK_INT64;
	arg2.value.EIF_INTEGER_64_value = opop()->it_int64;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi441(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi441 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc441(fnptr);
static void toc441 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi226(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi226 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc226(fnptr);
static void toc226 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static EIF_UNION toi493(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi493 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc493(fnptr);
static void toc493 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi585(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static void toi585 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc585(fnptr);
static void toc585 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
}

static void toi454(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi454 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc454(fnptr);
static void toc454 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static EIF_UNION toi465(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi465 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc465(fnptr);
static void toc465 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	Current = opop()->it_ref;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static void toi235(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi235 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg6.type == SK_REF)? * (EIF_BOOLEAN *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg7.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc235(fnptr);
static void toc235 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_REF;
	arg7.value.EIF_REFERENCE_value = opop()->it_ref;
	arg6.type = SK_BOOL;
	arg6.value.EIF_BOOLEAN_value = opop()->it_char;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi586(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi586 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_CHAR;
	it->it_char = (arg2.type == SK_REF)? * (EIF_CHARACTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_CHARACTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc586(fnptr);
static void toc586 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_CHAR;
	arg2.value.EIF_CHARACTER_value = opop()->it_char;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi513(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi513 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc513(fnptr);
static void toc513 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi339(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi339 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_INTEGER_32*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc339(fnptr);
static void toc339 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi590(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi590 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc590(fnptr);
static void toc590 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi524(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi524 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc524(fnptr);
static void toc524 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi45(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi45 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg7.type == SK_REF)? * (EIF_POINTER *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc45(fnptr);
static void toc45 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_POINTER;
	arg7.value.EIF_POINTER_value = opop()->it_ptr;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi234(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi234 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg6.type == SK_REF)? * (EIF_BOOLEAN *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc234(fnptr);
static void toc234 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_BOOL;
	arg6.value.EIF_BOOLEAN_value = opop()->it_char;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi374(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi374 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT64;
	it->it_uint64 = (arg6.type == SK_REF)? * (EIF_NATURAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_NATURAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc374(fnptr);
static void toc374 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_UINT64;
	arg6.value.EIF_NATURAL_64_value = opop()->it_uint64;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi481(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi481 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc481(fnptr);
static void toc481 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi598(EIF_REFERENCE, EIF_UNION, EIF_UNION);
static EIF_UNION toi598 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg1.type == SK_REF)? * (EIF_REAL_64 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg2.type == SK_REF)? * (EIF_REAL_64 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc598(fnptr);
static void toc598 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	Current = opop()->it_ref;
	arg2.type = SK_REAL64;
	arg2.value.EIF_REAL_64_value = opop()->it_real64;
	arg1.type = SK_REAL64;
	arg1.value.EIF_REAL_64_value = opop()->it_real64;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi504(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi504 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg3.type == SK_REF)? * (EIF_BOOLEAN *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg4.type == SK_REF)? * (EIF_BOOLEAN *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc504(fnptr);
static void toc504 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_BOOL;
	arg4.value.EIF_BOOLEAN_value = opop()->it_char;
	arg3.type = SK_BOOL;
	arg3.value.EIF_BOOLEAN_value = opop()->it_char;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static EIF_UNION toi245(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi245 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc245(fnptr);
static void toc245 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static EIF_UNION toi282(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi282 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_UINT8;
	r.value.EIF_NATURAL_8_value = it->it_uint8;
	return r;
}

static void toc282(fnptr);
static void toc282 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_UINT8;
	it->it_uint8 = result.value.EIF_NATURAL_8_value;
}

static void toi341(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi341 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_INTEGER_32*  *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc341(fnptr);
static void toc341 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi312(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi312 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg6.type == SK_REF)? * (EIF_REAL_64 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg9.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc312(fnptr);
static void toc312 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	Current = opop()->it_ref;
	arg9.type = SK_REF;
	arg9.value.EIF_REFERENCE_value = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_REAL64;
	arg6.value.EIF_REAL_64_value = opop()->it_real64;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

static EIF_UNION toi557(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi557 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc557(fnptr);
static void toc557 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi470(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi470 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc470(fnptr);
static void toc470 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static EIF_UNION toi587(EIF_REFERENCE, EIF_UNION);
static EIF_UNION toi587 (EIF_REFERENCE Current, EIF_UNION arg1)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT64;
	r.value.EIF_INTEGER_64_value = it->it_int64;
	return r;
}

static void toc587(fnptr);
static void toc587 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	Current = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) ptr)(Current,arg1);
	it = iget();
	it->type = SK_INT64;
	it->it_int64 = result.value.EIF_INTEGER_64_value;
}

static EIF_UNION toi533(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi533 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12, EIF_UNION arg13, EIF_UNION arg14)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg9.type == SK_REF)? * (EIF_INTEGER_32 *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg13.type == SK_REF)? * (EIF_INTEGER_32 *)arg13.value.EIF_REFERENCE_value: arg13.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg14.type == SK_REF)? * (EIF_POINTER *)arg14.value.EIF_REFERENCE_value: arg14.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc533(fnptr);
static void toc533 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	EIF_UNION arg13;
	EIF_UNION arg14;
	Current = opop()->it_ref;
	arg14.type = SK_POINTER;
	arg14.value.EIF_POINTER_value = opop()->it_ptr;
	arg13.type = SK_INT32;
	arg13.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_INT32;
	arg9.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static EIF_UNION toi246(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi246 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc246(fnptr);
static void toc246 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi460(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi460 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg8.type == SK_REF)? * (EIF_INTEGER_32 *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg9.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg10.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg12.type == SK_REF)? * (EIF_INTEGER_32 *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc460(fnptr);
static void toc460 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_INT32;
	arg12.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_REF;
	arg10.value.EIF_REFERENCE_value = opop()->it_ref;
	arg9.type = SK_REF;
	arg9.value.EIF_REFERENCE_value = opop()->it_ref;
	arg8.type = SK_INT32;
	arg8.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
}

static EIF_UNION toi243(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi243 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = it->it_int32;
	return r;
}

static void toc243(fnptr);
static void toc243 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = result.value.EIF_INTEGER_32_value;
}

static EIF_UNION toi439(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi439 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg8.type == SK_REF)? * (EIF_BOOLEAN *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg9.type == SK_REF)? * (EIF_BOOLEAN *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_POINTER *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_BOOL;
	r.value.EIF_BOOLEAN_value = it->it_char;
	return r;
}

static void toc439(fnptr);
static void toc439 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_BOOL;
	arg9.value.EIF_BOOLEAN_value = opop()->it_char;
	arg8.type = SK_BOOL;
	arg8.value.EIF_BOOLEAN_value = opop()->it_char;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
	it = iget();
	it->type = SK_BOOL;
	it->it_char = result.value.EIF_BOOLEAN_value;
}

static void toi551(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi551 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc551(fnptr);
static void toc551 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static EIF_UNION toi584(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi584 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc584(fnptr);
static void toc584 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi482(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi482 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg2.type == SK_REF)? * (EIF_NATURAL_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc482(fnptr);
static void toc482 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	Current = opop()->it_ref;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_UINT32;
	arg2.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4);
}

static void toi367(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi367 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg3.type == SK_REF)? * (EIF_NATURAL_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg4.type == SK_REF)? * (EIF_NATURAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_UINT32;
	it->it_uint32 = (arg5.type == SK_REF)? * (EIF_NATURAL_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_NATURAL_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_INTEGER_32*  *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc367(fnptr);
static void toc367 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_UINT32;
	arg5.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg4.type = SK_UINT32;
	arg4.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg3.type = SK_UINT32;
	arg3.value.EIF_NATURAL_32_value = opop()->it_uint32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi568(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi568 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg2.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg4.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg5.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg6.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc568(fnptr);
static void toc568 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_REF;
	arg6.value.EIF_REFERENCE_value = opop()->it_ref;
	arg5.type = SK_REF;
	arg5.value.EIF_REFERENCE_value = opop()->it_ref;
	arg4.type = SK_REF;
	arg4.value.EIF_REFERENCE_value = opop()->it_ref;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_REF;
	arg2.value.EIF_REFERENCE_value = opop()->it_ref;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static void toi455(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi455 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc455(fnptr);
static void toc455 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	Current = opop()->it_ref;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6);
}

static EIF_UNION toi335(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi335 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_POINTER;
	r.value.EIF_POINTER_value = it->it_ptr;
	return r;
}

static void toc335(fnptr);
static void toc335 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = result.value.EIF_POINTER_value;
}

static void toi307(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi307 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg8.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc307(fnptr);
static void toc307 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	Current = opop()->it_ref;
	arg8.type = SK_REF;
	arg8.value.EIF_REFERENCE_value = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

static void toi438(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi438 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg8.type == SK_REF)? * (EIF_BOOLEAN *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg9.type == SK_REF)? * (EIF_BOOLEAN *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_POINTER *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc438(fnptr);
static void toc438 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_BOOL;
	arg9.value.EIF_BOOLEAN_value = opop()->it_char;
	arg8.type = SK_BOOL;
	arg8.value.EIF_BOOLEAN_value = opop()->it_char;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
}

static EIF_UNION toi440(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static EIF_UNION toi440 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7, EIF_UNION arg8, EIF_UNION arg9, EIF_UNION arg10, EIF_UNION arg11, EIF_UNION arg12)
{
	GTCX
	struct item *it;
	EIF_UNION r;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg3.type == SK_REF)? * (EIF_POINTER *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg4.type == SK_REF)? * (EIF_POINTER *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg5.type == SK_REF)? * (EIF_INTEGER_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg6.type == SK_REF)? * (EIF_INTEGER_32 *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg7.type == SK_REF)? * (EIF_BOOLEAN *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg8.type == SK_REF)? * (EIF_BOOLEAN *)arg8.value.EIF_REFERENCE_value: arg8.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_BOOL;
	it->it_char = (arg9.type == SK_REF)? * (EIF_BOOLEAN *)arg9.value.EIF_REFERENCE_value: arg9.value.EIF_BOOLEAN_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg10.type == SK_REF)? * (EIF_INTEGER_32 *)arg10.value.EIF_REFERENCE_value: arg10.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg11.type == SK_REF)? * (EIF_INTEGER_32 *)arg11.value.EIF_REFERENCE_value: arg11.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg12.type == SK_REF)? * (EIF_POINTER *)arg12.value.EIF_REFERENCE_value: arg12.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
	it = opop();
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = it->it_ref;
	return r;
}

static void toc440(fnptr);
static void toc440 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION result;
	struct item *it;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	EIF_UNION arg8;
	EIF_UNION arg9;
	EIF_UNION arg10;
	EIF_UNION arg11;
	EIF_UNION arg12;
	Current = opop()->it_ref;
	arg12.type = SK_POINTER;
	arg12.value.EIF_POINTER_value = opop()->it_ptr;
	arg11.type = SK_INT32;
	arg11.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg10.type = SK_INT32;
	arg10.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg9.type = SK_BOOL;
	arg9.value.EIF_BOOLEAN_value = opop()->it_char;
	arg8.type = SK_BOOL;
	arg8.value.EIF_BOOLEAN_value = opop()->it_char;
	arg7.type = SK_BOOL;
	arg7.value.EIF_BOOLEAN_value = opop()->it_char;
	arg6.type = SK_INT32;
	arg6.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg5.type = SK_INT32;
	arg5.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg4.type = SK_POINTER;
	arg4.value.EIF_POINTER_value = opop()->it_ptr;
	arg3.type = SK_POINTER;
	arg3.value.EIF_POINTER_value = opop()->it_ptr;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	result = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
	it = iget();
	it->type = SK_REF;
	it->it_ref = (result.type == SK_REF)? result.value.EIF_REFERENCE_value: RTBU(result);
}

static void toi331(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi331 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg4.type == SK_REF)? * (EIF_REAL_64 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg5.type == SK_REF)? * (EIF_REAL_64 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc331(fnptr);
static void toc331 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REAL64;
	arg5.value.EIF_REAL_64_value = opop()->it_real64;
	arg4.type = SK_REAL64;
	arg4.value.EIF_REAL_64_value = opop()->it_real64;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

static void toi371(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi371 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5, EIF_UNION arg6, EIF_UNION arg7)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg1.type == SK_REF)? * (EIF_POINTER *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg2.type == SK_REF)? * (EIF_POINTER *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg3.type == SK_REF)? * (EIF_INTEGER_32 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg4.type == SK_REF)? * (EIF_INTEGER_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg5.type == SK_REF)? * (EIF_POINTER *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_POINTER;
	it->it_ptr = (arg6.type == SK_REF)? * (EIF_POINTER *)arg6.value.EIF_REFERENCE_value: arg6.value.EIF_POINTER_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg7.type == SK_REF)? * (EIF_INTEGER_32 *)arg7.value.EIF_REFERENCE_value: arg7.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc371(fnptr);
static void toc371 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	EIF_UNION arg6;
	EIF_UNION arg7;
	Current = opop()->it_ref;
	arg7.type = SK_INT32;
	arg7.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg6.type = SK_POINTER;
	arg6.value.EIF_POINTER_value = opop()->it_ptr;
	arg5.type = SK_POINTER;
	arg5.value.EIF_POINTER_value = opop()->it_ptr;
	arg4.type = SK_INT32;
	arg4.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg3.type = SK_INT32;
	arg3.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg2.type = SK_POINTER;
	arg2.value.EIF_POINTER_value = opop()->it_ptr;
	arg1.type = SK_POINTER;
	arg1.value.EIF_POINTER_value = opop()->it_ptr;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

static void toi574(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi574 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg1.type == SK_REF)? * (EIF_INTEGER_32 *)arg1.value.EIF_REFERENCE_value: arg1.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REAL64;
	it->it_real64 = (arg3.type == SK_REF)? * (EIF_REAL_64 *)arg3.value.EIF_REFERENCE_value: arg3.value.EIF_REAL_64_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc574(fnptr);
static void toc574 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	Current = opop()->it_ref;
	arg3.type = SK_REAL64;
	arg3.value.EIF_REAL_64_value = opop()->it_real64;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_INT32;
	arg1.value.EIF_INTEGER_32_value = opop()->it_int32;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3);
}

static void toi345(EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION);
static void toi345 (EIF_REFERENCE Current, EIF_UNION arg1, EIF_UNION arg2, EIF_UNION arg3, EIF_UNION arg4, EIF_UNION arg5)
{
	GTCX
	struct item *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg1.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_INT32;
	it->it_int32 = (arg2.type == SK_REF)? * (EIF_INTEGER_32 *)arg2.value.EIF_REFERENCE_value: arg2.value.EIF_INTEGER_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = (arg3.value.EIF_REFERENCE_value);
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg4.type == SK_REF)? * (EIF_REAL_32 *)arg4.value.EIF_REFERENCE_value: arg4.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REAL32;
	it->it_real32 = (arg5.type == SK_REF)? * (EIF_REAL_32 *)arg5.value.EIF_REFERENCE_value: arg5.value.EIF_REAL_32_value;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;
	xinterp(IC);
}

static void toc345(fnptr);
static void toc345 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_UNION arg1;
	EIF_UNION arg2;
	EIF_UNION arg3;
	EIF_UNION arg4;
	EIF_UNION arg5;
	Current = opop()->it_ref;
	arg5.type = SK_REAL32;
	arg5.value.EIF_REAL_32_value = opop()->it_real32;
	arg4.type = SK_REAL32;
	arg4.value.EIF_REAL_32_value = opop()->it_real32;
	arg3.type = SK_REF;
	arg3.value.EIF_REFERENCE_value = opop()->it_ref;
	arg2.type = SK_INT32;
	arg2.value.EIF_INTEGER_32_value = opop()->it_int32;
	arg1.type = SK_REF;
	arg1.value.EIF_REFERENCE_value = opop()->it_ref;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) ptr)(Current,arg1,arg2,arg3,arg4,arg5);
}

struct p_interface egc_fpattern_init[] = {
{(void (*)()) toc1, (fnptr) toi1},
{(void (*)()) toc2, (fnptr) toi2},
{(void (*)()) toc3, (fnptr) toi3},
{(void (*)()) toc4, (fnptr) toi4},
{(void (*)()) toc5, (fnptr) toi5},
{(void (*)()) toc6, (fnptr) toi6},
{(void (*)()) toc7, (fnptr) toi7},
{(void (*)()) toc8, (fnptr) toi8},
{(void (*)()) toc9, (fnptr) toi9},
{(void (*)()) toc10, (fnptr) toi10},
{(void (*)()) toc11, (fnptr) toi11},
{(void (*)()) toc12, (fnptr) toi12},
{(void (*)()) toc13, (fnptr) toi13},
{(void (*)()) toc14, (fnptr) toi14},
{(void (*)()) toc15, (fnptr) toi15},
{(void (*)()) toc16, (fnptr) toi16},
{(void (*)()) toc17, (fnptr) toi17},
{(void (*)()) toc18, (fnptr) toi18},
{(void (*)()) toc19, (fnptr) toi19},
{(void (*)()) toc20, (fnptr) toi20},
{(void (*)()) toc21, (fnptr) toi21},
{(void (*)()) toc22, (fnptr) toi22},
{(void (*)()) toc23, (fnptr) toi23},
{(void (*)()) toc24, (fnptr) toi24},
{(void (*)()) toc25, (fnptr) toi25},
{(void (*)()) toc26, (fnptr) toi26},
{(void (*)()) toc27, (fnptr) toi27},
{(void (*)()) toc28, (fnptr) toi28},
{(void (*)()) toc29, (fnptr) toi29},
{(void (*)()) toc30, (fnptr) toi30},
{(void (*)()) toc31, (fnptr) toi31},
{(void (*)()) toc32, (fnptr) toi32},
{(void (*)()) toc33, (fnptr) toi33},
{(void (*)()) toc34, (fnptr) toi34},
{(void (*)()) toc35, (fnptr) toi35},
{(void (*)()) toc36, (fnptr) toi36},
{(void (*)()) toc37, (fnptr) toi37},
{(void (*)()) toc38, (fnptr) toi38},
{(void (*)()) toc39, (fnptr) toi39},
{(void (*)()) toc40, (fnptr) toi40},
{(void (*)()) toc41, (fnptr) toi41},
{(void (*)()) toc42, (fnptr) toi42},
{(void (*)()) toc43, (fnptr) toi43},
{(void (*)()) toc44, (fnptr) toi44},
{(void (*)()) toc45, (fnptr) toi45},
{(void (*)()) toc46, (fnptr) toi46},
{(void (*)()) toc47, (fnptr) toi47},
{(void (*)()) toc48, (fnptr) toi48},
{(void (*)()) toc49, (fnptr) toi49},
{(void (*)()) toc50, (fnptr) toi50},
{(void (*)()) toc51, (fnptr) toi51},
{(void (*)()) toc52, (fnptr) toi52},
{(void (*)()) toc53, (fnptr) toi53},
{(void (*)()) toc54, (fnptr) toi54},
{(void (*)()) toc55, (fnptr) toi55},
{(void (*)()) toc56, (fnptr) toi56},
{(void (*)()) toc57, (fnptr) toi57},
{(void (*)()) toc58, (fnptr) toi58},
{(void (*)()) toc59, (fnptr) toi59},
{(void (*)()) toc60, (fnptr) toi60},
{(void (*)()) toc61, (fnptr) toi61},
{(void (*)()) toc62, (fnptr) toi62},
{(void (*)()) toc63, (fnptr) toi63},
{(void (*)()) toc64, (fnptr) toi64},
{(void (*)()) toc65, (fnptr) toi65},
{(void (*)()) toc66, (fnptr) toi66},
{(void (*)()) toc67, (fnptr) toi67},
{(void (*)()) toc68, (fnptr) toi68},
{(void (*)()) toc69, (fnptr) toi69},
{(void (*)()) toc70, (fnptr) toi70},
{(void (*)()) toc71, (fnptr) toi71},
{(void (*)()) toc72, (fnptr) toi72},
{(void (*)()) toc73, (fnptr) toi73},
{(void (*)()) toc74, (fnptr) toi74},
{(void (*)()) toc75, (fnptr) toi75},
{(void (*)()) toc76, (fnptr) toi76},
{(void (*)()) toc77, (fnptr) toi77},
{(void (*)()) toc78, (fnptr) toi78},
{(void (*)()) toc79, (fnptr) toi79},
{(void (*)()) toc80, (fnptr) toi80},
{(void (*)()) toc81, (fnptr) toi81},
{(void (*)()) toc82, (fnptr) toi82},
{(void (*)()) toc83, (fnptr) toi83},
{(void (*)()) toc84, (fnptr) toi84},
{(void (*)()) toc85, (fnptr) toi85},
{(void (*)()) toc86, (fnptr) toi86},
{(void (*)()) toc87, (fnptr) toi87},
{(void (*)()) toc88, (fnptr) toi88},
{(void (*)()) toc89, (fnptr) toi89},
{(void (*)()) toc90, (fnptr) toi90},
{(void (*)()) toc91, (fnptr) toi91},
{(void (*)()) toc92, (fnptr) toi92},
{(void (*)()) toc93, (fnptr) toi93},
{(void (*)()) toc94, (fnptr) toi94},
{(void (*)()) toc95, (fnptr) toi95},
{(void (*)()) toc96, (fnptr) toi96},
{(void (*)()) toc97, (fnptr) toi97},
{(void (*)()) toc98, (fnptr) toi98},
{(void (*)()) toc99, (fnptr) toi99},
{(void (*)()) toc100, (fnptr) toi100},
{(void (*)()) toc101, (fnptr) toi101},
{(void (*)()) toc102, (fnptr) toi102},
{(void (*)()) toc103, (fnptr) toi103},
{(void (*)()) toc104, (fnptr) toi104},
{(void (*)()) toc105, (fnptr) toi105},
{(void (*)()) toc106, (fnptr) toi106},
{(void (*)()) toc107, (fnptr) toi107},
{(void (*)()) toc108, (fnptr) toi108},
{(void (*)()) toc109, (fnptr) toi109},
{(void (*)()) toc110, (fnptr) toi110},
{(void (*)()) toc111, (fnptr) toi111},
{(void (*)()) toc112, (fnptr) toi112},
{(void (*)()) toc113, (fnptr) toi113},
{(void (*)()) toc114, (fnptr) toi114},
{(void (*)()) toc115, (fnptr) toi115},
{(void (*)()) toc116, (fnptr) toi116},
{(void (*)()) toc117, (fnptr) toi117},
{(void (*)()) toc118, (fnptr) toi118},
{(void (*)()) toc119, (fnptr) toi119},
{(void (*)()) toc120, (fnptr) toi120},
{(void (*)()) toc121, (fnptr) toi121},
{(void (*)()) toc122, (fnptr) toi122},
{(void (*)()) toc123, (fnptr) toi123},
{(void (*)()) toc124, (fnptr) toi124},
{(void (*)()) toc125, (fnptr) toi125},
{(void (*)()) toc126, (fnptr) toi126},
{(void (*)()) toc127, (fnptr) toi127},
{(void (*)()) toc128, (fnptr) toi128},
{(void (*)()) toc129, (fnptr) toi129},
{(void (*)()) toc130, (fnptr) toi130},
{(void (*)()) toc131, (fnptr) toi131},
{(void (*)()) toc132, (fnptr) toi132},
{(void (*)()) toc133, (fnptr) toi133},
{(void (*)()) toc134, (fnptr) toi134},
{(void (*)()) toc135, (fnptr) toi135},
{(void (*)()) toc136, (fnptr) toi136},
{(void (*)()) toc137, (fnptr) toi137},
{(void (*)()) toc138, (fnptr) toi138},
{(void (*)()) toc139, (fnptr) toi139},
{(void (*)()) toc140, (fnptr) toi140},
{(void (*)()) toc141, (fnptr) toi141},
{(void (*)()) toc142, (fnptr) toi142},
{(void (*)()) toc143, (fnptr) toi143},
{(void (*)()) toc144, (fnptr) toi144},
{(void (*)()) toc145, (fnptr) toi145},
{(void (*)()) toc146, (fnptr) toi146},
{(void (*)()) toc147, (fnptr) toi147},
{(void (*)()) toc148, (fnptr) toi148},
{(void (*)()) toc149, (fnptr) toi149},
{(void (*)()) toc150, (fnptr) toi150},
{(void (*)()) toc151, (fnptr) toi151},
{(void (*)()) toc152, (fnptr) toi152},
{(void (*)()) toc153, (fnptr) toi153},
{(void (*)()) toc154, (fnptr) toi154},
{(void (*)()) toc155, (fnptr) toi155},
{(void (*)()) toc156, (fnptr) toi156},
{(void (*)()) toc157, (fnptr) toi157},
{(void (*)()) toc158, (fnptr) toi158},
{(void (*)()) toc159, (fnptr) toi159},
{(void (*)()) toc160, (fnptr) toi160},
{(void (*)()) toc161, (fnptr) toi161},
{(void (*)()) toc162, (fnptr) toi162},
{(void (*)()) toc163, (fnptr) toi163},
{(void (*)()) toc164, (fnptr) toi164},
{(void (*)()) toc165, (fnptr) toi165},
{(void (*)()) toc166, (fnptr) toi166},
{(void (*)()) toc167, (fnptr) toi167},
{(void (*)()) toc168, (fnptr) toi168},
{(void (*)()) toc169, (fnptr) toi169},
{(void (*)()) toc170, (fnptr) toi170},
{(void (*)()) toc171, (fnptr) toi171},
{(void (*)()) toc172, (fnptr) toi172},
{(void (*)()) toc173, (fnptr) toi173},
{(void (*)()) toc174, (fnptr) toi174},
{(void (*)()) toc175, (fnptr) toi175},
{(void (*)()) toc176, (fnptr) toi176},
{(void (*)()) toc177, (fnptr) toi177},
{(void (*)()) toc178, (fnptr) toi178},
{(void (*)()) toc179, (fnptr) toi179},
{(void (*)()) toc180, (fnptr) toi180},
{(void (*)()) toc181, (fnptr) toi181},
{(void (*)()) toc182, (fnptr) toi182},
{(void (*)()) toc183, (fnptr) toi183},
{(void (*)()) toc184, (fnptr) toi184},
{(void (*)()) toc185, (fnptr) toi185},
{(void (*)()) toc186, (fnptr) toi186},
{(void (*)()) toc187, (fnptr) toi187},
{(void (*)()) toc188, (fnptr) toi188},
{(void (*)()) toc189, (fnptr) toi189},
{(void (*)()) toc190, (fnptr) toi190},
{(void (*)()) toc191, (fnptr) toi191},
{(void (*)()) toc192, (fnptr) toi192},
{(void (*)()) toc193, (fnptr) toi193},
{(void (*)()) toc194, (fnptr) toi194},
{(void (*)()) toc195, (fnptr) toi195},
{(void (*)()) toc196, (fnptr) toi196},
{(void (*)()) toc197, (fnptr) toi197},
{(void (*)()) toc198, (fnptr) toi198},
{(void (*)()) toc199, (fnptr) toi199},
{(void (*)()) toc200, (fnptr) toi200},
{(void (*)()) toc201, (fnptr) toi201},
{(void (*)()) toc202, (fnptr) toi202},
{(void (*)()) toc203, (fnptr) toi203},
{(void (*)()) toc204, (fnptr) toi204},
{(void (*)()) toc205, (fnptr) toi205},
{(void (*)()) toc206, (fnptr) toi206},
{(void (*)()) toc207, (fnptr) toi207},
{(void (*)()) toc208, (fnptr) toi208},
{(void (*)()) toc209, (fnptr) toi209},
{(void (*)()) toc210, (fnptr) toi210},
{(void (*)()) toc211, (fnptr) toi211},
{(void (*)()) toc212, (fnptr) toi212},
{(void (*)()) toc213, (fnptr) toi213},
{(void (*)()) toc214, (fnptr) toi214},
{(void (*)()) toc215, (fnptr) toi215},
{(void (*)()) toc216, (fnptr) toi216},
{(void (*)()) toc217, (fnptr) toi217},
{(void (*)()) toc218, (fnptr) toi218},
{(void (*)()) toc219, (fnptr) toi219},
{(void (*)()) toc220, (fnptr) toi220},
{(void (*)()) toc221, (fnptr) toi221},
{(void (*)()) toc222, (fnptr) toi222},
{(void (*)()) toc223, (fnptr) toi223},
{(void (*)()) toc224, (fnptr) toi224},
{(void (*)()) toc225, (fnptr) toi225},
{(void (*)()) toc226, (fnptr) toi226},
{(void (*)()) toc227, (fnptr) toi227},
{(void (*)()) toc228, (fnptr) toi228},
{(void (*)()) toc229, (fnptr) toi229},
{(void (*)()) toc230, (fnptr) toi230},
{(void (*)()) toc231, (fnptr) toi231},
{(void (*)()) toc232, (fnptr) toi232},
{(void (*)()) toc233, (fnptr) toi233},
{(void (*)()) toc234, (fnptr) toi234},
{(void (*)()) toc235, (fnptr) toi235},
{(void (*)()) toc236, (fnptr) toi236},
{(void (*)()) toc237, (fnptr) toi237},
{(void (*)()) toc238, (fnptr) toi238},
{(void (*)()) toc239, (fnptr) toi239},
{(void (*)()) toc240, (fnptr) toi240},
{(void (*)()) toc241, (fnptr) toi241},
{(void (*)()) toc242, (fnptr) toi242},
{(void (*)()) toc243, (fnptr) toi243},
{(void (*)()) toc244, (fnptr) toi244},
{(void (*)()) toc245, (fnptr) toi245},
{(void (*)()) toc246, (fnptr) toi246},
{(void (*)()) toc247, (fnptr) toi247},
{(void (*)()) toc248, (fnptr) toi248},
{(void (*)()) toc249, (fnptr) toi249},
{(void (*)()) toc250, (fnptr) toi250},
{(void (*)()) toc251, (fnptr) toi251},
{(void (*)()) toc252, (fnptr) toi252},
{(void (*)()) toc253, (fnptr) toi253},
{(void (*)()) toc254, (fnptr) toi254},
{(void (*)()) toc255, (fnptr) toi255},
{(void (*)()) toc256, (fnptr) toi256},
{(void (*)()) toc257, (fnptr) toi257},
{(void (*)()) toc258, (fnptr) toi258},
{(void (*)()) toc259, (fnptr) toi259},
{(void (*)()) toc260, (fnptr) toi260},
{(void (*)()) toc261, (fnptr) toi261},
{(void (*)()) toc262, (fnptr) toi262},
{(void (*)()) toc263, (fnptr) toi263},
{(void (*)()) toc264, (fnptr) toi264},
{(void (*)()) toc265, (fnptr) toi265},
{(void (*)()) toc266, (fnptr) toi266},
{(void (*)()) toc267, (fnptr) toi267},
{(void (*)()) toc268, (fnptr) toi268},
{(void (*)()) toc269, (fnptr) toi269},
{(void (*)()) toc270, (fnptr) toi270},
{(void (*)()) toc271, (fnptr) toi271},
{(void (*)()) toc272, (fnptr) toi272},
{(void (*)()) toc273, (fnptr) toi273},
{(void (*)()) toc274, (fnptr) toi274},
{(void (*)()) toc275, (fnptr) toi275},
{(void (*)()) toc276, (fnptr) toi276},
{(void (*)()) toc277, (fnptr) toi277},
{(void (*)()) toc278, (fnptr) toi278},
{(void (*)()) toc279, (fnptr) toi279},
{(void (*)()) toc280, (fnptr) toi280},
{(void (*)()) toc281, (fnptr) toi281},
{(void (*)()) toc282, (fnptr) toi282},
{(void (*)()) toc283, (fnptr) toi283},
{(void (*)()) toc284, (fnptr) toi284},
{(void (*)()) toc285, (fnptr) toi285},
{(void (*)()) toc286, (fnptr) toi286},
{(void (*)()) toc287, (fnptr) toi287},
{(void (*)()) toc288, (fnptr) toi288},
{(void (*)()) toc289, (fnptr) toi289},
{(void (*)()) toc290, (fnptr) toi290},
{(void (*)()) toc291, (fnptr) toi291},
{(void (*)()) toc292, (fnptr) toi292},
{(void (*)()) toc293, (fnptr) toi293},
{(void (*)()) toc294, (fnptr) toi294},
{(void (*)()) toc295, (fnptr) toi295},
{(void (*)()) toc296, (fnptr) toi296},
{(void (*)()) toc297, (fnptr) toi297},
{(void (*)()) toc298, (fnptr) toi298},
{(void (*)()) toc299, (fnptr) toi299},
{(void (*)()) toc300, (fnptr) toi300},
{(void (*)()) toc301, (fnptr) toi301},
{(void (*)()) toc302, (fnptr) toi302},
{(void (*)()) toc303, (fnptr) toi303},
{(void (*)()) toc304, (fnptr) toi304},
{(void (*)()) toc305, (fnptr) toi305},
{(void (*)()) toc306, (fnptr) toi306},
{(void (*)()) toc307, (fnptr) toi307},
{(void (*)()) toc308, (fnptr) toi308},
{(void (*)()) toc309, (fnptr) toi309},
{(void (*)()) toc310, (fnptr) toi310},
{(void (*)()) toc311, (fnptr) toi311},
{(void (*)()) toc312, (fnptr) toi312},
{(void (*)()) toc313, (fnptr) toi313},
{(void (*)()) toc314, (fnptr) toi314},
{(void (*)()) toc315, (fnptr) toi315},
{(void (*)()) toc316, (fnptr) toi316},
{(void (*)()) toc317, (fnptr) toi317},
{(void (*)()) toc318, (fnptr) toi318},
{(void (*)()) toc319, (fnptr) toi319},
{(void (*)()) toc320, (fnptr) toi320},
{(void (*)()) toc321, (fnptr) toi321},
{(void (*)()) toc322, (fnptr) toi322},
{(void (*)()) toc323, (fnptr) toi323},
{(void (*)()) toc324, (fnptr) toi324},
{(void (*)()) toc325, (fnptr) toi325},
{(void (*)()) toc326, (fnptr) toi326},
{(void (*)()) toc327, (fnptr) toi327},
{(void (*)()) toc328, (fnptr) toi328},
{(void (*)()) toc329, (fnptr) toi329},
{(void (*)()) toc330, (fnptr) toi330},
{(void (*)()) toc331, (fnptr) toi331},
{(void (*)()) toc332, (fnptr) toi332},
{(void (*)()) toc333, (fnptr) toi333},
{(void (*)()) toc334, (fnptr) toi334},
{(void (*)()) toc335, (fnptr) toi335},
{(void (*)()) toc336, (fnptr) toi336},
{(void (*)()) toc337, (fnptr) toi337},
{(void (*)()) toc338, (fnptr) toi338},
{(void (*)()) toc339, (fnptr) toi339},
{(void (*)()) toc340, (fnptr) toi340},
{(void (*)()) toc341, (fnptr) toi341},
{(void (*)()) toc342, (fnptr) toi342},
{(void (*)()) toc343, (fnptr) toi343},
{(void (*)()) toc344, (fnptr) toi344},
{(void (*)()) toc345, (fnptr) toi345},
{(void (*)()) toc346, (fnptr) toi346},
{(void (*)()) toc347, (fnptr) toi347},
{(void (*)()) toc348, (fnptr) toi348},
{(void (*)()) toc349, (fnptr) toi349},
{(void (*)()) toc350, (fnptr) toi350},
{(void (*)()) toc351, (fnptr) toi351},
{(void (*)()) toc352, (fnptr) toi352},
{(void (*)()) toc353, (fnptr) toi353},
{(void (*)()) toc354, (fnptr) toi354},
{(void (*)()) toc355, (fnptr) toi355},
{(void (*)()) toc356, (fnptr) toi356},
{(void (*)()) toc357, (fnptr) toi357},
{(void (*)()) toc358, (fnptr) toi358},
{(void (*)()) toc359, (fnptr) toi359},
{(void (*)()) toc360, (fnptr) toi360},
{(void (*)()) toc361, (fnptr) toi361},
{(void (*)()) toc362, (fnptr) toi362},
{(void (*)()) toc363, (fnptr) toi363},
{(void (*)()) toc364, (fnptr) toi364},
{(void (*)()) toc365, (fnptr) toi365},
{(void (*)()) toc366, (fnptr) toi366},
{(void (*)()) toc367, (fnptr) toi367},
{(void (*)()) toc368, (fnptr) toi368},
{(void (*)()) toc369, (fnptr) toi369},
{(void (*)()) toc370, (fnptr) toi370},
{(void (*)()) toc371, (fnptr) toi371},
{(void (*)()) toc372, (fnptr) toi372},
{(void (*)()) toc373, (fnptr) toi373},
{(void (*)()) toc374, (fnptr) toi374},
{(void (*)()) toc375, (fnptr) toi375},
{(void (*)()) toc376, (fnptr) toi376},
{(void (*)()) toc377, (fnptr) toi377},
{(void (*)()) toc378, (fnptr) toi378},
{(void (*)()) toc379, (fnptr) toi379},
{(void (*)()) toc380, (fnptr) toi380},
{(void (*)()) toc381, (fnptr) toi381},
{(void (*)()) toc382, (fnptr) toi382},
{(void (*)()) toc383, (fnptr) toi383},
{(void (*)()) toc384, (fnptr) toi384},
{(void (*)()) toc385, (fnptr) toi385},
{(void (*)()) toc386, (fnptr) toi386},
{(void (*)()) toc387, (fnptr) toi387},
{(void (*)()) toc388, (fnptr) toi388},
{(void (*)()) toc389, (fnptr) toi389},
{(void (*)()) toc390, (fnptr) toi390},
{(void (*)()) toc391, (fnptr) toi391},
{(void (*)()) toc392, (fnptr) toi392},
{(void (*)()) toc393, (fnptr) toi393},
{(void (*)()) toc394, (fnptr) toi394},
{(void (*)()) toc395, (fnptr) toi395},
{(void (*)()) toc396, (fnptr) toi396},
{(void (*)()) toc397, (fnptr) toi397},
{(void (*)()) toc398, (fnptr) toi398},
{(void (*)()) toc399, (fnptr) toi399},
{(void (*)()) toc400, (fnptr) toi400},
{(void (*)()) toc401, (fnptr) toi401},
{(void (*)()) toc402, (fnptr) toi402},
{(void (*)()) toc403, (fnptr) toi403},
{(void (*)()) toc404, (fnptr) toi404},
{(void (*)()) toc405, (fnptr) toi405},
{(void (*)()) toc406, (fnptr) toi406},
{(void (*)()) toc407, (fnptr) toi407},
{(void (*)()) toc408, (fnptr) toi408},
{(void (*)()) toc409, (fnptr) toi409},
{(void (*)()) toc410, (fnptr) toi410},
{(void (*)()) toc411, (fnptr) toi411},
{(void (*)()) toc412, (fnptr) toi412},
{(void (*)()) toc413, (fnptr) toi413},
{(void (*)()) toc414, (fnptr) toi414},
{(void (*)()) toc415, (fnptr) toi415},
{(void (*)()) toc416, (fnptr) toi416},
{(void (*)()) toc417, (fnptr) toi417},
{(void (*)()) toc418, (fnptr) toi418},
{(void (*)()) toc419, (fnptr) toi419},
{(void (*)()) toc420, (fnptr) toi420},
{(void (*)()) toc421, (fnptr) toi421},
{(void (*)()) toc422, (fnptr) toi422},
{(void (*)()) toc423, (fnptr) toi423},
{(void (*)()) toc424, (fnptr) toi424},
{(void (*)()) toc425, (fnptr) toi425},
{(void (*)()) toc426, (fnptr) toi426},
{(void (*)()) toc427, (fnptr) toi427},
{(void (*)()) toc428, (fnptr) toi428},
{(void (*)()) toc429, (fnptr) toi429},
{(void (*)()) toc430, (fnptr) toi430},
{(void (*)()) toc431, (fnptr) toi431},
{(void (*)()) toc432, (fnptr) toi432},
{(void (*)()) toc433, (fnptr) toi433},
{(void (*)()) toc434, (fnptr) toi434},
{(void (*)()) toc435, (fnptr) toi435},
{(void (*)()) toc436, (fnptr) toi436},
{(void (*)()) toc437, (fnptr) toi437},
{(void (*)()) toc438, (fnptr) toi438},
{(void (*)()) toc439, (fnptr) toi439},
{(void (*)()) toc440, (fnptr) toi440},
{(void (*)()) toc441, (fnptr) toi441},
{(void (*)()) toc442, (fnptr) toi442},
{(void (*)()) toc443, (fnptr) toi443},
{(void (*)()) toc444, (fnptr) toi444},
{(void (*)()) toc445, (fnptr) toi445},
{(void (*)()) toc446, (fnptr) toi446},
{(void (*)()) toc447, (fnptr) toi447},
{(void (*)()) toc448, (fnptr) toi448},
{(void (*)()) toc449, (fnptr) toi449},
{(void (*)()) toc450, (fnptr) toi450},
{(void (*)()) toc451, (fnptr) toi451},
{(void (*)()) toc452, (fnptr) toi452},
{(void (*)()) toc453, (fnptr) toi453},
{(void (*)()) toc454, (fnptr) toi454},
{(void (*)()) toc455, (fnptr) toi455},
{(void (*)()) toc456, (fnptr) toi456},
{(void (*)()) toc457, (fnptr) toi457},
{(void (*)()) toc458, (fnptr) toi458},
{(void (*)()) toc459, (fnptr) toi459},
{(void (*)()) toc460, (fnptr) toi460},
{(void (*)()) toc461, (fnptr) toi461},
{(void (*)()) toc462, (fnptr) toi462},
{(void (*)()) toc463, (fnptr) toi463},
{(void (*)()) toc464, (fnptr) toi464},
{(void (*)()) toc465, (fnptr) toi465},
{(void (*)()) toc466, (fnptr) toi466},
{(void (*)()) toc467, (fnptr) toi467},
{(void (*)()) toc468, (fnptr) toi468},
{(void (*)()) toc469, (fnptr) toi469},
{(void (*)()) toc470, (fnptr) toi470},
{(void (*)()) toc471, (fnptr) toi471},
{(void (*)()) toc472, (fnptr) toi472},
{(void (*)()) toc473, (fnptr) toi473},
{(void (*)()) toc474, (fnptr) toi474},
{(void (*)()) toc475, (fnptr) toi475},
{(void (*)()) toc476, (fnptr) toi476},
{(void (*)()) toc477, (fnptr) toi477},
{(void (*)()) toc478, (fnptr) toi478},
{(void (*)()) toc479, (fnptr) toi479},
{(void (*)()) toc480, (fnptr) toi480},
{(void (*)()) toc481, (fnptr) toi481},
{(void (*)()) toc482, (fnptr) toi482},
{(void (*)()) toc483, (fnptr) toi483},
{(void (*)()) toc484, (fnptr) toi484},
{(void (*)()) toc485, (fnptr) toi485},
{(void (*)()) toc486, (fnptr) toi486},
{(void (*)()) toc487, (fnptr) toi487},
{(void (*)()) toc488, (fnptr) toi488},
{(void (*)()) toc489, (fnptr) toi489},
{(void (*)()) toc490, (fnptr) toi490},
{(void (*)()) toc491, (fnptr) toi491},
{(void (*)()) toc492, (fnptr) toi492},
{(void (*)()) toc493, (fnptr) toi493},
{(void (*)()) toc494, (fnptr) toi494},
{(void (*)()) toc495, (fnptr) toi495},
{(void (*)()) toc496, (fnptr) toi496},
{(void (*)()) toc497, (fnptr) toi497},
{(void (*)()) toc498, (fnptr) toi498},
{(void (*)()) toc499, (fnptr) toi499},
{(void (*)()) toc500, (fnptr) toi500},
{(void (*)()) toc501, (fnptr) toi501},
{(void (*)()) toc502, (fnptr) toi502},
{(void (*)()) toc503, (fnptr) toi503},
{(void (*)()) toc504, (fnptr) toi504},
{(void (*)()) toc505, (fnptr) toi505},
{(void (*)()) toc506, (fnptr) toi506},
{(void (*)()) toc507, (fnptr) toi507},
{(void (*)()) toc508, (fnptr) toi508},
{(void (*)()) toc509, (fnptr) toi509},
{(void (*)()) toc510, (fnptr) toi510},
{(void (*)()) toc511, (fnptr) toi511},
{(void (*)()) toc512, (fnptr) toi512},
{(void (*)()) toc513, (fnptr) toi513},
{(void (*)()) toc514, (fnptr) toi514},
{(void (*)()) toc515, (fnptr) toi515},
{(void (*)()) toc516, (fnptr) toi516},
{(void (*)()) toc517, (fnptr) toi517},
{(void (*)()) toc518, (fnptr) toi518},
{(void (*)()) toc519, (fnptr) toi519},
{(void (*)()) toc520, (fnptr) toi520},
{(void (*)()) toc521, (fnptr) toi521},
{(void (*)()) toc522, (fnptr) toi522},
{(void (*)()) toc523, (fnptr) toi523},
{(void (*)()) toc524, (fnptr) toi524},
{(void (*)()) toc525, (fnptr) toi525},
{(void (*)()) toc526, (fnptr) toi526},
{(void (*)()) toc527, (fnptr) toi527},
{(void (*)()) toc528, (fnptr) toi528},
{(void (*)()) toc529, (fnptr) toi529},
{(void (*)()) toc530, (fnptr) toi530},
{(void (*)()) toc531, (fnptr) toi531},
{(void (*)()) toc532, (fnptr) toi532},
{(void (*)()) toc533, (fnptr) toi533},
{(void (*)()) toc534, (fnptr) toi534},
{(void (*)()) toc535, (fnptr) toi535},
{(void (*)()) toc536, (fnptr) toi536},
{(void (*)()) toc537, (fnptr) toi537},
{(void (*)()) toc538, (fnptr) toi538},
{(void (*)()) toc539, (fnptr) toi539},
{(void (*)()) toc540, (fnptr) toi540},
{(void (*)()) toc541, (fnptr) toi541},
{(void (*)()) toc542, (fnptr) toi542},
{(void (*)()) toc543, (fnptr) toi543},
{(void (*)()) toc544, (fnptr) toi544},
{(void (*)()) toc545, (fnptr) toi545},
{(void (*)()) toc546, (fnptr) toi546},
{(void (*)()) toc547, (fnptr) toi547},
{(void (*)()) toc548, (fnptr) toi548},
{(void (*)()) toc549, (fnptr) toi549},
{(void (*)()) toc550, (fnptr) toi550},
{(void (*)()) toc551, (fnptr) toi551},
{(void (*)()) toc552, (fnptr) toi552},
{(void (*)()) toc553, (fnptr) toi553},
{(void (*)()) toc554, (fnptr) toi554},
{(void (*)()) toc555, (fnptr) toi555},
{(void (*)()) toc556, (fnptr) toi556},
{(void (*)()) toc557, (fnptr) toi557},
{(void (*)()) toc558, (fnptr) toi558},
{(void (*)()) toc559, (fnptr) toi559},
{(void (*)()) toc560, (fnptr) toi560},
{(void (*)()) toc561, (fnptr) toi561},
{(void (*)()) toc562, (fnptr) toi562},
{(void (*)()) toc563, (fnptr) toi563},
{(void (*)()) toc564, (fnptr) toi564},
{(void (*)()) toc565, (fnptr) toi565},
{(void (*)()) toc566, (fnptr) toi566},
{(void (*)()) toc567, (fnptr) toi567},
{(void (*)()) toc568, (fnptr) toi568},
{(void (*)()) toc569, (fnptr) toi569},
{(void (*)()) toc570, (fnptr) toi570},
{(void (*)()) toc571, (fnptr) toi571},
{(void (*)()) toc572, (fnptr) toi572},
{(void (*)()) toc573, (fnptr) toi573},
{(void (*)()) toc574, (fnptr) toi574},
{(void (*)()) toc575, (fnptr) toi575},
{(void (*)()) toc576, (fnptr) toi576},
{(void (*)()) toc577, (fnptr) toi577},
{(void (*)()) toc578, (fnptr) toi578},
{(void (*)()) toc579, (fnptr) toi579},
{(void (*)()) toc580, (fnptr) toi580},
{(void (*)()) toc581, (fnptr) toi581},
{(void (*)()) toc582, (fnptr) toi582},
{(void (*)()) toc583, (fnptr) toi583},
{(void (*)()) toc584, (fnptr) toi584},
{(void (*)()) toc585, (fnptr) toi585},
{(void (*)()) toc586, (fnptr) toi586},
{(void (*)()) toc587, (fnptr) toi587},
{(void (*)()) toc588, (fnptr) toi588},
{(void (*)()) toc589, (fnptr) toi589},
{(void (*)()) toc590, (fnptr) toi590},
{(void (*)()) toc591, (fnptr) toi591},
{(void (*)()) toc592, (fnptr) toi592},
{(void (*)()) toc593, (fnptr) toi593},
{(void (*)()) toc594, (fnptr) toi594},
{(void (*)()) toc595, (fnptr) toi595},
{(void (*)()) toc596, (fnptr) toi596},
{(void (*)()) toc597, (fnptr) toi597},
{(void (*)()) toc598, (fnptr) toi598},
};


#ifdef __cplusplus
}
#endif

