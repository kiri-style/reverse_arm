int calculer_math(int a, int b) {
    int x = a + b;
    int y = a - 5;
    int z = x + y - b;
    return z;
}

int main(void) {
    int res = calculer_math(20, 10);
    return res;
}
