#include <iostream>
#define DIM 20
using namespace std;
int main(){

 int v[DIM];

     for(int i=0;i<DIM;i++){
            v[i]= -2;
     }

     for (int x=15;x<20;x++){
        v[x]= v[x]+(x-1)*2+1;
        v[x+1]= v[x+1]-x;
     }
     for (int x=10;x<15;x++){
        cout<<v[x]<<" ";
     }

return 0;
}
