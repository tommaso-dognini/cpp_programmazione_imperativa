#include <iostream>
using namespace std;
int main(){
    int a,b,n,q;


    do{
    cout<<"Inserisci un numero a: "<<endl;
    cin>>a;
    cout<<"Inserisci un numero b: "<<endl;
    cin>>b;

    }while(a==0 || b==0);

    q = a;
    n=0;
    while(n<b){

        n=n+1;
        cout<<"N iterazioni: "<<n<<endl;

        q=q-b;
        cout<<q<<endl;


    }









return 0;
}
