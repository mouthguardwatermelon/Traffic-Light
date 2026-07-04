// C++ code
//
const int buttonPin = 7;
bool buttonChecker(int ms) {
   for (int i = 0; i<ms;i++){
     if (digitalRead(buttonPin) == LOW) return true;
     delay(1);
  }
  return false;
}

enum State {GREEN,YELLOW,RED,WALK};
State current = GREEN;

void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(3,OUTPUT); // green walk
pinMode(2,OUTPUT); //red walk
pinMode(buttonPin,INPUT_PULLUP);
}
void loop() {
  // put your main code here, to run repeatedly:
	static bool pressed = false;
  switch (current) {
    case GREEN:
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    if (buttonChecker(5000)){
      pressed=true;
      delay(2000);
    };
    current = YELLOW;
    break;
    
    case YELLOW:
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    if (buttonChecker(3000)) {
      delay(2000);
      pressed=true;
    };
    current = RED;
    break;
    
    case RED:
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    if (buttonChecker(3000)) pressed=true;
    if (pressed) {
      current=WALK;
    } else {
      pressed=false;
      current=GREEN;
    };
    break;
    
    case WALK:
  	digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
 	delay(7000);
  	pressed=false;
 	current=GREEN;
  	break;
    
  }
}
