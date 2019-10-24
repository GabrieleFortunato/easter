/*
 * print_result.h
 *
 *  Created on: 03 set 2017
 *      Author: gabriele
 */

#ifndef PRINT_RESULT_PRINT_EASTER_H_
#define PRINT_RESULT_PRINT_EASTER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "easter/easter.h"
#include "is_valid/is_valid.h"

#define DATE             "Data della Santa Pasqua: %d %s"
#define BAR    			 "\n==================================\n"
#define BAR1             "\n=================================\n"
#define NOT_VALID_YEAR   "\nL'anno inserito non e' valido"

/**
 * Stampa la data della Pasqua
 * @param year
 */
void print_easter(int year);

#endif /* PRINT_RESULT_PRINT_EASTER_H_ */
