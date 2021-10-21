#include <iostream>
using namespace std;
#define DIM 100

int dimensione();
void carica(int v[], int d);
void carica1 (int v1[], int v2[], int d);
void carica2 (int v1[], int v2[], int d);
void stampa(int v[], int d);
int main(){
    int a[DIM], b[DIM];
    int n;

    cout<<"Dimensione dell'arrey: "<<endl;
    n=dimensione();
    carica(a,n);
    //non mantiene ordine originale
    carica1(a,b,n);
    stampa (b,n);

    //mantiene ordine originale
    carica2 (a,b,n);
    stampa (b,n);


return 0;
}

int dimensione(){
int k=0;

    do{
        cout<<"Quanti numeri? ";
        cin>>k;

    }while(k<=0 || k>DIM);

    return k;
}


void carica(int v[], int d){

    for(int i=0; i<d; i++){
        cout<<"Numero: ";
        cin>>v[i];
    }
    return;
}
//si può usare solo se i due arrey hanno la stessa dimensione
void carica1 (int v1[], int v2[], int d){

int bp=0;
int bd=d-1;

    for (int i=0; i<d; i++){
        if (v1[i]%2==0){
            v2[bp]=v1[i];
            bp++;
        }else{
            v2[bd]=v1[i];
            bd--;

        }
    }
    return;
}

void stampa(int v[], int d){
    for(int i=0; i<d; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//si può usare anche se le dimensioni degli arrey sono diversi
void carica2 (int v1[], int v2[], int d){
    int ib=0;

    for (int i=0; i<d; i++){
        if(v1[i]%2==0){
            v2[ib]=v1[i];
            ib++;
        }
    }
    for(int i=0;i<d;i++){
        if(v1[i]%2!=0){
            v2[ib]=v1[i];
            ib++;
        }
    }
return;
}
















