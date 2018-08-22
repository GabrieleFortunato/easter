/*
 * repeat.c
 *
 *  Created on: 27 ago 2017
 *      Author: Gabriele Fortunato
 */

#include "repeat.h"

static const int ZERO = 0;
static const int ONE = 1;
static const int TWO = 2;
static const char* REPEAT_STRING = "\n\nCalcolare la data di un'altra Pasqua?\n(1=si,2=no) ";
static const char* SPEC_INT = "%d";

static bool invalid_repeat(int repeat){
	return repeat != ONE && repeat != TWO;
}

static int get_repeat(void){
	int repeat=ZERO;
	do{
	printf(REPEAT_STRING);
		scanf(SPEC_INT, &repeat);
	} while(invalid_repeat(repeat));
	return repeat;
}

bool repeat(void){
	return get_repeat() == ONE;
}
