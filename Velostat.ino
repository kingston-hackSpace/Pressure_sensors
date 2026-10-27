/*/Velostat +  Arduino UNO
*/

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0;        // value read from the pot

void setup() {
 Serial.begin(9600);
 pinMode(9, INPUT_PULLUP); 
}

void loop() {
  sensorValue = analogRead(analogInPin);        
  Serial.print("sensor = " );                       
  Serial.println(sensorValue);      

if (sensorValue < 500){
  Serial.println("sensor triggered"); 
  }                    
}
