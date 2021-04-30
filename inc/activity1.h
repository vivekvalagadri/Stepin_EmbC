/**
 * @defgroup   ACTIVITY1 activity 1
 * @file
 * @brief      This file implements Led Actuator 
 *
 * @author     Vivek
 * @date       2021
 */
#ifndef __ACTIVITY1_h__
#define __ACTIVITY1_h__

#include <avr/io.h>
#include <util/delay.h>
#define PERSON_SEATED (!(PINB&(1<<PB4)))&&(!(PINB&(1<<PB3)))
#define ACTIVATE_LED PORTB|=(1<<PB5)
#define DEACTIVATE_LED PORTB&=~(1<<PB5)
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
#endif


