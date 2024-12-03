#include <Arduino.h>
#include "CapteurTemperature.h"
#include "CapteurMouvement.h"
#include "bsprobot.h"

CapteurTemperature capteurTemp(4);  
CapteurMouvement capteurMouv;
BSProbot robot;  

unsigned long previousMillis = 0;
const long interval = 1000; 

void setup() {
  Serial.begin(115200);

  capteurTemp.initialiser();
  capteurMouv.initialiser();
  robot.initialiser();  
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    float temp = capteurTemp.lireTemperature();
    float humidite = capteurTemp.lireHumidite();

    Serial.print("Température : ");
    Serial.print(temp);
    Serial.print(" °C | Humidité : ");
    Serial.print(humidite);
    Serial.println(" %");

    if (robot.verifierMouvement()) {
      Serial.println("Mouvement détecté !");
      robot.allumerLED();
    } else {
      robot.eteindreLED();
    }
  }
}
