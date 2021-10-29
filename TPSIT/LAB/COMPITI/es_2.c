#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 100

int main() {
    int * vettore;
    int n = 1;
    int dim 

    printf("Inserisci un numero da 1 a 100: ");
    scanf("%d", &n);

    if(n < 0 && n > 100) {
        printf("Numero non valido\n");
    }

    vettore = (int*)malloc(n * sizeof(int));

    printf("Il vettore invertito: %s", vettore);
    printf("\n");
    system("pause");
    return 0;

}