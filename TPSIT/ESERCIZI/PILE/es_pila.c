//Gabriele Piumatto     4°A-ROB     18/12/2021
//Scrivere un programma che chieda all’utente una stringa composta da parentesi aperte e chiuse:
//(,),[,],{,} e che verifichi se le coppie e l’ordine delle (,),[,],{,} sono corretti. Utilizzare uno stack.

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

//Nodo con carattere
typedef struct Node{
    char val;
    struct Node *next;
}Node;

//funzioni per la pila (pop e push) e per vedere se è vuota
Node* push(Node* testa, char n);
Node* pop(Node* testa);
int isEmpty(Node* testa);

int main() {
    char stringa[MAX];
    Node *stack = NULL;
    int i = 0;
    int cont;

    //inserire la stringa di parentesi
    printf("Stringa: ");
    scanf("%s", stringa);

    //controllo
    while(stringa[i] != '\0') {
        if(stringa[i] == '(' || stringa[i] == '[' || stringa[i] == '{') {
            stack = push(stack, stringa[i]);
        }
        else {
            stack = pop(stack);
        }
        i++;
    }

    //controlla se pila è vuota, se si allora la stringa
    //è giusta, se no è sbagliata (una o più parentesi rimaste aperte)
    cont = isEmpty(stack);

    if(cont == 0) {
        printf("Stringa corretta\n");
    }
    else {
        printf("Stringa non corretta\n");
        printf("Numero di caratteri nello stack: %d", cont);
    }

}

//funzione per aggiungere un elemento in testa
Node* push(Node* testa, char val) {
    Node *successivo;

    if(testa != NULL) {
        successivo = testa;
        testa = (Node*)malloc(sizeof(Node));
        testa->val = val;
        testa->next = successivo;
    } else {
        testa = (Node*)malloc(sizeof(Node));
        testa->val = val;
        testa->next = NULL;
    }

    return testa;
}

//funzione per togliere un elemento dalla testa
Node* pop(Node* testa) {
    Node* successivo = NULL;

    if(testa != NULL) {
        successivo = testa;
        testa = testa->next;
        free(successivo);
    }

    return testa;
}

//funzione per controllare se la pila è vuota
int isEmpty(Node* testa) {
    int cont = 0;

    while(testa != NULL) {
        cont++;
        testa = testa->next;
    }

    return cont;
}