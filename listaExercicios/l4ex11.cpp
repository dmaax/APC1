#include <iostream>

using namespace std;

int main()
{
    int n, a[6], b[6], c[12];

    // Ler vetor apenas com numeros pares
    for (int i = 0; i < 6; i++)
    {
        do
        {
            cin >> n;
        } while (!(n % 2 == 0));
        
        a[i] = n;
    }

    // Ler vetor apenas com numeros impares
    for (int i = 0; i < 6; i++)
    {
        do
        {
            cin >> n;
        } while (!(n % 2 != 0));

        b[i] = n;
    }

    // Juntar vetores
    for (int i = 0; i < 12; i++)
    {
        c[i] = a[i];

        if (i >= 6)
        {
            c[i] = b[i - 6];
        }
    }

    // Escrever vetor resultante
    for (int i = 0; i < 12; i++)
    {
        cout << c[i] << " ";
    }

}
