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
}
