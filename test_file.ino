#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 28; 
// Declare IR
const int IR_PIN 3;
const int IR_RECV_PIN 29;
// Create a servo object 
Servo Servo1; 
int pos = 0;
void setup() {
Servo1.attach(servoPin);//servo
pinMode(IR_PIN, OUTPUT);//transmitter
pinMode(IR_RECV_PIN, INPUT);//receiver
Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = digitalRead(IR_RECV_PIN);  //read value from IR sensor
  if (sensorValue == LOW) {
    // Obstacle detected
    digitalWrite(IR_PIN, HIGH);  // Turn on LED (optional)
    Serial.println("Obstacle detected!");
  } else {
    // No obstacle
    digitalWrite(IR_PIN, LOW);   // Turn off LED (optional)
    Serial.println("No obstacle.");
  }

for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(3);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    Servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(3);                       // waits 15ms for the servo to reach the position
  }
}
