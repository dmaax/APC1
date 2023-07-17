#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int startH, startM, endH, endM, horas, minutos;

    cin >> startH >> startM >> endH >> endM;

    // Calculo horas
    if (startH == endH)
    {
        if (endM > startM)
        {
            horas = 0;
        }
        else
        {
            horas = 24;
        }
    }
    else
    {
        if (endH < startH)
        {
            horas = 24 - startH + endH;
        }
        else
        {
            horas = endH - startH;
        }
    }

    // Calculo minutos
    if (startM == endM)
    {
        minutos = 0;
    }
    else
    {
        if (endM < startM)
        {
            minutos = 60 - startM + endM;
            horas--;
        }
        else
        {
            minutos = endM - startM;
        }
    }
    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
}