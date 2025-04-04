#include <Servo.h> 
#include <IRremote.h>
// Declare the Servo pin 
int servoPin = 28; 
// Declare IR
#define IR_PIN 3
#define IR_RECV_PIN 29
// Create a servo object 
Servo Servo1; 
int pos = 0;
void setup() {
Serial.begin(9600);
Servo1.attach(servoPin); 
}

void loop() {
  // put your main code here, to run repeatedly:

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
