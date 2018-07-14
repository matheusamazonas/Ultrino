/*
	Ultrino.cpp - Arduino library for the HC-SR04 ultrasonic sensor
	Created by Matheus Amazonas Cabral de Andrade on July 14th, 2018
*/

#include <stdint.h>
#include <Arduino.h>
#include "Ultrino.h"

Ultrino::Ultrino(uint8_t triggerPin, uint8_t pulsePin)
{
	_triggerPin = triggerPin;
	_pulsePin = pulsePin;
}

double Ultrino::getDistance()
{
	return 0;
}