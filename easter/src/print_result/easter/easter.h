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
