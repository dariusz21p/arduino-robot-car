#include <Servo.h> 
#include "Car.h"

unsigned long interval=50;     // the time we need to wait
unsigned long previousMillis=0;  // millis() returns an unsigned long.

Car car;

void setup() {
  Serial.begin(9600);
  car.initAuto();  
  Serial.println("Car Ready!");
}

void loop() {
   if ((unsigned long)(millis() - previousMillis) >= interval) {
      previousMillis = millis();
      car.loop();
//      car.forward();
   }
}

