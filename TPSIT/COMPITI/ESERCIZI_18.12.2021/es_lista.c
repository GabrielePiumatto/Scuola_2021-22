#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node* aggiungiInTesta(Node *testa, int n);
void stampaLista(Node* testa);

int main() {
    Node *lista = NULL;
    int nnum = 0;
    int n;

    printf("Quanti numeri vuoi inserire\? ");
    scanf("%d", &nnum);

    for(int i=0; i<nnum; i++) {
        printf("Numero da inserire: ");
        scanf("%d", &n);
        lista = aggiungiInTesta(lista, n);
    }

    stampaLista(lista);
}

Node* aggiungiInTesta(Node* testa, int n) {
    Node *successivo;

    if(testa != NULL) {
        successivo = testa;
        testa = (Node*)malloc(sizeof(Node));
        testa->val = n;
        testa->next = successivo;
    } else {
        testa = (Node*)malloc(sizeof(Node));
        testa->val = n;
        testa->next = NULL;
    }

    return testa;
}

void stampaLista(Node* testa) {
    printf("Lista invertita: ");
    while(testa != NULL) {
        printf("%d -> ", testa->val);
        testa = testa->next;
    }

    printf("NULL");
}