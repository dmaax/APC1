#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <windows.h>

// Prototipos de função
void criar_grid(int l, int c, std::vector<int>& posAnds);
void atualizar_grid(int l, int c, std::vector<int>& posAnds);
void inicializar_posicoes_iniciais(int c, std::vector<int>& posAnds);

#define linhas 28
#define colunas 16
#define num_estrelas 5 // Número de estrelas

using namespace std;

int main()
{
    // Inicializar posição do coletor no centro da grid
    int posColetor = colunas / 2;
    
    // Inicializar posições das estrelas
    vector<int> posAnds(num_estrelas, 0);
    inicializar_posicoes_iniciais(colunas, posAnds);

    // Objeto coletor
    char obj = 'u';

    int n = 50;
    while (n--)
    {
        system("clear||cls");
        atualizar_grid(linhas, colunas, posAnds);

        // Posição do coletor
        for (int i = 0; i < posColetor; i++)
        {
            cout << " ";
        }
        cout << obj << endl;

        char tecla = getch();

        // TODO Implementar em switch
        if (tecla == 'A' || tecla == 'a')
        {
            posColetor--;

            // Não sair da grid pela esquerda
            if (posColetor < 0)
            {
                posColetor = 0;
            }
        }
        else if (tecla == 'D' || tecla == 'd')
        {
            posColetor++;

            // Não sair da grid pela direita
            if (posColetor >= colunas)
            {
                posColetor = colunas - 1;
            }
        }

        // Atualize as posições das estrelas para fazê-las cair
        for (int i = 0; i < num_estrelas; i++) {
            posAnds[i] = (posAnds[i] + 1) % linhas;
        }

        Sleep(100); // Pausa de 100 ms (pode exigir ajustes)
    }

    return 0;
}

void criar_grid(int l, int c, vector<int>& posAnds)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            bool isStar = false;
            for (int k = 0; k < num_estrelas; k++) {
                if (i == posAnds[k] && j == colunas / 2)
                {
                    isStar = true;
                    break;
                }
            }
            if (isStar) {
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

void atualizar_grid(int l, int c, vector<int>& posAnds)
{
    criar_grid(l, c, posAnds);
}

void inicializar_posicoes_iniciais(int c, vector<int>& posAnds)
{
    srand(time(NULL));
    for (int i = 0; i < num_estrelas; i++) {
        posAnds[i] = rand() % c;
    }
}
