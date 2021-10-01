#include <stdio.h>
#include <stdlib.h>

void crescenti(int *x, int *y, int *z) {
    float i=0;
    if(*x > *y) {
        i = *y;
        *y = *x;
        *x = i;
    }
    if(*y > *z) {
        i = *y;
        *y = *z;
        *z = i;
    }
    if(*x > *y) {
        i = *y;
        *y = *x;
        *x = i;
    }
}

int main() {
    int n1, n2, n3;

    printf("Inserisci il primo numero : ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero : ");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero : ");
    scanf("%d", &n3);
    
    return 0;
}