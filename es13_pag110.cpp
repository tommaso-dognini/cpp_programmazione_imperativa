#include <iostream>
using namespace std;
int main(){
    int a,b,n,s;


    do{
        cout<<"Inserisci il primo numero"<<endl;
        cin>>a;
        cout<<"Inserisci il secondo numero"<<endl;
        cin>>b;

    }while(a<=0 || b<=0);

    n=0;
    s=0;
    while(n<b){
        s=s+a;
        n=n+1;
    };

    cout<<"Il prodotto e': "<<s<<endl;



return 0;
}
