int numAtualSorteado = 0;
int numSorteados[20];

int numAtualEscolhido = 0;
int numEscolhidos[20];

int nivel = 0;
int verifica = 0;
bool sortear = true;

void reiniciar()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);
   
  nivel = 0;
  sortear = true;
  verifica = 0;
}

void escolhaErrada()
{
  for(int i=0; i<=3; i++)
  {
    noTone(12);
    digitalWrite(8, HIGH);
    digitalWrite(10, HIGH);
    tone(12, 100);
    delay(100);
    
    noTone(12);
    tone(12, 200);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    delay(100);

    noTone(12);
    tone(12, 300);
    digitalWrite(9, HIGH);
    digitalWrite(11, HIGH);
    delay(100);

    noTone(12);
    tone(12, 400);
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    delay(100);
  }

  noTone(12);

 for(int i=0; i<=10; i++)
 {
  numSorteados[i] = 0;
 }

 reiniciar();
}

void mostrarSequencia()
{
  for(int i=0; i<=nivel; i++)
  {
    switch(numSorteados[i])
    {
      case 1:
      digitalWrite(8, HIGH);
      tone(12, 100);
      delay(500);
      digitalWrite(8, LOW);
      noTone(12);
      delay(500);
      break;

      case 2:
      digitalWrite(9, HIGH);
      tone(12, 200);
      delay(500);
      digitalWrite(9, LOW);
      noTone(12);
      delay(500);
      break;

      case 3:
      digitalWrite(10, HIGH);
      tone(12, 300);
      delay(500);
      digitalWrite(10, LOW);
      noTone(12);
      delay(500);
      break;
      
      case 4:
      digitalWrite(11, HIGH);
      tone(12, 400);
      delay(500);
      digitalWrite(11, LOW);
      noTone(12);
      delay(500);
    }
  }
}

void verificar(int pinoSaida, int som)
{
  if(numAtualEscolhido == numSorteados[verifica])
  {
    digitalWrite(pinoSaida, HIGH);
    tone(12, som);
    delay(500);
    digitalWrite(pinoSaida, LOW);
    noTone(12);
    delay(500);

    if(verifica == nivel)
    {
      nivel++;
      verifica = 0;
      sortear = true;
    }
    else
    {
      verifica++;
    }
  }
  else
    escolhaErrada();
}

void setup() 
{
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP); 
  pinMode(3, INPUT_PULLUP); 
  pinMode(4, INPUT_PULLUP); 
  pinMode(5, INPUT_PULLUP); 

  pinMode(6, INPUT_PULLUP); 

  pinMode(8, OUTPUT);  
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT); 

  pinMode(12, OUTPUT); 
  
  randomSeed(analogRead(0));

  delay(3000);
}

void loop() 
{
  if(nivel != 21)
  {
     if(sortear)
     {
       numAtualSorteado = random(1, 5);
       numSorteados[nivel] = numAtualSorteado;
       mostrarSequencia();
     }
     
     sortear = false;

     if(digitalRead(2) == 0)
     {
       numAtualEscolhido = 1;
       verificar(8, 100);
     }
      else if(digitalRead(3) == 0)
     {
       numAtualEscolhido = 2;
       verificar(9, 200);
     }
      else if(digitalRead(4) == 0)
     {
       numAtualEscolhido = 3;
       verificar(10, 300);
     }
      else if(digitalRead(5) == 0)
     {
       numAtualEscolhido = 4;
       verificar(11, 400);
     }
     else if(digitalRead(6) == 0)
     {
       reiniciar();
     } 
  }
  else
  {
    reiniciar();
  }
}
