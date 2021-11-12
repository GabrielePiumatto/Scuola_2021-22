#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void leggiVett(float *v, int n) {
    for(int k=0; k<n; k++) {
        printf("Dammi l'elemento v[%d]: ", k);
        scanf("%f", v+k);
    }
}

void stampaVett(float *v, int n) {
    for(int k=0; k<n; k++) {
        printf("Elemento v[%d]: %f\n", k, *(v+k));
    }
}

void elementiRipetuti(float *v, int n) {
    float *doppi;
    doppi=(float*)calloc(n, sizeof(float));
    int contd=0;
    float *scarti;
    scarti=(float*)calloc(n, sizeof(float));
    float sommaScarti=0;
    int contscar=0;
    bool tro=false;
    int y;

    for(int k=0; k<n; k++) {
        tro=false;
        y=0;

        while (tro==false && y<n) {
            if(*(v+k) == *(v+y) && y != k) {
                tro=true;
                *(doppi+contd)=*(v+k);
                contd++;
            }
            y++;
        }

        if(tro==false) {
            *(scarti+contscar)=*(v+k);
            contscar++;
        }
    }

    for(int j=0; j<contd; j++) {
        printf("Doppione %.2f\n", *(doppi+j));
    }

    for(int j=0; j<contscar; j++) {
        sommaScarti+=*(scarti+j);
    }

    printf("Scarti %.2f\n", sommaScarti);
}

int main() {
    int n;
    float *v;
    v=(float*)malloc(n *sizeof(float));

    printf("Quanti numeri vuole inserire? ");
    scanf("%d", &n);

    leggiVett(v, n);
    stampaVett(v, n);
    elementiRipetuti(v, n);

    return 0;
}