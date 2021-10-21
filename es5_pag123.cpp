#include <iostream>
using namespace std;
int main(){
    int cod;
    double p,ps,tot,sconto,pmax,totsconto,mp,msconto;
    int n;

    tot=0;
    p=0;
    ps=0;
    n=0;
    pmax=0;
    msconto=0;
    mp=0;
    totsconto=0;
    mp=0;

    do{
        cout<<"Inserisci il codice numerico del prodotto: "<<endl;
        cin>>cod;
        cout<<"Insersci il prezzo: "<<endl;
        cin>>p;
        cout<<"Inserisci la percentuale di sconto: "<<endl;
        cin>>ps;

        if(p>0 && ps>=0){
            sconto= p*ps/100;
            tot=p - sconto;
            cout<<"Il prezzo scontato del prodotto: "<<cod<<" e': "<<tot<<" euro"<<endl;

            totsconto=totsconto+sconto;
            mp=mp+p*100;
            msconto=msconto+sconto*100;

            n=n+1;

            if(p>pmax){
                pmax=p;
             }

        }else{
            if(p<=0){
                cout<<"Prezzo non valido"<<endl;
            }
            if(ps<0){
                cout<<"Sconto non valido"<<endl;
            }
        }

    }while(n<4);

    cout<<endl<<endl;
    cout<<"Il prezzo piu' alto e': "<<pmax<<" euro"<<endl;
    cout<<"Lo sconto totale eseguito e' di: "<<totsconto<<" euro"<<endl<<endl<<endl;

    mp=mp/400;
    msconto=msconto/400;


    cout<<"La media dei prezzi su un campione di 100 unita' per prodotto e': "<<mp<<" euro"<<endl;
    cout<<"La media degli sconti su un campione di 100 unita' per prodotto e': "<<msconto<<" euro"<<endl;






return 0;
}
