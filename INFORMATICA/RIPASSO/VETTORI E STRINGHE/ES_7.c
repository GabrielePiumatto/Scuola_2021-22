#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define LUNG 100

void chiediStringa(char stringa[]) {
    printf("Inserisci una stringa : ");
    scanf("%s", stringa);
}

bool isMinuscolo(char c) {
    if(c >= 'a' && c <= 'z') {
        return true;
    }
    else {
        return false;
    }
}

void converti(char stringa[]) {
    for(int i=0; i<strlen(stringa); i++) {
        if (isMinuscolo(stringa[i])) {
            stringa[i] = stringa[i] - 32;
        }
    }
}

int main() {
    char stringa[LUNG];

    chiediStringa(stringa);
    converti(stringa);

    printf("\n la stringa modificata e' %s", stringa);

    system("PAUSE");
    return 0;
}
