#include "../inc/activity2.h"

void InitADC(){
	ADMUX|=(1<<REFS0); //for Aref=Avcc
	ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch){
	ADMUX&=0xf8;
	ch=ch&0b00000111;
	ADMUX|=ch;
	START_CONVERSION;
	WAIT_CONVERSION;
	STOP_CONVERSION;
	return (ADC);
}