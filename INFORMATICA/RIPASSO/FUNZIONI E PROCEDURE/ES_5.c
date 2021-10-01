#include <stdio.h>
#include <stdlib.h>

int noNegativo() {
    int x;
    do {
        printf("Inserisci un numero positivo : ");
        scanf("%d", &x);
    } while(x<0);

    return x;
}

bool isTriangolo(float l1, float l2, float l3) {
    return (l1<l2+l3 && l2<l1+l3 && l3<l1+l2);
}

int main() {
    float a,b,c;
  
    a = nonNegativo("Inserisci un lato : ");
    b = nonNegativo("Insierisci il secondo lato : ");
    c = nonNegativo("Inserisci il terzo lato : ");

    if(!isTriangolo(a,b,c)) {
        printf("Non possono essere le misure di un triangolo");
    }

    else {
        printf("Possono essere le misure di un triangolo");
    }

    if(true)
    if(x=2)

    if(false)
    if(x=0)
    return 0;
}