/*  INTERPRETAZIONE PROBLEMA:
il testo non è molto chiaro quindo ho scritto il programma che legge la matrice MAT e dice:
    -1- il massimo della matrice
    -2- il massimo di ogni riga
    -3- il massimo di ogni colonna
*/

/*   VARIANTI:
- la matrice iniziale mat: può essere creata chiedendo all'utente di immetere i valori o creandoli causalmente in un renge che abbia senso
- la matrice mat può avere dimensini (N x M) fisse oppure variabili (in tal caso le chiedo all'utente)
- con funzioni o senza
- se con funzioni la funzione per trovare il massimo può riyornare il valore e quindi serve uno switch nel main ed è pià difficile
  oppure puà essere void e stampare direttamente i risultati
*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 20
using namespace std;

void carica(int mat[DIM][DIM],int n, int m);
void trovaMassimi(int mat[DIM][DIM],int n, int m);
int main(){
    int n,m;
    int mat[DIM][DIM];

    //inizializzo srand
    srand(time(NULL));

    //chiedo all'utente la dimensione della matrice mat
    do{
        cout<<"Inserisci il numero N di righe della matrice MAT (N x M): ";
        cin>>n;
    }while(n<0 || n>DIM);//n metto che m non può essere per default più grande di DIM= 50 perche seno è troppo grande e non ho voglia

    do{
        cout<<"Inserisci il numero N di colonne della matrice MAT (N x M): ";
        cin>>m;
    }while(m<0 || m>DIM);//m metto che m non può essere per default più grande di DIM= 50 perche seno è troppo grande e non ho voglia
    
    //carico matrice MAT con numeri interi casuali (se sono interi vuol dire che sono in cm quini faccio da 100 a 200)
    carica(mat,n,m);
    trovaMassimi(mat,n,m);//funzione stampa direttamente i risultati altrimenti dovrei fare uno switch o più funzioni e la cosa diventa lunga

return 0;
}

//funzione che carica la matrice MAT con numeri interi casuali (se sono interi vuol dire che sono in cm quini faccio da 100 a 200)
void carica(int mat[DIM][DIM],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[i][j] = rand()%101 + 100; // 101 perche cosi ho anche il 200 
            //stampo mat cosi capisco quali numeri mi genera
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}

/*funzione che trova i massimi:
    1 in tutta la matrice
    2 in ogni riga
    3 in ogni colonna
*/

void trovaMassimi(int mat[DIM][DIM],int n, int m){
    int max=100;
//per semplicità divido in 3 for diverisi anche se non sarebbe il massimo in temrmini di efficienza
    
    //massimo nella matrice
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    cout<<"Il massimo delle matrice è: "<<max<<endl;

    max=100;

    //massimo per ogni riga
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
        cout<<"Il massimo della riga "<<i<<"  e': "<<max<<endl;
        max=100;
    }
    
    //massimo per colonna
    /* 
    qui è più difficile perche devo fare in modo diverso con i for
    mi serve scorrere la matrice facendo colonna per colonna e non riga per riga
    
    */
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //mat[riga][colonna]=mat[j][i]
            if(mat[j][i]>max){
                max=mat[j][i];
            }
        }
        cout<<"Il massimo della colonna "<<i<<"  e': "<<max<<endl;
        max=100;
    }


return;
}