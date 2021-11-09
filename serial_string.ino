#define led 2

void setup(){
  Serial.begin(9600);
  Serial.setTimeout(50);
  pinMode(led,OUTPUT);
  /*
    9600 BITS POR SEGUNDO
    1 CARACTERE = 8 BITS
    1200 CARACTERES POR SEGUNDO

    1s ----> 1200C
    Xs ----> 1
    0.84ms por caractere
  */
}

String leitura;

void loop(){
  if(Serial.available()>0){
    leitura = Serial.readString();
    if(leitura.equalsIgnoreCase("LIGA")){
        digitalWrite(led,HIGH);
    }
    if(leitura.equalsIgnoreCase("DESLIGA")){
        digitalWrite(led,LOW);
    }
  }
}
