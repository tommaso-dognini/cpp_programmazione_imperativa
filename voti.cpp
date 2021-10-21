
//esempio gestione array paralleli
#include <iostream>
#define DIM 5
using namespace std;

void carica(int m[], double v[]);
int chiedi_mat();
double chiedi_voto();
double cerca_voto(int mm,int m[],double v[]);
int main(){
    int mat[DIM];
    double voti[DIM];
    int n;

    carica(mat,voti);
    cout<<"Matricola di cui vuoi sapere il voto: ";
    n = chiedi_mat();
    cout<<"Voto: "<<cerca_voto(n,mat,voti);

return 0;
}
void carica(int m[], double v[]){

    for (int i=0;i<DIM;i++){
        m[i]=chiedi_mat();
        v[i]=chiedi_voto();
    }
return;
}
int chiedi_mat(){
    int x;
    do{
        cout<<"Matricola: ";
        cin>>x;
    }while(x<=0);
return x;
}
double chiedi_voto(){
    double x=0;
    do{
        cout<<"Voto: ";
        cin>>x;
    }while(x<=0 || x>10);
return x;
}

double cerca_voto(int mm,int m[],double v[]){
    int vv=0;
    for (int i=0;i<DIM;i++){
        if(m[i]==mm){
            vv =v[i];
        }
    }
return vv;
}
