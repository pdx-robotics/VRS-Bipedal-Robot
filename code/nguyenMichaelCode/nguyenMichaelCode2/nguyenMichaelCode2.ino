#include <Servo.h>

Servo rightLegFoot;
Servo rightLegLower;
Servo rightLegUpper;
Servo leftLegFoot;
Servo leftLegLower;
Servo leftLegUpper;

float L1 = 50.0; // Length of the upper leg in millimeters.
float L2 = 68.79707; // Length of the lower leg in millimeters.


void rightLegMovement(){
  rightLegUpper.write(90);
  delay(100);
  rightLegLower.write(-90);
  delay(100);
  rightLegUpper.write(0);
  delay(100);
  rightLegLower.write(0);
  delay(100);
}

void equilibriumPostion(){
  // Function resets servo shaft positions to 0.
    int equilibriumPos = 90;
    rightLegFoot.write(equilibriumPos);
    rightLegLower.write(equilibriumPos);
    rightLegUpper.write(equilibriumPos);
    leftLegFoot.write(equilibriumPos);
    leftLegLower.write(equilibriumPos);
    leftLegUpper.write(equilibriumPos);
}


void servoSetup(){
  // Function assigns a digital pin to each servo motor.
    rightLegFoot.attach(5);
    rightLegLower.attach(4);
    rightLegUpper.attach(3);
    leftLegFoot.attach(0);
    leftLegLower.attach(1);
    leftLegUpper.attach(2);
}


void setup() {
  Serial.begin(9600);
  servoSetup();

}

void loop() {
   // rightLegMovement();
   rightLegLower.write(90);
   rightLegLower.write(0);
    }
