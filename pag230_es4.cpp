#include <iostream>
#include <ctime>
#include <stdlib.h>
#define DIM 100
using namespace std;

int dim();
void carica(int v[], int d);
void oridinamento (int v[], int d);
int controllo (int v[], int d, int x);
void stampa( int v[], int d);

int main(){
    int a[DIM];
    int n;
    int num;

    srand(time(NULL));
    n = dim();
    carica(a,n);
    oridinamento(a,n);  

    cout<<"Inserisci il numero MAX: ";
    cin>>num;
    n= controllo(a,n,num);
    oridinamento(a,n);
    stampa(a,n);
return 0;    
}

int dim(){
    int n;
    do{
        cout<<"Inserisci la dimensione dell'array: ";
        cin>>n;
    }while(n<0 || n>DIM);
return n;
}
void carica(int v[], int d){
    for (int i=0;i<d;i++){
        v[i]= rand()%1000;
        //stampo per controllare
        cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}
void oridinamento (int v[], int d){
    int p;
    int appo=0;

    for(int i=0;i<=d-2;i++){
        p=i;
        for (int j=i+1;j<d;j++){
            if(v[j]<v[p]){
                p=j;
            }
        }
        if(p!=i){
            appo =v[i];
            v[i]=v[p];
            v[p]=appo;
        }    
    }
return;
}
int controllo(int v[], int d, int x){
    int p;
    p=0;
    for(int j=0;j<d;j++){
        if(v[j]<x){
            for(int i=1;i<d;i++){
                v[i-1]=v[i];
            }
            d--;
        }
    }

return d;
}

void stampa(int v[], int d){
    for (int i=0;i<d;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}