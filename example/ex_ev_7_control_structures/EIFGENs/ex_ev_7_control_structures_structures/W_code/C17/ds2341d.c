/*
 * Class DS_DISPENSER [INTEGER_32]
 */

#include "eif_macros.h"

#ifdef __cplusplus
extern "C" {
#endif


static int16 gen_type0_2341 [] = {0,2340,737,-1};
static int16 gen_type1_2341 [] = {0,2340,737,-1};
static int16 gen_type2_2341 [] = {0,2340,737,-1};
static int16 gen_type3_2341 [] = {0,2340,737,-1};
static int16 gen_type4_2341 [] = {0,2340,737,-1};
static int16 gen_type5_2341 [] = {0,2252,737,-1};


static struct desc_info desc_2341[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, (int16) -1, (int16 *) 0},

	{(BODY_INDEX) 1, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 2, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 3, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 4, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 6, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11, (BODY_INDEX) -1, (int16) 2340, gen_type0_2341}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 13, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 14, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 15, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 16, (BODY_INDEX) -1, (int16) 2340, gen_type1_2341}, 
	{(BODY_INDEX) 17, (BODY_INDEX) -1, (int16) 2340, gen_type2_2341}, 
	{(BODY_INDEX) 18, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 19, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 20, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 21, (BODY_INDEX) -1, (int16) 124, (int16 *) 0}, 
	{(BODY_INDEX) 22, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 23, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 24, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 25, (BODY_INDEX) -1, (int16) 133, (int16 *) 0}, 
	{(BODY_INDEX) 26, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 28, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 29, (BODY_INDEX) -1, (int16) 2340, gen_type3_2341}, 
	{(BODY_INDEX) 30, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27910, (BODY_INDEX) -1, (int16) 1808, (int16 *) 0}, 
	{(BODY_INDEX) 29143, (BODY_INDEX) -1, (int16) 2340, gen_type4_2341}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 29208, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 29209, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 29210, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX) 0, (int16) 2252, gen_type5_2341}, 
	{(BODY_INDEX) 29211, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 29151, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
};
extern void Init2341(void);
void Init2341(void)
{
	IDSC(desc_2341, 0, RTUD(2340));
	IDSC(desc_2341 + 1, 1, RTUD(2340));
	IDSC(desc_2341 + 31, 1590, RTUD(2340));
	IDSC(desc_2341 + 32, 1700, RTUD(2340));
	IDSC(desc_2341 + 33, 1648, RTUD(2340));
	IDSC(desc_2341 + 40, 1654, RTUD(2340));
}

#ifdef __cplusplus
}
#endif

