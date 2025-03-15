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
  reading = analogRead(A0);
  
  if (reading > UpperThreshold && !IgnoreReading) {
    if (!FirstPulseDetected) {
      FirstPulseTime = millis();
      FirstPulseDetected = true;
    } else {
      SecondPulseTime = millis();
      PulseInterval = SecondPulseTime - FirstPulseTime;
      FirstPulseTime = SecondPulseTime;
      FirstPulseDetected = false;
      IgnoreReading = true;

      // Prevent division by zero
      if (PulseInterval > 0) {
        BPM = (1.0 / PulseInterval) * 60.0 * 1000;
        Serial.print(PulseInterval);
        Serial.println(" BPM");
      }
    }
  }

  // Reset IgnoreReading when signal drops
  if (reading < LowerThreshold) {
    IgnoreReading = false;
  }
}


// void loop() {
//   // put your main code here, to run repeatedly:
//   reading = analogRead(A0);
//   if(reading > UpperThreshold && !IgnoreReading){
//     if(FirstPulseDetected == false){
//       FirstPulseTime = millis();
//       FirstPulseDetected = true;
//     }
//     else{
//       SecondPulseTime = millis();
//       PulseInterval = SecondPulseTime - FirstPulseTime;
//       FirstPulseTime = SecondPulseTime;
//       FirstPulseDetected = false;
//       IgnoreReading = true; 
//     }

//     if(reading < LowerThreshold){
//       IgnoreReading = false;
//     }
//     BPM = (1.0/PulseInterval) * 60.0 * 1000;
//     Serial.print(BPM);
//     Serial.println(" BPM");
//     Serial.flush();
//   }
// }
