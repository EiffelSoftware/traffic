/*
 * Class DS_DISPENSER [REFERENCE]
 */

#include "eif_macros.h"

#ifdef __cplusplus
extern "C" {
#endif


static int16 gen_type0_2216 [] = {0,2215,-8,1,-1};
static int16 gen_type1_2216 [] = {0,2215,-8,1,-1};
static int16 gen_type2_2216 [] = {0,2215,-8,1,-1};
static int16 gen_type3_2216 [] = {0,2215,-8,1,-1};
static int16 gen_type4_2216 [] = {0,2215,-8,1,-1};
static int16 gen_type5_2216 [] = {0,2152,-8,1,-1};


static struct desc_info desc_2216[] = {
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
	{(BODY_INDEX) 11, (BODY_INDEX) -1, (int16) 2215, gen_type0_2216}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 13, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 14, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 15, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 16, (BODY_INDEX) -1, (int16) 2215, gen_type1_2216}, 
	{(BODY_INDEX) 17, (BODY_INDEX) -1, (int16) 2215, gen_type2_2216}, 
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
	{(BODY_INDEX) 29, (BODY_INDEX) -1, (int16) 2215, gen_type3_2216}, 
	{(BODY_INDEX) 30, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27910, (BODY_INDEX) -1, (int16) 1808, (int16 *) 0}, 
	{(BODY_INDEX) 29143, (BODY_INDEX) -1, (int16) 2215, gen_type4_2216}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 29200, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 29201, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 29202, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX) 0, (int16) 2152, gen_type5_2216}, 
	{(BODY_INDEX) 29203, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) 29147, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
};
extern void Init2216(void);
void Init2216(void)
{
	IDSC(desc_2216, 0, RTUD(2215));
	IDSC(desc_2216 + 1, 1, RTUD(2215));
	IDSC(desc_2216 + 31, 1590, RTUD(2215));
	IDSC(desc_2216 + 32, 1700, RTUD(2215));
	IDSC(desc_2216 + 33, 1648, RTUD(2215));
	IDSC(desc_2216 + 40, 1654, RTUD(2215));
}

#ifdef __cplusplus
}
#endif

