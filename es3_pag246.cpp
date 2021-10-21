/*Scrivi un programma che legga una matrice A (M × P) e una matrice B (P × N) 
e calcoli la matrice Cprodotto delle due matrici. La matrice C è di dimensione M × N.*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 100
using namespace std;

int controlloDimensione(int dim);
void carica(int matr[][DIM],int dimRighe, int dimColonne);
void prodotto(int matrA[][DIM],int matrB[][DIM],int matrC[][DIM],int m, int n, int p);
void stampa(int matr[][DIM],int dimRighe, int dimColonne);

int main(){
    int matrA[DIM][DIM],matrB[DIM][DIM],matrC[DIM][DIM];
    int m=0,p=0,n=0;
    //inizializzo la funzione srand
    srand(time(NULL));
    cout<<"Inserisci il numero di righe M e di colonne P della matrice A(M x P): ";
    m = controlloDimensione(m);
    p = controlloDimensione(p);

    cout<<"Inserisci il numero di colonne N della matrice B (P x N): ";
    n = controlloDimensione(n);
    
    // carico le matrici con numeri casuali da 0 a 10
    carica(matrA,m,p);
    carica(matrB,p,n);
    // il prodotto di due matrici è una matrice che ha per dimensioni le righe della prima e le colonne della seconda
    prodotto(matrA,matrB,matrC,m,n,p);

    //stampo la matrice
    cout<<"La matrice prodotto è"<<endl;
    stampa(matrC,m,n);
return 0;
}

int controlloDimensione(int dim){
    do{
        cin>>dim;
    }while(dim>DIM ||dim<0);
return dim;
}

void carica(int matr[][DIM],int dimRighe, int dimColonne){
    for(int i=0;i<dimRighe;i++){
        for(int j=0;j<dimColonne;j++){
            //per non inserire da tastiera tutti i numeri li genero causalmente con 0<=n<=10
            matr[i][j]= rand()%11;
            cout<<matr[i][j]<<" "; // stampo la matrice per vedere se il programma funziona correttamente
        }
        cout<<endl;
    }
return;
}
void prodotto(int matrA[][DIM],int matrB[][DIM],int matrC[][DIM],int m, int n, int p){
   
int s=0; 
int contn;

    //scorro dentro A(M x P)
    // scorro le righe di A
    for(int i=0;i<m;i++){
            contn=0;
            // scorro le colonne di A e le righe di B
            for(int k=0;k<n;k++){
                s=0;
                for(int j=0;j<p;j++){
                    // a(i x j)
                    // b (j x contn)
                    s = s + matrA[i][j] * matrB[j][contn];
                }
                matrC[i][contn] = s ;
                contn++;
            }      
    }
return;
}

void stampa(int matr[][DIM],int dimRighe, int dimColonne){
    for(int i=0;i<dimRighe;i++){
        for(int j=0;j<dimColonne;j++){
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;        
    }
return;
}