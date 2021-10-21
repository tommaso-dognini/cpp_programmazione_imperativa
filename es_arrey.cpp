//scrivere un programma che carica in put un arrey di 20elementi con numeri casuali minori o uguali a 50, calcolca il loror quadrato e lo stampa.
#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 20
using namespace std;


int main(){

 int a[DIM];
 int q=0,s=0;
 double m=0;

    srand(time(NULL));

    for(int i=0;i<DIM;i++){
        a[i]=rand()%51;
    }
    //stampa dei quadrati
    for(int i=0; i<DIM; i++){
        q=a[i]*a[i];
        cout<<"a["<<i<<"]^2 = "<<q<<endl;

    }
    //stampa della media
    for(int i=0; i<DIM; i++){
        s=s+a[i];
    }
    m=(double)s/DIM;
    cout<<"Media = "<<m<<endl;




return 0;
}
