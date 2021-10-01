#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 100

void chiediStringa(char stringa[]) {
    printf("Inserisci una stringa : ");
    scanf("%s", stringa);
}

bool isVocale(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }

    else {
        return false;
    }
}

void togliVocali(char stringa[]) {
    char stringa2[LUNG];
    int k=0;

    for(int i=0; i<LUNG; i++) {
        if(isVocale(stringa[i]) == false) {
            stringa2[k] = stringa[i];
            k++;
        }
    }
    stringa2[k] = '\0';
    strcpy(stringa, stringa2);
}

int main() {
    char stringa[LUNG];
    char x;

    chiediStringa(stringa);
    togliVocali(stringa);

    printf("\n la stringa modificata e' %s", stringa);

    system("PAUSE");
    return 0;
}
