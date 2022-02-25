// Gabriele Piumatto    4°A-ROB     29/10/2021
/* Si scriva un programma che chieda all’utente 2 stringhe e concateni la
seconda alla fine della prima, NON si usi la funzione strcat della libreria
standard, si usino i puntatori e non la notazione vettoriale. Attenzione a
terminarla con il carattere ‘\0’.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LUNG1 100
#define LUNG2 150

//funzione per concatenare le 2 stringhe
void cat(char *s1, char *s2) {
    int n1=strlen(s1);
    int n2=strlen(s2);

    for(int k=0; k<n2; k++) {
        *(s1+n1+k)= *(s2+k);
    }

    //carattere terminatore
    *(s1+n1+n2)='\0';
}

int main() {
    //allocazione dinamica delle stringhe
    char *s1;
    s1=(char*)malloc(LUNG2 *sizeof(char));
    char *s2;
    s2 = (char*)malloc(LUNG1 *sizeof(char));

    //input stringhe

    printf("Dammi la prima stringa: ");
    scanf("%s", s1);
    printf("Dammi la seconda stringa: ");
    scanf("%s", s2);

    //concatenazione e stampa della stringa finale

    cat(s1, s2);

    printf("Nuova stringa: %s", s1);

    return 0;
}