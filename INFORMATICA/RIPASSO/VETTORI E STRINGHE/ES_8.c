#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define LUNG 100

bool isVocale(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }

    else {
        return false;
    }
}

bool vocaliDispari(char s[]) {
    int nVocali = 0;
    int k;

    for(k=0; k<strlen(s); k++) {
        if(isVocale(s[k])) {
            nVocali++;
        }
    }

    return(nVocali % 2 != 0);
}

int main() {
    char s[LUNG];

    printf("Inserisci una parola : ");
    fflush(stdin);
    gets(s);

    if(vocaliDispari(s) == true) {
        printf("In %s ci sono un numero dispari di vocali\n", s);
    }
    else {
        printf("In %s ci sono un numero pari di vocali\n", s);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
