#ifndef CAPTEUR_MOUVEMENT_H
#define CAPTEUR_MOUVEMENT_H

#define PIR_PIN 5 

class CapteurMouvement {
public:
    void initialiser();
    bool mouvementDetecte();  
};

#endif
