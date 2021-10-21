#include <iostream>
#define DIM 100
using namespace std;

int numero_dati();
void carica_array(int v[], int d);
void carica_array_m(int v[], double x[], int d);
void stampa (double x[], int d);

int main(){

int a[DIM];
double m[DIM];
int n=0;

    n = numero_dati();

    carica_array(a,n);

    carica_array_m(a,m,n);

    stampa(m,n);

return 0;
}

int numero_dati() {
int n=0;
    do{
        cout<<"Inserisci il numero di dati da inserire: ";
        cin>>n;
    }while(n<0 || n>DIM);

return n;
}

void carica_array(int v[], int d) {

    for(int i=0;i<d;i++){
        cout<<"valore: ";
        cin>>v[i];
    }
return;
}

void carica_array_m(int v[], double x[], int d){

    x[0] = (double)(2*v[0]+v[1])/3;

    for(int i=1;i<d-1;i++){
      x[i]= (double)(v[i-1]+v[i]+v[i+1])/3;
    }

    x[d-1] = (double)(2*v[d-1]+v[d-2])/3;

return;
}

void stampa (double x[],int d){

    cout<<"Array delle medie: ";
    for(int i=0;i<d;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

return;
}














