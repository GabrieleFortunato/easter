/*
 * print_result.c
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#include "print_easter/print_easter.h"

static const int TEN = 10;
static const int ZERO = 0;
static const char* INVALID_YEAR = "\nL'anno inserito non e' valido";
static const char* APRIL = "aprile";
static const char* PRINT_APRIL_EASTER =
		"\n==================================\n"
		"Data della Santa Pasqua: %d %s"
		"\n==================================";

static const char* PRINT_MARCH_EASTER =
		"\n=================================\n"
		"Data della Santa Pasqua: %d %s"
		"\n=================================";

static void print_april_easter(int year){
	printf(PRINT_APRIL_EASTER, day(year), month(year));
}

static void print_march_easter(int year){
	printf(PRINT_MARCH_EASTER,day(year), month(year));
}

static bool is_april_easter(int year){
	return day(year) > TEN && strcmp(month(year), APRIL) == ZERO;
}

static void print_valid_data(int year){
	is_april_easter(year) ? print_april_easter(year) : print_march_easter(year);
}

static void print_not_valid_data(){
	printf(INVALID_YEAR);
}

void print_easter(int year){
	is_valid_year(year)?print_valid_data(year):print_not_valid_data();
}
