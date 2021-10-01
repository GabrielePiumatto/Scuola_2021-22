#include <stdio.h>
#include <stdlib.h>
#define DIECI 10

void inverti(int *x) {
    int num, cifra;
    int numinv = 0;
    num = *x;
    while(num != 0) {
        cifra = num % DIECI;
        num = num / DIECI;
        numinv = numinv * 10 + cifra;
    }

    *x = numinv;
}

int chiediNumero(char frase[]) {
    int x;

    do {
        printf("%s", frase);
        scanf("%d", &x);
    } while(x < 0);

    return x;
}

int main() {
    int n;
    n = chiediNumero("Inserisci un numero : ");

    return 0;
}