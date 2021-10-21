#include <iostream>
#include <ctime>
#include <cmath>
#define DIM 100
using namespace std;

int genera_array(int v[]);
void stampa(int v[], int n);
void ordinamento(int v[], int n);
bool occorrenze(int v[], int n,int num);
int numero_da_cercare();

int main(){
    int a[DIM];
    int n;
    int num;
    bool x;


    srand(time(NULL));
    n = genera_array(a);
    ordinamento(a,n);
    
    //ricerca con sentinella
    num = numero_da_cercare();
    x = occorrenze(a,n,num);
    stampa (a,n);

    if(x==true){
        cout<<"Il numero e'presente nell'array!";
    }else{
        cout<<"Il numero non e' presente nell'array";
    }

return 0;
}

int genera_array(int v[]){
    int n;
    do{
        cout<<"Inserisci la dimensione dell'array: ";
        cin>>n;
    }while (n<0 || n>DIM);

    for(int i=0;i<n;i++){
        v[i]=rand()%101-50;
    }
return n;
}

//ordinamento crescente con ord selection
void ordinamento(int v[],int n){
    int pos_min;
    int appo=0;

    for(int i=0;i<=n-2;i++){
        pos_min = i;
        for(int j=i+1;j<n;j++){
            if (v[j]<v[pos_min]){
                pos_min = j;
            }
        }

        if (pos_min!=i){
            appo = v[i];
            v[i] = v[pos_min];
            v[pos_min] = appo;
        }
    }
return;
}

int numero_da_cercare(){
    int n;

    do{
        cout<<"Inserisci il numero per la ricerca: ";
        cin>>n;
    }while(n<-50 || n>50);

return n;
}

bool occorrenze(int v[], int n,int num){
    bool flag=false;
    int i=0;
    while(flag==false & i<n){
        if(v[i]==num){
            flag=true;
        }else{
            i++;
        }
    }
return flag;
}



void stampa(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return;
}


