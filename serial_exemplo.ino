#define botao 2

void setup(){
  pinMode(botao,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
   if(digitalRead(botao)==0){
      Serial.println("Botao Pressionado");
        delay(400);
     }
}
