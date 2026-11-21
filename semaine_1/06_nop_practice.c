#include <stdint.h>

// Variable globale simulant un code PIN saisi par l'utilisateur
volatile int pin_saisi = 0000; 

int verifier_acces(void) {
    // Si le PIN est correct (1234), la fonction renvoie 1 (Succès)
    if (pin_saisi == 1234) {
        return 1;
    }
    
    // Sinon, renvoie 0 (Échec)
    return 0;
}

int main(void) {
    int resultat = verifier_acces();
    
    while (1) {
        // Boucle infinie pour l'embarqué
    }
}
