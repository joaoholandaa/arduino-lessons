#define led1 3
#define led2 11

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
  
  //tempo = 500 ----> atribuição
  tempo = tempo - 100; //decremento
}
