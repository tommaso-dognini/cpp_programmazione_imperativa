#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 20
using namespace std;
int main(){

    int a[DIM];
    int b[DIM];
    int q=0;
    srand(time(NULL));

    for(int i=0;i<DIM;i++){
        a[i]=rand()%51;
    }
    for(int i=0;i<DIM;i++){
        b[i]= a[i]*a[i];
    }
    for(int i=0;i<DIM;i++){
        cout<<a[i]<<"^2 = "<<b[i]<<endl;
    }


return 0;
}



