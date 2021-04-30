/**
 * @file SeatHeatingApp.c
 * @author Vivek.V ()
 * @brief SeatHeating app for an automobile system
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "./inc/activity1.h"
#include "./inc/activity2.h"
#include "./inc/activity3.h"
#include "./inc/activity4.h"

int main(){
	//configure PWM Pin to PD6
	PwmConfig(); 
	//Initialize ADC using channel 0 (PC0)
	InitADC();
	//Iniialize USART
	USARTInit(103);
	uint16_t temp; //variable to store ADC value
	while(1){
		if(isPersonSeated()){
			ACTIVATE_LED; //activate LED actuator if person is seated
			temp=ReadADC(0);
			_delay_ms(200);
			if(temp<=200){
				PwmSet(51); //set pwm with 20% duty cycle
				USARTWriteChar('2');
				USARTWriteChar('0');
				USARTWriteChar('C');
				USARTWriteChar('\n');
			}
			else if(temp>200 && temp <=500){
				PwmSet(102); //set pwm with 40% duty cycle
				USARTWriteChar('2');
				USARTWriteChar('5');
				USARTWriteChar('C');
				USARTWriteChar('\n');
			}
			else if(temp>500 && temp <=700){
				PwmSet(179); //set pwm with 70% duty cycle
				USARTWriteChar('2');
				USARTWriteChar('9');
				USARTWriteChar('C');
				USARTWriteChar('\n');
			}
			else{
				PwmSet(242); //set pwm with 90% duty cycle
				USARTWriteChar('3');
				USARTWriteChar('3');
				USARTWriteChar('C');
				USARTWriteChar('\n');
			}
		}
		else{
			USARTWriteChar('0');
			PwmSet(0);//set PWM 0 if no one is seated
			DEACTIVATE_LED; //Deactive LED Actuator
		}
	}
}
