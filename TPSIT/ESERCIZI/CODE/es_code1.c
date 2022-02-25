//Gabriele Piumatto       4°A-ROB     28/01/2022
//Implementare i metodi enqueue() e dequeue()  e creare un programma che permetta
//all'utente di riempire una coda di numeri interi di lunghezza arbitraria. Successivamente
//testare la funzione dequeue per svuotare la coda.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Nodo di una lista di interi
typedef struct queueNode {
     int elemento;
     struct queueNode *next;
}QueueNode;

//funzioni per la coda (enqueue e dequeue) e per vedere se è vuota
int is_empty(QueueNode *head);
void enqueue(QueueNode **head, QueueNode **tail, QueueNode *element);
QueueNode*dequeue(QueueNode **head, QueueNode **tail);

int main() {
    // puntatori alla testa e alla coda della coda
     QueueNode *head = NULL;
     QueueNode *tail = NULL; 
     // var per il dato di ritorno della funzione
     QueueNode *struct_return = NULL;
     QueueNode *element;
     bool condizione = true;
     int dato;

     while(condizione) {
         int scelta; // scelta del menù
         printf("MENU'\n\n Premi 1 Inserisci elementi nella coda\n");
         printf("Premi 2 per svuotare la coda\nPremi 3 per uscire dal programma\n\n Scelta: ");
         scanf("%d",&scelta);

         switch(scelta) {
         case 1: //aggiunge un nuovo elemento alla lista
             printf("Inserire elemento: ");
             scanf("%d",&dato);
             //allocazione
             element = (QueueNode*)malloc(sizeof(QueueNode));
             element->elemento = dato;
             enqueue(&head, &tail, element);
             break;

         case 2: //stampa della coda
             printf("Gli elementi inseriti fino ad ora sono:\t");
             while ((struct_return = dequeue(&head, &tail)) != NULL) {
                    printf("%d\t", struct_return->elemento);
                    free(struct_return);
             }
             printf("\n\n");
             break;

         case 3: //fine del programma
             printf("A presto!");
             condizione = false;
             break;

         default: // se non si inserisce un numero tra 1 e 3
             printf("Scelta non valida\n\n");
             break;
         }
     }
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