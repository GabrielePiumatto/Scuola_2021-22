// Gabriele Piumatto    4°A-ROB     07/01/2022
// Scrivere un programma che legga una sequenza di caratteri e li stampi in ordine inverso. 
//Usa una pila.

#include <stdio.h>
#include <stdlib.h>

//Nodo con carattere
typedef struct Node{
    char val;
    struct Node *next;
}Node;

//le due funzioni di una pila (pop e push) e la stampa
Node* push(Node *testa, char val);
Node* pop(Node *testa);
void stampaLista(Node *testa);

int main() {
    Node *stack = NULL;
    int nn = 0;
    char car;

    //input lunghezza pila
    printf("Quanti caratteri vuoi inserire\? ");
    scanf("%d", &nn);

    //input dei valori
    for(int i=0; i<nn; i++) {
        printf("Inserisci un carattere: ");
        fflush(stdin);
        scanf("%c", &car);
        stack = push(stack, car);
    }
    
    //stampa della lista invertita
    printf("Lista invertita: ");
    stampaLista(stack);
}

//funzione per aggiungere un elemento in testa
Node* push(Node *testa, char val) {
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
void stampaLista(Node *testa) {
    while(testa != NULL) {
        printf("%c -> ", testa->val);
        testa = pop(testa);
    }

    printf("NULL");
}