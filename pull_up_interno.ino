#define led 2
#define botao 7

void setup(){
    pinMode(botao,INPUT_PULLUP);
    pinMode(led,OUTPUT);
}

void loop(){
  if(digitalRead(7)==0){
    digitalWrite(led,HIGH);
    delay(2000);
    digitalWrite(led,LOW);
  }
}
