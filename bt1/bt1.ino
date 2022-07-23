void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonV = digitalRead(4);
  int buttonVa = digitalRead(7);
  if(buttonV==0){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }
  if(buttonVa==0){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }

}
