// C++ code
//
int ledVermelho13 = 13;
int ledVerde12 = 12;
int ledAmarelo11 = 11;
int ledBranco9 = 9;
int ledAzul8 = 8;
int ledBranco6 = 6;
int ledAzul5 = 5;
int ledAmarelo4 = 4;
int ledVerde3 = 3;
int ledVermelho2 = 2;


void setup()
{
  pinMode(ledVermelho13, OUTPUT);
  pinMode(ledVerde12, OUTPUT);
  pinMode(ledAmarelo11, OUTPUT);
  pinMode(ledBranco9, OUTPUT);
  pinMode(ledAzul8, OUTPUT);
  pinMode(ledBranco6, OUTPUT);
  pinMode(ledAzul5, OUTPUT);
  pinMode(ledAmarelo4, OUTPUT);
  pinMode(ledVerde3, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
}

void loop()
{
  digitalWrite(ledVermelho13, HIGH);
  digitalWrite(ledAmarelo4, HIGH);
  delay(4000);
  
  digitalWrite(ledVermelho13, LOW);
  digitalWrite(ledAmarelo4, LOW);
  delay(2000);
  
  digitalWrite(ledBranco6, HIGH);
  digitalWrite(ledAzul5, HIGH);
  delay(2000);
  
  digitalWrite(ledBranco6, LOW);
  digitalWrite(ledAzul5, LOW);
  delay(3000);
  
  digitalWrite(ledVerde12, HIGH);
  digitalWrite(ledVerde3, HIGH);
  delay(4000);
  
  digitalWrite(ledVerde12, LOW);
  digitalWrite(ledVerde3, LOW);
  delay(2000);
  
  digitalWrite(ledAmarelo11, HIGH);
  digitalWrite(ledVermelho2, HIGH);

  delay(4000);
  
  digitalWrite(ledAmarelo11, LOW);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledBranco9, LOW);
  digitalWrite(ledAzul8, LOW);
  delay(2000);

  
  digitalWrite(ledBranco9, HIGH);
  digitalWrite(ledAzul8, HIGH);
  delay(2000);
  
  digitalWrite(ledBranco9, LOW);
  digitalWrite(ledAzul8, LOW);
  delay(3000);
}
