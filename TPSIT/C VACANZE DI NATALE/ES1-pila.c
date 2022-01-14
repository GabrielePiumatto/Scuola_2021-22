#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct Node{
    int val;
    struct Node *next;
}Node;

Node* push(Node *testa, int val);
Node* pop(Node *testa);
void stampaLista(Node *testa, int n);


int main() {
    Node *stack = NULL;
    int nn = 0;
    int n;

    printf("Quanti numeri vuoi inserire\? ");
    scanf("%d", &nn);

    for(int i=0; i<nn; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        stack = push(stack, n);
    }

    stampaLista(stack, nn);
}

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

Node* pop(Node *testa) {
    Node *successivo;

    if(testa != NULL) {
        successivo = testa;
        testa = testa->next;
        free(successivo);
    }

    return testa;
}

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