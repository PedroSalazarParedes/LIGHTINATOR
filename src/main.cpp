#include <Arduino.h>
#include <Stepper.h>


const int stepsPerRev = 4096;

Stepper myStepper(stepsPerRev, 9, 11, 10, 6);

int stepCount = 0;

void setup() {

  myStepper.setSpeed(5);
  myStepper.step(400);

  
}

void loop() {

  int lightLevel = analogRead(A0);

  if (lightLevel < 200 ) {
    myStepper.step(400);
    myStepper.step(-400);

  }

}