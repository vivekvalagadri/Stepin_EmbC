/**
 * @defgroup   ACTIVITY4 activity 4
 * @file
 * @brief      This file implements USART.
 *
 * @author     Vivek
 * @date       2021
 */
#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__

#include <avr/io.h>
#include <util/delay.h>
/**
 * @brief      Initializes USART
 *
 * @param[in]  ubrr_value  The ubrr value
 */
void USARTInit(uint16_t ubrr_value);
/**
 * @brief      Reads Character Recieved
 *
 * @return     received character
 */
char USARTReadChar();
/**
 * @brief      Transmits the data
 *
 * @param[in]  data  The data that needs to be transmitted
 */
void USARTWriteChar(char data);
#endif


