#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 100
using namespace std;

int dimensione();
void carica(int v[],int d);
void ordinamento(int v[],int d);
void  controllo(int v[],int x[],int y[],int d);
void stampa(int v[],int d,int p);


int main(){
    int a[DIM],pos[DIM],neg[DIM];
    int n;

    n = dimensione();
    srand(time(NULL));
    carica(a,n);
    ordinamento(a,n);
    controllo(a,pos,neg,n);
return 0;
}

int dimensione(){
    int n;
    do{
        cout<<"Inserisci la dimensione dell'array: ";
        cin>>n;
    }while(n<0 || n>DIM);
return n;
}
void carica(int v[],int d){
    for(int i=0;i<d;i++){
        v[i]=rand() % 41 -20;
        //stampo per controllo
        cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}
void ordinamento(int v[], int d){
    int p;
    int appo;
    for(int i=0;i<=d-2;i++){
        p=i;
        for(int j=i+1;j<d;j++){
            if(v[j]<v[p]){
                p=j;
            }
        }
        if(p!=i){
            appo=v[i];
            v[i]=v[p];
            v[p]=appo;
        }
    }
return;
}
void controllo(int v[], int x[],int y[], int d){
    //contatore dei pos
    int n_pos=0;
    //contatore dei neg
    int n_neg=0;
    //p per lo switch nella stampa: p=0 pos, p=1 neg
    int p;
    for(int i=0;i<d;i++){
        if(v[i]>=0){
            x[n_pos]=v[i];
            n_pos++;
        }else{
            y[n_neg]=v[i];
            n_neg++;
        }
    }

    p=0;
    stampa(x,n_pos,p);
    p=1;
    stampa(y,n_neg,p);
return;
}
void stampa(int v[], int d,int p){
    switch(p){
        case 0:
            cout<<"Vettore dei positivi: ";
            for(int i=0;i<d;i++){
            cout<<v[i]<<" ";
            }
            cout<<endl;
            break;
        case 1:
            cout<<"Vettore dei negativi: ";
            for(int i=0;i<d;i++){
            cout<<v[i]<<" ";
            }
            cout<<endl;
            break;
        default:
            break;
    }
return;
}
