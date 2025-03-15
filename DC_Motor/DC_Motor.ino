void setup() {
  // put your setup code here, to run once:
  pinMode(D4,OUTPUT);
  pinMode(D3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D4,HIGH);
  delay(1000);
  digitalWrite(D3,LOW);
  delay(2000);

  digitalWrite(D4,LOW);
  delay(1000);
  digitalWrite(D3,HIGH);
  delay(2000);
}
