/*
 * repeat.c
 *
 *  Created on: 27 ago 2017
 *      Author: Gabriele Fortunato
 */

#include "repeat.h"

static const char* SPEC_INT = "%d";

static int get_repeat(void){
	int repeat = ZERO;
	do{
	printf(REPEAT_STRING);
		scanf(SPEC_INT, &repeat);
	} while((repeat != ONE) && (repeat != TWO));
	return repeat;
}

bool repeat(void){
	return get_repeat() == ONE;
}
