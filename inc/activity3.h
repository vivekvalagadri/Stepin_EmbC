/**
 * @defgroup   ACTIVITY3 activity 3
 * @file
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
 * @param[in]  num   the value of the adc used to set pwm value
 */
void PwmSet(uint16_t num);
#endif