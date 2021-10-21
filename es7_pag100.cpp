#include <iostream>
using namespace std;
int main(){
    int a,s,num;

    s=0;
    num=0;
    while(s<200){
        cout<<"Inserisci un numero"<<endl;
        cin>>a;
        s=s+a;
        num=num+1;
    }

    cout<<"Stati inseriti "<<num<<" numeri"<<endl;


return 0;
}
