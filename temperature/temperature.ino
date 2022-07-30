#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Humidity : ");
  Serial.print(h);
  Serial.print("Temperature : ");
  Serial.print(t);

  
  if(t>26){
    digitalWrite(4, HIGH);
  }
  else digitalWrite(4, LOW);
  
}
