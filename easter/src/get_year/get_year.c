/*
 * get_year.c
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#include "get_year.h"

static const char* SPEC_INT = "%d";
static const char* INSERT_YEAR =
		"Inserire l'anno di cui calcolare la Pasqua (compreso tra il 1583 e il 2499)>";

int get_year(void){
	int year;
	printf(INSERT_YEAR);
	scanf(SPEC_INT, &year);
	return year;
}
