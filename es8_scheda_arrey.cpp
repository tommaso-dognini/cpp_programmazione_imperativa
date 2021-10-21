#include <iostream>
using namespace std;
#define DIM 100

int main(){
    int a[DIM];
    int cont=0;
    int s=0,s1=0, n=0;

    do{
        cout<<"Quanti numeri?"<<endl;
        cin>>n;
    } while(n>DIM || n<=0);

    for(int i=0; i<n; i++){
        cout<<"Numero: "<<endl;
        cin>>a[i];
    }

    for (int i=0; i<n; i++){
        if(a[i]%2==0){
            s=s+a[i];
        }else{
            s1=s1+a[i];
        }
    }
    cout<<endl;
    cout<<"Somma degli elementi pari = "<<s<<endl;
    cout<<"Somma degli elementi dispari = "<<s1<<endl;

return 0;
}
