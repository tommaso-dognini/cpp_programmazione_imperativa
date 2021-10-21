#include <iostream>
#define DIM 5
using namespace std;



int main(){
    int lettera;
    int num_lettere;
    bool maiusc=true;
    char matr_codifica[DIM][DIM];
    char l;
    
    //codifica
    char parola[num_lettere];
    int controllo;
    int dim_parola_codificata=0;
    int cont=0;
    char lettera_da_cercare;
    int parola_codificata[dim_parola_codificata];
    


    /*1) valorizzare la matrice per effettuare la codifica
        - uso la codifica delle lettere tabella ascii parto dalla A e poi aggiungo uno per B ecc
        */    
    
    lettera = (int)'A';
    for(int i=0; i<DIM;i++){
        for(int j=0;j<DIM;j++){
            matr_codifica[i][j] = (char)lettera;
            lettera ++;
            if(lettera==(int)'Q'){
                lettera++;
            }
        }
    }

    // stampo per verificare che sia giusto
    for(int i=0; i<DIM;i++){
        for(int j=0;j<DIM;j++){
            cout<<matr_codifica[i][j]<<" ";
        }
        cout<<endl;
    }

    //chiedo all'utente se vuole codificare o decodificare
    int scelta;
    do{
        cout<<"Digita 1 per eseguere una codifica oppure 2 per eseguerire una decodifica: ";
        cin>>scelta;
    }while(scelta!=1 && scelta!=2);
    
    if(scelta==1){
        //CODIFICA

         //2)chiedo all'utente il numero di lettere della parola
        do{
            cout<<"Inserisci il numero di lettere della parola: ";
            cin>>num_lettere;
        }while(num_lettere<0);

        //3) creo un arrey parola e con ciclo for riempo con lettere della parola
        //4)controllo su maiscole, spazi e simboli

            
        do{
            for(int i=0;i<num_lettere;i++){
                //chiedo all'utente di inserire una lettera della parola per volta
                do{
                    cout<<"Inserisci la: "<<i+1<<"° lettera (in maiuscolo) della parola ";
                    cin>>l;
                    //controllo che la lettera immessa dall'utente sia maiuscola
                    if((int)l<65 || (int)l>90){
                        cout<<"La lettera inserita non è in MAIUSCOLO, reinserila!";
                        maiusc= false;// variabile per controllo 1= va bene 2= parola inseità sbaglaita
                    }
                }while(maiusc==false);
                parola[i]=l;
            }
            // stampo la parola inserita e chiedo all'utente di verificare se è giusta
            for(int i=0;i<num_lettere;i++){
                    cout<<parola[i];
            }
            cout<<endl;
            cout<<"La parola inserita è corretta? digita 1 per si o 2 per no ";
            cin>>controllo;
        }while(controllo==2);


        //5)creo funzione che riempe array risposta leggendo dal array parola e facendo al codifica.
            //* prbabilmente mi serve algoritmo di ricerca.
            
        dim_parola_codificata = num_lettere *2;
            
            
        //funzione per la codifica
        for(int k=0; k<dim_parola_codificata;k=k+2){
            lettera_da_cercare = parola[cont];
            for(int i=0;i<DIM;i++){
                for(int j=0;j<DIM;j++){
                    if(lettera_da_cercare == 'Q'){
                        parola_codificata[k]=1;
                        parola_codificata[k+1]=3;
                    }else{
                        if(matr_codifica[i][j]==lettera_da_cercare){
                            parola_codificata[k]=j+1;
                            parola_codificata[k+1]=i+1;  
                        }
                    }   
                }
            }
        cont++;
        }

        //6) stampo la codifica

        cout<<"Parola codificata: "<<endl;
        for(int i=0;i<dim_parola_codificata;i++){
            cout<<parola_codificata[i];
        }
        cout<<endl;
    }else{
        if(scelta==2){
            //DECODIFICA
            int dim_codifica;
            cout<<"Inserisci la il nuemro di cifre: ";
            cout<<dim_codifica;
            
            
        }else{
            //caso defoult
            cout<<"Scelta non valida, ripetere";
        } 
    }

    
return 0;
}

