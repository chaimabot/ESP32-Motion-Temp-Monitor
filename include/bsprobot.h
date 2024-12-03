#ifndef BSPROBOT_H
#define BSPROBOT_H

#include <Arduino.h>
#include "CapteurMouvement.h"  

class BSProbot {
private:
  int pinLED;
  CapteurMouvement capteurMouv; 

public:
  BSProbot(int ledPin = 2); 

  void initialiser();
  void allumerLED();
  void eteindreLED();
  bool verifierMouvement();  
};

#endif
