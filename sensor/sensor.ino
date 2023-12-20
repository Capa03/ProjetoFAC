#include <dht11.h>
#define DHT11PIN 4

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);

  Serial.print(millis() / 1000); // Convert milliseconds to seconds
  Serial.print(",");
  Serial.print((float)DHT11.humidity, 2);
  Serial.print(",");
  Serial.print((float)DHT11.temperature, 2);
  Serial.println();

  delay(2000);
}
