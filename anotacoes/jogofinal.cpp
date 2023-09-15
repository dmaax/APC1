#include <iostream>

#define linhas 28
#define colunas 16

void imprimir_matriz(char M[linhas][colunas]);

char matriz[linhas][colunas];

using namespace std;

int main()
{
    
    while(true)
    {
        system("clear||cls");
        imprimir_matriz(matriz);
        slee
    }
}

void imprimir_matriz(char M[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << M[i][j] << ".";
        }
        cout << endl;
    }
}