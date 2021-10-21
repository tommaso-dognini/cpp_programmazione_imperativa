#include <iostream>
using namespace std;
int main(){
    int a,b,s,n;

    s=0;
    n=0;

    cout<<"inserisci un numero a: "<<endl;
    cin>>a;
    cout<<"Inserisci un numero b: "<<endl;
    cin>>b;

    while(n<b){
        s=s+a;
        cout<<"S= "<<s<<endl;
        n=n+1;
        cout<<"N iterazioni= "<<n<<endl;

    }




return 0;
}
