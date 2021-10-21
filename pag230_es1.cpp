#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 30
using namespace std;

void carica(int v[]);
void ordinamento(int v[]);
void stampa(int v[]);

int main(){
    int a[DIM];

    srand(time(NULL));
    carica(a);
    // ordina tutto
    ordinamento(a);
    //stampa solo i pari
    stampa(a);
}

void carica(int v[]){
    for (int i = 0; i < DIM; i++){
        v[i] = rand() % 1000;
        //cout << v[i] << " ";
    }
    //cout << endl;
    return;
}

void ordinamento(int v[]){
    int p;
    int appo = 0;
    for (int i = 0; i <= DIM - 2; i++){
        p = i;
        for (int j = i + 1; j < DIM; j++){
            if (v[j] < v[p]){
                p = j;
            }
        }
        if (p != i){
            appo = v[i];
            v[i] = v[p];
            v[p] = appo;
        }
    }
}

void stampa(int v[]){
    for (int i = 0; i < DIM; i++){
        if (v[i] % 2 == 0){
            cout << v[i] << " ";
        }
    }
    cout << endl;
    return;
}
