#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 20
#define MAX_NUM_EL 4

typedef char stringa[MAX_STR];

typedef struct {
    int matricola;
    stringa nome;
    stringa cognome;
}studente;

void main() {
    studente a[MAX_NUM_EL];
    studente tmp;
    int i, j, numEl;

    for(numEL=0; numEl) {
        printf("Inserisci le informazioni di uno studente\n");
        printf("Nome : ");
        scanf("%s", &tmp.nome);
        printf("\nCognome : ");
        scanf("%s", &tmp.nome);
        printf("\nMatricola : ");
        scanf("%d", &tmp.matricola);

        if(numEl==0) {
            a[0] = tmp;
        }
        else {
            i = 0;
            while(i<numEl && a[i].matricola < tmp.matricola) {
                i++;
                j = numEl;
            }

            while(j>i) {
                a[j] = a[j-1];
                j--;
            }
            a[i] = tmp;
        }
    }

    for(i=0; i<MAX_NUM_EL; i++){
        printf("%d\n", a[i].matricola);
    }
}