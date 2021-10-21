#include <iostream>
using namespace std;
double input (int x, double y);
double calcola(double x, double y, bool z);
int main(){

    int scelta=0,v=0,p=0,a=0;
    double saldo=0,totv=0,tota=0,totp=0,somma=0;
    bool continua=true,operatore=true;

   do{
    saldo=input(scelta,0);
    cout<<"Gestione opzioni:"<<endl;
    cout<<"1. Versamento"<<endl;
    cout<<"2. Prelievo"<<endl;
    cout<<"3. Emissioni di assegni"<<endl;
    cout<<"4. Esci"<<endl;
    cout<<"Scelta: "<<endl;
    cin>>scelta;
    switch(scelta){

        case 1:
            somma =input(scelta,saldo);
            /*operatore=true;
            totv = calcola(totv,somma,operatore);
            saldo = calcola(saldo,somma,operatore);*/
            totv=totv +somma;
            saldo=saldo +somma;
            v++;
            continua=true;
            break;
        case 2:
            somma =input(scelta,saldo);
            /*operatore=true;
            totp = calcola(totp,somma,operatore);
            operatore=false;
            saldo= calcola(saldo,somma,operatore);*/
            totp=totp +somma;
            saldo=saldo - somma;
            p++;
            continua=true;
            break;
        case 3:
            somma =input(scelta,saldo);
            /*operatore=true;
            tota = calcola(tota,somma,operatore);
            operatore=true;
            saldo = calcola(saldo,somma,operatore);*/
            tota=tota +somma;
            saldo= saldo - somma;
            a++;
            continua=true;
            break;
        case 4:
            continua=false;
            break;
        default:
            cout<<"Scelta non valida"<<endl;
            continua=false;
            break;
        }
    }while(continua==true);

    do{

        cout<<"Scegli l'opzione da visualizzare"<<endl;
        cout<<"1. Numero dei versamenti effettuati e somma totale versata"<<endl;
        cout<<"2. Numero dei prelievi effettuati e somma totale prelevata"<<endl;
        cout<<"3. Numero degli assegni emessi e somma totalmente prelevata per mezzo degli stessi"<<endl;
        cout<<"4. Saldo finale"<<endl;
        cout<<"5. Esci"<<endl;
        cout<<"Scelta: "<<endl;
        cin>>scelta;

        switch(scelta){
            case 1:
                cout<<"Numero dei versamenti effettuati: "<<v<<endl;
                cout<<"Somma totale versata: "<<totv<<endl;
                continua=true;
                break;
            case 2:
                cout<<"Numero dei prelievi effettuati: "<<p<<endl;
                cout<<"Somma totale prelevata: "<<totp<<endl;
                continua=true;
                break;
            case 3:
                cout<<"Numero degli assegni effettuati: "<<a<<endl;
                cout<<"Somma totale emessa tramite assegni: "<<tota<<endl;
                continua=true;
                break;
            case 4:
                cout<<"Saldo finale: "<<saldo<<endl;
                continua=true;
            case 5:
               continua=false;
                break;
            default:
                cout<<"Scelta non valida"<<endl;
                break;
        }
    }while(continua==true);



return 0;
}

double calcola(double x, double y, bool z){
 double s=0;
        if (z==true){
            s=x+y;
        }
        if(z==false){
            s=x-y;
        }
return s;
}

double input (int x, double y){
double s=0;

    switch(x){
        case 0:
            do{
                cout<<"Inserisci il saldo iniziale: "<<endl;
                cin>>s;
            }while(s<0);
            break;
        case 1:
            do{
                cout<<"Inserisci l'importo da versare: "<<endl;
                cin>>s;
            }while(s<=0);
            break;
        case 2:
            do{
                cout<<"Inserisci l'importo da prelevare: "<<endl;
                cin>>s;
                if(s>y){
                    cout<<"Importo non disponibile"<<endl;
                }
            }while(s>y);
            break;

        case 3:
            do{
                cout<<"Inserisci l'importo dell'assegno: "<<endl;
                cin>>s;
                if(s>y){
                    cout<<"Importo non disponibile"<<endl;
                }
            }while(s>y);
            break;

        case 4:
        default:
            break;
    }

return s;
}
