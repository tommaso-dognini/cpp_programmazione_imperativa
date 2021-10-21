#include <iostream>
using namespace std;
void calcola(int x);


int main(){
int scelta=0;
bool continua=true;

    do{
    scelta=0;
    cout<<"Opzioni"<<endl;
    cout<<"1.Area del quadrato"<<endl;
    cout<<"2.Area del cerchio"<<endl;
    cout<<"3.Esci"<<endl;
    cin>>scelta;
    switch(scelta){
        case 1:
            calcola(scelta);
            continua=true;
            break;
        case 2:
            calcola(scelta);
            continua=true;
            break;
        case 3:
            continua=false;
            break;
        default:
            cout<<"Opzione non valida"<<endl;
            break;
        }
    }while(continua==true);

return 0;
}

void calcola(int x){
 double area=0, q=0;
    switch(x){
        case 1:
            do{
            cout<<"Inserisci il lato: "<<endl;
            cin>>q;
            }while(q<=0);
            area=q*q;
            cout<<"L'area del quadrato e': "<<area<<endl;
            break;
        case 2:
            do{
            cout<<"Inserisci il raggio: "<<endl;
            cin>>q;
            }while(q<=0);
            area=q*q*3.14;
            cout<<"L'area del cerchio e': "<<area<<endl;
            break;
        default:
            break;

    }

    return;


}
