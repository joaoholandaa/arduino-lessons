#define motor 2
void setup()
{
  pinMode(motor,OUTPUT);
  digitalWrite(motor,HIGH); /*comentar essa linha caso queira observar o acionamento e desligamento do motor no loop,
                             depois retirar o asterisco e barra do loop*/
}

void loop()
{
  /*
  digitalWrite(motor,HIGH);
  delay(700);
  digitalWrite(motor,LOW);
  delay(700);
  */
}
