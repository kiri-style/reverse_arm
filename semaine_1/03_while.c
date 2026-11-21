int calculer_somme_while(int limite) {
    int somme = 0;
    int i = 0;
    
    while (i < limite) {
        somme += i;
        i++;
    }
    
    return somme;
}
