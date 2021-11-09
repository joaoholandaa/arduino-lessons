#include <LiquidCrystal.h>

#define rs 7
#define en 6
#define d4 5
#define d5 4 
#define d6 3 
#define d7 2 

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup(){
   lcd.begin(16,2);
}

void loop(){
    lcd.setCursor(4,1);
    lcd.print("Aula LCD");
    delay(500);
    lcd.clear();
    delay(500);
}
