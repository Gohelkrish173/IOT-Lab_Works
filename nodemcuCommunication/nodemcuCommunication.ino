// C++ code
//
#include <SoftwareSerial.h>

SoftwareSerial mySerial=SoftwareSerial(D7, D6);

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Serial 2 Communication Started.");
}

void loop()
{
  Serial.println("Enter String 2 : ");
  if(Serial.available()>0){
  	String readData = Serial.readString();
    int Data = readData.toInt();
    mySerial.println(readData);
  }
  if(mySerial.available() > 0){
  	Serial.println("From Board 1:");
    String readData1 = mySerial.readString();
    Serial.println(readData1);
  }
  delay(1000);
}