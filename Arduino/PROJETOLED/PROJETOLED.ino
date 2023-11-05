void setup() {
  // put your setup code here, to run once:
  //verd 8-1
  // amarelo  3-7
  // vermelho 5
  
pinMode(8,OUTPUT);
pinMode(1,OUTPUT);
pinMode(3,OUTPUT);
pinMode(7,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  delay(2000);
  digitalWrite(5,LOW);
  delay(100);
  
  digitalWrite(3,HIGH); 
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  delay(100);
  
  digitalWrite(8,HIGH); 
  digitalWrite(1,HIGH);
  delay(2000);
  digitalWrite(8,LOW);
  digitalWrite(1,LOW);
  delay(100);
  
// Volta
  digitalWrite(3,HIGH); 
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  delay(100);  

}
