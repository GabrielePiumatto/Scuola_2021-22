// Gabriele Piumatto    4°A-ROB     12/11/2021
/* Scrivere un programma per leggere e stampare array bidimensionale di interi. 
Il programma richiede all’utente il numero di righe e di colonne dopo di che 
richiede ad uno ad uno gli elementi da inserire nell'array. 
Il programma inoltre deve gestire dinamicamente l'allocazione
e la deallocazione della memoria.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int **p, 1;
    int r, c, n;

    //input delle 2 dimensioni dell'array
    printf("Righe: ");
    scanf("%d", &r);
    printf("Colonne: ");
    scanf("%d", &c);

    //allocazione dinamica dell'array    
    p = (int **)calloc(c*sizeof(int*));
    for(int i=0; i<DIM1; i++) {
        p[i] = (int *)calloc(r*sizeof(int));
    }

    //input di valori dell'array
    for(int j=0; j<c; j++) {
        for(int k=0; k<r; k++) {
            printf("Valore: ")
            scanf("%d", &n);
        }
    }

    free(p);

    return 0;
}