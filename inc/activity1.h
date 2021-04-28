/**
 * @defgroup   ACTIVITY1 activity 1
 * @file
 * @brief      This file implements activity 1.
 *
 * @author     Vivek
 * @date       2021
 */
#include <avr/io.h>
#include <util/delay.h>
#define PERSON_SEATED (!(PINB&(1<<PB4)))&&(!(PINB&(1<<PB3)))

/**
 * 
 * @brief      Configures IO PORTS
 */

void pinConfig();

/**
 * 
 * @brief      Determines if person seated.
 *
 * @return     True if person seated, False otherwise.
 */
int isPersonSeated(void);


