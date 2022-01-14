#include <stdio.h>
#include <stdlib.h>
#define MAX 256
#define MAX_PRES 2
#define MAX_TEMP 3
#define MAX_PAZIENTI 20

typedef struct Paziente{
    char nome[MAX];
    char cognome[MAX];
    int matricola;
    int pressione[MAX_PRES];
    float temperature[MAX_TEMP];
    float parcella;
} Paziente;

void inserisciDati(Paziente *paziente);
void stampaPT(Paziente *paziente);
float calcolaSaldoTot(Paziente *clinica, int np);

int main() {
    Paziente rossi;
    Paziente clinica[MAX_PAZIENTI];
    int n;
    float totale;

    do {
        printf("Quanti pazienti devi inserire\? ");
        scanf("%d", &n);
    } while(n > MAX_PAZIENTI);

    for(int i=0; i<n; i++) {
        inserisciDati(&clinica[i]);
    }

    for(int j=0; j<n; j++) {
        stampaPT(&clinica[j]);
    }

    totale = calcolaSaldoTot(clinica, n);
    printf("\nIl saldo totale e' di %.2f euro", totale);
}

void inserisciDati(Paziente *paziente) {
    printf("Il tuo nome: ");
    scanf("%s", paziente->nome);
    printf("Il tuo cognome: ");
    scanf("%s", paziente->cognome);
    printf("La tua matricola: ");
    scanf("%d", &paziente->matricola);
    printf("Le tue pressioni: \n");

    for(int i=0; i<MAX_PRES; i++) {   
        printf("Pressione %d: ", i);
        scanf("%d", &paziente->pressione[i]);
    }

    printf("Le tue temperature: ");

    for(int j=0; j<MAX_TEMP; j++) {   
        printf("Temperatura %d: ", j);
        scanf("%f", &paziente->temperature[j]);
    }

    printf("La tua parcella: ");
    scanf("%f", &paziente->parcella);
}

void stampaPT(Paziente *paziente) {
    printf("\nPaziente %s %s", paziente->nome, paziente->cognome);
    printf("\nLe tue pressioni: ");

    for(int i=0; i<MAX_PRES; i++) {   
        printf("\nPressione %d: %d", i, paziente->pressione[i]);
    }

    printf("\nLe tue temperature: ");

    for(int j=0; j<MAX_TEMP; j++) {  
        printf("\nTemperatura %d: %.2f", j, paziente->temperature[j]);
    }
}

float calcolaSaldoTot(Paziente *clinica, int np) {
    float tot;

    for(int i=0; i<np; i++) {
        tot = tot + clinica[i].parcella;
    }

    return tot;
}