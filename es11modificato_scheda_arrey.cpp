#include <iostream>
using namespace std;
#define DIM 100

int dimensione ();
void carica_arrey(int v[], int d);
void carica_terzo(int v1[], int v2[], int v3[], int x, int y, int z);
void stampa_arrey(int v[], int d);

int main(){
    int a[DIM],b[DIM],c[DIM];
    int na,nb,nc;

    cout<<"Primo vettore: "<<endl;
    na= dimensione();
    cout<<"secondo vettore: "<<endl;
    nb= dimensione ();
    cout<<"Terzo vettore: "<<endl;
    nc= dimensione ();



    cout<<"Primo vettore"<<endl;
    carica_arrey(a,na);
    cout<<endl<<"Secondo vettore"<<endl;
    carica_arrey(b,nb);

    carica_terzo(a,b,c,na,nb,nc);



return 0;
}
int dimensione (){
int n=0;
    do{
        cout<<"Quanti numeri? ";
        cin>>n;
    } while(n>DIM || n<=0);

return n;
}

void carica_arrey(int v[], int d){

    for(int i=0; i<d; i++){
        cout<<"Numero: ";
        cin>>v[i];
    }
    return;
}

void carica_terzo(int v1[], int v2[], int v3[], int x, int y, int z){
    z=0;

    if (x>=y){
        for (int i=0; i<y; i++){
            if(v1[i]== v2[i]){
                v3[z]= v1[i];
                z++;
            }
        }
    }else{
        for (int i=0; i<x; i++){
            if(v1[i]== v2[i]){
                v3[z]= v1[i];
                z++;
            }
        }
    }


    cout<<endl<<"Terzo vettore: "<<endl;
    stampa_arrey(v3,z);
    return;
}


void stampa_arrey(int v[], int d){

    for(int i=0; i<d; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
