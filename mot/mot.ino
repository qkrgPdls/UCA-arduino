#include <Servo.h>
Servo servo;
// s 0 1023 m 0 180

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*servo.write(0);
  delay(1000);
  servo.write(180);
  delay(1000);*/
  int light = analogRead(A0);
  /*Serial.println(light);
  if(light < 100){
    for(int i = 0;i < 181;i++){
      servo.write(i);
     delay(10);
     
     }
    for(int j = 180;j > -1;j--){
      servo.write(j);
     delay(10);
      
    }
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }*/
  //servo.write(light/5);
  
}
