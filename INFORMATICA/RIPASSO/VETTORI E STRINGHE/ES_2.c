#include <stdio.h>
#include <stdlib.h>
#define LUNG 100
#define MAX 126
#define MIN 32

int chiediDim(int dimMax) {
    int dim;

    do {
        printf("Inserisci il numero di caratteri : ");
        scanf("%d", &dim);
    } while(dim < 0 || dim > dimMax);

    return dim;
}

void caricaStringa(char stringa[], int n) {
    int k;

    srand(time(NULL));

    for(k = 0; k < n; k++) { // perchè all'ultima cella ci fa \0
        stringa[k] = rand() % (MAX - MIN + 1) + MIN;
    }

    stringa[n] = '\0';
}

int main() {
    char stringa[LUNG + 1];
    int n;

    n = chiediDim(LUNG);
    caricaStringa(stringa, n);

    printf("%s", stringa);
    printf("\n");
    system("PAUSE");
    return 0;
}