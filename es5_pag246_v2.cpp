#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 20
using namespace std;
//matrice N x M

void carica (int mat[DIM][DIM],int righe, int colonne);
void massimoMat(int mat[DIM][DIM], int righe, int colonne);
void massimoRig(int mat[DIM][DIM], int righe, int colonne);
void massimoCol(int mat[DIM][DIM], int righe, int colonne);

int minimoCol(int mat[DIM][DIM], int righe, int colonne);
int minMassimoRig(int mat[DIM][DIM], int righe, int colonne);

int main(){
    int righe,colonne;
    int mat[DIM][DIM];
    int maxMinColonne=0;
    int minMaxRighe=0;
    
    srand(time(NULL));

    do{
        cout<<"Inserisci il numero di righe: ";
        cin>>righe;
    }while(righe<=0 || righe> DIM);

    do{
        cout<<"Inserisci il numero di colonne: ";
        cin>>colonne;
    }while(colonne<=0 || colonne> DIM);

    carica(mat,righe, colonne);
    /*
    massimoMat(mat,righe,colonne);
    massimoRig(mat,righe,colonne);
    massimoCol(mat,righe,colonne);
    */
   
    cout<<endl;
    maxMinColonne = minimoCol(mat,righe,colonne);
    minMaxRighe =  minMassimoRig(mat,righe,colonne);

    cout<<"Il massimo dei minimi delle collenne: "<<maxMinColonne<<endl;
    cout<<"Il minimo dei massimi delle righe: "<<minMaxRighe<<endl;

    if(minMaxRighe>maxMinColonne){
        cout<<"IL più alto è il minimo dei massimi delle righe"<<endl;
    }else{
        cout<<"Il più alto è il massimo dei minimi delle colonne"<<endl;
    }

return 0;
}

void carica (int mat[DIM][DIM],int righe, int colonne){
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            mat[i][j]=rand()%101 + 100;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}

void massimoMat(int mat[DIM][DIM], int righe, int colonne){
    int max=100;

    //max nella matrice
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    cout<<"Il massimo nella matrice e': "<<max<<endl;
    cout<<endl;
return;
}
void massimoRig(int mat[DIM][DIM], int righe, int colonne){
    int max=100;

    //max nella riga
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }

        }
        cout<<"Il massimo della riga "<<i+1<<" e': "<<max<<endl;
        max=100;
    }
    cout<<endl;

return;
}

void massimoCol(int mat[DIM][DIM], int righe, int colonne){
    int max=100;

    //max nella colonna
    for(int i=0;i<colonne;i++){
        for(int j=0;j<righe;j++){
            if(mat[j][i]>max){
                max=mat[j][i];
            }
        }
        cout<<"Il massimo della colonna "<<i+1<<" e': "<<max<<endl;
        max=100;        
    }
    cout<<endl;
return;
}

int minimoCol(int mat[DIM][DIM], int righe, int colonne){
    int min=200;
    int maxmin=100;

    //max nella colonna
    for(int i=0;i<colonne;i++){
        for(int j=0;j<righe;j++){
            if(mat[j][i]<min){
                min=mat[j][i];
            }
        }
        if(min>maxmin){
            maxmin=min;
        } 
        min=200;    
    }
    cout<<endl;
return maxmin;
}

int minMassimoRig(int mat[DIM][DIM], int righe, int colonne){
    int max=100;
    int minMax=200;

    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
        if(max<=minMax){
            minMax=max;
        }
        max=100;
    }
    cout<<endl;

return minMax;
}