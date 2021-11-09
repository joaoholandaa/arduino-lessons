#include <Servo.h>

Servo meuservo;  

int potpino = 0;  
int val;  

void setup() {
  meuservo.attach(8);  
}

void loop() {
  val = analogRead(potpino);           
  val = map(val, 0, 1023, 0, 180);   
  meuservo.write(val);                  
  delay(15);                           
}
