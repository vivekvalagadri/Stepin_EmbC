/**
 * @defgroup   ACTIVITY2 activity 2
 * @file
 * @brief      This file implements ADC interface
 *
 * @author     Vivek
 * @date       2021
 */

#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include <avr/io.h>
#include <util/delay.h>
#define START_CONVERSION ADCSRA|=(1<<ADSC)
#define WAIT_CONVERSION while(!(ADCSRA & (1<<ADIF)))
#define STOP_CONVERSION ADCSRA|=(1<<ADIF)
/**
 * @brief      Initializes the adc.
 */
void InitADC();
/**
 * @brief      Reads an adc.
 *
 * @param[in]  ch    Select ADC channel
 *
 * @return     digital value for the corresponding analg value
 */
uint16_t ReadADC(uint8_t ch);
#endif
