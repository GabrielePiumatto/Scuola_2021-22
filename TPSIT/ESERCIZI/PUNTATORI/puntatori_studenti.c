//Gabriele Piumatto     4°A-ROB     05/11/2021
//Definire una struttura per memorizzarte i dati degli studenti di una classe 
//e dei voti nelle varie discipline: italiano, mate, info.
//Si scriva una funzione un C che, a partire da un vettore di studenti fornito 
//come argomento, determini la disciplina che ha la media più alta tra le tre.

#include <stdio.h>
#include <stdlib.h>
#define MAX_ALUNN 25

//ogni studente ha 3 voti
typedef struct {
    int ita;
    int mate;
    int info;
} Studente;

//inserire per ogni studente i voti delle 3 materie
int caricaVettore(Studente *c, int max) {
    int nAlunni = 0, i;
    printf("Quanti alunni ci sono in classe? ");
    scanf("%d", &nAlunni);
    for ( i = 0; i < nAlunni; i++) {
        printf("Alunno %d:\nVoto di italiano: ", i + 1);
        scanf("%d", ((c + i)->ita));
        printf("Voto di matematica: ");
        scanf("%d", &c[i].mate);
        printf("Voto di informatica:");
        scanf("%d", &c[i].info);
        printf("\n");
    }
    return i;
}

//funzione per determinare quale materia ha la media migliore
int mediaMigliore(Studente c[], int stud) {
    int mat = -1;
    int sInfo = 0, sMate = 0, sIta = 0;
    float mInfo, mMate, mIta;
    if( stud != 0) {
        //somma voti e calcolo medie
        for(int i = 0; i < stud; i++) {
            sInfo = sInfo + c[i].info;
            sMate = sMate + c[i].mate;
            sIta = sIta + c[i].ita;
        }
        mInfo = sInfo / stud;
        mMate = sMate / stud;
        mIta = sIta / stud;
    }

    //chi ha la media migliore?
    if(mInfo > mMate && mMate > mIta) {
        mat = 2;
    } else if(mIta > mMate && mMate > mInfo) {
        mat = 0;
    } else {
        mat = 1;
    }
    return mat;
}

int main() {
    Studente classe[MAX_ALUNNI];
    int x, n;
    n = caricaVettore(classe, MAX_ALUNNI);
    x = mediaMigliore(classe, n);
    //stampa chi ha la media migliore
    switch (x) {
    case -1:
        printf("\nErrore\n");
    case 0:
        printf("\nItaliano ha media maggiore!\n");
        break;
    case 1:
        printf("\nMatematica ha la media maggiore!\n");
        break;
    case 2:
        printf("\nInformatica ha la media maggiore\n");
        break;
    }
    
    printf("\n");
    system("pause");
    return 0;
}