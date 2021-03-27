// Code by Michael Nguyen


#include <Servo.h>

Servo leftUpperLeg; // Create servo object to control the servo attached to the left upper leg bracket.
Servo leftLowerLeg; // Create servo object to control the servo attached to the left lower leg bracket.
Servo leftFoot; // Create servo object to control the servo attached to the left foot bracket.
Servo rightUpperLeg; // Create servo object to control the servo attached to the right upper leg bracket.
Servo rightLowerLeg; // Create servo object to control the servo attached to the right lower leg bracket.
Servo rightFoot; // Create servo object to control the servo attached to the right foot bracket.

int leftUpperLegPin = 2; // Assign servo connected to the left upper leg bracket to digital pin 2.
int leftLowerLegPin = 3; // Assign servo connected to the lower leg bracket to digital pin 3.
int leftFootPin = 1; // Assign servo connected to the left foot bracket to digital pin 1.

int rightUpperLegPin = 11; // Assign servo connected to the right upper leg bracket to digital pin 11.
int rightLowerLegPin = 12; // Assign servo connected to the right lower leg bracket to digital pin 12.
int rightFootPin = 13; // Assign servo connected to the right foot bracket to digital pin 13.


void setup() {

  leftUpperLeg.attach(leftUpperLegPin); // Attach servo connected to the left upper leg bracket to its assigned digital pin.
  leftLowerLeg.attach(leftLowerLegPin); // Attach servo connected to the lower leg bracket to its assigned digital pin.
  leftFoot.attach(leftFootPin); // Attach servo connected to the left foot bracket to its assigned digital pin.
  rightUpperLeg.attach(rightUpperLegPin); // Attach servo connected to the right upper leg bracket to its assigned digital pin.
  rightLowerLeg.attach(rightLowerLegPin); // Attach servo connected to the right lower leg bracket to its assigned digital pin.
  rightFoot.attach(rightFootPin); // Attach servo connected to the right foot bracket to its assigned digital pin.

  }


void leftUpperLegMovementCW(int h, int timeDelay){ // Function that allows the shaft of the servo connected to the left upper leg bracket to rotate from 0 degrees to -h degrees (clockwise).

  int shaftPosition;
  
  for (shaftPosition = 0; shaftPosition >= h; shaftPosition -= 1){
    leftUpperLeg.write(shaftPosition); // The shaft of the servo connected to the left upper leg bracket goes to angular position -h.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the left upper leg bracket to reach angular position -h.
  }
  
}


void leftUpperLegMovementCCW(int h, int timeDelay){ // Function that allows the shaft of the servo connected to the left upper leg bracket to rotate from 0 degrees to h degrees (counter-clockwise).

  int shaftPosition;
  
  for (shaftPosition = 0; shaftPosition <= h; shaftPosition += 1){
    leftUpperLeg.write(shaftPosition); // The shaft of the servo connected to the left upper leg bracket goes to angular position h.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the left upper leg bracket to reach angular position h.
  }
  
}


void leftLowerLegMovementCW(int k, int timeDelay){ // Function that allows the shaft of the servo connected to the left lower leg bracket to rotate from 0 degrees to -k degrees (clockwise).

  int shaftPosition;
  
  for (shaftPosition = 0; shaftPosition >= k; shaftPosition -= 1){
    leftLowerLeg.write(shaftPosition); // The shaft of the servo connected to the left lower leg bracket goes to angular position -k.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the left lower leg bracket to reach angular position -k.
  }
  
}


void leftLowerLegMovementCCW(int k, int timeDelay){ // Function that allows the shaft of the servo connected to the left lower leg bracket to rotate from 0 degrees to k degrees (counter-clockwise).

  int shaftPosition;
  
  for (shaftPosition = 0; shaftPosition <= k; shaftPosition += 1){
    leftLowerLeg.write(shaftPosition); // The shaft of the servo connected to the left lower leg bracket goes to angular position k.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the left lower leg bracket to reach angular position k.
  }
  
}


