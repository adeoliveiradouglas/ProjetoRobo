#include <Arduino.h>
#include <Ultrasonic.h>

Ultrasonic sensor(2, 3);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("distancia: ");
  Serial.println(sensor.distanceRead());
  delay(1000);

}
