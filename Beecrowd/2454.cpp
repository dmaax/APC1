#include <iostream>

using namespace std;

int main()
{
    int P, R;
    char saida;

    cin >> P >> R;

    if (P == 0)
    {
        saida = 'C';
    }
    else
    {
        if (R == 0)
        {
            saida = 'B';
        }
        else
        {
            saida = 'A';
        }
    }
    cout << saida << endl;
}