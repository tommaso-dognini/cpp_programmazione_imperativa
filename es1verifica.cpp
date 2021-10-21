#include <iostream>
using namespace std;
int main(){
    int n,cont,cont2;
    cont=0;
    cont2=0;

    do{
        do{
            cout<<"Inserisci un numero: "<<endl;
            cin>>n;
        }while(n<=0);

        if(n%3==0){
            cout<<"Il numero inserito e' multiplo di 3"<<endl;
            cont=cont+1;
        }
        cont2=cont2+1;
    }while(cont2<10);

    if(cont==0){
        cout<<"Nessun multiplo di 3"<<endl;
    }

return 0;
}
