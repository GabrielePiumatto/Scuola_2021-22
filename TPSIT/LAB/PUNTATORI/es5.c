#include <stdio.h>
#include <stdlib.h>

float **malloc2d(float **m, int n1, int n2) {
    m=(float**)calloc(n1,sizeof(float*));

    for(int k=0; k<n2; k++) {
        *(m+k)=calloc(n2,sizeof(float));
    }

    return m;
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
    printf("Dammi la prima dimensione: ");
    scanf("%d", &r);
    printf("Dammi la seconda dimensione: ");
    scanf("%d", &c);

    float **m;

    m=malloc2d(m, r, c);
    stampaMat(m, r, c);
    free(m);

    return 0;
}