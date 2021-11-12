#include <stdio.h>
#include <stdlib.h>

float **malloc2d(float **m, int n1, int n2) {
    m=(float**)calloc(n1,sizeof(float*));

    for(int k=0; k<n2; k++) {
        *(m+k)=(float*)calloc(n2,sizeof(float));
    }

    return m;
}

void leggiMat(float **m, int r, int c) {
    for(int k=0; k<r; k++) {
        for(int y=0; y<c; y++) {
            printf("Dammi valore mat[%d][%d]: ", k, y);
            scanf("%f", &m[k][y]);
        }
    }
}

void stampaMat(float **m, int r, int c) {
    for(int k=0; k<r; k++) {
        for(int y=0; y<c; y++) {
            printf("mat[%d][%d]= %.2f\n", k, y, m[k][y]);
        }
    }
}

int main() {
    int r, c;
    float **m;

    printf("Dammi la prima dimensione: ");
    scanf("%d", &r);
    printf("Dammi la seconda dimensione: ");
    scanf("%d", &c);

    m=malloc2d(m, r, c);
    leggiMat(m, r,c);
    stampaMat(m, r, c);
    free(m);

    return 0;
}