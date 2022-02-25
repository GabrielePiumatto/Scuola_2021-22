//Gabriele Piumatto     4°A-ROB     28/01/2022
//Scrivere una funzione che inverta una coda, ovvero produca degli elementi della coda di partenza. 
//Suggerimento: utilizzare una pila

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Nodo di una coda di interi
typedef struct queueNode {
     int elemento;
     struct queueNode *next;
}QueueNode;

//Nodo di una pila di interi
typedef struct pileNode {
    int elemento;
    struct pileNode *next;
}PileNode

//funzioni per la coda (enqueue e dequeue) e per vedere se è vuota
int is_empty(QueueNode *head);
void enqueue(QueueNode **head, QueueNode **tail, QueueNode *element);
QueueNode*dequeue(QueueNode **head, QueueNode **tail);

int main() {
    // puntatori alla testa e alla coda della coda
     QueueNode *headQ = NULL;
     QueueNode *tailQ = NULL;
     QueueNode *struct_returnQ = NULL;
     // var per il dato di ritorno della funzione
     QueueNode *elementQ;
     PileNode *elementP = NULL;
     PileNode *tail = NULL;
     bool condizione = true;
     int dato, nodiCoda, n = 0;

    //lunghezza coda
    printf("Inserisci il numero di nodi della coda: ");
    scanf("%d", nodiCoda);

    //inserimento dati nella coda
    while(n < nodiCoda) {
        printf("Inserire elemento: ");
        scanf("%d", &dato); 
        elementQ = (QueueNode*)malloc(sizeof(QueueNode));
        elementQ->elemento = dato;
        enqueue(&head, &tail, element); 
    }

    //svuotare la coda e passare alla pila
    while ((struct_returnQ = dequeue(&head, &tail)) != NULL) {
        elementP = (PileNode*)malloc(sizeof(PileNode));
        elementP->elemento = struct_returnQ->elemento;
        push(elementP);
        free(struct_return);
    }

    printf("\n\n");
    break;
    return 0;
}

//funzione per vedere se la lista è vuota
int is_empty(QueueNode*head) {
     if(head == NULL) return 1;
     else return 0;
}

//introduce un nuovo dato dalla coda
void enqueue(QueueNode **head, QueueNode **tail, QueueNode *element) { 
     if(is_empty(*head)) *head = element; 
     else(*tail)->next = element; 
     *tail = element;
     element->next = NULL; 
}

//elimina il primo elemento dalla testa
QueueNode*dequeue(QueueNode **head, QueueNode **tail) { 
    QueueNode* ret = *head;
    if(is_empty(*head)) return NULL; 
    else *head = ret->next; 

    if (*head == NULL) *tail = NULL; 
    return ret;
}

//funzione per aggiungere un elemento dalla testa
PileNode* push(Node* testa) {
    Node *successivo;

    if(testa != NULL) {
        successivo = testa;
        testa = (Node*)malloc(sizeof(Node));
        testa->next = successivo;
    } else {
        testa = (Node*)malloc(sizeof(Node));
        testa->next = NULL;
    }
    return testa;
}

//funzione per rimuovere l'elemento in testa alla pila
PileNode* pop(Node* testa) {
    Node* successivo = NULL;

    if(testa != NULL) {
        successivo = testa;
        testa = testa->next;
        free(successivo);
    }
    return testa;
}

//funzione per vedere se la pila è vuota
int isEmptyPile(Node* testa) {
    int cont = 0;

    while(testa != NULL) {
        cont++;
        testa = testa->next;
    }
    return cont;
}