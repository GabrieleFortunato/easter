/*
 * get_year.c
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#include "get_year.h"

static const int ZERO = 0;
static const char* STRING  = "Inserire l'anno di cui calcolare la Pasqua "
		"(compreso tra il 1583 e il 2499)>";
static const char* SPECIFIC_INT = "%d";

int get_year(void){
	int year=ZERO;
	printf(STRING);
	scanf(SPECIFIC_INT,&year);
	return year;
}
