#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define LUNG 50
#define PLUNG 10

bool isA(char *s) {
    bool ok=false;
    int n=strlen(s);
    int k=0;

    while(k<n && k<PLUNG && ok == false) {
        if(*(s+k)== 'a' || *(s+k)=='A')
            ok=true;
        k++;
    }

    return ok;
}

int main() {
    char *stringa;
    stringa=(char*)malloc(LUNG *sizeof(char));

    printf("Dammi una stringa: ");
    scanf("%s", stringa);

    if(isA(stringa))
        printf("C'è una A/a tra i primi dieci caratteri\n");
    else
        printf("NON c'è una A/a tra i primi dieci caratteri\n");

    return 0;
}