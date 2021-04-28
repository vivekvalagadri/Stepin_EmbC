#include "../inc/activity1.h"
void pinConfig(){
	DDRB|=(1<<PB5); //Setting PB5 as output for LED actuator

	DDRB&=~(1<<PB4);//Setting PB4 as push button input for Button Sensor
	PORTB|=(1<<PB4);//Pull up PB4
	
	DDRB&=~(1<<PB3);//Setting PB3 as push button input for Heater
	PORTB|=(1<<PB3);//Pull up PB3
}
int isPersonSeated(void){
	pinConfig();
		if(PERSON_SEATED)
			return 1;
		else
			return 0;

}