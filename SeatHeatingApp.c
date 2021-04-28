#include "./inc/activity1.h"

int main(){

	while(1){
		if(isPersonSeated()){
			PORTB|=(1<<PB5);
		}
		else{
			PORTB&=~(1<<PB5);
		}
	}
}
