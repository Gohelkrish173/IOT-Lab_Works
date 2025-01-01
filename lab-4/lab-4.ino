void setup() {
  	pinMode(D7, OUTPUT); // Red
  	pinMode(D4,OUTPUT); // Green
  	pinMode(D2,INPUT_PULLUP);// Active LOw
  	// attachInterrupt(0,button,CHANGE);
  	attachInterrupt(digitalPinToInterrupt(D2),button,RISING);
  	Serial.begin(9600);
}

void button()
{
  // interupt Give Quick Response
  //digitalWrite(8,HIGH); // RISING
	bool push = digitalRead(D2); // Change
  	if(push == 1) // Not Give Quick Response
  	{
    	digitalWrite(D7,LOW);
  	}
  	if(push == 0){ // Not Give Quick Response
    	digitalWrite(D7,HIGH);
  	}  
}

void loop() {
  button();
  digitalWrite(D4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(D4, LOW);
  delay(1000);
}
