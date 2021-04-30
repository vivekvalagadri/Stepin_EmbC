#include "./inc/activity1.h"
#include "./inc/activity2.h"

int main(){
	InitADC();
	uint16_t temp;
	while(1){
		if(isPersonSeated()){
			ACTIVATE_LED;
			temp=ReadADC(0);
			_delay_ms(200);
		}
		else{
			DEACTIVATE_LED;
		}
	}
}
