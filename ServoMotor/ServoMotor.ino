// C++ code
//
#include <Servo.h>

Servo myServo;
void setup()
{
  myServo.attach(D3);
  //myServo.write(90);
}

void loop()
{
  myServo.write(0);
  delay(1000);
   // Wait for 1000 millisecond(s)
  myServo.write(90);
  delay(2000);
   // Wait for 1000 millisecond(s)
}