int ledpin = 13;
int readPin = A1;
int ledv = 0;
float readval;
int rdelay = 1000;
void setup() {
  pinMode(readPin, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readval = analogRead(readPin);
  Serial.print(readval);
  Serial.print("   ");
  ledv = (255. / 1023.) * readval;
  analogWrite(ledpin, ledv);
  Serial.println(ledv);
}
