#include <SoftwareSerial.h>

SoftwareSerial mySerial = SoftwareSerial(7,8);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  mySerial.print("mySerial Started : ");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(mySerial.available() > 0){
    String msg = mySerial.readString();
    Serial.print("Recived BT");
    Serial.print(msg);
  }
  if(Serial.available()){
    String msg2 = Serial.readString();
    mySerial.print(msg2);
  }
}
