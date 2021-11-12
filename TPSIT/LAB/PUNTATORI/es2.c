#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leggiVett(int *v, int n) {
    for(int k=0; k<n; k++) {
        printf("Dammi un numero: ");
        scanf("%d", v+k);
    }
}

void invertiVett(int *v, int n) {
    int t;
    for(int k=0; k<n/2; k++) {
        t=*(v+k);
        *(v+k)=*(v+n-1-k);
        *(v+n-1-k)=t;
    }
}

void stampaVett(int *v, int n) {
    for(int k=0; k<n; k++) {
        printf("%d: %d\n", k+1, *(v+k));
    }
}

int main() {
    int n;
    int *v;

    printf("Quanti numeri vuole inserire? ");
    scanf("%d", &n);
    
    v=(int*)malloc(n*sizeof(int));

    leggiVett(v, n);
    invertiVett(v, n);
    stampaVett(v, n);

    return 0;
}