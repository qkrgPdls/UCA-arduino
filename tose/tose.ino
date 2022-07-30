// a0 gnd 5v       2
// 터치 센서의 끝부분 검은색을 만지면 13과 연결된 다이오드에 불이 켜짐, 2 빼면 안됨
int Led = 13; 
int buttonpin = 2; 
int val; 

void setup () { 
  pinMode (Led, OUTPUT); //13번 내장LED핀 OUTPUT모드 설정    위에서 Led는 13이라 함
  pinMode (buttonpin, INPUT) ; //터치센서핀 INPUT모드 설정   버튼핀은 2와 같음
} 

void loop () { 
  val = digitalRead (buttonpin); //버튼핀이 HIGH인지 LOW인지 val에 담음
  //터치센서가 감지될 경우 13번 LED ON 아닐경우 13번LED OFF 
  if (val == HIGH) {  //만지면
    digitalWrite (Led, HIGH); //13에 불
  } 
  else { 
    digitalWrite (Led, LOW); //안 만지면 불 끔
  } 
}
