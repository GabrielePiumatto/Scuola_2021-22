// Gabriele Piumatto    4°A-ROB     05/11/2021
/* Crea il programma Allocazione.c che:
- dichiari una variabile come puntatore a char;
- dichiari una variabile come puntatore a int;
- allochi correttamente la memoria per le due variabili e assegni loro un valore;
- stampi il valore dei due puntatori (indirizzo) e 
il contenuto delle celle di memoria da loro
puntate;*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *pc = (char *) malloc(1 * sizeof(char));
    int *pi = (int *) malloc (1 * sizeof(int)); // alloco dinamicamente nella memoria i due puntatori

    // prendo in input i valori che daranno gli utenti:
    printf("Inserire prima un numero: ");
    scanf("%d", pi);
    printf("Inserire ora un carattere: ");
    fflush(stdin);
    scanf("%c", pc);
    //stampa risultati
    printf("Numero: %d\nCarattere: %c", *pi, *pc);
    // libera memoria
    free(pc);
    free(pi);

    printf("\n");
    system("pause");
    return 0;
}