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

void stampaTriangolo(int n, char c) {
    for(int i=0; i<n; i++) {
        printf("\n");
        for(int k=0; k<n-i; k++){
            printf("%c", &c)
        }
    }
}

int main() {
    char c;
    int n;
  
    n = noNegativo();
    c = leggiCar();

    stampaTriangolo(n, c);

    return 0;
}