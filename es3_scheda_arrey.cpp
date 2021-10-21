#include <iostream>
using namespace std;

#define DIM 100

int main(){

int n=0;
int appo=0;
int a[DIM];

    do{
        cout<<"Quanti numeri?";
        cin>>n;
    }while(n<=0 || n>DIM);

    for (int i=0; i<n; i++){
        cout<<"Numero: ";
        cin>>a[i];
    }
    for(int i=0; i<n/2; i++){
        appo=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=appo;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}
