int controler_acces(int niveau_privilege, int tentative_echec) {
    // Règle 1 : Si administrateur (niveau 3) -> Accès direct
    if (niveau_privilege == 3) {
        return 100; // Accès admin garanti
    } 
    // Règle 2 : Si utilisateur standard (niveau 1) ET moins de 3 échecs -> Accès limité
    else if (niveau_privilege == 1) {
        if (tentative_echec < 3) {
            return 50; // Accès standard accordé
        } else {
            return -1; // Compte verrouillé !
        }
    } 
    // Règle 3 : Tout autre niveau d'accès est refusé
    else {
        return 0; // Accès refusé
    }
}
