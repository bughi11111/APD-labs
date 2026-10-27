#include "config.h"
void setup()
{
    Serial.begin(SERIAL_BAUD); // inițializăm portul serial
}
void loop()
{
    int raw = analogRead(SENSOR_PIN); // citim valoarea brută a ADC (0..1023)
    Serial.println(raw);              // o trimitem spre calculator
    delay(SAMPLE_PERIOD_MS);          // așteptăm până la următoarea măsurare
}

// abc
float convertAdcToVoltage(int rawAdc) {
return (rawAdc * 5.0f) / 1023.0f;
}