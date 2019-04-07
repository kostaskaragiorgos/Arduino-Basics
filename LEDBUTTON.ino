int Ledgreen = 6;
int button = 7;
int buttons = 0;
int dtime = 1000;
void setup() {
  pinMode(Ledgreen, OUTPUT);
  pinMode(button, INPUT);


}

void loop() {
  buttons = digitalRead(button);
  if(buttons == HIGH)
  {
    digitalWrite(Ledgreen, HIGH);
    delay(dtime);
    digitalWrite(Ledgreen, LOW);
  } else {
    digitalWrite(Ledgreen, LOW);

  }
}
