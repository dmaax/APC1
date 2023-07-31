#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, soma = 0;
    int positivos = 0, i = 0;
    
    while (i < 6)
    {
        cin >> n;
        if (n > 0)
        {
            positivos++;
            soma += n;
        }
        i++;
    }
    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) <<  soma / positivos << endl;
}