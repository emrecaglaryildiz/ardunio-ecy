int PIR = 5;
int LED = 13;

 
void setup() {
pinMode(PIR, INPUT); 
pinMode(LED, OUTPUT); 
}
 
void loop(){
digitalWrite(LED, digitalRead(PIR)); 
}
