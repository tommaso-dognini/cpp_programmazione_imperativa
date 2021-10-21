#include <iostream>
using namespace std;
#define DIM 100
int main(){
    int n=0,k=0;
    int a[DIM];
    bool flag=true;

    do{
        cout<<"Quanti numeri: ";
        cin>>n;
    }while(n<=0 || n>DIM);

    for(int i=0; i<n; i++){
        cout<<"Numero: ";
        cin>>a[i];
    }

    flag=true;
    k=0;
    while(flag==true && k<n-1){
        if(a[k]>a[k+1]){
            flag=false;
        }
        k++;
    }

    if(flag==true){
        cout<<"Arrey ordinato"<<endl;
    }else{
        cout<<"Arey non ordinato"<<endl;
    }

    cout<<endl;

return 0;
}
