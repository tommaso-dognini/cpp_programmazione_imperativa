#include <iostream>
using namespace std;
int main(){
    int a;

    do{
        cout<<"Inserisci un numero: "<<endl;
        cin>>a;
    }while(a<=0);

    cout<<"I numeri pari sono: "<<endl;

    if(a%2==0){
        cout<<a<<endl;
        while(a-2>0){
            a=a-2;
            cout<<a<<endl;
        }
    }else{
        a=a-1;
        cout<<a<<endl;
        while(a-2>0){
            a=a-2;
            cout<<a<<endl;
        }
    }


return 0;
}
