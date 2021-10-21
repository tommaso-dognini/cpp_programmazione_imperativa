/* 
TESTO DEL PROBLEMA 
Scrivi un programma che legga da tastiera due matrici A e B di N × N e calcoli la somma C = A + B e
il prodotto D = A × B, visualizzando le matrici ottenute.*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
#define DIM 100

void carica(int matr[][DIM],int dim);
void somma (int matrA[][DIM],int matrB[][DIM],int matrC[][DIM],int dim);
void prodotto (int matrA[][DIM],int matrB[][DIM],int matrC[][DIM],int dim);
void stampa(int matr[][DIM], int dim);

int main(){
    int matrA[DIM][DIM];
    int matrB[DIM][DIM];
    int matrC[DIM][DIM];
    int dim=0;
    
    //inizializzo la funzione srand per poter generare numeri casuali come elementi della matrice
    srand(time(NULL));

    // chiedo all'untente di valorizzare la dimensione delle matrici
    do{
        cout<<"Inserisci la dimensione delle matrici quadrate desiderate: ";
        cin>>dim;
    }while(dim<0 || dim>DIM);

    //carico le matrici, faccio una funzione cosi può essere utilizzata anche nel caso il problema venga cambiato
    carica(matrA,dim);
    carica(matrB,dim);

    //creo matrice C = risultato che ha per elementi la somma degli elementi di uguale posto di A e B
    somma(matrA,matrB,matrC,dim);
    cout<<"La risultante dalla sommma delle matrici A e B è: "<<endl;
    stampa(matrC,dim);
    cout<<endl;
    
    //riuso la matrice C = risultato che ha per elementi il prodotto degli elementi di uguale posto di A e B
    prodotto(matrA,matrB,matrC,dim);
    cout<<"La risultante dalla sommma delle matrici A e B è: "<<endl;
    stampa(matrC,dim);
    cout<<endl;

return 0;
}

void carica(int matr[][DIM],int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            //per non inserire da tastiera tutti i numeri li genero causalmente con 0<=n<=10
            matr[i][j]= rand()%11;
            cout<<matr[i][j]<<" "; // stampo la matrice per vedere se il programma funziona correttamente
        }
        cout<<endl;
    }
return;
}
//funzione che somma gli elementi dello stesso posto di matrA e matrB e li mette in matrice risultato
void somma (int matrA[][DIM],int matrB[][DIM],int matrC[][DIM],int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            matrC[i][j]= matrA[i][j] + matrB[i][j];
        }        
    }
return;
}
//funzione che moltiplica gli elementi dello stesso posto di matrA e matrB e li mette in matrice risultato
void prodotto (int matrA[][DIM],int matrB[][DIM],int matrC[][DIM],int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            matrC[i][j]= matrA[i][j] * matrB[i][j];
        }        
    }
return;
}

// funzione per la stampa
void stampa(int matr[][DIM], int dim){
     for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;        
    }
return;
}
