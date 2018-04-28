/*
 * is_valid.c
 *
 *  Created on: 16 set 2017
 *      Author: gabriele
 */

#include "is_valid.h"

bool is_valid_year(int year){
	return year>=MIN_YEAR&&year<=MAX_YEAR;
}
