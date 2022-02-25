// Gabriele Piumatto    4°A-ROB     12/11/2021
/* Scrivere un programma che permette all’utente di inizializzare un array unidimensionale
di float e ( facendo uso dell’aritmetica dei puntatori:
- individui gli elementi con valore ripetuti
-sommi i numeri rimasti*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *p;
    int n;
    float d;
    float *pi;
    float s;

    //input dimensione e allocazione dinamica array
    printf("Inserisci la lunghezza: ");
    scanf("%d", &n)

    p = (float *)calloc(n*sizeof(float));

    //input valori array
    for(int i=0; i<n; i++) {
        printf("Valore: ");
        scanf("%f", &d);
    }

    d = *p

    //controllo se si ripete un valore
    for(int k=0; k<n; k++) {
        if(d = *p) {
            printf("%d", d, "si ripete");
        }
    }

    //somma dei valori che non si ripetono e stampa somma    
    for(int j=0; j<n; j++) {
        if(d != *p) {
            s = s + d;
        }
    }

    printf("Somma: ", s);

    free(p);
    return 0;
}