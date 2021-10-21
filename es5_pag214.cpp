#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
#define DIM 100

void genera_arrey(int v[], int d);
void controllo(int v[],int d);
void stampa (int v[], int d);

int main(){
int d=6;
int n=0;
int a[DIM];

    do{
    cout<<"Quanti biglietti? ";
    cin>>n;
    }while(n<=0);

srand(time(NULL));

    for (int i=0; i<n ; i++){
        genera_arrey(a,d);
        stampa(a,d);
        controllo (a,d);
    }

return 0;
}

void genera_arrey(int v[], int d){

    for(int i=0;i<d;i++){
      v[i]= rand()%10;
    }
return;
}
void stampa (int v[], int d){

    for(int i=0;i<d;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}


void controllo(int v[],int d){
int s=0;
    for(int i=0;i<d;i++){
        if(i<3){
           s=s+v[i];
        }else{
            s=s-v[i];
        }
    }

    if (s==0){
        cout<<"Buona giornata!"<<endl;
    }
return;
}
