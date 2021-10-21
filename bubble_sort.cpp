#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 100
using namespace std;

int dimensione();
void carica(int v[],int v1[],int d);
void ordinamento(int v[],int d);
void ordinamento_buble(int v[],int d);
void stampa(int v[], int d);

int main(){
    int a[DIM];
    int b[DIM];
    int n=0;
    srand(time(NULL));

    n = dimensione();
    carica(a,b,n);
    cout<<"Passaggi ord selection: "<<endl;
    ordinamento(a,n);    
    cout<<"ord selection in modo crescente: "<<endl;
    stampa(a,n);
    
    cout<<"Passaggi ord buble: "<<endl;
    ordinamento_buble(b,n);
    cout<<"ord buble in modo crescente: "<<endl;
    stampa(b,n);
return 0;
}

int dimensione(){
    int n=0;
    do{
        cout<<"Quantui numeri?: ";
        cin>>n;
    }while(n<0 || n>DIM);
return n;
}

void carica(int v[],int v1[],int d){
    for (int i = 0; i < d; i++){
        v[i] = rand() % 100;
        v1[i]=v[i];
    }
    cout << endl;
return;
}
void ordinamento_buble(int v[],int d){
bool scambio=true;
int k;
int appo;
    
    k=d-1;
  
    while(scambio==true){
        scambio=false;
        for(int i=0;i<k;i++){
            if(v[i]>v[i+1]){
                appo = v[i];
                v[i]= v[i+1];
                v[i+1]= appo;
                scambio = true;
            }        
        }
        k--;
        stampa (v,d);
    }
return;
}

void ordinamento(int v[],int d){
    int p;
    int appo = 0;
    for (int i=0;i<=d-2;i++){
        p = i;
        for (int j=i+1;j<d;j++){
            if (v[j]<v[p]){
                p = j;
            }
        }
        if (p!=i){
            appo = v[i];
            v[i] = v[p];
            v[p] = appo;
        }
        stampa(v,d);
    }
return;
}

void stampa(int v[],int d){
    for (int i=0;i<d;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}
