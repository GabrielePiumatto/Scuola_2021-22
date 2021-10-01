#include <stdio.h>
#include <stdlib.h>

int noNegativo() {
    int x;
    do {
        printf("Inserisci un numero positivo : ");
        scanf("%d", &x);
    } while(x<0);

    return x;
}

char leggiCar() {
    char c;

    printf("Inserisci un carattere : ");
   // fflush(stdin);
    scanf("%c", &c);

    return c;  
}

void stampa(char c, int n) {

    for(int i=0; i<n; i++) {
        printf("%c", c);
    }
}

int main() {
    int n;
    char c;

    n = noNegativo();
    c = leggiCar();

    stampa(c, n);


    system("pause");
    return 0;
    
}

