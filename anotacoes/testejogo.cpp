#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

// Prototipos de função
void criar_grid(int l, int c);

#define linhas 28
#define colunas 14

using namespace std;

int main()
{
    // Inicializar posição do coletor no centro da grid
    int pos = colunas / 2;
    
    // Objeto coletor
    char obj = 'u';

    int n = 50;
    while (n--)
    {
        criar_grid(linhas, colunas);

        // Posição do coletor
        for (int i = 0; i < pos; i++)
        {
            cout << " ";
        }
        cout << obj << endl;

        char tecla = getch();

        // TODO Implementar em switc
        if (tecla == 'A' || tecla == 'a')
        {
            pos--;

            // Não sair da grid pela esquerda
            if (pos < 0)
            {
                pos = 0;
            }
        }
        else
        {
            if (tecla == 'D' || tecla == 'd')
            {
                pos++;

                // Não sair da grid pela direita
                if (pos >= colunas)
                {
                    pos = colunas - 1;
                }
            }
        }
    }
}

void criar_grid(int l, int c)
{
    int i, j, pos;

    srand(time(NULL));
    pos = rand() % c;
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 && j == pos)
            {
                cout << '&';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }
}