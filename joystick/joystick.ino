const int SW_pin = 2;
const int X_pin = 0;
const int Y_pin = 1;
void setup()
{
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Serial.begin(115200);  
  
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
         Serial.print("\nDOWN\n"); 
      }
      if(analogRead(1)<200)
      {    
        Serial.print("\nUP\n"); 
      }    
      if(analogRead(0)>600)
      {
          Serial.print("\nRIGHT\n");  
      }
      if(analogRead(0)<200)
      {    
         Serial.print("\nLEFT\n"); 
      }         
}
