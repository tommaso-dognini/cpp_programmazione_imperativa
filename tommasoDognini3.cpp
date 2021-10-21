#include <iostream>

#define DIM 200
using namespace std;

void carica(int mat[DIM][DIM],int dim);
void stampa(int mat[DIM][DIM],int dim);
void controllo (int mat[DIM][DIM],int dim);

int main(){
    int dim=0;

    cout<<"-----------------------------------"<<endl;
    cout<<"          MATRICE QUADRATA "<<endl;
    cout<<"-----------------------------------"<<endl; 

    //chiedo all'utende di valorizzare la dimensione di righe e colonne
    do{
        cout<<"Inserisci la dimensione della matrice (num righe o colonne): ";
        cin>>dim;
    }while(dim<=0 || dim>DIM);

    int mat[DIM][DIM];
    //carico la matrice a mano
    carica(mat,dim);
    //stampo la matrice per vedere come è stata caricata
    stampa(mat,dim);

    //nella funzione controllo faccio distizione dipari e pari
    controllo(mat,dim);   
return 0;
}

void carica(int mat[DIM][DIM],int dim){
    //carico la matrice a mano
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<"Elemento: ";
            cin>>mat[i][j];
        }
    }
return;
}
void controllo (int mat[DIM][DIM],int dim){
    bool continua=false; //variabile boleana gestire break del for esterno

    //controllo 0
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(i!=(dim-1)/2  && j!=(dim-1)/2){
                if(mat[i][j]==0){
                    continua=true; // al matrice è giusta
                }else{
                    continua=false;
                }
            }
        }

    }
    
    //conrollo 1
    if (continua==true){
        continua= false;
        for(int i=0;i<dim;i++){
            for(int j=0;j<dim;j++){
                if(i==(dim-1)/2  && j==(dim-1)/2){
                    if(mat[i][j]==1){
                        continua=true; // al matrice è giusta
                    }else{
                        continua=false;
                    }
                }
            }
        }
    }else{
        cout<<"La matrice e' sbagliata"<<endl;
    }

    if(continua==true){
        cout<<"La matrice è giusta"<<endl;
    }


    

    /*
    if(dim%2!=0){//se dim dispari
        
        for(int i=0;i<dim;i++){
            //colonna di uno è centrale --> indice della colonna centrale = (dim-1)/2
            //riga di uno è centrale --> indice della riga centrale = (dim-1)/2

                if(i!=(dim-1)/2){ //se non sono nella riga di 1 (centrale)
                    for(int j=0;j<dim;j++){
                        if(j!=(dim-1)/2){//non sono nella colonna centrale quindi elemento deve essere 0 altrimenti esco.
                            if(mat[i][j]!=0){
                                break;
                                continua=false;
                            }
                        }else{//sono nella colonna centrale
                            //elemento deve essere 1 altrimenti esco
                            if(mat[i][j]!=1){
                                break;
                                continua=false;
                            }
                        }
                    }
                }else{//sono nella riga centrale
                    for(int j=0;j<dim;j++){
                        if(mat[i][j]!=1){
                            break;
                            continua=false;
                        }
                    }
                } 
        //controllo se devo uscire da secondo for
        if(continua==false){
            break;
        }
        
        }

        
        
        //se continua è rimasto sempre true---> matrice è giusta
        if(continua==true){
            cout<<"La matrice è giusta"<<endl;
        }else{
            cout<<"La matrice è sbagliata!"<<endl;
        }
    
    
    }else{//se dim pari

    }

    */



return;
}

void stampa(int mat[DIM][DIM],int dim){
    //stampo la matrice
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}