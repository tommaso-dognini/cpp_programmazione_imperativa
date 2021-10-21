#include <iostream>
#define DIM 100
using namespace std;

void carica(int mat[][DIM],int dim);
void stampa(int mat[][DIM], int dim);

int main(){
    int dim;
    int cont=0;

    do{
        cout<<"Inserisci la dimensione della matrice quadrata: ";
        cin>>dim;
    }while(dim<=0);

    int mat[DIM][DIM];

    carica(mat,dim);      
    
    cout<<endl;
    stampa(mat,dim);    
return 0;
}

void carica(int mat[][DIM], int dim){
    int contNum=1;
    int contVolte=1;
    while (contVolte<=(dim/2)){
        for(int i=contVolte-1;i<(dim-contVolte);i++){//prima riga verso dx
            mat[contVolte-1][i]=contNum;
            contNum++;           
        }
        for(int j=contVolte-1;j<(dim-contVolte);j++){//ultima colonna verso giu
            mat[j][dim-contVolte]=contNum;
            contNum++;            
        }
        for(int k=(dim-contVolte); k>0;k--){//ultima riga verso sx
            mat[dim-contVolte][k]=contNum;
            contNum++;            
        }        
        //j>0 e non di 0 perchè è l'unico caso in cui deve fare una cella in meno (altrimenti sovrascrive 1)
        for(int p=(dim-contVolte);p>0;p--){//prima colonna verso su
            mat[p][dim-contVolte]=contNum; 
            contNum++;       
        }
        contVolte++;
    }
    
return;
}

void stampa(int mat[][DIM], int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}