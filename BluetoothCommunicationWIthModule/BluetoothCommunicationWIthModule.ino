#include <SoftwareSerial.h>

#define RX D7
#define TX D6

SoftwareSerial bluetooth(RX,TX);

void setup(){
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop(){
  String send,rec;

  if(Serial.available()>0){
    send = Serial.readString();
    bluetooth.println("R1:"+send);
    Serial.println("R1:"+send);
  }

  if(bluetooth.available()>0){
    rec = bluetooth.readString();
    Serial.println("R2:"+rec);
  }
}
