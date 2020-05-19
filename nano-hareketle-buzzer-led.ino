int LED = 4;
int PIR = 7;
int Buzzer = 2;

void setup() {
 
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() { 
  int value = digitalRead(PIR);
  if (value == HIGH){
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
  }
}
