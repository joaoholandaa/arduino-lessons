#define led_verde 12
#define led_vermelho 11

void setup(){

 pinMode(led_verde,OUTPUT);
 pinMode(led_vermelho,OUTPUT);
  
}

void loop(){
  
 digitalWrite(led_verde,HIGH);
 digitalWrite(led_vermelho,LOW);
 delay(500);
 digitalWrite(led_verde,LOW);
 digitalWrite(led_vermelho,HIGH);
 delay(500);

}
