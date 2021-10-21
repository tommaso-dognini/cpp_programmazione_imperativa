#include <iostream>
using namespace std;
int main(){
    int num,s,n;

    do{
        cout<<"inserisci un numero num: "<<endl;
        cin>>num;
    }while(num<=0);

    n=1;
    s=num;

    while(n>0){
        n=num-1;
        s=s+n;
    }
    s=s*2;
    cout<<"Somma= "<<s<<endl;


return 0;
}
