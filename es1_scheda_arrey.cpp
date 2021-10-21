#include <iostream>
using namespace std;
int main(){
    int n=0;

   do{
    cout<<"Inserisci il numero di elementi:"<<endl;
    cin>>n;
    }while(n<=0);

    int a[n],b[n];

    for(int i=0;i<n; i++){
        cout<<"Numero = ";
        cin>>a[i];
    }
     for( int i=0; i<n; i++){
        b[i]= a[i];

     }

     for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
        }
    cout<<endl;
return 0;
}
