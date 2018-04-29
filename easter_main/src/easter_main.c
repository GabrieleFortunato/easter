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
#include "access/access.h"

#define FILE_ACCESS_NOT_OPEN "Impossibile registrare su file l'accesso"

void access(){
	FILE* file = fopen(FILE_NAME,FILE_MODE);
	file==NULL?printf(FILE_ACCESS_NOT_OPEN):print_access(file);
	fclose(file);
}

void easter(){
	do{
		intro();
		print_easter(get_year());
	} while(repeat());
}

int main(void) {
	access();
	easter();
	return EXIT_SUCCESS;
}
