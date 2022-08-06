// 11 10 9 8    5V GND
#include<Stepper.h>
int stepsPerRev = 2048;
Stepper ulsan(stepsPerRev, 11, 9, 10, 8);
void setup() {
  // put your setup code here, to run once:
     ulsan.setSpeed(10);
     Serial.begin(9600);
     pinMode(4, INPUT);
     pinMode(3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(3);
  int b = digitalRead(4);

  Serial.println(a);
  
  /*if(a == LOW){
    ulsan.step(stepsPerRev); 
  }*/
  if(b == LOW){
    ulsan.step(-1); 
  }
  
}
