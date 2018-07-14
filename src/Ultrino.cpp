/*
	Ultrino.cpp - Arduino library for the HC-SR04 ultrasonic sensor
	Created by Matheus Amazonas Cabral de Andrade on July 14th, 2018
*/

#include <stdint.h>
#include <Arduino.h>
#include "Ultrino.h"

#define US_SPEED 343	// m/s

Ultrino::Ultrino(uint8_t triggerPin, uint8_t pulsePin)
{
	_triggerPin = triggerPin;
	_pulsePin = pulsePin;

	pinMode(_triggerPin, OUTPUT);
	pinMode(_pulsePin, INPUT);
}

/**
	Returns the distance in meters
*/
double Ultrino::getDistance()
{
	digitalWrite(_triggerPin, LOW);
	// The delay here is arbitrary. Just waiting some time to bring it up again
	delayMicroseconds(3);
	digitalWrite(_triggerPin, HIGH);
	// This delay is on HC-SR04's specification
	delayMicroseconds(10);
	digitalWrite(_triggerPin, LOW);

	double responseTime = pulseIn(_pulsePin, HIGH); // In microseconds
	double distance = (responseTime / 1E6) * US_SPEED / 2.0;

	if (distance == 0)
	{
		return -1;
	}
	return (responseTime / 1E6) * US_SPEED / 2.0;
}