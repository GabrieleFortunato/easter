/*
 * get_year.h
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#ifndef GET_YEAR_GET_YEAR_H_
#define GET_YEAR_GET_YEAR_H_

#include "stdio.h"
#include "stdbool.h"

#define ZERO 		 0
#define MIN_YEAR     1583
#define MAX_YEAR     2499
#define STRING       "Inserire l'anno di cui calcolare la Pasqua (compreso tra il 1583 e il 2499)>"
#define SPECIFIC_INT "%d"

/**
 * Inserimento da tastiera dell'anno di cui calcolare la Pasqua
 * @post l'anno deve essere compreso tra il 1584 e il 2499
 * @return
 */
int get_year(void);

#endif /* GET_YEAR_GET_YEAR_H_ */
