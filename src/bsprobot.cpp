#include "BSProbot.h"

BSProbot::BSProbot(int ledPin) {
  pinLED = ledPin;  
}
void BSProbot::initialiser() {
  pinMode(pinLED, OUTPUT);   
  capteurMouv.initialiser(); 
}

void BSProbot::allumerLED() {
  digitalWrite(pinLED, HIGH);
}

void BSProbot::eteindreLED() {
  digitalWrite(pinLED, LOW);
}

bool BSProbot::verifierMouvement() {
  return capteurMouv.mouvementDetecte(); 
}