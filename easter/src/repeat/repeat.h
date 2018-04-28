/*
 * repeat.h
 *
 *  Created on: 27 ago 2017
 *      Author: Gabriele Fortunato
 */

#ifndef SRC_REPEAT_REPEAT_H_
#define SRC_REPEAT_REPEAT_H_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define ZERO      		 0
#define ONE	      		 1
#define TWO       		 2
#define REPEAT_STRING    "\n\nCalcolare la data di un'altra Pasqua?\n(1=si,2=no) "

/**
 * Verifica l'intenzione dell'utente di calcolare un altro codice fiscale
 * @return
 */
bool repeat(void);

#endif /* SRC_REPEAT_REPEAT_H_ */
