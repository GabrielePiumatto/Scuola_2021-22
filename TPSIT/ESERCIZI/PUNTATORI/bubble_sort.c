//Gabriele Piumatto     4°A-ROB     

#include <stdio.h>
#include <stdlib.h>

//dimensione dell'array
int chiediDim(char frase[]) {
    int d;
    printf("%s", frase);
    do {
        scanf("%d", &d);
    } while(d <= 0);

    return d;
}

//bubblesort
void bubbleSort3(float v[], int n) {
    int k, i;
    int sup = n - 1;
    float t;

    for(i = 0; i < sup; i++) {
        for(k = 0; k < n - i - 1; k++) {
            //se metto segno maggior, il più grande va per ultimo
            if(v[k] > v[k + 1]) { 
                t = v[k];
                v[k] = v[k + 1];
                //scambia il più piccolo con il più grande
                v[k + 1] = t; 
            }
        }
    }
}

void bubbleSortSenzaQuadre(float v[], int n) {
    int i, k;
    int sup = n - 1;// j == sup
    float t;

    for(i = 0; i < sup; i++) {
        for(k = 0; k < n - i - 1; k++) { // ancora - 1 perché il numero più grande + andato già a aposto col primo for
            if(*(v + k) > *(v + (k + 1))) { // se avessi scritto *v + n, se nella cella di indirizzo v ha 100, diventa 100 + n
                t = *(v + k);
                *(v + k) = *(v + (k + 1));
                *(v + (k + 1)) = t;
            }
        }
    }
}

void stampaVettore(float v[], int n, char frase[]) {
    printf("\n%s\n", frase);
    for(int k = 0; k < n; k++) {
        printf("%3.2f\n", *(v+k)); // printf("%3.2f\n", v+k); ==> stampa l'indirizzo delle celle
    }
}

void caricaVettore(float v[], int n) {
    for(int k = 0; k < n; k++) {
        printf("Elemento[%d]: ", k);
        scanf("%f", (v+k));
    }
}

void copiaVettore(float v[], float v0[], int n) {
    for(int k = 0; k < n; k++) {
        *(v + k) = *(v0 + k);
    }
}

int main() {
    int dim = chiediDim("Inserire la quantita' di numeri che si vuole inserire: ");
    float v0[dim], v1[dim];

    printf("Inserisci i numeri del vettore:\n");
    caricaVettore(v0, dim);
    copiaVettore(v1, v0, dim);

    bubbleSort3(v0, dim); // argomenti == parametri attuali
    stampaVettore(v0, dim, "Bubble Sort con quadre");
    bubbleSortSenzaQuadre(v1, dim);
    stampaVettore(v1, dim, "Bubble Sort senza quadre");
    printf("\n");
    system("pause");
    return 0;
}