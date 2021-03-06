/*
 * is_valid.c
 *
 *  Created on: 16 set 2017
 *      Author: gabriele
 */

#include "../../print_easter/is_valid/is_valid.h"

static const int MIN_YEAR = 1583;
static const int MAX_YEAR = 2499;

bool is_valid_year(int year){
	return year >= MIN_YEAR && year <= MAX_YEAR;
}
