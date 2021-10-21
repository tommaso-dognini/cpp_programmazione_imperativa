#include <iostream>
using namespace std;
int main(){
    int x,y;
    double z;

   do{
    cout<<"Inserisci un numero x: "<<endl;
    cin>>x;
    cout<<"Inserisci un numero y: "<<endl;
    cin>>y;

   }while(x<=0 || y<=0);

   cout<<"Inserisci un numero z"<<endl;
   cin>>z;

    if(z>=x && z<=y){
        cout<<"Il numero z e' compreso nell'intervallo [x,y]"<<endl;
    }else{
        cout<<"Il numero z non e' compreso nell'intervallo [x,y]"<<endl;
    }

    return 0;
}
