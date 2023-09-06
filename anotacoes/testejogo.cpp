#include <iostream>
#include <conio.h>
#include <cstdlib>

// Prototipos de função
void criar_grid(int l, int c);

#define linhas 40
#define colunas 20

using namespace std;

int main()
{
    criar_grid(linhas, colunas);

    // Inicializar posição do coletor no centro da grid
    int pos = colunas / 2;
    
    // Objeto coletor
    char obj = 'u';

    int n = 70;
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

        // TODO Implementar em switch
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
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    
}
