/*
 * access.c
 *
 *  Created on: 04 mar 2018
 *      Author: Gabriele Fortunato
 */

#include "access.h"

void print_access(FILE* file){
	time_t ora = time(NULL);
	fputs((char*)asctime(localtime(&ora)),file);
}
