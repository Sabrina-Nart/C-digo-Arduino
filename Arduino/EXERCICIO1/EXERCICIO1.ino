int aleatorio;

void setup() {
  
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
   // imprime um número aleatório entre 0 e 299

  // imprime um valor aleatório entre 10 e 19
 aleatorio = random(1, 50);
  Serial.println(aleatorio);
  if (aleatorio % 2 == 0)
    {
     digitalWrite(3,HIGH);
     delay(10000);
     digitalWrite(3,LOW);
     delay(100); 
    }
  else
    {
     digitalWrite(5,HIGH);
     delay(10000);
     digitalWrite(,LOW);
     delay(100);
    }
  delay(500);

}
