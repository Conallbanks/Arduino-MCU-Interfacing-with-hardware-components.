int ledpin = 9;
int button = 12;
int buttonState;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  if (buttonState == HIGH && ledpin ==HIGH) {
    digitalWrite(ledpin, HIGH);
    
  } else (buttonState == LOW && ledpin == HIGH);{
      digitalWrite(ledpin, LOW);
    }
}