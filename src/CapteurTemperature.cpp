#include "CapteurTemperature.h"

CapteurTemperature::CapteurTemperature(int pin) : dht(pin, DHT_TYPE) {}

void CapteurTemperature::initialiser() {
    dht.begin();
}

float CapteurTemperature::lireTemperature() {
    return dht.readTemperature();  
}

float CapteurTemperature::lireHumidite() {
    return dht.readHumidity();  
}
