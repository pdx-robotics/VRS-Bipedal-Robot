float L1 = 50.0; // Length of the upper leg in millimeters.
float L2 = 68.79707; // Length of the lower leg in millimeters.


float angle_a_forward(float x, float z){
  float a;
  a = 90 - acos( x/ ( sq(x)+sq(z) )    )*(180/3.14) + atan(x/z)*(180/3.14);
  return a;
}


void setup() {

  Serial.begin(9600);

  float a = angle_a_forward(20.0, -15.0);

  Serial.println(a);
}

void loop() {}
