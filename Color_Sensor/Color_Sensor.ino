

void setup() {
  // put your setup code here, to run once:
  pinMode(S0,OUTPUT);
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  Series.Begin(9600);
  digitalWrite(S0,HIGH);
  digitalWrite(S1,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  frequency = pulseIn(out,LOW);
  frequency = map(frequency,30,90,255,0);
  Seriel.print("G=");
  Seriel.print(frequency);
  Seriel.print("\t");
  delay(100);

digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  frequency = pulseIn(out,LOW);
  frequency = map(frequency,30,90,255,0);
  Seriel.print("B=");
  Seriel.print(frequency);
  Seriel.print("R=");
  Seriel.print("\t");
  delay(100);

  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  frequency = pulseIn(out,LOW);
  frequency = map(frequency,30,90,255,0);
  Seriel.print("R=");
  Seriel.print(frequency);
  Seriel.print("R=");
  Seriel.print("\t");
  delay(100);

  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  frequency = pulseIn(out,LOW);
  frequency = map(frequency,30,90,255,0);
  Seriel.print("R=");
  Seriel.print(frequency);
  Seriel.print("R=");
  Seriel.print("\t");
  delay(100);
  
}
