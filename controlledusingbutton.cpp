int button1pin=13;
int button2pin=12;
int ledpin=11;
int read1;
int read2;
int ledBright=0;
void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(button1pin,INPUT);
pinMode(button2pin,INPUT);


}

void loop() {
  read1=digitalRead(button1pin);
  read2=digitalRead(button2pin);
  if(read1==0){
   if(ledBright<255){
      ledBright=ledBright+50;}
  }
  if(read2==0){
    if(ledBright>0){
      ledBright=ledBright-50;}
  }
  delay(500);
  digitalWrite(ledpin,ledBright);
  Serial.println(ledBright);
}
