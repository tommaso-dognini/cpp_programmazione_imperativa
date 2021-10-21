#include <iostream>
using namespace std;
#define MAX 100
int main(){
    int n=0;
    int a[MAX];
    int b[MAX];

     do{
        cout<<"Inserisci il numero di elementi:"<<endl;
        cin>>n;
     }while(n<=0|| n>MAX);

     for(int i=0;i<n; i++){
        cout<<"Numero = ";
        cin>>a[i];
    }
     for( int i=0; i<n; i++){
        b[i]= a[n-1-i];
     }
     //oppure (con un solo controllo e solo quando dimensione è uguale
     /*for( int i=0,j=n-1; i<n; i++;j--){
        b[i]= a[j];
     }
    */

     for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
        }
    cout<<endl;
return 0;
}
