void setup() {
pinMode(12,OUTPUT);
startupeye();
startupeye();
}

void loop() {

digitalWrite(12,HIGH);
delay(500);
digitalWrite(12,LOW);
delay(500);
}

void startupeye() {
  digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);
  digitalWrite(12,HIGH);
delay(200);
digitalWrite(12,LOW);
delay(150);
  digitalWrite(12,HIGH);
delay(500); }

