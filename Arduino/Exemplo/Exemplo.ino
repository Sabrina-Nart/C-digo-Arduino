int pinoLed = 13;
int pinoSensorLuz = A0;
int valorLuz = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (pinoLed, OUTPUT);
}

void loop()
{
  valorLuz = analogRead(pinoSensorLuz);  
 Serial.println (valorLuz);  
  if(valorLuz<200)
  {                
    digitalWrite(pinoLed,HIGH);
  }
  else
  {                    
    digitalWrite(pinoLed,LOW);
  }
  delay(1000);                   
}
