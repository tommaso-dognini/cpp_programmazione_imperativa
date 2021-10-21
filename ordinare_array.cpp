#include <iostream>
#define DIM 100
using namespace std;

int dimensione ();
void carica1(int v[], int d);
void carica2(int v[],int x[],int d);
void stampa(int v[], int d);

int main(){

int a[DIM];
int b[DIM];
int n=0;

	n =dimensione();
	carica1(a,n);
	carica2(a,b,n);
	stampa(b,n);
return 0;
}

int dimensione(){
int n=0;
	do{
		cout<<"Lunghezza array: ";
		cin>>n;
	}while(n<0 || n>DIM);
return n;
}

void carica1(int v[], int d){
    for(int i=0;i<d;i++){
        cout<<"Numero: ";
        cin>>v[i];
    }
return;
}

void carica2 (int v[], int x[], int d){

    for (int i=0;i<d;i++){
        if(v[i]<v[i+1]){
            x[i]=v[i];
        }else{
            x[i]=v[i+1];
        }

    }
return;
}

void stampa(int v[], int d){

    for(int i=0;i<d;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}







