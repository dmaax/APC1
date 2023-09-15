#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <windows.h>

// Prototipos de função
void criar_grid(int l, int c);
void atualizar_grid(int l, int c, int pos_estrela);

// Tamanho da grid
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

    //int n = 50;
    while (true)
    {
        system("clear||cls");

        atualizar_grid(linhas, colunas, pos_estrela);

        // Colocar jogador na grid
        for (int i = 0; i < pos_jogador; i++)
        {
            cout << " ";
        }
        cout << jogador << endl;

        // Movimentação do jogador
        char tecla = getch();

        // TODO Implementar em switch
        if (tecla == 'A' || tecla == 'a')
        {
            pos_jogador--;

            // Não sair da grid pela esquerda
            if (pos_jogador < 0)
            {
                pos_jogador = 0;
            }
        }
        else
        {
            if (tecla == 'D' || tecla == 'd')
            {
                pos_jogador++;

                // Não sair da grid pela direita
                if (pos_jogador >= colunas)
                {
                    pos_jogador = colunas - 1;
                }
            }
        }

        // Fazer estrela cair
        pos_estrela = (pos_estrela + 1) % linhas;
        
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


void atualizar_grid(int l, int c, int pos_estrela)
{
    pos_estrela = (pos_estrela + 1) % l;
    criar_grid(l, c, pos_estrela);
}
