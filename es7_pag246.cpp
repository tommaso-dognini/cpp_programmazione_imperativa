#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 3
#define DIM2 30
using namespace std;

void carica(int mat[DIM][DIM]);
bool controllo (int mat[DIM][DIM]);
void stampa(int mat[DIM][DIM]);

int main(){
    bool continua=false;
    int mat[DIM][DIM];
    
    srand(time(NULL));
    //continuo a generare matrici quadrate e quindi possibli quadrati magici finche non ne trovo uno e cioè finche il controllo non ritorna continua=true
    while(continua ==false){
        carica(mat);
        /*controlla
            - somma colonne =15
            - somma righe  = 15
            - somma diagonali = 15
        */
        continua = controllo(mat); // true se quadrato magico or false se da rifare
        // stampa tutte le matrici generate
        stampa(mat);
    }

    cout<<"Il quadrato magico è: "<<endl;
    stampa(mat);
    cout<<endl;

return 0;
}
//funzione che carica in modo causuale una matrice quadrata di elemnti compresi nell'intervallo [1;9]
void carica(int mat[DIM][DIM]){
    int n=0;
    bool controlloBreak=false;
    int matNum[DIM][DIM];//nuemri da 1 a 9 sono 9 quindi ci stanno in 3x3
    int cont=0;
    for(int i=0;i<DIM;i++){
        for(int j=0;j<DIM;j++){ 
            /*PER CARICARE A MANO QUADRATO MAGICO
            cout<<"elemento: ";
            cin>>mat[i][j];
            */

            mat[i][j] = rand()%9 +1;//genera casualmente numero compreso tra 1 e 9 inclusi

            /*controllo che non vengano inseriti numeri doppi:
              se elemento già genetato è nella matrice mat e quindi entra nell' if e j diminuisce di uno cosi è come se rigenero quell'elemento finche non è doppio
            */
           // questa parte di codice l'ho presa e modificata a partire da qui: https://www.codingcreativo.it/numeri-casuali-senza-ripetizioni-in-c/ 
    	    for(int k=0;k<=i;k++) {
                for(int p=0;p<=j;p++){
                    if(mat[i][j]==mat[k][p]) {
                        j--;
                        break;
                        controlloBreak = true;
                    }
                }
                //if per interrompere anche ciclo esterno
                if(controlloBreak==true){
                    break;//stoppa il for più esterno.
                }
            }
       }

            
    }

return;
}

/* funzione che controlla se la somma degli elemtni di ogni riga, colonna , diagonale è uguale a 15.
   se vero riturn continua = true --> quadrato magico
   se falso return continua = false --> non è un quadrato magico
*/
bool controllo (int mat[DIM][DIM]){
    bool continua=true;
    int somma=0;
    //continua = true --> controllo vero potrebbe essere un coso magico

    //CONTROLLO SOMMA DEGLI ELEMENTI DELLE RIGHE

    for(int i=0;i<DIM;i++){
        somma = 0;
        if(continua == true){//se la somma degli elementi della riga prima è != 15 allora continua = false e non fa le altre righe
            for(int j=0;j<DIM;j++){
                somma = somma + mat[i][j];
            }
            //controllo somma sia = a 15
            if(somma==15){
                continua= true;
            }else{
                continua = false;
            }
        }
    }
    //controllo somma colonne e diagonali viene eseguito se è verificato  il controllo sulle righe
    if(continua==true){
        //CONTROLLO SOMMA ELEMENTI COLONNE
        for(int i=0;i<DIM;i++){
            somma = 0;
            if(continua == true){
                for(int j=0;j<DIM;j++){
                    somma = somma + mat[j][i];
                }
                //controllo somma sia = a 15
                if(somma==15){
                    continua= true;
                }else{
                    continua = false;
                }
            }
        }
        
        if (continua==true){
            //CONTROLLO SOMMA ELEMENTI DIAGONALI

            //DIAGONALE 1
            somma =0;
            somma = mat[0][0] + mat[1][1] + mat[2][2];
            if(somma == 15){
                //DIAGONALE 2
                somma = mat[0][2] + mat[1][1] + mat[2][0];
                if(somma == 15){
                    continua = true;
                }else{
                    continua = false;
                } 
            }else{
                continua = false;
            }
        }
    }

return continua;
}
//funzione di stampa della matrice mat[DIM][DIM]
void stampa(int mat[DIM][DIM]){
    for(int i=0;i<DIM;i++){
        for(int j=0;j<DIM;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}