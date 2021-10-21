#include <iostream>
using namespace std;
int main(){
    int a,b,s;

    s=0;

    cout<<"Inserisci un numero a: "<<endl<<endl;
    cin>>a;
    cout<<"Inserisci un numero b: "<<endl<<endl;
    cin>>b;
    cout<<endl;

    if(a>=b){
        s=a;
        do{
            s=s-b;
            cout<<s<<endl;
        }while(s>=3);
    }else{
        //b>a
        s=b;
        do{
            s=s-a;
            cout<<s<<endl;
        }while(s>=3);
    }




return 0;
}
