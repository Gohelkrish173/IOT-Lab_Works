void setup() {
  pinMode(D3,INPUT);
  Serial.begin(9600);
}

void loop() {
  int isLightDetected = digitalRead(D3);
  if(isLightDetected == 1){
    Serial.print("yes");
  }
  else{
    Serial.print("No");
  }
  delay(2000);
}
