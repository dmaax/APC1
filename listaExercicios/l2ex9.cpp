#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, maior, menor;
    cin >> a >> b >> c >> d >> e;

    if (a > b)
    {
        maior = a;
    }
    else
    {
        maior = b;
    }

    if (c > maior)
    {
        maior = c;
    }
    if (d > maior)
    {
        maior = d;
    }
    if (e > maior)
    {
        maior = e;
    }

    if (a < b)
    {
        menor = a;
    }
    else
    {
        menor = b;
    }

    if (c < menor)
    {
        menor = c;
    }
    if (d < menor)
    {
        menor = d;
    }
    if (e < menor)
    {
        menor = e;
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
}