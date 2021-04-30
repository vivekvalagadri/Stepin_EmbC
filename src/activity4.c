#include "../inc/activity4.h"
void USARTInit(uint16_t ubrr_value){
	UBRR0L= ubrr_value;
	UBRR0H= (ubrr_value>>8)&0x00ff;
	UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(UCSZ00);

	//enable rx and tx
	UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char USARTReadChar(){
	while(!(UCSR0A & (1<<RXC0))){
		//wait for data to be available
	}
	return UDR0; //send data
}

void USARTWriteChar(char data){
	while(!(UCSR0A & (1<<UDRE0))){
		//wait until transmitter is ready to send
	}
	UDR0=data;
}