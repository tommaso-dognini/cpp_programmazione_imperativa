#include <iostream>
using namespace std;

int fattoriale(int x);
int main(){
int n=0,ris=0;

    do{
    cout<<"Inserisci il numero di cui vuoi sapere il fattoriale: "<<endl;
    cin>>n;
    }while(n<=0);

    ris=fattoriale(n);

    cout<<"Fattoriale di "<<n<<"= "<<ris<<endl;

return 0;
}

int fattoriale(int x){
int fatt=1;
    for(int i=1;i<=x;i++){
        fatt=fatt*i;
    }
    return fatt;
}
