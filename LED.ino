int redled = 9;
int ontime = 500;
int offtime = 500;
void setup() {
  pinMode(redled,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redled,HIGH);
  delay(ontime);
  digitalWrite(redled,LOW);
  delay(offtime);
  
  

}
