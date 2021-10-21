#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 100
using namespace std;

void carica(int v[], int d);
void stampa (int v[], int d);
int somma(int v[], int d, int x);
void media (int v[],int d);
void minimo(int v[],int d);
void massimo(int v[],int d);

int main(){
int a[DIM];
int n=12,s=0;
int tot=0;

    srand(time(NULL));
    //inserimento presenze con funzione numeri casuali da 0 a 100 (potrebbe significare la percentuale sull'anno)
    carica (a,n);
    cout<<"Riepilogo presenze"<<endl;
    stampa (a,n);
    media(a,n);

    //tot=0 somma di tutti i mesi; tot=1 somma dei mesi estivi
    tot=1;
    s= somma(a,n,tot);
    cout<<"Somma delle presente nei mesi estivi: "<<s<<endl;

    massimo(a,n);
    minimo (a,n);
return 0;
}

void carica (int v[], int d){
    /*for (int i=0;i<d;i++){
        v[i]= rand()%100;
    }*/

    for(int i=0;i<d;i++){
        do{
        cout<<"Numero presenze mese "<<i+1<<" : ";
        cin>>v[i];
        }while(v[i]<0);
    }
    cout<<endl;
return;
}

void stampa (int v[], int d){

    for (int i=0;i<d;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}


int somma(int v[], int d,int x){
int s=0;
    //tot=0 somma di tutti i mesi; tot=1 somma dei mesi estivi
    if(x==0){
        for(int i=0;i<d;i++){
            s=s+v[i];
        }
    }else{
        for(int i=5;i<=7;i++){
            s=s+v[i];
        }

    }
    return s;
}

void media (int v[],int d){
double m=0;
int tot;
int s=0,s1=0;

    //tot=0 somma di tutti i mesi; tot=1 somma dei mesi estivi
    tot=0;
    s= somma(v,d,tot);
    m=s/d;
    cout<<"Media delle presenze nell'anno: "<<m<<endl;

    tot=1;
    s1= somma(v,d,tot);
    m=(s-s1)/9;
    cout<<"Media delle presenze escludendo i mesi estivi: "<<m<<endl;

    return;
}

void massimo(int v[],int d){
int m=v[0];

    for(int i=1;i<d;i++){
      if (v[i]>m){
        m=v[i];
      }
    }

    cout<<"Il massimo delle presenze mensili e' stato: "<<m<<endl;

return;
}


void minimo (int v[],int d){
int m=v[0];

    for(int i=1;i<d;i++){
      if (v[i]<m){
        m=v[i];
      }
    }

    cout<<"Il minimo delle presenze mensili e' stato: "<<m<<endl;

return;
}
