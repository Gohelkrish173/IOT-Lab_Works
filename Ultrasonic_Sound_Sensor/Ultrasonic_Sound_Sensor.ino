// C++ code
// speed = 343 m/s and .0343 cm/microseconds
#define Trig D7
#define Echo D3
#define Speed .0343


void setup()
{
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(Trig, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  delayMicroseconds(5);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  
  long int duration = pulseIn(Echo,HIGH); // when triger call echo is high 
  Serial.println(duration);
  
  float distance = Speed * duration/2;
  Serial.println("distance(cm) : ");
  Serial.println(distance);
  delay(200);
}