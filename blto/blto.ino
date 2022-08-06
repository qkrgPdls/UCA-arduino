// 블투 [state] 3 2 5V GND []
#include<SoftwareSerial.h> // 0, 1 외 핀도 RX, TX 가능하게 함
SoftwareSerial bluetooth(2, 3);// 2, 3 pin
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bluetooth.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bluetooth.available()){
    Serial.write(bluetooth.read());// 출력, 숫를 아스키 코드 문자로 바꿈
    //Serial.print는 그냥 출력 
  }
  if(Serial.available()){
    bluetooth.write(Serial.read());
  }
}
