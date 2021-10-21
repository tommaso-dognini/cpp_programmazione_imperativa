#include <iostream>
using namespace std;

int main(){
    //definizione della matrice necessaria alla codifica-decodifica
    char mat[5][5];
    int l=(char)'A';
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j]=(char)l;
            l++;
                if(l==(int)'Q'){
                    l++;
                }
            }
        }
    //stampa matrice
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int scelta, dim;
    char parola[26];
    int numeri[42];
    //decisione tra codifica e decodifica
    cout<<"menu:"<<endl;
    cout<<"1. codifica"<<endl;
    cout<<"2.decodifica"<<endl;
    cout<<"scelta: ";
    cin>>scelta;
    switch(scelta){
        //codifica
    case 1:
        //richiesta dimensione parola
        do{
        cout<<"inserire il numero di caratteri della parola ";
        cin>>dim;
        }while(dim<=0||dim>26);
        //inserimento parola
        for(int i=0;i<dim;i++){
            cout<<"inserisci carattere maiuscolo ";
            cin>>parola[i];
        }
        cout<<endl<<"la parola inserita e' "<<endl;
        for(int i=0;i<dim;i++){
            cout<<parola[i];
        }
        //trasformazione delle q in k
        for(int i=0;i<dim;i++){
            if(parola[i]=='Q'){
                parola[i]='K';
            }
        }
        //codifica
        cout<<endl;
        for(int k=0;k<dim;k++){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(parola[k]==mat[i][j]){
                    numeri[2*k]=i+1;
                    numeri[2*k+1]=j+1;
                }
            }
        }
        }
        //stampa messagio codificato
        cout<<"il messaggio codificato e' "<<endl;
        for(int i=0;i<2*dim;i++){
            cout<<numeri[i];
        }
    break;
    case 2:
    //decodifica
    //richiesta dimesione numero da decodificare
        do{
            cout<<"Inserire numero di cifre del messagio da decodificare ";
            cin>>dim;
        }while(dim<=0||dim>42||dim%2==1);
        //inserimento numero
        for(int i=0;i<dim;i++){
            cout<<"inserisci cifra ";
            cin>>numeri[i];
        }
        cout<<endl<<"i numeri inseriti sono "<<endl;
        for(int i=0;i<dim;i++){
            cout<<numeri[i];
        }
        cout<<endl;
        int dim2;
        dim2=dim/2;
        //decodifica
        int a,b;
        for(int i=0;i<dim-1;i=i+2){
            a=numeri[i]-1;
            b=numeri[i+1]-1;
            parola[i/2]=(char)mat[a][b];
        }
        //trasformazione delle k in q dove necessario
        for(int i=1;i<dim2;i++){
            if(parola[i]=='U'&&parola[i-1]=='K'){
                parola[i-1]='Q';
            }
        }
        //trasformazione delle k in q per le parole con la doppia q
        for(int i=1;i<dim2;i++){
            if(parola[i]=='Q'&&parola[i-1]=='K'){
                parola[i-1]='Q';
            }
        }
        //stampa decodifica
        cout<<"il messaggio decodificato e' "<<endl;
        for(int i=0;i<dim2;i++){
            cout<<parola[i];
        }
    break;
    default:
    //default per scelte non valide
        cout<<"Scelta non valida "<<endl;
    break;
    }
return 0;
}
