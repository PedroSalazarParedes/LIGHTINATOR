#include <Arduino.h>
#include <Stepper.h>


const int stepsPerRev = 4096;

Stepper myStepper(stepsPerRev, 9, 11, 10, 6);

int stepCount = 0;

void setup() {

  Serial.begin(9600);
  myStepper.setSpeed(9);
  
}

void loop() {

  int lightLevel = analogRead(A0);

  if (lightLevel < 150) {
    myStepper.step(200);
  }

}