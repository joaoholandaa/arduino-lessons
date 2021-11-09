#define led1 6
#define led2 9

int tempo = 1000;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop(){
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 delay(tempo);
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 delay(tempo);
}
