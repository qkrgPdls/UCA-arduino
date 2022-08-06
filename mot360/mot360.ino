// 11 10 9 8    5V GND
#include<Stepper.h>
int stepsPerRev = 2048;
Stepper ulsan(stepsPerRev, 11, 9, 10, 8);
void setup() {
  // put your setup code here, to run once:
     ulsan.setSpeed(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  ulsan.step(stepsPerRev); // 기본 시계 방향
  delay(1000);
  ulsan.step(-stepsPerRev);//시계 반대 방향 
  delay(1000);
}
