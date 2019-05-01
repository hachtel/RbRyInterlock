//This program is intended to output HIGH or LOW on a digital
//output line depending on the value of an analog input.
//In this case the input is intended to be a photodiode

// select the input pin for the photodiode
const int sensorPin = A0;   
//sets threshold for TTL
const int threshold = 47; 
// the pin you want to use for digital output
const int DOut = D1; 
 // variable to store the value coming from the sensor 
int sensorValue = 0; 


void setup() {
  //open serial port at 921600 bps
  Serial.begin(921600);
  //Declaring pin for digital out as an output
  pinMode(DOut, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  //report the sensorValue
  Serial.println(sensorValue);
  //if sensorValue is high
  if(sensorValue <= threshold){
  // Write digital out high
    digitalWrite(DOut, HIGH);
  } else {
    //Write digital out low
    digitalWrite(DOut, LOW);
  }
}
