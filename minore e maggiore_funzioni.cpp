#include <iostream>
using namespace std;

int maggiore (int x, int y);

int main(){

    int a,b,c;


    cout<<"Inserisci il numero a: "<<endl;
    cin>>a;
    cout<<"Inserisci il numero b: "<<endl;
    cin>>b;

    cout<<endl<<endl;

    c = maggiore(a,b);

    if(c==a && c==b){
        cout<<"I due numeri sono uguali"<<endl;
    }else{
    cout<<"Il maggioriore e': "<<c<<endl;
    }



return 0;
}

int maggiore (int x, int y){

    int m;

    if (x>y){
        m=x;
    }else{
        m=y;
    }

 return m;

}