void leftFootMovementCW(int a, int timeDelay){ // Function that allows the shaft of the servo connected to the left foot bracket to rotate from 0 degrees to -a degrees (clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition >= a; shaftPosition -= 1){
    leftFoot.write(shaftPosition); // The shaft of the servo connected to the left foot bracket goes to angular position -a.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the left foot bracket to reach angular position -a.
  }
  
}


void leftFootMovementCCW(int a, int timeDelay){ // Function that allows the shaft of the servo connected to the left foot bracket to rotate from 0 degrees to a degrees (counter-clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition <= a; shaftPosition += 1){
    leftFoot.write(shaftPosition); // The shaft of the servo connected to the left foot bracket goes to angular position a.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the left foot bracket to reach angular position a.
  }
  
}


void rightUpperLegMovementCW(int h, int timeDelay){ // Function that allows the shaft of the servo connected to the right upper leg bracket to rotate from 0 degrees to -h degrees (clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition >= h; shaftPosition -= 1){
    rightUpperLeg.write(shaftPosition); // The shaft of the servo connected to the right upper leg bracket goes to angular position -h.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the right upper leg bracket to reach angular position -h.
    
  }
  
}


void rightUpperLegMovementCCW(int h, int timeDelay){ // Function that allows the shaft of the servo connected to the right upper leg bracket to rotate from 0 degrees to h degrees (counter-clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition <= h; shaftPosition += 1){
    rightUpperLeg.write(shaftPosition); // The shaft of the servo connected to the right upper leg bracket goes to angular position h.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the right upper leg bracket to reach angular position h.
    
  }
  
}


void rightLowerLegMovementCW(int k, int timeDelay){ // Function that allows the shaft of the servo connected to the right lower leg bracket to rotate from 0 degrees to -k degrees (clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition >= k; shaftPosition -= 1){
    rightLowerLeg.write(shaftPosition); // The shaft of the servo connected to the right lower leg bracket goes to angular position -k.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the right lower leg bracket to reach angular position -k.
  }
  
}


void rightLowerLegMovementCCW(int k, int timeDelay){ // Function that allows the shaft of the servo connected to the right lower leg bracket to rotate from 0 degrees to k degrees (counter-clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition <= k; shaftPosition += 1){
    rightLowerLeg.write(shaftPosition); // The shaft of the servo connected to the right lower leg bracket goes to angular position k.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the right lower leg bracket to reach angular position k.
  }
  
}


void rightFootMovementCW(int a, int timeDelay){ // Function that allows the shaft of the servo connected to the right foot bracket to rotate from 0 degrees to -a degrees (clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition >= a; shaftPosition -= 1){
    rightFoot.write(shaftPosition); // The shaft of the servo connected to the right foot bracket goes to angular position -a.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the right foot bracket to reach angular position -a.
  }
  
}


void rightFootMovementCCW(int a, int timeDelay){ // Function that allows the shaft of the servo connected to the right foot bracket to rotate from 0 degrees to a degrees (counter-clockwise).

  int shaftPosition;

  for (shaftPosition = 0; shaftPosition <= a; shaftPosition += 1){
    rightFoot.write(shaftPosition); // The shaft of the servo connected to the right foot bracket goes to angular position a.
    delay(timeDelay); // How long it takes for the shaft of the servo connected to the right foot bracket to reach angular position a.
  }
  
}


void leftLegEquilibriumPosition(){ // Function that allows the left leg of the autonomous biped to become/remain straight.
  
  leftUpperLegMovementCW(0, 1000); // It takes the shaft of the servo connected to the left upper leg bracket 1000 milliseconds to reach an angular position of 0.
  leftLowerLegMovementCW(0, 1000); // It takes the shaft of the servo connected to the left lower leg bracket 1000 milliseconds to reach an angular position of 0.
  leftFootMovementCW(0, 1000); // It takes the shaft of the servo connected to the left foot bracket 10000 milliseconds to reach an angular position of 0.
  
}


