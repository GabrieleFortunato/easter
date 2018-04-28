/*
 ============================================================================
 Name        : easter_main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <print_result/print_easter.h>
#include "intro/intro.h"
#include "get_year/get_year.h"
#include "repeat/repeat.h"
#include "close/close.h"
#include "access/access.h"

void access(){
	FILE* file = fopen(FILE_NAME,FILE_MODE);
	print_access(file);
	fclose(file);
}

void easter(){
	do{
		intro();
		print_easter(get_year());
	} while(repeat());
	close();
}

int main(void) {
	access();
	easter();
	return EXIT_SUCCESS;
}
