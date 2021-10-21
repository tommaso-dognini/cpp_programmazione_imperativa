#include <iostream>
using namespace std;
int main(){
    int a,n,s;

    s=0;
    a=1;

    while(a>0){

        cout<<"Inserisci un numero: "<<endl;
        cin>>a;
        if(a>0){
            s=s+a;
            cout<<"Somma= "<<s<<endl;
        }else{
            cout<<"Somma= "<<s<<endl;
        }
    }

return 0;
}
