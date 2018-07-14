/*
	Ultrino.h - Arduino library for the HC-SR04 ultrasonic sensor
	Created by Matheus Amazonas Cabral de Andrade on July 14th, 2018
*/


#ifndef Untrino_h
#define Ultrino_h

#include <stdint.h>
#include "Arduino.h"

class Ultrino
{
public:
	Ultrino(uint8_t triggerPin, uint8_t pulsePin);
	double getDistance();
	double getDistance(long timeOut);

private:
	uint8_t _triggerPin;
	uint8_t _pulsePin;
};

#endif