/*
 ============================================================================
 Name        : easter_main.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <print_easter/print_easter.h>
#include "intro/intro.h"
#include "get_year/get_year.h"
#include "repeat/repeat.h"
#include "close/close.h"
#include "access/access.h"

static const char* WRITE_ON_FILE = "w";
static const char* ACCESS_FILE_NAME = "accessi.txt";

void access(){
	FILE* file = fopen(ACCESS_FILE_NAME, WRITE_ON_FILE);
	print_access_on_file(file);
	fclose(file);
}

void caluculate_easter(){
	do{
		intro();
		print_easter(get_year());
	} while(repeat());
}

int main(void) {
	access();
	caluculate_easter();
	close();
	return EXIT_SUCCESS;
}
