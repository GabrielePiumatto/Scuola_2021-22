#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcolo(int x1, int x2) {
    int x1;
    int x2;
    float *ipo;

    ip = sqrt((x1*x1)+(x2*x2));

    printf("L'ipotenusa vale : %.2f", ip);
}

int main() {
    int c1;
    int c2;

    c1 = calcolo(x1);
    c2 = calcolo(x2);

    printf("Inserisci il primo cateto : ")
    scanf("%d", &c1);
    printf("Inserisci il secondo cateto : ")
    scanf("%d", &c2);

    return 0;
}