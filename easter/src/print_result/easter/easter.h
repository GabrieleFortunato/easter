/*
 * easter.h
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#ifndef PRINT_RESULT_EASTER_EASTER_H_
#define PRINT_RESULT_EASTER_EASTER_H_

#include <assert.h>
#include <stdbool.h>
#include "print_result/is_valid/is_valid.h"

#define ZERO          0
#define ONE 	      1
#define TWO 	      2
#define THREE         3
#define FOUR          4
#define FIVE          5
#define SIX           6
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

/**
 * Calcola il giorno del mese in cui cade la Pasqua
 * @pre l'anno deve essere compre tra il 1583 e il 2499
 * @param year
 * @return
 */
int day(int year);

/**
 * Calcola il mese in cui cade la Pasqua
 * @pre l'anno deve essere compre tra il 1583 e il 2499
 * @param year
 * @return
 */
char* month(int year);

#endif /* PRINT_RESULT_EASTER_EASTER_H_ */
