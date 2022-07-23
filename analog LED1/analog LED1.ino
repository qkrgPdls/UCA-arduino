void setup() {
  Serial.begin(9600);
pinMode(3,OUTPUT);

}

void loop() {
 
 

 

   int lightValue = analogRead(A0);
   Serial.println(lightValue);
   if(lightValue < 500){
    digitalWrite(3,HIGH);
   }
   if(lightValue > 500){
    digitalWrite(3,LOW);
   }
}