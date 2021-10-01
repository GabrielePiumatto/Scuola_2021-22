#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct {
    float vmat, vit, vinf;
}studente;

int main() {
    studente s[MAX];
    int n;
    float mediamat = 0;
    float mediait = 0;
    float mediainf = 0;
    float mm, mit, minf;

    printf("Quanti studenti?");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Inserisci il voto di italiano : ");
        scanf("%f", s[i].vit);
        printf("Inserisci il voto di matematica : ");
        scanf("%f", s[i].vmat);
        printf("Inserisci il voto di informatica : ");
        scanf("%f", s[i].vinf);
    }

    for(int k=0; k<n; k++) {
        mediamat = mediamat + s[k].vmat;
        mediait = mediait + s[k].vit;
        mediainf = mediainf + s[k].vinf;
    }

    mm = mediamat/n;
    mit = mediait/n;
    minf = mediainf/n;

    if(mediamat > mediait && mediamat > mediainf) {
        printf("La materia con la media più alta è matematica : %f", mm);
    }

    if(mediait > mediamat && mediait > mediainf) {
        printf("La materia con la media più alta è italiano : %f", mit);
    }

    if(mediainf > mediamat && mediainf > mediait) {
        printf("La materia con la media più alta è informatica : %f", minf);
    }

    return 0;
}