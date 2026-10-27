#ifndef CONFIG_H
#define CONFIG_H

// Configurări hardware și timing
#define SENSOR_PIN A0        // intrarea analogică a senzorului
#define SAMPLE_PERIOD_MS 500 // perioada de eșantionare (actualizată la 500ms)
#define SERIAL_BAUD 19200    // viteza portului serial
#define LED_PIN 13           // LED de stare
#define BUTTON_PIN 2         // buton de pornire/oprire achiziție

// Configurări de Debug
#define DEBUG_ENABLED true
#define LOG(x) do { if (DEBUG_ENABLED) { Serial.println(x); } } while(0)

#endif