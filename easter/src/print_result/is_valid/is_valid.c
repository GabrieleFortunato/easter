/*
 * is_valid.c
 *
 *  Created on: 16 set 2017
 *      Author: gabriele
 */

#include "is_valid.h"

static const int MAX_YEAR = 2499;
static const int MIN_YEAR = 1583;

bool is_valid_year(int year){
	return year >= MIN_YEAR && year <= MAX_YEAR;
}
