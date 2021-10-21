#include <iostream>
using namespace std;

void stp(int x,int y,int z);

int main(){
    int n,a,b;
    a=0;
    b=0;

    cout<<"Inserisci gli estremi [a,b] dell'insieme desiderato (con a e b= numeri interi positivi): "<<endl;
    do{
        cout<<"a = "<<endl;
        cin>>a;
        cout<<"b = "<<endl;
        cin>>b;
    }while(a<=0|| b<=0);

    cout<<"Inserisci l'esponente n: "<<endl;
    do{
        cout<<"n = ";
        cin>>n;
    }while(n<=0);

    stp(n,a,b);

	return 0;
}

void stp(int x,int y,int z){
    int p;
    int cont = 0;

    for(int i=y;i<=z;i++){
        p = 1;
        cont = 0;
        while(cont<x){
            p = p*i;
            cont++;
        }
        cout<<p<<" ";
    }
    cout<<endl;
    return;
}


