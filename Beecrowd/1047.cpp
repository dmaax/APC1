// Tentar depois

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int startH, endH, startM, endM;

    cin >> startH >> startM >> endH >> endM;

    if (startH == endH && startM == endM)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
    {
        if (endH < startH && endM < startM)
        {
            cout << "O JOGO DUROU " << 24 - startH + endH << " HORA(S) E " << 60 - startM + endM << " MINUTO(S)" << endl;
        }
        else
        {
           if (endM - startM < 0 && endH - startH == 1)
           {
                cout << "O JOGO DUROU " << endH - startH - 1 << " HORA(S) E " << endM - startM + 60 << " MINUTO(S)" << endl;
           }
           else
           {
                cout << "O JOGO DUROU " << endH - startH << " HORA(S) E " << endM - startM + 60 << " MINUTO(S)" << endl;
           }
        }
    }
}