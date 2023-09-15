#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

// Prototypes
void criar_grid(int l, int c, int pos_estrela);
void atualizar_grid(int l, int c, int pos_estrela, int pos_jogador);

// Grid size
#define linhas 28
#define colunas 16

using namespace std;

int main()
{
    // Inicializar posição do coletor no centro da grid
    int pos_jogador = colunas / 2;

    // Objeto coletor
    char jogador = 'u';

    // Gerar posição aleatória para a estrela
    int pos_estrela = rand() % colunas;

    while (true)
    {
        system("cls");

        atualizar_grid(linhas, colunas, pos_estrela, pos_jogador);

        // Cair a estrela
        pos_estrela = (pos_estrela + 1) % linhas;

        if (kbhit()) {
            char tecla = getch();

            // Movimentação
            if (tecla == 'A' || tecla == 'a')
            {
                pos_jogador--;

                // Não sair pela esquerda
                if (pos_jogador < 0)
                {
                    pos_jogador = 0;
                }
            }
            else if (tecla == 'D' || tecla == 'd')
            {
                pos_jogador++;

                // Não sair pela direita
                if (pos_jogador >= colunas)
                {
                    pos_jogador = colunas - 1;
                }
            }
        }

        Sleep(100);
    }
}

void criar_grid(int l, int c, int pos)
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == pos && j == colunas / 2)
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

void atualizar_grid(int l, int c, int pos_estrela, int pos_jogador)
{
    criar_grid(l, c, pos_estrela);
    for (int i = 0; i < pos_jogador; i++)
    {
        cout << " ";
    }
    cout << 'u' << endl;
}
