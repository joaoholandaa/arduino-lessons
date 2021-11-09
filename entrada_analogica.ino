void setup(){
  Serial.begin(9600); 
}

/*
int pot;
int vol;
*/

void loop(){
  Serial.println(analogRead(A1));
  /*
    int pot = analogRead(A1);
    vol = map(pot, 0, 1023, 0, 5);
    Serial.print(pot); Serial.print(" , ");
    Serial.println(vol);
  */
}
