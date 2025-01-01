void setup() {
  // put your setup code here, to run once:
  pinMode(D8,INPUT);
  pinMode(D3,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  input x = digitalWrite(D8)
  if(x == 1){
    digitalWrite(D3,HIGH);
    delay(30);
    digitalWrite(D3,LOW);
    delay(2);

    digitalWrite(D5,HIGH);
    delay(30);
    digitalWrite(D5,LOW);
    delay(2);

    digitalWrite(D7,HIGH);
    delay(30);
    digitalWrite(D7,LOW);
    delay(2);
  }
}