void rightLegEquilibriumPosition(){ // Function that allows the right leg of the autonomous biped to become/remain straight.

  rightUpperLegMovementCW(0, 1000); // It takes the shaft of the servo connected to the right upper leg bracket 1000 milliseconds to reach an angular position of 0.
  rightLowerLegMovementCW(0, 1000); // It takes the shaft of the servo connected to the right lower leg bracket 1000 milliseconds to reach an angular position of 0.
  rightFootMovementCW(0, 1000); // It takes the shaft of the servo connected to the right foot bracket 1000 milliseconds to reach an angular position of 0.
  
}


void leftLegForward(){ // Function for the left leg of the autonomous biped that allows it to take a step forward.

  leftUpperLegMovementCCW(70, 1000); // EXAMPLE: It takes the shaft of the servo connected to the left upper leg bracket 1000 milliseconds to rotate 70 degrees, counter-clockwise.
  leftLowerLegMovementCW(-60, 1000); // EXAMPLE: It takes the shaft of the servo connected to the left lower leg bracket 1000 milliseconds to rotate 60 degrees, clockwise.
  leftFootMovementCW(-135, 1000); // EXAMPLE: It takes the shaft of the servo connected to the left foot bracket 1000 milliseconds to rotate 135 degrees, clockwise.
  
}


void rightLegForward(){ // Function for the right leg of the autonomous biped that allows it to take a step forward.
  
  rightUpperLegMovementCCW(70, 1000); // EXAMPLE: It takes the shaft of the servo connected to the right upper leg bracket 1000 milliseconds to rotate 70 degrees, counter-clockwise.
  rightLowerLegMovementCW(-60, 1000); // EXAMPLE: It takes the shaft of the servo connected to the right lower leg bracket 1000 milliseconds to rotate 60 degrees, clockwise.
  rightFootMovementCW(-135, 1000); // EXAMPLE: It takes the shaft of the servo connected to the right foot bracket 1000 milliseconds to rotate 135 degrees, counter-clockwise.
  
}


void leftLegBackward(){ // Function for the left leg of the autonomous biped that allows it to take a step backward.

  leftUpperLegMovementCW(-70, 1000); // EXAMPLE: It takes the shaft of the servo connected to the left upper leg bracket 1000 milliseconds to rotate 70 degrees, clockwise.
  leftLowerLegMovementCW(-60, 1000); // EXAMPLE: It takes the shaft of the servo connected to the left lower leg bracket 1000 milliseconds to rotate 60 degrees, clockwise.
  leftFootMovementCCW(50, 1000); // EXAMPLE: It takes the shaft of the servo connected to the left foot bracket 1000 milliseconds to rotate 50 degrees, counter-clockwise.
  
}


void rightLegBackward(){ // Function for the right leg of the autonomous biped that allows it to take a step backward.

  rightUpperLegMovementCW(-70, 1000); // EXAMPLE: It takes the shaft of the servo connected to the right upper leg bracket 1000 milliseconds to rotate 70 degrees, clockwise.
  rightLowerLegMovementCW(-60, 1000); // EXAMPLE: It takes the shaft of the servo connected to the right lower leg bracket 1000 milliseconds to rotate 60 degrees, clockwise.
  rightFootMovementCCW(50, 1000); // EXAMPLE: It takes the shaft of the servo connected to the right foot bracket 1000 milliseconds to roate 50 degrees, counter-clockwise.
  
}


void walkingSequence() { // Function that allows the autonomous biped to walk forward.

  leftLegEquilibriumPosition(); // The right leg of the autonomous biped takes a step forward while its left leg initially remains in equilibrium, and then moves backward.
  rightLegForward();
  leftLegBackward();

  rightLegEquilibriumPosition(); // When the autonomous biped takes another step, its right leg returns to equilibrium position, then its left leg moves forward while its right leg simultaneously moves backward.
  leftLegForward();
  rightLegBackward();
  
}


void loop() {

  walkingSequence(); // The autonomous biped will walk forward indefinitely.
  
  }
