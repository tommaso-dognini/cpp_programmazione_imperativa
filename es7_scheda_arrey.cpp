#include <iostream>
using namespace std;
#define DIM 100

int main(){
    int a[DIM];
    int cont=0;
    int x=0, n=0;

    do{
        cout<<"Quanti numeri?"<<endl;
        cin>>n;
    } while(n>DIM || n<=0);

    for(int i=0; i<n; i++){
        cout<<"Numero: "<<endl;
        cin>>a[i];
    }

    cout<<"Inserisci il numero x: "<<endl;
    cin>>x;

    for (int i=0; i<n; i++){
        if(x==a[i]){
            cont++;
        }
    }
    cout<<endl;
    cout<<cont<<endl;

return 0;
}
