int calculer_somme(int limite) {
    int somme = 0;
    
    for (int i = 0; i < limite; i++) {
        somme += i;
    }
    
    return somme;
}

int main(void) {
    int res = calculer_somme(5);
    return res;
}
