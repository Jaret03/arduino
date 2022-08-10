const int LED1 = 10;
const int LED2 = 11;
const int LED3 = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 10; i<13; i++){
    digitalWrite(i, HIGH);
    delay(10000);
    digitalWrite(i, LOW);
    delay(10000);  
  }
}
