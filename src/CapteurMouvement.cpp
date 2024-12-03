#include <Arduino.h>  
#include "CapteurMouvement.h"  

void CapteurMouvement::initialiser() {
    pinMode(PIR_PIN, INPUT);  
}

bool CapteurMouvement::mouvementDetecte() {
    return digitalRead(PIR_PIN) == HIGH;  
}
