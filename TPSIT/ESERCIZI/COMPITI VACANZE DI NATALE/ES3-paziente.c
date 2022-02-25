// Gabriele Piumatto    4°A-ROB     07/01/2022
// Per descrivere i pazienti di una clinica disponi del seguente tipo di dato:
//Paziente 
//Scrivi i Prototipi,le chiamate e il codice delle seguenti specifiche:
//1. definisci una variabile rossi di tipo paziente;
//2. definisci un array di 20 pazienti di nome clinica e di tipo paziente;
//3. imposta una procedura (prototipo) con il corretto passaggio dei parametri che permetta ad
//un utente di inserire tutti dati di un paziente che è stato passato alla procedura;
//4. imposta una procedura (prototipo) che stampa la pressione e la temperatura di un
//paziente;
//5. imposta una procedura (prototipo) che dato l&#39;indirizzo dell&#39;array clinica ed il numero di
//pazienti che vi sono sulla lista, calcola il saldo totale della clinica;
//6. imposta tutte le chiamate nel main che realizzino in sequenza i punti precedenti;
//7. facoltativo: ora completa l'esercizio scrivendo il codice di tutte le procedure.

#include <stdio.h>
#include <stdlib.h>
#define MAX 256
#define MAX_PRES 2
#define MAX_TEMP 3
#define MAX_PAZIENTI 20

//un paziente con i suoi dati
typedef struct Paziente{
    char nome[MAX];
    char cognome[MAX];
    int matricola;
    int pressione[MAX_PRES];
    float temperature[MAX_TEMP];
    float parcella;
} Paziente;

//funzioni dichiarate
void inserisciDati(Paziente *paziente);
void stampaPT(Paziente *paziente);
float calcolaSaldoTot(Paziente *clinica, int np);

int main() {
    Paziente rossi;
    Paziente clinica[MAX_PAZIENTI];
    int n;
    float totale;

    //numero di pazienti da inserire
    do {
        printf("Quanti pazienti devi inserire\? ");
        scanf("%d", &n);
    } while(n > MAX_PAZIENTI);

    //input dati pazienti 
    for(int i=0; i<n; i++) {
        inserisciDati(&clinica[i]);
    }

    //stampa dati pazienti
    for(int j=0; j<n; j++) {
        stampaPT(&clinica[j]);
    }

    //stampa saldo totale
    totale = calcolaSaldoTot(clinica, n);
    printf("\nIl saldo totale e' di %.2f euro", totale);
}

//inserimento dati per ogni paziente
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

//stampa dati per ogni paziente
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

//calcolo del saldo totale
float calcolaSaldoTot(Paziente *clinica, int np) {
    float tot;

    for(int i=0; i<np; i++) {
        tot = tot + clinica[i].parcella;
    }

    return tot;
}