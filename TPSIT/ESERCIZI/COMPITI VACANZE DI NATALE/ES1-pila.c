// Gabriele Piumatto    4°A-ROB     07/01/2022
// Considerate una sequenza di interi letti da input e definite una funzione C che li
//stampa in modo tale che tutti i pari precedano i dispari, nello stesso ordine in cui 
//vengono letti.
//Ad esempio, se la sequenza è:
//1 , 20 , 35 , 40 , 62 , 51 , 66
//La stampa che si vuole ottenere e&#39;
//20 , 40 , 62 , 66 , 1 , 35 , 51

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

//Nodo con valore intero
typedef struct Node{
    int val;
    struct Node *next;
}Node;

//le due funzioni di una pila (pop e push) e la stampa
Node* push(Node *testa, int val);
Node* pop(Node *testa);
void stampaLista(Node *testa, int n);


int main() {
    Node *stack = NULL;
    int nn = 0;
    int n;

    //input lunghezza pila
    printf("Quanti numeri vuoi inserire\? ");
    scanf("%d", &nn);

    //input valori
    for(int i=0; i<nn; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        stack = push(stack, n);
    }

    stampaLista(stack, nn);
}

//funzione per aggiungere un elemento in testa
Node* push(Node *testa, int val) {
    Node *successivo = NULL;

    if(testa != NULL) {
        successivo = testa;
        testa = (Node*)malloc(sizeof(Node));
        testa->val = val;
        testa->next = successivo;
    }
    else {
        testa = (Node*)malloc(sizeof(Node));
        testa->val = val;
        testa->next = NULL;
    }

    return testa;
}

//funzione per togliere un elemento dalla testa
Node* pop(Node *testa) {
    Node *successivo;

    if(testa != NULL) {
        successivo = testa;
        testa = testa->next;
        free(successivo);
    }

    return testa;
}

//funzione per stampare la pila
void stampaLista(Node *testa, int n) {
    int dim_pari = 0;
    int dim_dispari = 0;
    int pari[n];
    int dispari[n];

    while(testa != NULL) {
        if(testa->val % 2 == 0) {
            pari[dim_pari] = testa->val;
            dim_pari++;
        } else {
            dispari[dim_dispari] = testa->val;
            dim_dispari++;
        }

        testa = testa->next;
    }

    for(int i=dim_pari-1; i>=0; i--) {
        printf("%d ", pari[i]);
    }

    printf("\n");

    for(int j=dim_dispari-1; j>=0; j--) {
        printf("%d ", dispari[j]);
    }
}