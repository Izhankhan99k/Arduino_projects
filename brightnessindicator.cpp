#include <Servo.h>
int lightVal;
int lightreadpin=A1;
int servopin=13;
Servo myservo;
int angle;
void setup() {
  pinMode(lightreadpin,INPUT);
  pinMode(servopin,OUTPUT);
  myservo.attach(servopin);
  Serial.begin(9600);

}

void loop() {
  lightVal=analogRead(lightreadpin);
  
  angle=0.25*lightVal+70. ;

  myservo.write(angle);
  Serial.println(angle);


}
