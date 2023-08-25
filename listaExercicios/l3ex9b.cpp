#include <iostream>

using namespace std;

int main()
{
    int v[15] = {};
    
    v[0] = 0;
    v[1] = 1;

    // Preenche vetor
    for (int i = 2; i < 17; i++)
    {
        v[i] = v[i - 2] + v[i - 1];
    }

    // Imprime vetor
    for (int i = 0; i < 15; i++)
    {
        cout << v[i] << " ";
    }

}