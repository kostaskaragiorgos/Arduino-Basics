int redledPin = 9;
int delaytime =  1000;
void setup() {
  pinMode(redledPin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redledPin,HIGH);
  delay(delaytime);
  digitalWrite(redledPin,LOW);
  delay(delaytime);

}
