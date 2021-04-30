#include "../inc/activity3.h"
void PwmConfig(){
	DDRD|=(1<<PD6);
	TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);
	TCCR0B|=(1<<CS01)|(1<<CS00); 
}
void PwmSet(uint8_t ch){
	 	OCR0A=ch;
}