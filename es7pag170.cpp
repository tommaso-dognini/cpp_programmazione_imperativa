#include <iostream>
using namespace std;

int calcola(int x);
int conta(int x, int y);

int main(){
int scelta =0;
int spesa=0;
bool continua=true;
int budget=0,ordini=0;

do{
cout<<"Inserisci il budget massimo: "<<endl;
cin>>budget;
}while(budget<=0);

do{
cout<<"Opzioni"<<endl;
cout<<"1.Arancie 2 euro al pezzo"<<endl;
cout<<"2.Banane 3 euro al pezzo"<<endl;
cout<<"3.Ciliegie 4 euro al pezzo"<<endl;
cout<<"4.Resoconto finale"<<endl;
cin>>scelta;
switch(scelta){
    case 1:
        spesa=spesa+calcola(scelta);
        continua=true;
        break;
    case 2:
        spesa=spesa+calcola(scelta);
        continua=true;
    case 3:
        spesa=spesa+calcola(scelta);
        continua=true;
    case 4:
        continua=false;
        break;
    default:
        break;
}

}while(continua==true);

    cout<<"Il tuo budget e': "<<budget<<endl;
    cout<<"La spesa totale e': "<<spesa<<endl;
    if(spesa>budget){
        cout<<"Modifica l'ordine poiche il la spesa supera il tuo budget"<<endl;
    }

return 0;
}


int calcola(int x){
int spesa=0;
int n=0;
    switch(x){
        case 1:

            do{
            cout<<"Inserisci il numero di ordini: "<<endl;
            cin>>n;
            }while(n<0);

            spesa=spesa+n*2;
            break;

        case 2:
            do{
            cout<<"Inserisci il numero di ordini: "<<endl;
            cin>>n;
            }while(n<0);

            spesa=spesa+n*3;
            break;

         case 3:

            do{
            cout<<"Inserisci il numero di ordini: "<<endl;
            cin>>n;
            }while(n<0);

            spesa=spesa+n*4;
            break;

         default:
            break;

    }
    return spesa;

}


