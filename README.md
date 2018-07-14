# Ultrino
Arduino library for the HC-SR04 ultrasonic sensor

Linux: : [![Build Status](https://travis-ci.com/matheusamazonas/Ultrino.svg?branch=master)](https://travis-ci.com/matheusamazonas/Ultrino)

Installation
-------------
For a simple, easy installation download the repository as a zip file and follow the instructions on [how to install an Arduino library from a zip file](https://www.arduino.cc/en/Guide/Libraries#toc4).

Example
-------------
The example below is also in the `examples` folder. The manifacturer recomends an interval of at least 60 milliseconds between readings. 

```cpp
#include <Ultrino.h>

Ultrino us(2,4);

void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }
  Serial.println("Setup is done");
}

void loop() {
  Serial.print("Distance: ");
  Serial.println(us.getDistance());
  delay(60);	// Recommended by manufacturer
}

```

