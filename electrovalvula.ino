const int sensorPin = A0;
 
void setup() {
   Serial.begin(9600);
    pinMode(12, OUTPUT); 
}
 
void loop() 
{
   int humedad = analogRead(sensorPin);
   Serial.print(humedad);
  
   if (humedad < 720)
   {
     digitalWrite(12, HIGH);   // set the LED on  
      Serial.println("Encendido");  
      //hacer las acciones necesarias
   }
   else if (humedad > 720) {
   
      digitalWrite(12, LOW);   // set the LED on
      Serial.println("Apagado");     
      
   }
   delay(1000);
}
