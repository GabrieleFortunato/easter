/*
 * print_result.c
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#include "print_easter.h"

static const int ZERO = 0;
static const int TEN = 10;
static const char* APRIL = "aprile";


static void print_april_easter(int year){
	printf(BAR DATE BAR, day(year), month(year));
}

static void print_march_easter(int year){
	printf(BAR1 DATE BAR1, day(year), month(year));
}

static bool is_april_easter(int year){
	return day(year) > TEN && strcmp(month(year), APRIL) == ZERO;
}

static void print_valid_data(int year){
	is_april_easter(year) ? print_april_easter(year) : print_march_easter(year);
}

static void print_not_valid_data(){
	printf(NOT_VALID_YEAR);
}

void print_easter(int year){
	is_valid_year(year) ? print_valid_data(year) : print_not_valid_data();
}

