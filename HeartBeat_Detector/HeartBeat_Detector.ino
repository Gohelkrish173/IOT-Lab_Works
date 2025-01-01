int UpperThreshold = 518;
int LowerThreshold = 499;
int reading = 0;
float BPM = 0.0;
bool IgnoreReading = false;
bool FirstPulseDetected = false;
unsigned long FirstPulseTime = 0;
unsigned long SecondPulseTime = 0;
unsigned long PulseInterval = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(A0);
  if(reading > UpperThreshold && IgnoreReading == false){
    if(FirstPulseDetected == false){
      FirstPulseTime = millis();
      FirstPulseDetected = true;
    }
    else{
      SecondPulseTime = millis();
      PulseInterval = SecondPulseTime - FirstPulseTime;
      FirstPulseTime = SecondPulseTime;
      FirstPUlseDetected = false;
      IgnoreReading = true;
    }

    if(reading < LowerThreshold){
      IgnoreReading = false;
    }
    BPM = (1.0/PulseInterval) * 60.0 * 1000;
    Serial.Print(BPM);
    Serial.Println(" BPM");
    Serial.flush();
  };
}
