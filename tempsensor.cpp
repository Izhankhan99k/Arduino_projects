#include "DHT.h"
#define Type DHT22
int sensepin=11;
float humidity;
float tempC;
DHT dht(sensepin,Type);
void setup() {
 Serial.begin(9600);
 dht.begin();
}

void loop() {
 humidity=dht.readHumidity();
 tempC=dht.readTemperature(true);
 Serial.print(humidity);
 Serial.print("      ");
 Serial.println(tempC);
 delay(2000);
}
