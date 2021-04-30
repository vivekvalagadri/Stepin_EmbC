/**
 * @defgroup   ACTIVITY3 activity 3
 *
 * @brief      This file implements activity 3.
 *
 * @author     Vivek
 * @date       2021
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
/**
 * @brief      Configures PWM Port
 */
void PwmConfig();
/**
 * @brief      sets Pwm Value
 *
 * @param[in]  num   The number
 */
void PwmSet(uint16_t num);
#endif