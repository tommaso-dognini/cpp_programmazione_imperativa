#include <iostream>
using namespace std;

int numero(int p,int u);
int fatt(int nn);
int comb(int nn,int xx,int yy);

int main(){
    int x,y,n;
    int scelta;
    bool esci = false;
    int f,c;

    do{
        cout<<"Estremo inferiore "<<endl;
        x = numero(1,9);
        cout<<"Estremo superiore "<<endl;
        y = numero(1,9);
    }while(x>y);
    cout<<"Numero x "<<endl;
    n = numero(x,y);

    do{
       cout<<"1. Combinazioni "<<endl;
       cout<<"2. Fattoriale "<<endl;
       cout<<"3. Esci "<<endl;
       cout<<"Scelta: ";
       cin>>scelta;
       switch(scelta){
       case 1:
            c = comb(n,x,y);
            cout<<"Le combinazioni sono "<<c<<endl;
            break;
       case 2:
            f = fatt(n);
            cout<<"Fattoriale di x = "<<f<<endl;
            break;
       case 3:
            esci = true;
            break;
       default:
            break;

       }

    }while(esci==false);
    return 0;
}
int numero(int p,int u){
    int n;

    do{
        cout<<"Numero = ";
        cin>>n;
    }while(n<=p || n>=u);

    return n;
}
int fatt(int nn){
    int n=1;

    for(int i=1;i<=nn;i++){
        n = n*i;
    }
    return n;
}
int comb(int nn,int xx, int yy){
    int n,k;

    do{
        cout<<"Coefficiente k ";
        k= numero(xx,yy);
    }while(nn-k <=0);

    n= fatt(nn)/(fatt(k)*fatt(nn-k));

    return n;
}
