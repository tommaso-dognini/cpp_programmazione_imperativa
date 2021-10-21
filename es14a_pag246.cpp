#include <iostream>
#define DIM 100
using namespace std;

void carica(int mat[][DIM],int dim,  int cont);
void stampa(int mat[][DIM], int dim);

int main(){
    int dim;
    int cont=0;


    do{
        cout<<"Inserisci la dimensione della matrice quadrata: ";
        cin>>dim;
    }while(dim<=0);

    int mat[DIM][DIM];

    
    if(dim%2==0){
        while(cont<dim/2){
            carica(mat,dim,cont);
            cont++;
        }
    }else{
        while(cont<(dim+1)/2){
            carica(mat,dim,cont);
            cont++;
        }
    }
    cout<<endl;
    stampa(mat,dim);    
return 0;
}

void carica(int mat[][DIM], int dim, int cont){

    //righe    
    for(int i=cont;i<(dim-cont);i++){//scorre le colonne
        mat[cont][i]=cont+1;
        mat[dim-cont-1][i]=cont+1;
    }
       

    //colonne    
    for(int j=cont;j<(dim-cont);j++){//scorre le righe
        mat[j][cont]=cont+1;
        mat[j][dim-cont-1]=cont+1;
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