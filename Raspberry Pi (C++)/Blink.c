/*
 * Blink.c
 *
 *  Created on: 27 dec 2014
 *      Author: Rickard
 */
#include <wiringPi.h>

void main(){

wiringPiSetup();
pinMode(0, OUTPUT);

	for(;;){
		digitalWrite(0, HIGH);
		delay(500);
		digitalWrite(0, LOW);
		delay(500);
	}
}


