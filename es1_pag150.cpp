#include <iostream>
using namespace std;
int somma(int x, int y);

int main()
{
    int x = 0, y = 0;
    int s = 0;
    cout << "Inserisci gli estremi dell'insieme [x,y] di cui vuoi sapere la somma dei numeri dispari" << endl;
    do
    {
        do
        {
            cout << "inserisci x: " << endl;
            cin >> x;
        } while (x <= 0);

        do
        {
            cout << "inserisci y: " << endl;
            cin >> y;
        } while (y <= 0);

    } while (y <= x);

    s = somma(x, y);

    cout << "La somma dei numeri dispari compresi nell'intervallo e': " << s << endl;

    return 0;
}

int somma(int x, int y)
{
    int s = 0;
    for (int i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            s = s + i;
        }
    }

    return s;
}
