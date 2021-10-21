#include <iostream>
using namespace std;
int main(){
    int a,n;
    double m,s;
    char r;

    n=0;
    s=0;
    do {

        cout<<"inserisci un voto: "<<endl;
        cin>>a;

        if(a<10 && a>1){
            n=n+1;
            s=s+a;
            m=double(s/n);

            cout<<"Se vuoi continuare premi S, altrimenti N"<<endl;
            cin>>r;
        }else{
            cout<<"Voto inserito non valido"<<endl;
            cout<<"Se vuoi inserire un nuovo voto premi S, altrimenti N "<<endl;
            cin>>r;
        }



    }while(r=='s'|| r=='S');

    cout<<"La media dei voti e':  "<<m<<endl;






return 0;
}
