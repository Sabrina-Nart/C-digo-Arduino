int pinoLedVM = 12;
int pinoLedA = 10;
int pinoLedVd = 8;
int pinoSensorLuz = A0;
int valorLuz = 0;

void setup() {
  // put your setup code here, to run once:
   
  pinMode (pinoLedVM, OUTPUT);
  pinMode (pinoLedA, OUTPUT);
  pinMode (pinoLedVd, OUTPUT);
  //pinMode (pinoSensorLuz, INPUT);
  Serial.begin (9600);
}

void loop() 
{
  valorLuz = analogRead(pinoSensorLuz); 
  valorLuz = map( valorLuz,0,1023,1,600); 
   Serial.println (valorLuz);  
 
switch (valorLuz)
{
  case 1 ... 200 : digitalWrite(pinoLedVM,HIGH);
  break;
  
  case 201 ... 400 : digitalWrite(pinoLedA,HIGH);
  break;
  
  case 401 ... 600 : digitalWrite(pinoLedVd,HIGH);
  break;
}
  delay(1000);
  
  digitalWrite(pinoLedVM,LOW);
  digitalWrite(pinoLedA,LOW);
  digitalWrite(pinoLedVd,LOW);
  delay (1000);
}

