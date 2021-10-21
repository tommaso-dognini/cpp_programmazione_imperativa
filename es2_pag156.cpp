#include <iostream>
using namespace std;
int stp();
void spesa(int x);



int main(){
int n=0;

    n=stp();

    spesa(n);

return 0;
}



int stp(){
    int x=0;

    cout<<"Inserisci il nuemro degli ordini: "<<endl;
    cin>>x;
    return x;
}
void spesa(int x){
    int cotone,pelle,neoprene;

    cotone=x*10;
    cout<<"Spesa per i guanti in cotone: "<<cotone<<endl;
    pelle=x*25;
    cout<<"Spesa per i guanti in pelle: "<<pelle<<endl;
    neoprene=x*30;
    cout<<"Spesa per i guanti in neoprene : "<<neoprene<<endl;

    return;
}
