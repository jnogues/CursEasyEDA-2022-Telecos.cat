/*
Read the temperature from an LM75-derived temperature sensor, and display it
in Celcius every 250ms. Any LM75-derived temperature should work.
https://github.com/jeremycole/Temperature_LM75_Derived
*/

#include <Temperature_LM75_Derived.h>

Generic_LM75_11Bit temperature;

void setup() 
{
  Serial.begin(115200);
  delay(1000);
  Serial.println(" ");

  Wire.begin();
}

void loop() 
{
  Serial.print("Temperature = ");
  Serial.print(temperature.readTemperatureC());
  Serial.println(" C");

  delay(1000);
}
