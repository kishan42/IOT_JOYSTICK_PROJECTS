const int SW_pin = 2;
const int X_pin = 0;
const int Y_pin = 1;
void setup()
{
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Serial.begin(115200);  
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);  
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

      if(analogRead(1)>800)
      {
         
         digitalWrite(13, HIGH);  
         digitalWrite(7, LOW); 
          digitalWrite(12, LOW);  
         Serial.print("\nDOWN\n"); 
      }
      if(analogRead(1)<200)
      {    
        digitalWrite(13, LOW); 
         digitalWrite(12, LOW);  
        digitalWrite(7, HIGH);  
        Serial.print("\nUP\n"); 
      }    
      if(analogRead(0)>600)
      {
          Serial.print("\nRIGHT\n"); 
           digitalWrite(12, HIGH); 
            digitalWrite(7, LOW); 
             digitalWrite(13, LOW);  
      }
      if(analogRead(0)<200)
      {    
         Serial.print("\nLEFT\n"); 
          digitalWrite(7, LOW); 
           digitalWrite(12, LOW); 
            digitalWrite(13, LOW);  
      }         
}
