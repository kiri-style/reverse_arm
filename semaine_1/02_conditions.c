int verifier_accès(int age) {
    if (age >= 18) {
        return 1; // Accès autorisé
    } else {
        return 0; // Accès refusé
    }
}

int main(void) {
    int statut = verifier_accès(20);
    return statut;
}
