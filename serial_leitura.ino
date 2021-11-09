void setup(){
 Serial.begin(9600);
}

char c;
void loop(){
  /*if(Serial.available()>0){
   
    c = Serial.read();
    Serial.print(c);
    
  }*/
  
    Serial.println(Serial.available());
    delay(700);
}
