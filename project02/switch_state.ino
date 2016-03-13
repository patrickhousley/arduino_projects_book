int switchState = 0;
int currentLED = 4;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  
  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    currentLED = 4;
  } else {
    digitalWrite(3, LOW);
    
    if (currentLED == 4) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      currentLED = 5;
    } else {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      currentLED = 4;
    }
    
    delay(150);
  }
}