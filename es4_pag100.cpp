#include <iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"Il progrmma esegue la somma di tutti i numeri multipli di 5 e compresi tra 10 e 100"<<endl;
    n=15;

    while(n>10&&n<100){
            s=n;
            n=n+5;
            s=s+n;
    }
    cout<<s;

    return 0;
}
