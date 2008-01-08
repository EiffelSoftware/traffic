#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"


#ifdef __cplusplus
extern "C" {
#endif

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
extern void _fAadizsm_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsm_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(906, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_DIALOG_IMP_COMMON copy_box_attributes */
extern void _fAaggolo(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaggolo (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1224, 8, "copy_box_attributes", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [3].element.rarg), u [1]));
}

	/* TRAFFIC_TIME update_time */
extern void _fAaa40hj(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa40hj (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1841, 49, "update_time", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MODEL_MOVE_HANDLE on_stop_resizing */
extern void _fAag0c3s_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAag0c3s_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1061, 55, "on_stop_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MODEL_MOVE_HANDLE on_enter */
extern void _fAagsyyp(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagsyyp (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1061, 42, "on_enter", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MODEL_MOVE_HANDLE on_leave */
extern void _fAagtlwb(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagtlwb (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1061, 43, "on_leave", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MODEL_MOVE_HANDLE on_start_resizing */
extern void _fAagz18j_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagz18j_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1061, 53, "on_start_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MODEL_MOVE_HANDLE on_resizing */
extern void _fAag_p55_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAag_p55_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1061, 54, "on_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
extern void _fAadizsc_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsc_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1063, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_HEADER_ITEM_ACTION_SEQUENCE wrapper */
extern void _fAadizsb_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsb_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1064, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_TOOL_BAR_IMP remove_radio_button */
extern void _fAa5cres_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa5cres_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1216, 26, "remove_radio_button", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_TOOL_BAR_IMP add_toggle_button */
extern void _fAa5dece_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa5dece_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1216, 27, "add_toggle_button", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_TOOL_BAR_IMP add_radio_button */
extern void _fAa5bgjj_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa5bgjj_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1216, 24, "add_radio_button", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_TOOL_BAR_IMP add_button */
extern void _fAa5b3g5_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa5b3g5_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1216, 25, "add_button", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_WINDOW_I connect_accelerator */
extern void _fAaepztu_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaepztu_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1369, 12, "connect_accelerator", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_WINDOW_I disconnect_accelerator */
extern void _fAaeqmrg_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaeqmrg_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1369, 13, "disconnect_accelerator", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MESSAGE_DIALOG on_button_press */
extern void _fAaf5oc4(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf5oc4 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(833, 20, "on_button_press", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* EV_MESSAGE_DIALOG on_key_press */
extern void _fAaf6bar_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf6bar_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(833, 21, "on_key_press", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_polygon */
extern void _fAabmg9x_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabmg9x_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 7, "draw_figure_polygon", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_polyline */
extern void _fAabm37j_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabm37j_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 8, "draw_figure_polyline", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_rectangle */
extern void _fAabnr45_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabnr45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 9, "draw_figure_rectangle", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_star */
extern void _fAaboe2s_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaboe2s_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 11, "draw_figure_star", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_text */
extern void _fAabo10e_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo10e_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 12, "draw_figure_text", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_line */
extern void _fAabppy0_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabppy0_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 4, "draw_figure_line", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_picture */
extern void _fAabqcwn_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabqcwn_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 5, "draw_figure_picture", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_rounded_rectangle */
extern void _fAabq_t9_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabq_t9_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 10, "draw_figure_rounded_rectangle", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_arc */
extern void _fAabrnrw_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabrnrw_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 0, "draw_figure_arc", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_dot */
extern void _fAabsapi_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabsapi_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 1, "draw_figure_dot", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_ellipse */
extern void _fAabsym4_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabsym4_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 2, "draw_figure_ellipse", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_equilateral */
extern void _fAabtlkr_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabtlkr_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 3, "draw_figure_equilateral", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PROJECTION_ROUTINES draw_figure_pie_slice */
extern void _fAabluca_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabluca_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(905, 6, "draw_figure_pie_slice", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_WIDGET_IMP enable_drag_accept_files */
extern void _fAao64f0(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAao64f0 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1222, 84, "enable_drag_accept_files", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_WIDGET_IMP disable_drag_accept_files */
extern void _fAao7sdn(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAao7sdn (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1222, 85, "disable_drag_accept_files", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_DRAWER_I redraw_area_in_drawable_coordinates_wrapper */
extern void _fAaa5nlt_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa5nlt_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1375, 16, "redraw_area_in_drawable_coordinates_wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_GRID_DRAWER_I redraw_area_in_drawable_coordinates */
extern void _fAaa6ajf_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa6ajf_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1375, 17, "redraw_area_in_drawable_coordinates", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]), ((u [4].type = SK_REF), (u [4].value.EIF_REFERENCE_value = closed [2].element.rarg), u [4]), ((u [5].type = SK_REF), (u [5].value.EIF_REFERENCE_value = closed [3].element.rarg), u [5]), ((u [6].type = SK_REF), (u [6].value.EIF_REFERENCE_value = closed [4].element.rarg), u [6]));
}

	/* EV_LIST_ITEM_LIST inline-agent#1 of set_strings */
extern EIF_UNION _fAafh2ve_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAafh2ve_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) Fm64d72)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_CHECKABLE_TREE_I get_state */
extern void _fAaeu5a2_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaeu5a2_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1529, 4, "get_state", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* WEL_STANDARD_DIALOG_DISPATCHER standard_dialog_procedure */
extern EIF_POINTER fAaavnhg(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER);
EIF_POINTER fAaavnhg (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_UNION u [4];
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(775, 2, "standard_dialog_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].value.EIF_POINTER_value = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].value.EIF_POINTER_value = arg4), u [3])).value.EIF_POINTER_value;
}

	/* EV_DRAWING_AREA_PROJECTOR on_paint */
extern void _fAacht13_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacht13_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(928, 2, "on_paint", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_APPLICATION_I enable_contextual_help */
extern void _fAaea28v(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaea28v (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1383, 34, "enable_contextual_help", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_APPLICATION_I help_handler */
extern void _fAaezoth(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaezoth (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1383, 71, "help_handler", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_APPLICATION_I destroy */
extern void _fAafcxd5(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafcxd5 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1466, 4, "destroy", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_APPLICATION_I contextual_help */
extern void _fAae0mmc_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae0mmc_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1383, 74, "contextual_help", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
extern EIF_UNION _fAaff419_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaff419_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) Fm7bijn)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = open [2].element.rarg), u [1]));
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
extern void _fAafgs_w_2_3_4(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafgs_w_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [3];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) Fm7b5g9)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = open [2].element.rarg), u [1]), ((u [2].type = SK_REF), (u [2].value.EIF_REFERENCE_value = open [3].element.rarg), u [2]));
}

	/* EV_ADD_REMOVE_LIST add_item_in */
extern void _fAaf1sqv(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf1sqv (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1142, 18, "add_item_in", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_ADD_REMOVE_LIST remove_item_in */
extern void _fAaf2foh(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf2foh (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1142, 19, "remove_item_in", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_ADD_REMOVE_LIST modify_item_in */
extern void _fAaf22l3(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf22l3 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1142, 20, "modify_item_in", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_ADD_REMOVE_LIST update_button_status */
extern void _fAaf3qjq(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf3qjq (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1142, 21, "update_button_status", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_DYNAMIC_TREE_ITEM fill_from_subtree_function */
extern void _fAaen0yi(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaen0yi (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1067, 9, "fill_from_subtree_function", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAP_CANVAS zoom */
extern void _fAacmc6j_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacmc6j_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 133, "zoom", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* TRAFFIC_MAP_CANVAS redraw_now */
extern void _fAafyxw9(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafyxw9 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1981, 324, "redraw_now", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAP_CANVAS pan */
extern void _fAacnn1s_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacnn1s_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1981, 135, "pan", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* TRAFFIC_MAP_CANVAS move_end */
extern void _fAacoa_e_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacoa_e_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1981, 136, "move_end", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* TRAFFIC_MAP_CANVAS move_start */
extern void _fAacoyx0_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacoyx0_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1981, 137, "move_start", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* TRAFFIC_MAP_CANVAS release */
extern void _fAabysmx(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabysmx (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1981, 95, "release", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAP_CANVAS fast_redraw_now */
extern void _fAafzkuw(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafzkuw (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1981, 325, "fast_redraw_now", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAP_CANVAS add_taxi */
extern void _fAacihkt_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacihkt_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 127, "add_taxi", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_CANVAS remove_taxi */
extern void _fAacjsf1_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacjsf1_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1981, 129, "remove_taxi", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_GRAPH calculate_weight */
extern EIF_UNION _fAac9ar1_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAac9ar1_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(1926, 170, "calculate_weight", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_FONT_IMP update_preferred_faces */
extern void _fAadkx3d_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadkx3d_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1484, 27, "update_preferred_faces", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* MISMATCH_INFORMATION clear_all */
extern void fAaah1vu(EIF_REFERENCE);
void fAaah1vu (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(131, 8, "clear_all", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
extern void fAacpkr5(EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER);
void fAacpkr5 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_UNION u [2];
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(32, 2, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].value.EIF_POINTER_value = arg2), u [1]));
}

	/* TRAFFIC_LINE_CONNECTION_VIEW update */
extern void _fAabfdi4(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabfdi4 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1939, 65, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* THREAD thr_main */
extern void fAaa21gy(EIF_REFERENCE);
void fAaa21gy (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(789, 4, "thr_main", Current))(Current);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
extern void _fAadizsl_2_3(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsl_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [3];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(941, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REF), (u [2].value.EIF_REFERENCE_value = closed [2].element.rarg), u [2]));
}

	/* EV_GRID_ITEM_ACTION_SEQUENCE wrapper */
extern void _fAadizsk_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsk_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(942, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_GRID_COMBO_ITEM handle_key */
extern void _fAacnm85_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacnm85_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(943, 4, "handle_key", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_COMBO_ITEM initialize_actions */
extern void _fAacpk10(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacpk10 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(943, 6, "initialize_actions", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_COMBO_ITEM deactivate */
extern void _fAacp7_n(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacp7_n (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(847, 17, "deactivate", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_pie_slice */
extern void _fAabmg9g_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabmg9g_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 8, "draw_figure_pie_slice", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_polygon */
extern void _fAabm362_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabm362_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 10, "draw_figure_polygon", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_polyline */
extern void _fAabnr4p_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabnr4p_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 11, "draw_figure_polyline", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_rectangle */
extern void _fAaboe2b_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaboe2b_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 12, "draw_figure_rectangle", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_star */
extern void _fAabo1_y_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo1_y_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 14, "draw_figure_star", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_text */
extern void _fAabppyk_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabppyk_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 15, "draw_figure_text", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_line */
extern void _fAabqcv6_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabqcv6_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 6, "draw_figure_line", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_picture */
extern void _fAabq_tt_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabq_tt_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 7, "draw_figure_picture", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_rounded_rectangle */
extern void _fAabrnrf_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabrnrf_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 13, "draw_figure_rounded_rectangle", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_rounded_parallelogram */
extern void _fAabsao1_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabsao1_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 17, "draw_figure_rounded_parallelogram", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_rotated_ellipse */
extern void _fAabsymo_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabsymo_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 4, "draw_figure_rotated_ellipse", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_rotated_arc */
extern void _fAabtlka_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabtlka_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 1, "draw_figure_rotated_arc", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_rotated_pie_slice */
extern void _fAabt8hx_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabt8hx_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 9, "draw_figure_rotated_pie_slice", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_arc */
extern void _fAabuwfj_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabuwfj_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 0, "draw_figure_arc", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_dot */
extern void _fAabvjc5_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabvjc5_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 2, "draw_figure_dot", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_parallelogram */
extern void _fAabv6as_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabv6as_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 16, "draw_figure_parallelogram", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_ellipse */
extern void _fAabwt8e_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabwt8e_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 3, "draw_figure_ellipse", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_PROJECTION_ROUTINES draw_figure_equilateral */
extern void _fAabxg50_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabxg50_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1074, 5, "draw_figure_equilateral", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_EDITABLE_LIST combo_item_selected */
extern void _fAaguww0(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaguww0 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1148, 53, "combo_item_selected", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* EV_EDITABLE_LIST hide_window */
extern void _fAagha8z(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagha8z (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1148, 32, "hide_window", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_EDITABLE_LIST on_change_widget_deselected */
extern void _fAagauwr(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagauwr (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1148, 22, "on_change_widget_deselected", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_EDITABLE_LIST hide_window_on_timer */
extern void _fAagbhud(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagbhud (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1148, 23, "hide_window_on_timer", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_EDITABLE_LIST on_key_release */
extern void _fAagcspm_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagcspm_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1148, 25, "on_key_release", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_EDITABLE_LIST edit_row */
extern void _fAaf6y90_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf6y90_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1148, 16, "edit_row", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_EDITABLE_LIST resized */
extern void _fAagsy25(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagsy25 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1148, 50, "resized", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_EDITABLE_LIST focus_lost */
extern void _fAagfdf3(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagfdf3 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1148, 29, "focus_lost", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_DRAWABLE_ITEM_ACTION_SEQUENCE wrapper */
extern void _fAadizsa_2_3_4_5_6(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsa_2_3_4_5_6 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [6];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1073, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]), ((u [4].type = SK_REF), (u [4].value.EIF_REFERENCE_value = open [5].element.rarg), u [4]), ((u [5].type = SK_REF), (u [5].value.EIF_REFERENCE_value = closed [2].element.rarg), u [5]));
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
extern void _fAadizr9_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizr9_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1099, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_PICK_AND_DROPABLE_IMP real_start_transport */
extern void _fAaghzfw(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaghzfw (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [9];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1251, 6, "real_start_transport", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = closed [4].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = closed [5].element.i32arg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = closed [6].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = closed [7].element.darg), u [5]), ((u [6].type = SK_REAL64), (u [6].value.EIF_REAL_64_value = closed [8].element.darg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = closed [9].element.i32arg), u [7]), ((u [8].type = SK_INT32), (u [8].value.EIF_INTEGER_32_value = closed [10].element.i32arg), u [8]));
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
extern void _fAadizst_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizst_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(799, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_MODEL_BUFFER_PROJECTOR on_paint */
extern void _fAac_k6o_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAac_k6o_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1076, 6, "on_paint", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_MODEL_BUFFER_PROJECTOR inline-agent#1 of make_with_buffer */
extern void _fAac3gte(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAac3gte (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) Fm7t9s3)(closed [1].element.rarg);
}

	/* EV_MODEL_BUFFER_PROJECTOR resize_buffer */
extern void _fAac0v1x_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAac0v1x_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1076, 8, "resize_buffer", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_MODEL_WIDGET_PROJECTOR double_press */
extern void _fAaclpoc_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaclpoc_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1104, 19, "double_press", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MODEL_WIDGET_PROJECTOR button_release */
extern void _fAacmclz_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacmclz_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1104, 20, "button_release", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MODEL_WIDGET_PROJECTOR pointer_leave */
extern void _fAacm_jl(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacm_jl (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1104, 21, "pointer_leave", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MODEL_WIDGET_PROJECTOR mouse_move */
extern void _fAacoycg_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacoycg_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1104, 24, "mouse_move", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_MODEL_WIDGET_PROJECTOR on_pebble_request */
extern EIF_UNION _fAacpk92_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAacpk92_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1104, 25, "on_pebble_request", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]));
}

	/* EV_MODEL_WIDGET_PROJECTOR on_drop_target_request */
extern EIF_UNION _fAacp77p_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAacp77p_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1104, 26, "on_drop_target_request", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]));
}

	/* EV_MODEL_WIDGET_PROJECTOR button_press */
extern void _fAack1qq_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAack1qq_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1104, 18, "button_press", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
extern void _fAadizr8_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizr8_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [5];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1105, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]), ((u [4].type = SK_REF), (u [4].value.EIF_REFERENCE_value = closed [2].element.rarg), u [4]));
}

	/* EV_GRID_EDITABLE_ITEM handle_key */
extern void _fAacn96u_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacn96u_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(804, 4, "handle_key", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_EDITABLE_ITEM deactivate */
extern void _fAacm_bl(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacm_bl (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(847, 17, "deactivate", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_EDITABLE_ITEM initialize_actions */
extern void _fAacp7_p(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacp7_p (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(804, 6, "initialize_actions", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* WEL_DISPATCHER dialog_procedure */
extern EIF_POINTER fAabi8ne(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER);
EIF_POINTER fAabi8ne (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_UNION u [4];
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(445, 3, "dialog_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].value.EIF_POINTER_value = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].value.EIF_POINTER_value = arg4), u [3])).value.EIF_POINTER_value;
}

	/* WEL_DISPATCHER window_procedure */
extern EIF_POINTER fAaf965h(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER);
EIF_POINTER fAaf965h (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_UNION u [4];
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(445, 2, "window_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].value.EIF_POINTER_value = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].value.EIF_POINTER_value = arg4), u [3])).value.EIF_POINTER_value;
}

	/* EV_GRID_CHOICE_ITEM update_layout */
extern void _fAacm_bk_2_3(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacm_bk_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(808, 3, "update_layout", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = open [2].element.rarg), u [1]));
}

	/* EV_GRID_CHOICE_ITEM initialize_actions */
extern void _fAacpk11(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacpk11 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(808, 6, "initialize_actions", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_CHOICE_ITEM on_mouse_move */
extern void _fAacp7_o_2_3(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacp7_o_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(808, 7, "on_mouse_move", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]));
}

	/* EV_GRID_CHOICE_ITEM on_mouse_click */
extern void _fAacqvya_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacqvya_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(808, 8, "on_mouse_click", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REF), (u [3].value.EIF_REFERENCE_value = open [4].element.rarg), u [3]));
}

	/* EV_GRID_CHOICE_ITEM on_key */
extern void _fAacrivx_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacrivx_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(808, 9, "on_key", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_CHOICE_ITEM deactivate */
extern void _fAacr5tj(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacr5tj (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(847, 17, "deactivate", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAIN_WINDOW resize_canvas */
extern void _fAafo7xm(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafo7xm (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 309, "resize_canvas", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAIN_WINDOW zoom_in */
extern void _fAafqisv(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafqisv (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 311, "zoom_in", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAIN_WINDOW zoom_out */
extern void _fAafq5qh(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafq5qh (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 312, "zoom_out", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAIN_WINDOW request_close_window */
extern void _fAafirke(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafirke (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 299, "request_close_window", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAIN_WINDOW update_status_label */
extern void _fAafjeh0(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafjeh0 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2043, 300, "update_status_label", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
extern void _fAadizsi_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsi_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(962, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* TRAFFIC_MOVING move */
extern void _fAabhy9x(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabhy9x (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1950, 69, "move", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
extern void _fAadizr7_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizr7_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1115, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_REF), (u [7].value.EIF_REFERENCE_value = closed [2].element.rarg), u [7]));
}

	/* EV_CHECKABLE_TREE is_item_checked */
extern EIF_UNION _fAafiqsx_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAafiqsx_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(965, 1, "is_item_checked", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_WIDGET_PROJECTOR on_drop_target_request */
extern EIF_UNION _fAaceldz_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaceldz_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1117, 26, "on_drop_target_request", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]));
}

	/* EV_WIDGET_PROJECTOR button_press */
extern void _fAab8rzd_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAab8rzd_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1117, 17, "button_press", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_WIDGET_PROJECTOR double_press */
extern void _fAab9ew__2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAab9ew__2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1117, 18, "double_press", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_WIDGET_PROJECTOR button_release */
extern void _fAab91um_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAab91um_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1117, 19, "button_release", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_WIDGET_PROJECTOR pointer_leave */
extern void _fAacapr8(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacapr8 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1117, 20, "pointer_leave", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_WIDGET_PROJECTOR mouse_move */
extern void _fAaccnk3_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaccnk3_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1117, 23, "mouse_move", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_WIDGET_PROJECTOR on_pebble_request */
extern EIF_UNION _fAacdygc_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAacdygc_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1117, 25, "on_pebble_request", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]));
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
extern void _fAadizss_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizss_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(817, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* TRAFFIC_PLACE is_stop_of_line */
extern EIF_UNION _fAabfdj1_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAabfdj1_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(1973, 65, "is_stop_of_line", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* TOURISM explore_on_click */
extern void _fAabnssn(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabnssn (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2066, 78, "explore_on_click", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I header_item_resizing */
extern void _fAajwgsq_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAajwgsq_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 257, "header_item_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I mouse_wheel_received */
extern void _fAakzks9_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakzks9_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 319, "mouse_wheel_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_GRID_I header_item_resize_started */
extern void _fAajyell_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAajyell_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 260, "header_item_resize_started", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I header_item_resize_ended */
extern void _fAajy1i7_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAajy1i7_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 261, "header_item_resize_ended", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I recompute_vertical_scroll_bar_from_once_idle_actions */
extern void _fAaispuk(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaispuk (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 194, "recompute_vertical_scroll_bar_from_once_idle_actions", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I vertical_scroll_bar_changed */
extern void _fAaj0m9p_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaj0m9p_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 265, "vertical_scroll_bar_changed", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_GRID_I horizontal_scroll_bar_changed */
extern void _fAaj097b_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaj097b_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 266, "horizontal_scroll_bar_changed", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_GRID_I focus_out_received */
extern void _fAakyxvn(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakyxvn (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 318, "focus_out_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I viewport_resized */
extern void _fAaj45t1_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaj45t1_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 272, "viewport_resized", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_GRID_I focus_in_received */
extern void _fAakx9x0(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakx9x0 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 317, "focus_in_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I drop_action_intermediary */
extern void _fAafzj6h_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafzj6h_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 47, "drop_action_intermediary", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I veto_pebble_function_intermediary */
extern EIF_UNION _fAaf_u1q_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaf_u1q_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 49, "veto_pebble_function_intermediary", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I user_pebble_function_intermediary_locked */
extern EIF_UNION _fAaf2fs7_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaf2fs7_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [3];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 51, "user_pebble_function_intermediary_locked", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REF), (u [2].value.EIF_REFERENCE_value = closed [2].element.rarg), u [2]));
}

	/* EV_GRID_I pointer_motion_received_vertical_scroll_bar */
extern void _fAakko9z_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakko9z_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 296, "pointer_motion_received_vertical_scroll_bar", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_GRID_I user_pebble_function_intermediary */
extern EIF_UNION _fAaf22qu_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaf22qu_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1387, 52, "user_pebble_function_intermediary", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]));
}

	/* EV_GRID_I pointer_button_press_received */
extern void _fAakhglv_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakhglv_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 291, "pointer_button_press_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_I pointer_button_press_received_header */
extern void _fAakh3jh_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakh3jh_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 292, "pointer_button_press_received_header", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_I pointer_motion_received */
extern void _fAakirg3_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakirg3_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 293, "pointer_motion_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_GRID_I pointer_motion_received_header */
extern void _fAakj1cc_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakj1cc_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 295, "pointer_motion_received_header", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_GRID_I pointer_enter_received */
extern void _fAakqipk(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakqipk (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 305, "pointer_enter_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I pointer_motion_received_horizontal_scroll_bar */
extern void _fAaklb7l_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaklb7l_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 297, "pointer_motion_received_horizontal_scroll_bar", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_GRID_I pointer_motion_received_scroll_bar_spacer */
extern void _fAaklz47_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaklz47_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 298, "pointer_motion_received_scroll_bar_spacer", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_GRID_I pointer_double_press_received */
extern void _fAakmm2u_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakmm2u_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 299, "pointer_double_press_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_I pointer_double_press_received_header */
extern void _fAakm90g_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakm90g_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 300, "pointer_double_press_received_header", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_I pointer_button_release_received */
extern void _fAakokwp_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakokwp_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 302, "pointer_button_release_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_I pointer_button_release_received_header */
extern void _fAako7ub_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAako7ub_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 303, "pointer_button_release_received_header", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_I inline-agent#1 of initialize_grid */
extern EIF_UNION _fAamvfve_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAamvfve_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) Fm7m5fe)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I pointer_enter_received_on_drawable */
extern void _fAakq5m6(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakq5m6 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 306, "pointer_enter_received_on_drawable", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I pointer_leave_received */
extern void _fAakrtkt(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakrtkt (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 307, "pointer_leave_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I pointer_leave_received_on_drawable */
extern void _fAaksgif(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaksgif (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 308, "pointer_leave_received_on_drawable", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_I key_press_received */
extern void _fAaku08x_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaku08x_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 312, "key_press_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I resize_viewport_in_static_fixed */
extern void _fAajs73m_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAajs73m_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1387, 252, "resize_viewport_in_static_fixed", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_GRID_I key_press_string_received */
extern void _fAakwz1s_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakwz1s_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 315, "key_press_string_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I key_release_received */
extern void _fAakxm_e_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAakxm_e_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1387, 316, "key_release_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_I recompute_horizontal_scroll_bar_from_once_idle_actions */
extern void _fAaitcr6(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaitcr6 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1387, 195, "recompute_horizontal_scroll_bar_from_once_idle_actions", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* TRAFFIC_MAP_WIDGET add_place */
extern void _fAaa1stj_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa1stj_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 44, "add_place", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_line */
extern void _fAaa2fq5_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa2fq5_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 45, "add_line", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_road */
extern void _fAaa22os_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa22os_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 46, "add_road", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_path */
extern void _fAaa3qme_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa3qme_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 47, "add_path", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_building */
extern void _fAaa4dj0_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa4dj0_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 48, "add_building", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_tram */
extern void _fAaa40hn_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa40hn_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 49, "add_tram", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_bus */
extern void _fAaa5oe9_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa5oe9_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 50, "add_bus", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_free_moving */
extern void _fAaa6bcw_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa6bcw_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 51, "add_free_moving", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_passenger */
extern void _fAaa6zai_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa6zai_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 52, "add_passenger", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET add_taxi_office */
extern void _fAaa7l74_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa7l74_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 53, "add_taxi_office", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_place */
extern void _fAaa8w3d_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa8w3d_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 55, "remove_place", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_line */
extern void _fAaa9j0__2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa9j0__2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 56, "remove_line", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_road */
extern void _fAaa96zm_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa96zm_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 57, "remove_road", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_path */
extern void _fAabauw8_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabauw8_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 58, "remove_path", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_free_moving */
extern void _fAabbhuv_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabbhuv_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 59, "remove_free_moving", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_tram */
extern void _fAabb4sh_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabb4sh_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 60, "remove_tram", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_bus */
extern void _fAabcsp3_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabcsp3_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 61, "remove_bus", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_passenger */
extern void _fAabdfnq_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabdfnq_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 62, "remove_passenger", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_building */
extern void _fAabd2lc_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabd2lc_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 63, "remove_building", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_MAP_WIDGET remove_taxi_office */
extern void _fAabeqiz_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabeqiz_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1845, 64, "remove_taxi_office", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_PND_ACTION_SEQUENCE call */
extern void _fAadibuj(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadibuj (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(214, 0, "call", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* EV_GRID_LOCKED_I pointer_button_press_received */
extern void _fAaaz5y0_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaaz5y0_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1429, 9, "pointer_button_press_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_LOCKED_I pointer_motion_received */
extern void _fAaa_twn_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa_twn_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1429, 10, "pointer_motion_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_GRID_LOCKED_I pointer_double_press_received */
extern void _fAaa0gt9_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa0gt9_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1429, 11, "pointer_double_press_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_LOCKED_I pointer_button_release_received */
extern void _fAaa03rw_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa03rw_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1429, 12, "pointer_button_release_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_GRID_LOCKED_I pointer_enter_received */
extern void _fAaa1rpi(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa1rpi (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1429, 13, "pointer_enter_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_LOCKED_I pointer_leave_received */
extern void _fAaa2em4(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa2em4 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1429, 14, "pointer_leave_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_LOCKED_I key_press_received */
extern void _fAaa21kr_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa21kr_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1429, 15, "key_press_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_LOCKED_I key_press_string_received */
extern void _fAaa3pid_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa3pid_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1429, 16, "key_press_string_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_LOCKED_I key_release_received */
extern void _fAaa4cf__2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa4cf__2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1429, 17, "key_release_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_GRID_LOCKED_I focus_in_received */
extern void _fAaa4_dm(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa4_dm (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1429, 18, "focus_in_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_LOCKED_I focus_out_received */
extern void _fAaa5na8(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa5na8 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1429, 19, "focus_out_received", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_GRID_LOCKED_I mouse_wheel_received */
extern void _fAaa598v_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaa598v_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1429, 20, "mouse_wheel_received", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
extern void _fAadizsr_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsr_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(826, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_opened */
extern EIF_UNION _fAaen0zo_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaen0zo_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) Fm7hbzm)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_item_clicked */
extern EIF_UNION _fAaend01_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaend01_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) Fm7go0_)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = closed [2].element.i32arg), u [1]));
}

	/* EV_APPLICATION_IMP on_exception_action */
extern void _fAaf965k_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf965k_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1383, 60, "on_exception_action", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_DRAWING_AREA_PROJECTOR on_paint */
extern void _fAact3uh_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAact3uh_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(982, 2, "on_paint", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_GAUGE_IMP set_range */
extern void _fAapvp03(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAapvp03 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1242, 0, "set_range", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_COLUMN_TITLE_CLICK_ACTION_SEQUENCE wrapper */
extern void _fAadizr6_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizr6_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1135, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_DOUBLE_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
extern void _fAadizsh_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsh_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(985, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REAL64), (u [0].value.EIF_REAL_64_value = open [1].element.darg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_MODEL is_in_group */
extern EIF_UNION _fAaccm9r_1(EIF_UNION(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaccm9r_1 (EIF_UNION(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(835, 23, "is_in_group", open [1].element.rarg))(open [1].element.rarg);
}

	/* EV_GRID_CHECKABLE_LABEL_ITEM_I checkbox_handled */
extern void _fAacox86_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAacox86_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1441, 4, "checkbox_handled", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* TRAFFIC_PATH_VIEW update */
extern void _fAabluwd(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabluwd (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1940, 75, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_PATH_FIELD browse_for_directory */
extern void _fAaf0hvl(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf0hvl (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1141, 16, "browse_for_directory", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_PATH_FIELD browse_for_file */
extern void _fAaf04s7(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf04s7 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1141, 17, "browse_for_file", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
extern void _fAadizsq_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsq_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [9];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(870, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]), ((u [8].type = SK_REF), (u [8].value.EIF_REFERENCE_value = closed [2].element.rarg), u [8]));
}

	/* EV_INCLUDE_EXCLUDE on_include */
extern void _fAafu0ii(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafu0ii (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1143, 6, "on_include", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_INCLUDE_EXCLUDE on_exclude */
extern void _fAafvof4(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafvof4 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1143, 7, "on_exclude", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* HASH_TABLE [REFERENCE, INTEGER_32] has */
extern EIF_UNION _fAaa2ffr_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaa2ffr_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* HASH_TABLE [REFERENCE, REFERENCE] has */
extern EIF_UNION _fAaa2fje_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaa2fje_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
extern EIF_UNION _fAaa2fj2_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaa2fj2_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = open [1].element.parg), u [0]));
}

	/* HASH_TABLE [INTEGER_32, REFERENCE] has */
extern EIF_UNION _fAaa2fle_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaa2fle_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
extern EIF_UNION _fAaa2flh_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaa2flh_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* HASH_TABLE [REFERENCE, POINTER] has */
extern EIF_UNION _fAaa2fo__2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaa2fo__2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 3, "has", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = open [1].element.parg), u [0]));
}

	/* HASH_TABLE [REFERENCE, INTEGER_32] remove */
extern void _fAabo16i(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo16i (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = closed [2].element.i32arg), u [0]));
}

	/* HASH_TABLE [REFERENCE, REFERENCE] remove */
extern void _fAabo195(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo195 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
extern void _fAabo2au(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo2au (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = closed [2].element.parg), u [0]));
}

	/* HASH_TABLE [INTEGER_32, REFERENCE] remove */
extern void _fAabo2b5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo2b5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
extern void _fAabo2b8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo2b8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = closed [2].element.i32arg), u [0]));
}

	/* HASH_TABLE [REFERENCE, POINTER] remove */
extern void _fAabo2fr(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo2fr (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(87, 29, "remove", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = closed [2].element.parg), u [0]));
}

	/* HASH_TABLE [REFERENCE, INTEGER_32] put */
extern void _fAabk6ks(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6ks (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [1]));
}

	/* HASH_TABLE [REFERENCE, REFERENCE] put */
extern void _fAabk6of(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6of (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [3].element.rarg), u [1]));
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
extern void _fAabk6o3(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6o3 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_UINT32), (u [0].value.EIF_NATURAL_32_value = closed [2].element.u32arg), u [0]), ((u [1].type = SK_POINTER), (u [1].value.EIF_POINTER_value = closed [3].element.parg), u [1]));
}

	/* HASH_TABLE [INTEGER_32, REFERENCE] put */
extern void _fAabk6qf(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6qf (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = closed [2].element.i32arg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [3].element.rarg), u [1]));
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
extern void _fAabk6qi(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6qi (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = closed [2].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [1]));
}

	/* HASH_TABLE [REFERENCE, POINTER] put */
extern void _fAabk6t0(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6t0 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(102, 3, "put", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_POINTER), (u [1].value.EIF_POINTER_value = closed [3].element.parg), u [1]));
}

	/* EV_PIXMAP_IMP_LOADER update_fields */
extern void fAabv6al(EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER);
void fAabv6al (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	EIF_UNION u [6];
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1297, 3, "update_fields", Current))(Current, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = arg4), u [3]), ((u [4].type = SK_POINTER), (u [4].value.EIF_POINTER_value = arg5), u [4]), ((u [5].type = SK_POINTER), (u [5].value.EIF_POINTER_value = arg6), u [5]));
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER docking_started */
extern void _fAaf96w0(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf96w0 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1147, 29, "docking_started", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER docking_ended */
extern void _fAagb4pw(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagb4pw (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1147, 32, "docking_ended", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER change_minimized_state */
extern void _fAagcsni(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagcsni (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1147, 33, "change_minimized_state", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER close */
extern void _fAagdfk4(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAagdfk4 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1147, 34, "close", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER remove_simulated_height */
extern void _fAaf6y7x(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf6y7x (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1147, 24, "remove_simulated_height", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER change_maximized_state */
extern void _fAageqgd(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAageqgd (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1147, 36, "change_maximized_state", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER destroy_dialog_and_restore */
extern void _fAaf7825(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaf7825 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1147, 26, "destroy_dialog_and_restore", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
extern void _fAadizsj_2_3_4(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsj_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(948, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REF), (u [2].value.EIF_REFERENCE_value = open [3].element.rarg), u [2]), ((u [3].type = SK_REF), (u [3].value.EIF_REFERENCE_value = closed [2].element.rarg), u [3]));
}

	/* EV_RICH_TEXT_TAB_POSITIONER move_started */
extern void _fAaepzps(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaepzps (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1149, 5, "move_started", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [1]));
}

	/* EV_RICH_TEXT_TAB_POSITIONER redraw_control */
extern void _fAaezoq3_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaezoq3_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1149, 20, "redraw_control", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_RICH_TEXT_TAB_POSITIONER slider_moving */
extern void _fAaeq9k0_2_3(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaeq9k0_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1149, 7, "slider_moving", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REF), (u [2].value.EIF_REFERENCE_value = closed [2].element.rarg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [3]));
}

	/* EV_RICH_TEXT_TAB_POSITIONER position_handle */
extern EIF_UNION _fAaerxin_2_3(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAaerxin_2_3 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(1149, 8, "position_handle", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REF), (u [2].value.EIF_REFERENCE_value = closed [2].element.rarg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [3]));
}

	/* EV_RICH_TEXT_TAB_POSITIONER move_completed */
extern void _fAaeqmne(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaeqmne (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1149, 6, "move_completed", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = closed [3].element.i32arg), u [1]));
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
extern void _fAadizsg_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsg_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(999, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* TRAFFIC_PLACE_VIEW update */
extern void _fAabfdi8(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabfdi8 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1943, 65, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_DIALOG destroy */
extern void _fAaejib7(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaejib7 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(939, 2, "destroy", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_DIALOG dialog_key_press_action */
extern void _fAafh2te_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafh2te_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1004, 10, "dialog_key_press_action", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
extern void _fAadibut(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadibut (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1005, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* TRAFFIC_ROAD_VIEW update */
extern void _fAabfdi6(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabfdi6 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1941, 65, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MOVE_HANDLE on_leave */
extern void _fAafml3e(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafml3e (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(803, 25, "on_leave", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MOVE_HANDLE on_enter */
extern void _fAafly5s(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafly5s (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(803, 24, "on_enter", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MOVE_HANDLE on_start_resizing */
extern void _fAafpusi_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafpusi_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(803, 30, "on_start_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MOVE_HANDLE on_resizing */
extern void _fAafqhp4_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafqhp4_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(803, 31, "on_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_MOVE_HANDLE on_stop_resizing */
extern void _fAafq4nr_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafq4nr_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(803, 32, "on_stop_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* TRAFFIC_BUILDING_VIEW update */
extern void _fAabofmz(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabofmz (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1944, 79, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_OPTION_BUTTON on_item_select */
extern void _fAad49r7_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAad49r7_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1013, 4, "on_item_select", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_BUILDING_ICON_VIEW update */
extern void _fAabpqks(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabpqks (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2039, 81, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_FONT_I update_preferred_faces */
extern void _fAabyrxl_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabyrxl_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1484, 27, "update_preferred_faces", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* WEL_FONT_FAMILY_ENUMERATOR update_current */
extern void fAaa_t1x(EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER);
void fAaa_t1x (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	EIF_UNION u [4];
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(262, 5, "update_current", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].value.EIF_POINTER_value = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].value.EIF_POINTER_value = arg4), u [3]));
}

	/* EV_LIST_ITEM_CHECK_ACTION_SEQUENCE wrapper */
extern void _fAadizse_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizse_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1021, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* WEL_WINDOW_ENUMERATOR enumerate_child_windows_callback */
extern void fAacoyd8(EIF_REFERENCE, EIF_POINTER);
void fAacoyd8 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_UNION u [1];
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(489, 2, "enumerate_child_windows_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]));
}

	/* EV_MODEL_WORLD_CELL on_autoscroll_time_out */
extern void _fAae_zls(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae_zls (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(968, 32, "on_autoscroll_time_out", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_MODEL_WORLD_CELL on_vertical_scroll */
extern void _fAae0mje_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae0mje_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(968, 33, "on_vertical_scroll", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_MODEL_WORLD_CELL on_horizontal_scroll */
extern void _fAae09g0_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae09g0_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(968, 34, "on_horizontal_scroll", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_MODEL_WORLD_CELL on_resizing */
extern void _fAae1xen_2_3_4_5(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae1xen_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [4];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(968, 35, "on_resizing", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = open [4].element.i32arg), u [3]));
}

	/* EV_MODEL_WORLD_CELL on_pointer_button_press_on_drawing_area */
extern void _fAae2kb9_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae2kb9_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(968, 36, "on_pointer_button_press_on_drawing_area", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MODEL_WORLD_CELL on_pointer_button_move_on_drawing_area */
extern void _fAae269w_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae269w_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(968, 37, "on_pointer_button_move_on_drawing_area", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* EV_MODEL_WORLD_CELL on_pointer_button_release_on_drawing_area */
extern void _fAae3u7i_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae3u7i_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(968, 38, "on_pointer_button_release_on_drawing_area", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* EV_MODEL_WORLD_CELL on_mouse_wheel_on_drawing_area */
extern void _fAae5s0d_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae5s0d_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(968, 41, "on_mouse_wheel_on_drawing_area", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* EV_MODEL_WORLD_CELL on_key_pressed_on_drawing_area */
extern void _fAae6fy__2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae6fy__2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(968, 42, "on_key_pressed_on_drawing_area", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MODEL_WORLD_CELL on_key_released_on_drawing_area */
extern void _fAae62wm_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae62wm_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(968, 43, "on_key_released_on_drawing_area", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_LINE_VIEW remove_connection_view */
extern void _fAabo2kj_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabo2kj_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1942, 80, "remove_connection_view", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_LINE_VIEW add_connection_view */
extern void _fAabofmx_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabofmx_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1942, 79, "add_connection_view", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* TRAFFIC_LINE_VIEW update */
extern void _fAabk6yt(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabk6yt (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1942, 74, "update", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* WEL_RICH_EDIT_STREAM_OUT internal_callback */
extern EIF_INTEGER_32 fAabltz4(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32);
EIF_INTEGER_32 fAabltz4 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	EIF_UNION u [2];
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(436, 2, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1])).value.EIF_INTEGER_32_value;
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
extern void _fAadizsd_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsd_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(1027, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
extern void _fAac3gaz_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAac3gaz_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(877, 0, "enable_item_parented", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
extern void _fAac328l_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAac328l_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(877, 1, "disable_item_parented", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_MENU show */
extern void _fAad5xra(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAad5xra (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1029, 0, "show", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_CHECKABLE_LIST is_item_checked */
extern EIF_UNION _fAafkolz_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAafkolz_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(1040, 1, "is_item_checked", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE wrapper */
extern void _fAadizsp_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsp_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(880, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_BOX_IMP removed_so_update_non_expandable_children */
extern void _fAa4etv__2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa4etv__2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1186, 6, "removed_so_update_non_expandable_children", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_BOX_IMP added_so_update_non_expandable_children */
extern void _fAa4fgtm_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa4fgtm_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1186, 7, "added_so_update_non_expandable_children", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_DYNAMIC_LIST [REFERENCE] inline-agent#1 of append */
extern EIF_UNION _fAact38o_2(EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
EIF_UNION _fAact38o_2 (EIF_UNION(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) Fm6hg5g)(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* WEL_RICH_EDIT_STREAM_IN internal_callback */
extern EIF_INTEGER_32 fAabltz7(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER);
EIF_INTEGER_32 fAabltz7 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	EIF_UNION u [3];
	return (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(292, 2, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].value.EIF_POINTER_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].value.EIF_POINTER_value = arg3), u [2])).value.EIF_INTEGER_32_value;
}

	/* EV_GRID_ROW_ACTION_SEQUENCE wrapper */
extern void _fAadizso_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizso_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(889, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_SIMPLE_APPLICATION prepare */
extern void _fAabz1oq(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabz1oq (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVPF(1041, 0, "prepare", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* EV_CONTAINER_IMP add_radio_button */
extern void _fAap235r_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAap235r_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1349, 24, "add_radio_button", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_CONTAINER_IMP remove_radio_button */
extern void _fAap3r3d_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAap3r3d_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1349, 25, "remove_radio_button", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_CONTAINER_IMP enable_widget_sensitivity */
extern void _fAap4e0__2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAap4e0__2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1349, 26, "enable_widget_sensitivity", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_CONTAINER_IMP disable_widget_sensitivity */
extern void _fAap41zm_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAap41zm_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1349, 27, "disable_widget_sensitivity", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = open [1].element.rarg), u [0]));
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
extern void _fAadizsn_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAadizsn_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [2];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(896, 0, "wrapper", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_REF), (u [1].value.EIF_REFERENCE_value = closed [2].element.rarg), u [1]));
}

	/* EV_TEXT_FIELD set_text */
extern void _fAabrnkz(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAabrnkz (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(927, 2, "set_text", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
extern void _fAab_pq1(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAab_pq1 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1500, 21, "close_dockable_dialog", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_REF), (u [0].value.EIF_REFERENCE_value = closed [2].element.rarg), u [0]));
}

	/* ZOOMABLE_CANVAS release */
extern void _fAafaccm(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAafaccm (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1980, 286, "release", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* ZOOMABLE_CANVAS redraw_now */
extern void _fAaaq41_(void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAaaq41_ (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1980, 26, "redraw_now", closed [1].element.rarg))(closed [1].element.rarg);
}

	/* ZOOMABLE_CANVAS zoom */
extern void _fAae6gqw_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae6gqw_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(1980, 280, "zoom", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}

	/* ZOOMABLE_CANVAS move_start */
extern void _fAae63oi_2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae63oi_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1980, 281, "move_start", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* ZOOMABLE_CANVAS pan */
extern void _fAae8ejr_2_3_4_5_6_7_8(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae8ejr_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [7];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1980, 283, "pan", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_REAL64), (u [2].value.EIF_REAL_64_value = open [3].element.darg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_INT32), (u [5].value.EIF_INTEGER_32_value = open [6].element.i32arg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]));
}

	/* ZOOMABLE_CANVAS move_end */
extern void _fAae9pe__2_3_4_5_6_7_8_9(void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAae9pe__2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [8];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVF(1980, 285, "move_end", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = open [2].element.i32arg), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = open [3].element.i32arg), u [2]), ((u [3].type = SK_REAL64), (u [3].value.EIF_REAL_64_value = open [4].element.darg), u [3]), ((u [4].type = SK_REAL64), (u [4].value.EIF_REAL_64_value = open [5].element.darg), u [4]), ((u [5].type = SK_REAL64), (u [5].value.EIF_REAL_64_value = open [6].element.darg), u [5]), ((u [6].type = SK_INT32), (u [6].value.EIF_INTEGER_32_value = open [7].element.i32arg), u [6]), ((u [7].type = SK_INT32), (u [7].value.EIF_INTEGER_32_value = open [8].element.i32arg), u [7]));
}

	/* WEL_DISK_SPACE_CALLBACK eif_set_disk_space_attributes_callback */
extern void fAaav99j(EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32);
void fAaav99j (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	EIF_UNION u [4];
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION, EIF_UNION, EIF_UNION)) RTVPF(601, 3, "eif_set_disk_space_attributes_callback", Current))(Current, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].value.EIF_INTEGER_32_value = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].value.EIF_INTEGER_32_value = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].value.EIF_INTEGER_32_value = arg4), u [3]));
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
extern void _fAa97lj0_2(void(*f_ptr) (EIF_REFERENCE, EIF_UNION), EIF_TYPED_ELEMENT *, EIF_TYPED_ELEMENT *);
void _fAa97lj0_2 (void(*f_ptr) (EIF_REFERENCE, EIF_UNION) , EIF_TYPED_ELEMENT * closed, EIF_TYPED_ELEMENT * open)
{
	EIF_UNION u [1];
	GTCX
nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(1519, 39, "update_tab_positions", closed [1].element.rarg))(closed [1].element.rarg, ((u [0].type = SK_INT32), (u [0].value.EIF_INTEGER_32_value = open [1].element.i32arg), u [0]));
}



static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)fAaavnhg,
(fnptr)fAaah1vu,
(fnptr)fAacpkr5,
(fnptr)fAaa21gy,
(fnptr)fAabi8ne,
(fnptr)fAaf965h,
(fnptr)fAabv6al,
(fnptr)fAaa_t1x,
(fnptr)fAacoyd8,
(fnptr)fAabltz4,
(fnptr)fAabltz7,
(fnptr)fAaav99j,
};

fnptr *egc_address_table_init = feif_address_table;


#ifdef __cplusplus
}
#endif

