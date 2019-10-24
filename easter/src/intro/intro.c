/*
 * intro.c
 *
 *  Created on: 03 set 2017
 *      Author: Gabriele Fortunato
 */

#include "intro.h"

static const char* INTRO =
		"\n================================="
		"\nPROGRAMMA DI CALCOLO DELLA PASQUA"
		"\n================================="
		"\na cura di Gabriele Fortunato\n\n\n";
static const char* CLS = "CLS";

void intro(void){
	system(CLS);
	printf(INTRO);
}
