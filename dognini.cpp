#include <iostream>
#define DIM 100
using namespace std;

int  numero_dati();
void carica_array(int v[], int d);
void carica_array_b(int v[], int x[], int d);
void stampa (int v[], int x[],int d);
int main(){

int a[DIM];
int b[DIM];
int n;
// Richiesta del numero di dati da inserire
n = numero_dati();
// Inserimento dati primo array
carica_array(a,n);
// Caricamento secondo array
carica_array_b(a,b,n);
//Stampa elementi
stampa(a,b,n);
return 0;
}
int  numero_dati() {
 int n=0;
    do{
        cout<<"Inserisci numero di dati da inserire: ";
        cin>>n;
    }while (n<0 ||n>DIM);

return n;
}

void carica_array(int v[], int d) {

    for(int i=0;i<d;i++){
        do{
        cout<<"Numero: ";
        cin>>v[i];
        }while (v[i]<0);
    }
return;
}

void carica_array_b(int v[], int x[], int d) {

    x[0]=100;
    for(int i=1;i<d;i++){
        x[i]=v[i];
    }
}
void stampa (int v[], int x[], int d){

    cout<<"Elementi di b in posizioni pari: ";
    for(int i=0;i<d;i++){
        if(i%2==0){
            cout<<x[i]<<" ";
        }
    }
    cout<<endl;

    cout<<"Elementi di a in posizioni dispari: ";
    for(int i=0;i<d;i++){
        if(i%2!=0) {
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
return;
}
















