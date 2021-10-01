#include <stdio.h>
#include <stdlib.h>
#define DIM 10

void inserisci(int dim, int *n){
    int num = 0;
    do {
        printf("Inserisci il numero di numeri che vuoi inserire : ");
        scanf("%d",&num);
    } while(num<0 || num>dim);
    *n= num;
}
void leggiVettore(int v[], int n){
    for(int i=0;i<n;i++){
        printf("[%d] -> ",i);
        scanf("%d",&v[i]);
    }
}
void ordinap(int v[], int n, int pari[],int *p){
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            pari[*p]=v[i];
            *p = *p + 1;
        }
    }
}
void ordinadispari(int v[], int n, int dispari[],int *d){
    int dis = *d;
    for(int i = 0; i < n; i++){
        if(i%2 != 0){
            dispari[dis]=v[i];
            dis++;
        }
    }
    *d=dis;
}
void stampa(int v[],int n){
    for(int i = 0; i < n; i++){
         printf("%d ",v[i]);
    }
}
int main() {
    int v[DIM];
    int pari[DIM];
    int dispari[DIM];
    int n;
    int p = 0;
    int d = 0;

    inserisci(DIM,&n);
    leggiVettore(v,n);

    ordinadispari(v,n,dispari,&d);
    ordinap(v,n,pari,&p);

    printf("pari : ");
    stampa(pari,p);
    printf("\ndispari : ");
    stampa(dispari,d);

    printf("\n");
    return 0;
}