#include <iostream>
using namespace std;
#define DIM 100

int main(){

int n=0;
int appo=0;
int a[DIM];
int massimo,minimo;

    do{
        cout<<"Quanti numeri?";
        cin>>n;
    }while(n<=0 || n>DIM);

    for (int i=0; i<n; i++){
        cout<<"Numero: ";
        cin>>a[i];
    }

    massimo= a[0];
    minimo = a[0];

    for(int i=0; i<n; i++){
        if(a[i]>massimo){
            massimo=a[i];
        }else{
            if(a[i]<minimo){
              minimo=a[i];
            }

        }

    }

    cout<<"massimo= "<<massimo<<endl;
    cout<<"minimo= "<<minimo<<endl;

return 0;
}
