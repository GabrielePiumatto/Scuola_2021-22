//Gabriele Piumatto     4°A-ROB     21/21/2022
//La videoteca "Ciak film" necessita di un programma che carichi la lista film in un array di struttura e che stampi a video i 5 campi : 
//numero, titolo film, genere, anno di uscita, disponibilità film

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 300
#define DIM 100

//ogni film con i suoi dati
typedef struct {
    int num;
    int data;
    char titolo[LUNG];
    char disp[LUNG];
    char genere[LUNG];
} film;

int main() {

    FILE*fp;
    film * tabella;
    //apertura file e allocazione dinamica
    tabella=(film*) malloc(contaRighe()*sizeof(film));
    char appoggio[LUNG];
    fp=fopen("listafilm.csv", "r");
    int k=0;

    //prende i valori dal file
    while(fscanf(fp, "%d,",&(tabella+k)->num)!=EOF) {
        fgets(appoggio, 70,fp);
        modificaStringa(appoggio, tabella+k);
        k++;
    }

    //stampa dei film
    for(int j=0; j<k; j++) {
        printf("Num: %2d, Tit:%s, gen: %s, data: %d, disp: %s\n",(tabella+j)->num, (tabella+j)->titolo,(tabella+j)->genere,(tabella+j)->data,(tabella+j)->disp);
    }

    free(tabella);
    fclose(fp);
    return 0;
}

//divide ogni riga del csv in parti, le separa
//ogni volta che vede una ,
void modificaStringa(char *str, film * x) {
    char * p=strtok(str, ",");
    strcpy(x->titolo, p);
    p=strtok(NULL, ",");
    strcpy(x->genere, p);
    p=strtok(NULL, ",");
    x->data=atoi(p);
    p=strtok(NULL, ",");
    strcpy(x->disp, p);
}

//conta le righe del file
int contaRighe() {
    int conta=0;
    FILE*fp=fopen("listafilm.csv","r");
    char riga[LUNG];

    while(fgets(riga, LUNG, fp)!=NULL) {
        conta++;
    }

    fclose(fp);
    return conta;
}