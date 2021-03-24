#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {

  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(11);
  servo5.attach(12);
  servo6.attach(13);

  
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  }

void loop() {}
