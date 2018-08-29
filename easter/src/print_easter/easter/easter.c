/*
 * easter.c
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#include <print_easter/easter/easter.h>

static const int ZERO = 0;
static const int ONE = 1;
static const int TWO = 2;
static const int THREE = 3;
static const int FOUR = 4;
static const int FIVE = 5;
static const int SIX = 6;
#define SEVEN         7
#define NINE          9
#define TEN           10
#define NINETEEN      19
#define TWENTYTWO     22
#define TWENTYTHREE   23
#define TWENTYFOUR    24
#define TWENTYFIVE    25
#define TWENTYSIX     26
#define TWENTYEIGHT   28
#define THIRTY 	      30
#define YEAR_A        1699
#define YEAR_F        1799
#define YEAR_B        1899
#define YEAR_G        2099
#define YEAR_C        2199
#define YEAR_D        2300
#define YEAR_E        2399
#define MARCH	      "marzo"
#define APRIL		  "aprile"

static int a(int year){
	return year % 19;
}

static int b(int year){
	return year % FOUR;
}

static int c(int year){
	return year % SEVEN;
}

static int m(int year){
	return year >= 1583 && year <= YEAR_A ? TWENTYTWO:
		   year >= YEAR_A + ONE && year <=YEAR_B ? TWENTYTHREE:
		   year >= YEAR_B+ONE && year <= YEAR_C ? TWENTYFOUR:
		   year >= YEAR_D && year <= YEAR_E ? TWENTYSIX : TWENTYFIVE;
}

static int n(int year){
	return year >= YEAR_C + ONE && year <= YEAR_D-ONE ? ZERO:
		   year >= YEAR_D && year <= 2499 ? ONE:
		   year >= 1583 && year <= YEAR_A ? TWO :
		   year >= YEAR_A + ONE && year <= YEAR_F ? THREE :
		   year >= YEAR_F + ONE && year <= YEAR_B ? FOUR :
		   year >= YEAR_B && year <= YEAR_G ? FIVE : SIX;
}

static int d(int year){
	return (NINETEEN*a(year)+m(year))%THIRTY;
}

static int e(int year){
	return (TWO*b(year)+FOUR*c(year)+SIX*d(year)+n(year))%SEVEN;
}

static bool year_minus_ten(int year){
	return (d(year)+e(year)) < TEN;
}

static bool easter_nineteen(int year){
	return ((d(year)+e(year))-NINE) == TWENTYSIX;
}

static bool easter_twentyfive(int year){
	return d(year)+e(year)-NINE == TWENTYSIX&&a(year) > TEN &&
			d(year)==TWENTYEIGHT&&e(year) == SIX;
}

int day(int year){
	assert((is_valid_year(year)));
	return year_minus_ten(year) ? (d(year)+e(year))+TWENTYTWO :
		   easter_nineteen(year) ? NINETEEN :
	       easter_twentyfive(year) ? TWENTYFIVE:(d(year)+e(year))-NINE;
}

char* month(int year){
	assert((is_valid_year(year)));
	return (d(year)+e(year)) < TEN ? MARCH : APRIL;
}
