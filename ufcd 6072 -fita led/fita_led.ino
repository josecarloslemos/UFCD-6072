const int ledVerde = 8;
const int ledVermelho = 9;
const int ledAzul = 10;
const int ledBranco = 11;


void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledBranco, OUTPUT);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
   delay(1000);
  digitalWrite(ledVermelho, HIGH);
   delay(2000);
  digitalWrite(ledAzul, HIGH);
   delay(3000);
   digitalWrite(ledBranco, HIGH);
   delay(4000);


  
digitalWrite(ledVerde, LOW);
   delay(4000);
  digitalWrite(ledVermelho, LOW);
   delay(3000);
  digitalWrite(ledAzul, LOW);
  delay(2000);
  digitalWrite(ledBranco, LOW);
  delay(1000);
}
