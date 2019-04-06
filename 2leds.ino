int redledPin = 9;
int grledPin = 10;
int delaytime =  1000;
int n = 3;
void setup() {
  pinMode(redledPin,OUTPUT);
  pinMode(grledPin,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0;i<n;i++){
  digitalWrite(redledPin,HIGH);
  delay(delaytime);
  digitalWrite(redledPin,LOW);
  Serial.print("Red Led");
  Serial.print(i+1);
  Serial.println("times");
  delay(delaytime);
  
  
  }
   digitalWrite(grledPin,HIGH);
  delay(delaytime);
  digitalWrite(grledPin,LOW);
  Serial.println("Green Led");
  delay(delaytime);

}
