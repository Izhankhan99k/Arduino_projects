//led turns on when voltage exceed 4V
int warnPin=13;
int readPin=A3;
float V2=0;
int readval;
int rdelay=1000;
void setup() {
  pinMode(readPin,INPUT);
  pinMode(warnPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readval=analogRead(readPin);
  V2=readval*(5./1023.);
  Serial.print("potentiometer is at =");
  Serial.println(V2);
  delay(rdelay);
  if(V2>4){
    digitalWrite(warnPin,HIGH);

  }
  else{
    digitalWrite(warnPin,LOW);
  }
}
