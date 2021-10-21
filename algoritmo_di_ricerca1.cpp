#include <iostream>
#define DIM 10
using namespace std;
void carica (int v[]);
void ord_selection(int v[]);
void stampa(int v[]);

int main(){
    int a[DIM];

    carica(a);
    ord_selection(a);
    stampa(a);
return 0;
}

void carica (int v[]){
    for(int i=0;i<DIM;i++){
        cout<<"Numero: ";
        cin>>v[i];
    }
return;
}
void ord_selection(int v[]){
    int pos_min;
    int appo=0;

    for(int i=0;i<=DIM-2;i++){
        pos_min = i;
        for(int j=i+1;j<DIM;j++){
            if (v[j]<v[pos_min]){
                pos_min = j;
            }
        }

        if (pos_min!=i){
            appo = v[i];
            v[i] = v[pos_min];
            v[pos_min] = appo;
        }
        //stampa di controllo
        stampa(v);

    }
return;
}

void stampa(int v[]){

    for(int i=0;i<DIM;i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}
