/*
 * easter.c
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#include "easter.h"

static const int ZERO = 0;
static const int ONE = 1;
static const int TWO = 2;
static const int THREE = 3;
static const int FOUR = 4;
static const int FIVE = 5;
static const int SIX = 6;
static const int SEVEN = 7;
static const int NINE = 9;
static const int TEN = 10;
static const int NINETEEN = 19;
static const int TWENTYTWO = 22;
static const int TWENTYTHREE = 23;
static const int TWENTYFOUR = 24;
static const int TWENTYFIVE = 25;
static const int TWENTYSIX = 26;
static const int TWENTYEIGHT = 28;
static const int THIRTY = 30;
static const int MIN_YEAR = 1583;
static const int YEAR_A = 1699;
static const int YEAR_F = 1799;
static const int YEAR_B = 1899;
static const int YEAR_G = 2099;
static const int YEAR_C = 2199;
static const int YEAR_D = 2300;
static const int YEAR_E = 2399;
static const int MAX_YEAR = 2499;
static const char* MARCH = "marzo";
static const char* APRIL = "aprile";

static int a(int year){
	return year % NINETEEN;
}

static int b(int year){
	return year % FOUR;
}

static int c(int year){
	return year % SEVEN;
}

static int m(int year){
	return
			year >= MIN_YEAR && year <= YEAR_A ? TWENTYTWO :
		    year >= YEAR_A + ONE && year <= YEAR_B ? TWENTYTHREE :
		    year >= YEAR_B + ONE && year <= YEAR_C ? TWENTYFOUR :
		    year >= YEAR_D && year <= YEAR_E ? TWENTYSIX : TWENTYFIVE;
}

static int n(int year){
	return
			year >= (YEAR_C + ONE) && year <= (YEAR_D - ONE) ? ZERO :
			year >= YEAR_D && year <= MAX_YEAR ? ONE :
     	    year >= MIN_YEAR && year <= YEAR_A ? TWO :
     	    year >= YEAR_A + ONE && year <= YEAR_F ? THREE:
     	    year >= YEAR_F + ONE && year <= YEAR_B ? FOUR :
     	    year >= YEAR_B && year <= YEAR_G ? FIVE: SIX;
}

static int d(int year){
	return (NINETEEN * a(year)+ m(year)) % THIRTY;
}

static int e(int year){
	return
			(TWO * b(year)+ FOUR * c(year) +
			SIX*d(year) + n(year)) % SEVEN;
}

static bool year_min_ten(int year){
	return (d(year) + e(year)) < TEN;
}

static bool easter_nineteen(int year){
	return ((d(year) + e(year))- NINE ) == TWENTYSIX;
}

static bool easter_twentyfive(int year){
	return
			(d(year) + e(year)-NINE) == TWENTYSIX &&
			a(year) > TEN && d(year) == TWENTYEIGHT
			&& e(year) == SIX;
}

int day(int year){
	assert((is_valid_year(year)));
	return
			year_min_ten(year) ? (d(year) + e(year)) + TWENTYTWO :
			easter_nineteen(year) ? NINETEEN :
			easter_twentyfive(year) ? TWENTYFIVE :
			(d(year) + e(year)) - NINE;
}

const char* month(int year){
	assert((is_valid_year(year)));
	return (d(year) + e(year)) < TEN ? MARCH : APRIL;
}
