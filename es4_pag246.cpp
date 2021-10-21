/*matrice MAT (3x6)
3,5,7,9,0,7
2,2,8,9,3,2
8,2,2,2,4,5

ci sono diversi modi per fare questo es  in primis con o senza funzioni poi:
- faccio al somma di tutti gli elementi di MAT con qualche if che togli elementi non desiderari
- creo la sottomatrice che è uguale a MAT meno la riga e la colonna scelta dall'utente e poi faccio la somma dei suoi elementi

varianti: invece che inserire la matrice a mano la carico con numeri casuali da 0 a 9
           NB io ho scelto 3x6 ma potrebbe anche essere 6x3 o anche 2x9 o 9x2 o 18x1 0 1x18
*/





#include <iostream>
#include <ctime>
#include <stdlib.h>
#define RIGHE 3
#define COLONNE 6
using namespace std;


void carica(int mat[RIGHE][COLONNE]);
void creaSubMatr(int mat[RIGHE][COLONNE], int subMat[RIGHE-1][COLONNE-1], int riga, int colonna);
int calcolaSomma(int subMat [RIGHE-1][COLONNE-1]);
void stampa(int subMat[RIGHE-1][COLONNE-1]);




int main(){
    int riga,colonna;
    int mat[RIGHE][COLONNE];
    int subMat[RIGHE-1][COLONNE-1];
    int somma=0;

    //ininzializzo srand
    srand(time(NULL));
    
    //carico MAT con numeri causali da 0 a 9 
    carica(mat);

    //facciamo che indici partono da 0 quindi il primo 3 sarà idenrtificato (righe,colonne)(0,0)
    
    //chiedo di valorizzare riga
    do{
        cout<<"Inserisci l'indice della riga da eliminare: ";
        cin>>riga;
    }while(riga>=RIGHE);

    //chiedo di valorizzare colonna
    do{
        cout<<"Inserisci l'indice della colonna da eliminare: ";
        cin>>colonna;
    }while(colonna>=COLONNE);

    creaSubMatr(mat,subMat,riga,colonna);
    stampa(subMat);
    somma = calcolaSomma(subMat);

    cout<<"La somma e': "<<somma<<endl;

return 0;
}
//funzione che carica in modo casuale una matrice di dimensioni RIGHE,COLONNE con numeri da 0a9
void carica(int mat[RIGHE][COLONNE]){
    for(int i=0;i<RIGHE; i++){
        for(int j=0;j<COLONNE; j++){
            mat[i][j]= rand() % 10;
            //stampo la matrice che ho creato per controllare
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //metto un endl perche fa sempre bene
    cout<<endl;
return;
}

//Funzione che prende mat e crea subMat togliendo le righe
void creaSubMatr(int mat[RIGHE][COLONNE], int subMat[RIGHE-1][COLONNE-1],int riga, int colonna){
int contrighe=0;
int contcolonne=0;

    for(int i=0;i<RIGHE;i++){
        if(i!=riga){
            contcolonne=0;
            for(int j=0;j<COLONNE;j++){
                if(j!=colonna){   
                    subMat[contrighe][contcolonne]=mat[i][j];
                    contcolonne++; 
                }
            }
            contrighe++;
        }
    }
    //metto un endl perche fa sempre bene
    cout<<endl;
return;
}

void stampa(int subMat[RIGHE-1][COLONNE-1]){
    for(int i=0;i<RIGHE-1; i++){
        for(int j=0;j<COLONNE-1; j++){
            //stampo la matrice che ho creato per controllare
            cout<<subMat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}


//funzione che somma tutti gli elementi della matrice submat e mette il risultato in somma
int calcolaSomma(int subMat [RIGHE-1][COLONNE-1]){
    int somma=0;

    for(int i=0;i<RIGHE-1; i++){
        for(int j=0;j<COLONNE-1; j++){
            somma = somma + subMat[i][j];
        }
        cout<<endl;
    }
return somma;
}