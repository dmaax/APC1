#include <iostream>
#include <unistd.h>
#include <conio.h>
#include <cstdlib>

#define linhas 28
#define colunas 14

void imprimirMatriz(char M[linhas][colunas], int pos);

char matriz[linhas][colunas];

using namespace std;

int main()
{
    int pos_jogador = colunas / 2;
    char jogador = 'u';


    while (true)
    {
        system("clear||cls");

        // Gerar posição aleatória para a estrela
        int pos_estrela =  rand() % colunas;

        imprimirMatriz(matriz, pos_estrela);

        // Inicializar a posição do jogador no meio da tela
        for (int i = 0; i < pos_jogador; i++)
        {
            cout << " ";
        }
        cout << jogador << endl;

        // Movimentação do jogador
        char tecla = getch();

        if (tecla == 'A' || tecla == 'a')
        {
            pos_jogador--;

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
                if (pos_jogador >= colunas)
                {
                    pos_jogador = colunas - 1;
                }
            }
        }
    }
}

void imprimirMatriz(char M[linhas][colunas], int pos)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == 0 && j == pos)
            {
                cout << M[i][j] << '&';
            }
            else
            {
                cout << M[i][j] << ".";
            }
        }
        cout << endl;
    }
}