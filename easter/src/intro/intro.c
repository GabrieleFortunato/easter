/*
 * intro.c
 *
 *  Created on: 03 set 2017
 *      Author: Gabriele Fortunato
 */

#include "intro.h"

static const char* CURE = "a cura di Gabriele Fortunato";
static const char* PRES = "PROGRAMMA DI CALCOLO DELLA PASQUA";
static const char* BAR = "=================================";
static const char* EMPTY = "";
static const char* CLS = "CLS";

void intro(void){
	system(CLS);
	puts(EMPTY);
	puts(BAR);
	puts(PRES);
	puts(BAR);
	puts(CURE);
	puts(EMPTY);
	puts(EMPTY);
}
