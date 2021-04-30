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
	uint16_t temp; //variable to store ADC value
	while(1){
		if(isPersonSeated()){
			ACTIVATE_LED; //activate LED actuator if person is seated
			temp=ReadADC(0);
			_delay_ms(200);
			PwmSet(temp); //set pwm value based on adc value
		}
		else{
			PwmSet(0);//set PWM 0 if no one is seated
			DEACTIVATE_LED; //Deactive LED Actuator
		}
	}
}
