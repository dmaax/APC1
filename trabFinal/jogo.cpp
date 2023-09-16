#include <iostream>
#include <unistd.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

// Tamanho da grid
#define linhas 20
#define colunas 14

// Protótipos das funções
void imprimirMatriz(char M[linhas][colunas], int posB, int alturaB, int posE, int alturaE);
bool bateuBarreira(int altB, int posB, int posJ);

// Variáveis globais
char matriz[linhas][colunas];
char jogador = '^';
char barreira = '#';

using namespace std;

int main()
{
    int pos_jogador = colunas / 2;
    int altura_barreira = 0;
    int altura_estrela = 0;
    
    float distancia = 0;

    bool perdeu = false;

    srand(time(NULL));
    
    // Posição incial da primeira estrela
    int pos_barreira = rand() % colunas;
    int pos_estrela = rand() % colunas;

    while (!perdeu)
    {
        
        system("clear||cls");

        cout << "Estrelas: " << endl;
        cout << "Distancia: " << distancia << "km" << endl;

        imprimirMatriz(matriz, pos_barreira, altura_barreira, pos_estrela, altura_estrela);

        // Inicializar a posição do jogador no meio da tela
        for (int i = 0; i < pos_jogador; i++)
        {
            cout << " ";
        }
        cout << jogador << endl;

        // Atualizar a altura da estrela para que caia
        altura_barreira++;
        altura_estrela++;

        // Quando chegar no final, voltar para o começo
        if (altura_barreira >= linhas)
        {
            altura_barreira = 0;
            pos_barreira = rand() % colunas;
        }
        if (altura_estrela >= linhas + 3)
        {
            altura_estrela = 0;
            pos_estrela = rand() % colunas;
        }

        // Movimentação do jogador
        char tecla;

        if (kbhit())
        {
            tecla = getch();
        }

        if (tecla == 'A' || tecla == 'a')
        {
            pos_jogador--;

            if (pos_jogador < 0)
            {
                pos_jogador = 0;
            }
        }
        else if (tecla == 'D' || tecla == 'd')
        {
            pos_jogador++;

            if (pos_jogador >= colunas)
            {
                pos_jogador = colunas - 1;
            }
        }
        distancia += 1;

        if (bateuBarreira(altura_barreira, pos_barreira, pos_jogador))
        {
            perdeu = true;
        }
        usleep(100);
    }
    cout << endl;
    cout << "Bateu em um asteroide. Voce morreu.";
    sleep(10000);
    return 0;
}

void imprimirMatriz(char M[linhas][colunas], int posB, int alturaB, int posE, int alturaE)
{
    int ocupadoJ;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            // Gerar barreira
            if ((i == alturaB && j == posB) && (posB > 2 || posB < colunas - 3)||
                (i == alturaB && j == posB + 1) && (posB > 2 || posB < colunas - 3) || 
                ((i == alturaB && j == posB + 2) && (posB > 2 || posB < colunas - 3)))
            { 
                cout << barreira;
                ocupadoJ = j;
            }  
            else if(i == alturaE - 3 && j == posE && posE != ocupadoJ)
            {
                cout << '*';
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
}

bool bateuBarreira(int altB, int posB, int posJ)
{
    if ((altB == linhas - 1) && (posB == posJ || posB + 1 == posJ || posB - 1 == posJ))
    {
        return true;
    }
    else
    {
        return false;
    }
}
