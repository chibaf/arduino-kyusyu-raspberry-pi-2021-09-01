/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0 and 1:
  int sensorValue_1 = analogRead(A0);
  int sensorValue_2 = analogRead(A1);
  // print out the value you read:
  Serial.print(sensorValue_1);
  Serial.print('\t');
  Serial.print(sensorValue_2);
  Serial.println("");
  delay(1000);        // delay in between reads for stability
}
