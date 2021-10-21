#include <iostream>
using namespace std;
int main(){
    int num,n,cont,s,cubo;


    n=1;
    s=0;

    do{
    cout<<"Inserisci il numero dei primi num numeri di cui vuoi sapere il cubo (con 0<num<10): "<<endl;
    cin>>num;

    }while(num<=0 || num>=10);
    cout<<"I cubi dei primi num numeri sono: "<<endl;

    do{
    s=n*(n-1)+1;
    cubo=s;
    cont=1;
    while(cont<n){
        s=s+2;
        cubo=cubo+s;
        cont=cont+1;

    }
    cout<<cubo<<endl;
    n=n+1;

    }while(n<=num);





return 0;
}
