#include <iostream>
using namespace std;

int main(){
    int n,s;
    s=0;
    cout<<"Il progrmma esegue la somma di tutti i numeri multipli di 5 e compresi tra 10 e 100"<<endl;

   for (n=15,n>10&&n<100,n=n+5){
            s=n;
            n=n+5;
            s=s+n;
    }

    cout<<s<<endl;



}
