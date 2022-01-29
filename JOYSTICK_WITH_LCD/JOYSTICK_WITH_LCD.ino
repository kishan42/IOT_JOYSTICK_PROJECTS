#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int SW_pin = 2;
const int X_pin = 0;
const int Y_pin = 1;

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
  lcd.begin();
  lcd.backlight();
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Serial.begin(115200);  
   lcd.setCursor(0,0);
   lcd.print("  WELCOME TO  ");
   lcd.setCursor(0,1);
   lcd.print("   JOYSTICK   ");
}
void loop()
{
  Serial.print("Switch :  ");  
  Serial.print(digitalRead(2));
  Serial.print("\n");
  Serial.print("X Aix : ");
  Serial.print(analogRead(0));    
  Serial.print("\n");
  Serial.print("Y Aix : ");
  Serial.println(analogRead(1));   
  Serial.print("\n\n");
  delay(500);
      if(analogRead(1)>800 && analogRead(0)>800){
           Serial.print("\nDOWN-RIGHT\n");
             lcd.clear();
             lcd.setCursor(0,0);
             lcd.print("DIRECTION :-");
            lcd.setCursor(0,1);
            lcd.print("DOWN-RIGHT");
         
      }      
      else if(analogRead(1)>800 && analogRead(0)<200){
           Serial.print("\nDOWN-LEFT\n"); 
            lcd.clear();
             lcd.setCursor(0,0);
            lcd.print("DIRECTION :-");
                lcd.setCursor(0,1);
            lcd.print("DOWN-LEFT");
         
      }
     else if(analogRead(1)<200 && analogRead(0)<200){
           Serial.print("\nUP-LEFT\n");
            lcd.clear();
             lcd.setCursor(0,0);
             lcd.print("DIRECTION :-");
                 lcd.setCursor(0,1);
            lcd.print("UP-LEFT");
          
      }
     else if(analogRead(1)<200 && analogRead(0)>800){
           Serial.print("\nUP-RIGHT\n"); 
           
            lcd.clear();
             lcd.setCursor(0,0);
             lcd.print("DIRECTION :-");
                 lcd.setCursor(0,1);
            lcd.print("UP-RIGHT");
            
      }
     else if(analogRead(1)>800)
      {  
       
         lcd.clear();
          lcd.setCursor(0,0);
         lcd.print("DIRECTION :-");
             lcd.setCursor(0,1);
            lcd.print("DOWN");
         Serial.print("\nDOWN\n"); 
      }
     else if(analogRead(1)<200)
      { 
        
         lcd.clear();
          lcd.setCursor(0,0);
         lcd.print("DIRECTION :-");
             lcd.setCursor(0,1);
         lcd.print("UP");     
        Serial.print("\nUP\n"); 
      }    
     else if(analogRead(0)>800)
      {
       
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("DIRECTION :-");
              lcd.setCursor(0,1);
          lcd.print("RIGHT");
          Serial.print("\nRIGHT\n"); 
         
      }
     else if(analogRead(0)<200)
      { 
        
         lcd.clear();
          lcd.setCursor(0,0);
         lcd.print("DIRECTION :-");
             lcd.setCursor(0,1);
          lcd.print("LEFT");   
         Serial.print("\nLEFT\n");  
      } 
     else{
       lcd.clear();
          lcd.setCursor(0,0);
         lcd.print("DIRECTION :-");
             lcd.setCursor(0,1);
          lcd.print("CENTER");   
         Serial.print("\nCENTER\n");  
     }
      
}
