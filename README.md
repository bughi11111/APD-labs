Proiect de laborator pentru disciplina Achizita si Prelucrarea Datelor
Nod de achizitie a temperaturii bazat pe Arduino Uno
##Autor
##Hardware
Arduino Uno R3, senzor de temperatura TMP36
echo "Platformă: Arduino Uno R3 (ATmega328P)"
echo "Autor laborator: <Irimia Bogdan Stefan>
## Parametri
 SENSOR_PIN A0 // intrarea analogică a senzorului
 SAMPLE_PERIOD_MS 1000 // compromis: 1 s (consum redus)
 SERIAL_BAUD 9600 // viteza portului serial
 LED_PIN 13 // LED de stare
 BUTTON_PIN 2 //buton de pornire/oprie achizitie
 SAMPLE_PERIOD_MS 500
 Comunicatie seriala la 19200 baud