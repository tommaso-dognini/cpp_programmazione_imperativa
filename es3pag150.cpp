#include <iostream>
using namespace std;

void controllo();
int main(){

        controllo();

return 0;
}



void controllo(){
 int cont=0;
 int cont2=0;
 int a=0;

    do{
    cout<<"Inserisci il numero a: "<<endl;
    cin>>a;
    cont2++;

    if(a!=0){
        cont++;
    }
    }while(a%2==0);

    cout<<"I numeri inseriti sono: "<<cont2<<endl;
    cout<<"I nuemeri diversi da 0 sono: "<<cont<<endl;

    retu

    }






