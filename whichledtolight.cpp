String a="red\n"; //front slash because of enter
int ledyel = 12;
int ledred=13;
int ledgre=11;
String color="color";

String b="yellow\n";
String c="green\n";


void setup() {
 Serial.begin(9600);
 pinMode(ledred,OUTPUT);
 pinMode(ledyel,OUTPUT);
 pinMode(ledgre,OUTPUT);
}

void loop() {
  Serial.println ("enter what color led u want to light");
 
   while(Serial.available()==0){

  };
color=Serial.readString();


if(color==a){
  digitalWrite(ledred,HIGH);
  Serial.println("its on now");
  delay(9000);
digitalWrite(ledred,LOW);
}  
else if(color==b){
  digitalWrite(ledyel,HIGH);
  Serial.println("its on now");
  delay(9000);
digitalWrite(ledyel,LOW);
}   
else if(color==c){
  digitalWrite(ledgre,HIGH);
  Serial.println("its on now");
  delay(9000);
digitalWrite(ledgre,LOW);
}  
else{
  Serial.println("invalid color");
}
Serial.println(color);
delay(9000);
digitalWrite(ledyel,LOW);


}
