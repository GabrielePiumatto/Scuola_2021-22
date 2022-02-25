// Gabriele Piumatto    4°A-ROB     29/10/2021
/* Scrivere un programma che data una stringa in input dica se la stessa contiene 
almeno una ‘A’ tra i primi 10 caratteri.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define LUNG 50
#define PLUNG 10

//funzione che controlla se A o a è presente tra i primi 10 caratteri
bool isA(char *s) {
    bool ok=false;
    int n=strlen(s);
    int k=0;

    //scorre i primi 10 caratteri
    while(k<n && k<PLUNG && ok == false) {
        if(*(s+k)== 'a' || *(s+k)=='A')
            ok=true;
        k++;
    }
    
    //true o false a seconda 
    return ok;
}

int main() {
    //allocazione dinamica della stringa
    char *stringa;
    stringa=(char*)malloc(LUNG *sizeof(char));

    printf("Dammi una stringa: ");
    scanf("%s", stringa);

    //condizione per vedere se è stata rilevata A o no
    if(isA(stringa))
        printf("C'è una A/a tra i primi dieci caratteri\n");
    else
        printf("NON c'è una A/a tra i primi dieci caratteri\n");

    return 0;
}