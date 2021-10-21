#include <iostream>
#define DIM 100
using namespace std;

void carica(int mat[][DIM],int dim,  int cont, int contNumeri);
void stampa(int mat[][DIM], int dim);

int main(){
    int dim;
    int cont=0;
    int contNumeri=1;


    do{
        cout<<"Inserisci la dimensione della matrice quadrata (nb= la dimensione deve essere pari): ";
        cin>>dim;
    }while(dim<=0 || dim%2!=0);

    int mat[DIM][DIM];

    while(cont<(dim/2)){
        carica(mat,dim,cont,contNumeri);
        cont= cont +2;
        contNumeri++;
    }
    
    cout<<endl;
    stampa(mat,dim);    
return 0;
}

void carica(int mat[][DIM], int dim, int cont, int contNumeri){

    //righe    
    for(int i=cont;i<(dim-cont);i++){//scorre le colonne
        mat[cont][i]=contNumeri;
        mat[dim-cont-1][i]=contNumeri;
    }
    //righe    
    for(int i=cont+1;i<(dim-cont-1);i++){//scorre le colonne
        mat[cont+1][i]=contNumeri;
        mat[dim-cont-2][i]=contNumeri;
    }
       

    //colonne    
    for(int j=cont;j<(dim-cont);j++){//scorre le righe
        mat[j][cont]=contNumeri;
        mat[j][dim-cont-1]=contNumeri;
    }

    for(int j=cont+1;j<(dim-cont-1);j++){//scorre le righe
        mat[j][cont+1]=contNumeri;
        mat[j][dim-cont-2]=contNumeri;
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