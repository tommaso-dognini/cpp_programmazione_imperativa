#include <iostream>
using namespace std;
int stp();
int spesa(int x,int y);



int main(){
int n=0;
int scelta=0;
int ris=0;
bool continua=true;

    do{
    cout<<"Opzioni: "<<endl;
    cout<<"1.Guanti in cotone 10euro"<<endl;
    cout<<"2.Guanti in pelle 25 euro"<<endl;
    cout<<"3.Guanti in neoprene 30 euro"<<endl;
    cout<<"4. Esci"<<endl;
    cin>>scelta;
    switch(scelta){
    case 1:
        n=stp();
        ris = ris + spesa(n,scelta);
        continua=true;
        break;
    case 2:
        n=stp();
        ris = ris + spesa(n,scelta);
        continua=true;
        break;
    case 3:
        n=stp();
        ris = ris + spesa(n,scelta);
        continua=true;
        break;
    case 4:
        continua=false;
        break;
    default:
        cout<<"Scelta non valida"<<endl;
        break;
    }


     }while(continua==true);

    cout<<"LA SPESA E' DI: "<<ris<<endl;

return 0;
}



int stp(){
    int x=0;

    cout<<"Inserisci il nuemro degli ordini: "<<endl;
    cin>>x;
    return x;
}
int spesa(int x,int y){
    int a=0;
    switch(y){
        case 1:
            a=x*10;
            break;
        case 2:
            a=x*25;
            break;
        case 3:
            a=x*30;
            break;
        default:
            break;

    return a;

}









}
