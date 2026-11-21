int multiplier_par_deux(int n) {
    return n * 2;
}

int calculer_double_somme(int a, int b) {
    int somme = a + b;
    int resultat = multiplier_par_deux(somme); // Appel imbriqué !
    return resultat;
}
