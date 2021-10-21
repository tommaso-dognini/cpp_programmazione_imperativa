#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 100
using namespace std;

int dimensione();
void carica(int v[],int d);
void controllo(int v[],int d);
void ordinamento(int v[],int d);
void stampa(int v[], int d);

int main(){
    int a[DIM];
    int n=0;
    srand(time(NULL));

    n = dimensione();
    carica(a,n);
    ordinamento(a,n);
    controllo(a,n);
    ordinamento(a,n);
    cout<<"Array ordinato: "<<endl;
    stampa(a,n);

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



void carica(int v[], int d){
    for (int i = 0; i < d; i++){
        v[i] = rand() % 100;
        // stampo l'array iniziale per vedere se funziona
        cout << v[i] << " ";
    }
    cout << endl;

    /* ciclo per vedere se funziona

    for(int i=0;i<d;i++){
        cout<<"Numero: ";
        cin>>v[i];
    }
    */

return;
}

void ordinamento(int v[],int d){
    int p;
    int appo = 0;
    for (int i=0;i<=d-2;i++){
        p = i;
        for (int j=i+1;j<d;j++){
            if (v[j]>v[p]){
                p = j;
            }
        }
        if (p!=i){
            appo = v[i];
            v[i] = v[p];
            v[p] = appo;
        }
    }
return;
}

void controllo(int v[],int d){
    int a;
    for(int i=1;i<d;i++){
        if (v[i]==v[i-1]){
            v[i-1]=0;
        }    
    }
return ;
}

void stampa(int v[],int d){
    for (int i=0;i<d;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}
