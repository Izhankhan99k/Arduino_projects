#include<NewPing.h>
int echo=11;
int trig=10;
int maxd=1000;
NewPing Sonar(trig,echo,maxd);
void setup() {
 Serial.begin(9600);

}

void loop() {
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(Sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");

}