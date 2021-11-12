#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int *punta= &a;
    char car;
    char *puntcar= &car;

    printf("Dammi un numero: ");
    scanf("%d", punta);
    printf("Dammi un carattere:");
    scanf(" %c", puntcar);
    
    printf("Indirizzo: %d -> %d, indirizzo: %d -> %c", punta, *punta, puntcar, *puntcar);

    return 0;
}