#define led 2
#define botao 7

void setup(){
  pinMode(led,INPUT);
  pinMode(botao,OUTPUT);
}

void loop(){
  if(digitalRead(botao) == 1){
    digitalWrite(led,HIGH);
    delay(2000);
    digitalWrite(led,LOW);
  }
}
