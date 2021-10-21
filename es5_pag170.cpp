#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int genera_numero();
bool indovina_numero(int x);

int main(){
int num=0,cont,scelta;
bool ris,continua=true;

    do{
        num=genera_numero();
        cont=0;
        scelta=0;

        do{
            ris = indovina_numero(num);
            if(ris==true){
                cout<<"Complimenti numero indovinato!"<<endl;
                cont=5;
            }else{
                cont++;
                cout<<"Prova di nuovo ti restano ancora "<<4-cont<<" tentativi"<<endl;
            }
        }while(cont<4);
        cout<<endl<<endl;
        cout<<"MENU':"<<endl;
        cout<<"1=Continua"<<endl;
        cout<<"2=Esci"<<endl;
        cin>>scelta;
        switch(scelta){

            case 1:
                continua=true;
                break;
            case 2:
                continua=false;
                break;
            default:
                break;
        }

    }while(continua==true);




return 0;
}

int genera_numero(){
    int num,cont=0;

    srand(time(NULL));
    num=rand()%8999 +1000 ;

    return num;
}


bool indovina_numero(int x){
    int a,ris;
// e se il numero inizia con lo zero?

    do{
    cout<<"Inserisci un numero di 4 cifre per indovinare: "<<endl;
    cin>>a;
    }while(a>9999 || a<1000);

    if(a>x){
        cout<<"Troppo grande"<<endl;
        ris=false;
    }else{
        if(a<x){
            cout<<"Troppo piccolo"<<endl;
            ris=false;
        }else{
            ris=true;
        }
    }

    return ris;
}






