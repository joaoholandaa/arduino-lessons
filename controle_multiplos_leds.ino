void setup(){
  Serial.begin(9600);
}

String leitura;

void loop(){
  if(Serial.available()>0){ 
      leitura = Serial.readStringUntil('/n');
      if(leitura.startsWith("LIGA")){
        leitura.remove(0,4);
        pinMode(leitura.toInt(),OUTPUT);
        digitalWrite(leitura.toInt(),HIGH);
      }
      if(leitura.startsWith("DESLIGA")){
        leitura.remove(0,7);
        pinMode(leitura.toInt(),OUTPUT);
        digitalWrite(leitura.toInt(),LOW);
      }
    }
}
