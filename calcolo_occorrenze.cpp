#include <iostream>
#include <stdlib.h>
#include <ctime>
#define DIM 20
using namespace std;

void carica(int v[]);
void stampa(int v[]);
int numero();
bool cerca(int v[], int x);
bool cerca2(int v[], int x);
int occorrenze(int v[], int x);

int main()
{

    int a[DIM];
    int n; //nuemro da cercare
    bool found;

    srand(time(NULL));

    carica(a);
    stampa(a);
    n = numero();
    //ricerca sequenziale
    found = cerca(a, n);

    if (found == true)
    {
        cout << "Presente";
    }
    else
    {
        cout << "Assente";
    }
    cout << endl;

    //ricerca sequenziale con sentinella

    found = cerca2(a, n);

    if (found == true)
    {
        cout << "Presente";
    }
    else
    {
        cout << "Assente";
    }
    cout << endl;

    cout << "Il numero " << n << " e' presente " << occorrenze(a, n) << endl;

    return 0;
}
void carica(int v[])
{
    for (int i = 0; i < DIM; i++)
    {
        v[i] = rand() % 16;
    }
    return;
}
int numero()
{
    int num;

    do
    {
        cout << "Numero da ricercare: ";
        cin >> num;
    } while (num < 0);
    return num;
}
//ricerca sequenziale---> ritorna solo vero o falso in base al numero che deve cercare e se c'è o non c'è.
bool cerca(int v[], int x)
{
    bool flag;
    flag = false;

    for (int i = 0; i < DIM; i++)
    {
        if (v[i] == x)
        {
            flag = true;
        }
    }
    return flag;
}

void stampa(int v[])
{
    for (int i = 0; i < DIM; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}
//ricerca sequenziale con sentinella ----> uguale a prima ma se trova un elemento esce dal ciclo
bool cerca2(int v[], int x)
{
    int i = 0;
    bool flag;

    flag = false;

    while (i < DIM && flag == false)
    {
        if (v[i] == x)
        {
            flag = true;
        }
        i++;
    }
    return flag;
}

// calcolo delle occcorenze
int occorrenze(int v[], int x)
{
    int cont;
    cont = 0;

    for (int i = 0; i < DIM; i++)
    {
        if (v[i] == x)
        {
            cont++;
        }
    }
    return cont;
}
