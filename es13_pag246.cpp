#include <iostream>
using namespace std;
int main(){
    int dim=0;

    cout<<"* ****************************************************************** *"<<endl;
    cout<<"PROGRAMMA CHE STAMPA UNA MATRICE A ZIG ZAG, PER DIAGONALI E TRASLATA"<<endl;
    cout<<"* ****************************************************************** *"<<endl;
    
    //chiedo all'utente la dimension della matrice desiderata
    cout<<"Inserisci la dimensione della matrice: ";
    cin>>dim;
        
    while(!dim>0){
        cout<<"La dimensione e' minore di 0, Inserisci una dimensione positiva: ";
        cin>>dim;
    }



    // RIMEPIMENTO ZIG ZAG
    cout<<"Riempimento a zig zag"<<endl;
    int mat[dim][dim];
    int cont=1;
    //scorro array righe 
    for(int i=0;i<dim;i++){
        //righe pari aumenta
        if(i%2==0){
            for(int j=0;j<dim;j++){
                mat[i][j]=cont;
                cont++;
            }
        }else{//righe dispari            
            // righe dispari diminuisce
            for(int j=dim-1;j>=0;j--){
                mat[i][j]=cont;
                cont++;
            }
        }
    } 
    // stampa matrice
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<< mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    //RIEMPIMENTO x DIAGONALI
    cout<<"Riempimento x diagonali"<<endl;
    int mat2[dim][dim];
    cont = 1;   

    //riempo prima riga 0
    for(int j=0;j<dim;j++){
        mat2[0][j]=cont;
        cont++;
    }
    //riempo tutte le altre righe
    for(int i=1;i<dim;i++){
        for(int j=0;j<dim;j++){
            mat2[i][j]=mat2[i-1][j]+1;
        }
    }
    // stampa matrice2
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<< mat2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    //MATRICE TRASLATA
    cout<<"Matrice traslata "<<endl;
    int mat3[dim][dim];
    int cont2;

    cont = dim-1;

    /*per riempire la matrice parto dal fondo quini elemento x (dim-1,dim-1)
      in tal caso devo solo mettere un 1 perchè è sulla diagonale principale
        poi il ciclo funziona così:
        - tramite i due for riempo riga cont e colonna cont partendo da elemento di posto (cont, cont)
          con cont parte da dim-1 (ultimo elemento) e descresce di 1 ogni volta
    */
    while(cont>=0){
        
        if(cont==dim-1){
            mat3[cont][cont]=1;
        }else{
            //riempe la riga
            cont2=1;
            for(int i=cont;i<dim;i++){
                mat3[i][cont]=cont2;
                cont2++;
            }
            //riempe la colonna
            cont2=1;
            for(int j=cont;j<dim;j++){
                mat3[cont][j]=cont2;
                cont2++;
            }
        } 
        cont--;
    }
    
    // stampa matrice3
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<< mat3[i][j]<<" ";
        }
        cout<<endl;
   
    }




    

return 0;
}