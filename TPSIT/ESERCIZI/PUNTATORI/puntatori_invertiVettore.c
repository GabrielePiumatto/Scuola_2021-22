// Gabriele Piumatto    4°A-ROB     29/10/2021
/* Scrivere un programma che chieda n valori interi (massimo 100), 
li collochi in un vettore e inverta il vettore (scambiando il primo elemento 
con l'ultimo, il secondo con il penultimo, etc.).
Si usi i puntatori.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funzione per inserire valori nel vettore
void leggiVett(int *v, int n) {
    for(int k=0; k<n; k++) {
        printf("Dammi un numero: ");
        scanf("%d", v+k);
    }
}

//funzione per invertire i valori del vettore
void invertiVett(int *v, int n) {
    int t;

    //ciclo per scorrere il vettore
    for(int k=0; k<n/2; k++) {
        t=*(v+k);
        *(v+k)=*(v+n-1-k);
        *(v+n-1-k)=t;
    }
}

//funzione che stampa il vettore
void stampaVett(int *v, int n) {
    for(int k=0; k<n; k++) {
        printf("%d: %d\n", k+1, *(v+k));
    }
}

int main() {
    int n;
    int *v;

    //input e allocazione dinamica del vettore
    printf("Quanti numeri vuole inserire\? ");
    scanf("%d", &n);
    
    v=(int*)malloc(n*sizeof(int));

    //inverte e stampa il vettore

    leggiVett(v, n);
    invertiVett(v, n);
    stampaVett(v, n);

    return 0;
}