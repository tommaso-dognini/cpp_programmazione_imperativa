#include <iostream>
using namespace std;


int main(){
    int righe,colonne;

    cout<<"-----------------------------------"<<endl;
    cout<<"          MATRICE "<<endl;
    cout<<"-----------------------------------"<<endl; 


    //chiedo all'utende di valorizzare la dimensione di righe e colonne
    do{
        cout<<"Inserisci il numero delle righe: ";
        cin>>righe;
    }while(righe<=0);

    do{
        cout<<"Inserisci il numero delle colonne: ";
        cin>>colonne;
    }while(colonne<=0);

    int mat[righe][colonne];
    
    //riempo la matrice co i valori della differenza degli indici
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            if(i-j>=0){
                mat[i][j]= i-j;
            }else{
                mat[i][j]= j-i;
            }
        }
    }
    //stampo la matrice
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}