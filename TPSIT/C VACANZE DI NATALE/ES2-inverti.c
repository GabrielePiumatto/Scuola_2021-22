#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char val;
    struct Node *next;
}Node;

Node* push(Node *testa, char val);
Node* pop(Node *testa);
void stampaLista(Node *testa);

int main() {
    Node *stack = NULL;
    int nn = 0;
    char car;

    printf("Quanti caratteri vuoi inserire\? ");
    scanf("%d", &nn);

    for(int i=0; i<nn; i++) {
        printf("Inserisci un carattere: ");
        fflush(stdin);
        scanf("%c", &car);
        stack = push(stack, car);
    }
    
    printf("Lista invertita: ");
    stampaLista(stack);
}

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

Node* pop(Node *testa) {
    Node *successivo;

    if(testa != NULL) {
        successivo = testa;
        testa = testa->next;
        free(successivo);
    }

    return testa;
}

void stampaLista(Node *testa) {

    while(testa != NULL) {
        printf("%c -> ", testa->val);
        testa = pop(testa);
    }
}