typedef struct {
    int id;        // 4 octets
    int score;     // 4 octets
} Joueur;

int traiter_donnees(void) {
    int tableau[3] = {10, 20, 30};
    Joueur j1 = {1, 99};

    int val_tab = tableau[2];
    int val_struct = j1.score;

    return val_tab + val_struct;
}

int main(void) {
    int res = traiter_donnees();
    while (1) {
        // Boucle infinie pour éviter de crasher le processeur embarqué
    }
    return res;
}
