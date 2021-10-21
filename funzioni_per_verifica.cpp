#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 100
using namespace std;

void carica(int mat[][DIM],int righe, int colonne);
void stampa(int mat[][DIM],int righe, int colonne);


int main(){
    srand(time(NULL));
    //mat (3 x 6)
    int matA[DIM][DIM];
    int matB[DIM][DIM];
    int matC[DIM][DIM];
    int matTrasposta[DIM][DIM];
    int righe,colonne,colonne2;

    cout<<"MATRICE A: "<<endl;
    do{
        cout<<"Righe: ";
        cin>>righe;
    }while(righe<0 || righe> DIM);
    do{
        cout<<"Colonne: ";
        cin>>colonne;
    }while(colonne<0 || colonne> DIM);
    carica(matA,righe,colonne);

    cout<<"MATRICE B: "<<endl;
    do{
        cout<<"Colonne B: ";
        cin>>colonne2;
    }while(colonne2<0 || colonne2> DIM);
    carica(matB,colonne,colonne2);

    cout<<"MATRICE C: "<<endl;
    carica(matC,righe,colonne);


    cout<<"-----------------------------------"<<endl;
    cout<<"     MATRICE TRASPOSTA di A"<<endl;
    cout<<"-----------------------------------"<<endl;    

    //MATRICE TRASPOSTA ---> scambio righe con colonne i=1, j=3
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            matTrasposta[j][i] = matA[i][j];
        }
    }
    stampa(matTrasposta,colonne, righe);

    cout<<"-----------------------------------"<<endl;
    cout<<"    PRODOTTO DI MATRICI A * B "<<endl;
    cout<<"-----------------------------------"<<endl;

    //PRODOTTO DI MATRICI (possibile se A (M x P) B (P x N)---> P (M x N))
    int matProdotto [DIM][DIM];
    int contn;
    //matA(righe, colonne)
    //matB(colonne x colonne2)
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne2; j++){
            matProdotto[i][j] = 0;
            for(int k=0; k<colonne; k++){
                matProdotto[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    stampa(matProdotto,righe, colonne2);

    //SOMMMA DI MATRICI (possibile solo se matrici hanno stessa dimensione)
    cout<<"-----------------------------------"<<endl;
    cout<<"      SOMMA DI MATRICI A + C "<<endl;
    cout<<"-----------------------------------"<<endl;
    int matSomma [DIM][DIM];    

    for(int i=0;i<righe;i++){// scorro le righe 
        for(int j=0;j<colonne;j++){// scorro le colonne 
            matSomma[i][j]=matA[i][j]+matC[i][j];
        }      
    }
    stampa(matSomma,righe, colonne);

    //SOMMMA DI MATRICI (possibile solo se matrici hanno stessa dimensione)
    cout<<"-----------------------------------"<<endl;
    cout<<" SCAMBIO RIGHE PARI CON DISPARI DI A "<<endl;
    cout<<"-----------------------------------"<<endl; 
    int appo=0;
    //A (righe x colonne)
    //considero riga pari quella di indice dispari cioè righe 2°, 3°, 4°
    for(int i=0;i<righe;i++){// scorro le righe
        if(i%2!=0){ 
            for(int j=0;j<colonne;j++){// scorro le colonne 
                appo=matA[i-1][j];
                matA[i-1][j]=matA[i][j];
                matA[i][j]=appo;
            }
        }
    }
    stampa(matA,righe, colonne);

    cout<<"-----------------------------------"<<endl;
    cout<<" SCAMBIO COLONNE PARI CON DISPARI DI C "<<endl;
    cout<<"-----------------------------------"<<endl; 
    appo=0;
    //C (righe x colonne)
    //considero colonna pari quella di indice dispari cioè righe 2°, 3°, 4°
    for(int i=0;i<colonne;i++){// scorro le colonne
        if(i%2!=0){ 
            for(int j=0;j<righe;j++){// scorro le righe
                appo=matC[j][i-1];
                matC[j][i-1]=matC[j][i];
                matC[j][i]=appo;
            }
        }
    }
    stampa(matC,righe, colonne);

return 0;
}

void carica(int mat[][DIM],int righe, int colonne){
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            mat[i][j]=rand()%10+1;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}

void stampa(int mat[][DIM],int righe, int colonne){
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}