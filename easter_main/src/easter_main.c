/*
 ============================================================================
 Name        : easter_main.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "access/access.h"
#include "close/close.h"
#include "get_year/get_year.h"
#include "intro/intro.h"
#include "print_easter/print_easter.h"
#include "repeat/repeat.h"

static const char* WRITE_ON_FILE = "w";
static const char* ACCESS_FILE_NAME = "accessi al programma bmi.txt";

void print_access_on_file(){
	FILE* access = fopen(ACCESS_FILE_NAME, WRITE_ON_FILE);
	print_access(access);
	fclose(access);
}

void calculate_easter(){
	do{
		intro();
		int year = get_year();
		print_easter(year);
	} while(repeat());
}

int main(void) {
	print_access_on_file();
	calculate_easter();
	close();
	return EXIT_SUCCESS;
}
