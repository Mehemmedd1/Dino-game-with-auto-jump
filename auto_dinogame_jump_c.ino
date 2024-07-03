#include <Servo.h>
Servo servo;
int sensorPin = A0;
int sensorValue = 0;
int val;
void setup() {
  
  servo.attach(2);
  Serial.begin(9600);
  servo.write(80);
}
void loop() {
  
  sensorValue = (analogRead(sensorPin));
  if (sensorValue < 650) {
     
    val = 100;
  }
  else {
    
    val =  80;
    servo.write(val);
    delay(50);
  }
  Serial.println(sensorValue); 
  servo.write(val);
 
}
