#include <iostream>
using namespace std;
#define DIM 100

void carica_arrey(int v[], int d);
void carica_terzo(int v1[], int v2[], int v3[], int d);
void stampa_arrey(int v[], int d);

int main(){
    int a[DIM],b[DIM],c[DIM];
    int n=0;

    do{
        cout<<"Quanti numeri?"<<endl;
        cin>>n;
    } while(n>DIM || n<=0);

    cout<<"Primo vettore"<<endl;
    carica_arrey(a,n);
    cout<<endl<<"Secondo vettore"<<endl;
    carica_arrey(b,n);

    carica_terzo(a,b,c,n);



return 0;
}

void carica_arrey(int v[], int d){

    for(int i=0; i<d; i++){
        cout<<"Numero: "<<endl;
        cin>>v[i];
    }
    return;
}

void carica_terzo(int v1[], int v2[], int v3[], int d){
    int k=0;

    for (int i=0; i<d; i++){
        if(v1[i]== v2[i]){
            v3[k]= v1[i];
            k++;
        }
    }
    cout<<endl<<"Terzo vettore: "<<endl;
    stampa_arrey(v3,k);
    return;
}


void stampa_arrey(int v[], int d){

    for(int i=0; i<d; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
