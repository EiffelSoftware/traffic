/*
 * Class TRAFFIC_LINE_VEHICLE
 */

#include "eif_macros.h"

#ifdef __cplusplus
extern "C" {
#endif


static int16 gen_type0_1956 [] = {0,2197,-7,0,726,-1};
static int16 gen_type1_1956 [] = {0,2192,2010,-1};


static struct desc_info desc_1956[] = {
	{(BODY_INDEX) 27845, (BODY_INDEX) -1, (int16) -1, (int16 *) 0},

	{(BODY_INDEX) 1, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 2, (BODY_INDEX) -1, (int16) 774, (int16 *) 0}, 
	{(BODY_INDEX) 3, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 4, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 5, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 6, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 8, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 9, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 10, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 11, (BODY_INDEX) -1, (int16) 1955, (int16 *) 0}, 
	{(BODY_INDEX) 12, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 13, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 14, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 15, (BODY_INDEX) -1, (int16) 0, (int16 *) 0}, 
	{(BODY_INDEX) 16, (BODY_INDEX) -1, (int16) 1955, (int16 *) 0}, 
	{(BODY_INDEX) 17, (BODY_INDEX) -1, (int16) 1955, (int16 *) 0}, 
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
	{(BODY_INDEX) 29, (BODY_INDEX) -1, (int16) 1955, (int16 *) 0}, 
	{(BODY_INDEX) 30, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7202, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7203, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7201, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7217, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7218, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7219, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7220, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7221, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7222, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7223, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7224, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7225, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7226, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7227, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7228, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7229, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 7230, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 48, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27784, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27785, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27786, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27787, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 0, (int16) 1924, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 4, (int16) 2197, gen_type0_1956}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX) 49, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 8, (int16) 2010, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 12, (int16) 2010, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 16, (int16) 2010, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 80, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 88, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 50, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 51, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 52, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 53, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27819, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27820, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27821, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27843, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27844, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27824, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 20, (int16) 2192, gen_type1_1956}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 24, (int16) 2097, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 28, (int16) 2097, (int16 *) 0}, 
	{(BODY_INDEX) 27846, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27847, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 32, (int16) 1975, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 36, (int16) 1973, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 40, (int16) 1929, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 64, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 68, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 72, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 96, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 76, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 54, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27842, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX)-1, (int16) -1, (int16 *) 0},
	{(BODY_INDEX) -1, (BODY_INDEX) 44, (int16) 1813, (int16 *) 0}, 
	{(BODY_INDEX) 26932, (BODY_INDEX) -1, (int16) 1841, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 56, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27834, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27835, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) 27836, (BODY_INDEX) -1, (int16) -1, (int16 *) 0}, 
	{(BODY_INDEX) -1, (BODY_INDEX) 60, (int16) -1, (int16 *) 0}, 
};
extern void Init1956(void);
void Init1956(void)
{
	IDSC(desc_1956, 0, RTUD(1955));
	IDSC(desc_1956 + 1, 1, RTUD(1955));
	IDSC(desc_1956 + 31, 175, RTUD(1955));
	IDSC(desc_1956 + 34, 189, RTUD(1955));
	IDSC(desc_1956 + 48, 1553, RTUD(1955));
	IDSC(desc_1956 + 58, 1572, RTUD(1955));
	IDSC(desc_1956 + 76, 1581, RTUD(1955));
	IDSC(desc_1956 + 90, 1602, RTUD(1955));
	IDSC(desc_1956 + 91, 1609, RTUD(1955));
}

#ifdef __cplusplus
}
#endif

