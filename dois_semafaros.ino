#define led1_vermelho 13
#define led1_amarelo 12
#define led1_verde 11
#define led2_vermelho 6
#define led2_amarelo 4
#define led2_verde 2

void setup(){
  
 pinMode(led1_vermelho,OUTPUT);
 pinMode(led1_amarelo,OUTPUT);
 pinMode(led1_verde,OUTPUT);
 pinMode(led2_vermelho,OUTPUT);
 pinMode(led2_amarelo,OUTPUT);
 pinMode(led2_verde,OUTPUT);
  
}

void loop(){
  
  digitalWrite(led1_vermelho,HIGH);
  digitalWrite(led2_vermelho,HIGH);
  digitalWrite(led1_amarelo,LOW);
  digitalWrite(led2_amarelo,LOW);
  digitalWrite(led1_verde,LOW);
  digitalWrite(led2_verde,LOW);
  delay(1000);
  
  digitalWrite(led1_vermelho,LOW);
  digitalWrite(led2_vermelho,HIGH);
  digitalWrite(led1_amarelo,LOW);
  digitalWrite(led2_amarelo,LOW);
  digitalWrite(led1_verde,HIGH);
  digitalWrite(led2_verde,LOW);
  delay(3000);
  
  digitalWrite(led1_vermelho,LOW);
  digitalWrite(led2_vermelho,HIGH);
  digitalWrite(led1_amarelo,HIGH);
  digitalWrite(led2_amarelo,LOW);
  digitalWrite(led1_verde,LOW);
  digitalWrite(led2_verde,LOW);
  delay(1000);
  
  digitalWrite(led1_vermelho,HIGH);
  digitalWrite(led2_vermelho,HIGH);
  digitalWrite(led1_amarelo,LOW);
  digitalWrite(led2_amarelo,LOW);
  digitalWrite(led1_verde,LOW);
  digitalWrite(led2_verde,LOW);
  delay(1000);
 
  digitalWrite(led1_vermelho,HIGH);
  digitalWrite(led2_vermelho,LOW);
  digitalWrite(led1_amarelo,LOW);
  digitalWrite(led2_amarelo,LOW);
  digitalWrite(led1_verde,LOW);
  digitalWrite(led2_verde,HIGH);
  delay(3000);
  
  digitalWrite(led1_vermelho,HIGH);
  digitalWrite(led2_vermelho,LOW);
  digitalWrite(led1_amarelo,LOW);
  digitalWrite(led2_amarelo,HIGH);
  digitalWrite(led1_verde,LOW);
  digitalWrite(led2_verde,LOW);
  delay(1000);
  
}
