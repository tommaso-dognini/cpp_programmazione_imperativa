/* TESTO DEL PROBLEMA: 

L'utente inserisce una matrice N × M composta da numeri interi. 
Il programma scambia le nRparicon quelle dispari. 
Le dimensioni della matrice vengono scelte dall'utente tra i valori massimi fissatiall'interno del programma (10 × 20).
*/

// CONSIDERO INDICI DELLA MATRICE CHE PARTONO DA 0 QUINDI RIGA 1 COLONNA 1 = (0,0) ECC

#include <iostream>
using namespace std;
#define DIM 30

int main(){
    int nRighe=0,nColonne=0;
    int valore;
    int matr[DIM][DIM];

    //chiedo a utente di valorizare n righe    
    do{
        cout<<"Inserisci il numero di righe della matrice: ";
        cin>>nRighe;
    }while(nRighe>=10 || nRighe<=0 );//righe minore di 10 da testo e non puo essere nullo
    
    //chiedo a utente di valorizare nColonne
    do{
        cout<<"Inserisci il numero di colonne della matrice: ";
        cin>>nColonne;
    }while(nColonne>=20 || nColonne<=0 );//nColonne minore di 20 da testo e non puo essere nullo

    //Caricamento della matrice
    for(int i=0;i<nRighe;i++){
            for(int j=0;j<nColonne;j++){
                //inserire elemnto date le sue coordinate
                cout<<"Inserisci l'elemento di posto ("<<i<<";"<<j<<") :";
                cin>> valore;
                matr[i][j] = valore;
            }
        }


    //scambio delle righe pari con quelle dispari
    int vAppoggio[nRighe];
    for(int i=0;i<nRighe;i++){
        if(i%2 ==0){
            // se pari copio tutta la riga in vAppoggio
            for(int j=0;j<nColonne;j++){
                vAppoggio[j]=matr[i][j];
            }      
        }else{ // se dispari eseguo lo scambio
            for(int j=0;j<nColonne;j++){
                //copio gli elemnti nella riga pari precedente
                matr[i-1][j] = matr[i][j];
                //copio nella riga dispari gli elementi di quella pari (che ho in vAppoggio)
                matr[i][j] = vAppoggio[j];
            }
        }
    }

    // stampo la matrice modificata
    for(int i=0;i<nRighe;i++){
            for(int j=0;j<nColonne;j++){
                cout<< matr[i][j]<<" ";
            }
            cout<<endl; // endl per fare acapo delle varie righe
        }

    
return 0;
}


