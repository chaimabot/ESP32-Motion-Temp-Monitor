#ifndef CAPTEUR_TEMPERATURE_H
#define CAPTEUR_TEMPERATURE_H

#include <DHT.h>  

#define DHT_PIN 4  
#define DHT_TYPE DHT22

class CapteurTemperature {
private:
    DHT dht;

public:
    CapteurTemperature(int pin);
    void initialiser();
    float lireTemperature();
    float lireHumidite();
};

#endif
