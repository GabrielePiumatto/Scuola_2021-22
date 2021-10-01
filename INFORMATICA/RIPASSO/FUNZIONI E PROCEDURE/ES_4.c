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
    fflush(stdin);
    scanf("%c", &c);

    return c;  
}



int main() {
    char c;
    int n;
  
    n = noNegativo();
    c = leggiCar();

    return 0;
}