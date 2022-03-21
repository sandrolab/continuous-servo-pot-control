 #include <Servo.h>
 
Servo myservo;

void setup() {
  
  myservo.attach(6);
  Serial.begin(9600); 
  
}

void loop() {
  
  int val = map (analogRead(0), 0, 1023, 800, 2000);
  myservo.writeMicroseconds (val);
  Serial.println(val);
  delay(15);
  
} 
