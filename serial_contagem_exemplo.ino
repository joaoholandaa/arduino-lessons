#define botao 4
#define led 2

int x = 0;

void setup(){
 pinMode(botao,INPUT_PULLUP);
 pinMode(led,OUTPUT);    
 Serial.begin(9600);
}

void loop(){
  if(!digitalRead(botao)){
    x++; //x=x+1
      if(x==5){
            digitalWrite(led,HIGH);
            delay(1500);
            digitalWrite(led,LOW);
            x=0;
        }
  Serial.println(x);
  delay(500);
  }
}
