#include <LiquidCrystal.h>
const int rs = 13,en = 12, d4 =11, d5=10, d6=9,d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

const int echopin = 2;
const int trigpin = 3;

long duration;
int distance;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Good to be good");
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}
void loop() {
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
 int duration = pulseIn(echopin, HIGH);
 int distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
