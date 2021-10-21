#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 100
using namespace std;

int indice ();
void carica (int v[], int d);
void controllo (int v[], int d);
void stampa (int v[], int d);

int main(){

int a[DIM];
int n=0;

    srand(time(NULL));

    n= indice();
    carica (a,n);
    cout<<"Array generato: ";
    stampa(a,n);

    controllo (a,n);
    stampa (a,n);


return 0;
}

int indice () {
int d=0;

    do{
       cout<<"Inserisci la grandezza dell'array: ";
       cin>>d;
    }while (d>DIM || d<0);

return d;
}

void carica (int v[], int d){

    for (int i=0;i<d;i++){
        v[i]= rand()% 39-20;
    }
return;
}

void controllo (int v[], int d) {
int neg=0;
int ps=0;
int cont=0;
int zeri;

ps=d-1;

    for (int i=0;i<d;i++){
        if(v[i]<0){
            v[neg]=v[i];
            neg++;
        }else{
            if (v[i]>0){
                v[ps]=v[i];
                ps--;
                cont++;
            }
        }
    }

    cout<<"array ordinato: ";
    stampa (v,d);
    zeri=d-(neg+cont);
    cout<<"zeri: "<<zeri<<endl;

    cont=0;

    if (zeri!=0){
        do{
            v[neg]=0;
            neg++;
            cont++;
        }while(cont<zeri);
    }

return;
}

void stampa (int v[], int d) {

    for (int i=0;i<d;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}













