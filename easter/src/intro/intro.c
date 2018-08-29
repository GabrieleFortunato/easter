/*
 * intro.c
 *
 *  Created on: 03 set 2017
 *      Author: Gabriele Fortunato
 */

#include "intro.h"

static const char* CLS = "CLS";
static const char* INTRO =
		"\n"
		"=================================\n"
		"PROGRAMMA DI CALCOLO DELLA PASQUA\n"
		"=================================\n"
		"a cura di Gabriele Fortunato\n\n";

void intro(void){
	system(CLS);
	puts(INTRO);
}
