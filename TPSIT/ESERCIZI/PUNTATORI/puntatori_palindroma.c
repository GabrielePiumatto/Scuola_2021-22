// Gabriele Piumatto    4°A-ROB     29/10/2021
/* Scrivere un programma che verifichi se la stringa data in input è palindroma o no*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define LUNG 50

//funzione per capire se è palindroma
bool isPalindroma(char *s) {
    bool ok=true;
    int n=strlen(s);
    int k=0;

    //per scorrere la stringa
    while(k<n/2 && ok == true) {
        if(*(s+k) != *(s+(n-1-k)))
            ok=false;
        k++;
    }

    return ok;
}

int main() {
    //input e allocazione dinamica della stringa
    char *stringa;
    stringa=(char *)malloc(LUNG*sizeof(char));

    printf("Scrivi una stringa: ");
    scanf("%s", stringa);

    //condizione perr vedere per se è palindroma o no
    if(isPalindroma(stringa))
        printf("Stringa palindroma\n");
    else
        printf("Stringa NON palindroma\n");

    return 0;
}