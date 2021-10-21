#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 200
using namespace std;

void carica(int mat[DIM][DIM],int righe, int colonne);
void stampa(int mat[DIM][DIM],int righe, int colonne);
void ricerca (int mat[DIM][DIM],int righe, int colonne,int num);

int main(){
    //inizializzo srand
    srand(time(NULL));
    int righe,colonne;

    cout<<"-----------------------------------"<<endl;
    cout<<"          MATRICE "<<endl;
    cout<<"-----------------------------------"<<endl; 

    //chiedo all'utende di valorizzare la dimensione di righe e colonne
    do{
        cout<<"Inserisci il numero delle righe: ";
        cin>>righe;
    }while(righe<=0 || righe>DIM);

    do{
        cout<<"Inserisci il numero delle colonne (dievrso dalle righe deve essere matrice rettangolare): ";
        cin>>colonne;
    }while(colonne<=0 || colonne ==righe || colonne>DIM);

    int mat[DIM][DIM];
    //carico la matrice con numeri casuali da 0 a 100
    carica(mat,righe,colonne);
    //stampo la matrice per vedere come è stata caricata
    stampa(mat,righe,colonne);
    
    //chiedo all'utente il numero da cercare
    int num=0;

    do{
        cout<<"Inserisci il numero da cercare: ";
        cin>>num;
    }while(num<0 || num>10);//metto controllo perche altrimeti utente mette numeri che non pososno essere generati... Non è obbligatorio posso anche decidere di non imporre cio all'utente

    //la funzione ricerca è void perche stampa direttamente il risultato
    ricerca(mat,righe,colonne, num);
return 0;
}

void carica(int mat[][DIM],int righe, int colonne){
    //stampo la matrice
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            mat[i][j]=rand()%10;
        }
    }
return;
}

void ricerca (int mat[][DIM],int righe, int colonne,int num){
    int contNum=0;//contatore per occorrenze di num in matrice
    int occorrenze[righe];//array per memorizzare occorrenze num di righe
    int max; //numero occorrenze riga
    int indiceMax=0; //indice della riha in cui occorrenza max

    for(int i=0;i<righe;i++){
        //inizializzo occorrenze[i]
        occorrenze[i]=0;
        for(int j=0;j<colonne;j++){
            if (mat[i][j]==num){
                occorrenze[i]=occorrenze[i]+1;
                contNum++;
            }
        }
    }
    
    cout<<"Il numero cercato è presente nella matrice "<<contNum<<" volte"<<endl;
    for(int i=0;i<righe;i++){
        if(occorrenze[i]>max){
            max=occorrenze[i];
            indiceMax=i;
        }
    }
    cout<<"Il numero cercato e' piu' frequente nella riga "<<indiceMax+1<<endl;

return;
}


void stampa(int mat[][DIM],int righe, int colonne){
    //stampo la matrice
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}