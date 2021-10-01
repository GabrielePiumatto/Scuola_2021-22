#include <stdio.h>
#include <stdlib.h>

int nonNegativo() {
    float l1, l2, l3;
    do {
        scanf("%d", &l1);
    } while(x<0);

    return x;
}

bool isTriangolo(float l1, float l2, float l3) {
    return (l1<l2+l3 && l2<l1+l3 && l3<l1+l2);
}

bool isIsoscele(float l1, float l2, float l3) {
    return (isTriangolo(l1,l2,l3)) && ((l1==l2) || (l2==l3) || (l3==l1));
}

int main() {
    float a,b,c;
  
    a = nonNegativo("Inserisci un lato : ");
    b = nonNegativo("Insierisci il secondo lato : ");
    c = nonNegativo("Inserisci il terzo lato : ");

    if(isTriangolo(a,b,c)) {
        printf("Possono essere le misure di un triangolo");
    }
    else {
        printf("Non possono essere le misure di un triangolo");
    }

    if(!isIsoscele(a,b,c)) {
        printf("Non possono essere le misure di un triangolo isoscele");
    }

    else {
        printf("Possono essere le misure di un triangolo isoscele");
    }

    if(true)
    if(x=2)

    if(false)
    if(x=0)

    return 0;
}