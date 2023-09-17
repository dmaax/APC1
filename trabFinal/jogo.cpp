#include <iostream>
#include <unistd.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <cctype>

// Tamanho da grid
#define linhas 20
#define colunas 14

// Protótipos das funções
void imprimirMatriz(char M[linhas][colunas], int posB, int alturaB, int posE, int alturaE);
bool bateuBarreira(int altB, int posB, int posJ);
bool pegouEstrela(int altE, int posE, int posJ);
void menu(void);

// Variáveis globais
char matriz[linhas][colunas];
char jogador = '^';
char barreira = 'X';
char coletavel = '*';

using namespace std;

int main()
{
    menu();

    int pos_jogador = colunas / 2;
    int altura_barreira = 0;
    int altura_estrela = 0;
    float distancia = 0;
    int totalEstrelas = 0;
    int vidas = 3;
    bool perdeu = false;

    // Gerar posição aleatória para a barreira e estrela
    srand(time(NULL));

    int pos_barreira = rand() % colunas;
    int pos_estrela = rand() % colunas;

    while (!perdeu)
    {
        
        system("clear||cls");

        cout << "Estrelas: " << totalEstrelas << endl;
        cout << "Distancia: " << distancia << "km" << endl;

        imprimirMatriz(matriz, pos_barreira, altura_barreira, pos_estrela, altura_estrela);

        // Inicializar a posição do jogador no meio da tela
        for (int i = 0; i < pos_jogador; i++)
        {
            cout << " ";
        }
        cout << jogador << endl;

        // Atualizar a altura para que caia
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
        }
        
        distancia += 1;

        if (pegouEstrela(altura_estrela, pos_estrela, pos_jogador))
        {
            totalEstrelas++;
        }
        if (bateuBarreira(altura_barreira, pos_barreira, pos_jogador))
        {
            vidas--;
            cout << "Sua nave foi danificada! " << "Vidas: " << vidas << endl;
            sleep(2);
        }
        if (vidas == 0)
        {
            perdeu = true;
        }
    }

    cout << endl;
    cout << "Sua nave explodiu... " << "GAME OVER" << endl;
    cout << "Pontuacao: " << totalEstrelas * distancia << endl;
    sleep(5);
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
            if (((i == alturaB + 1 && j == posB) && (posB > 2 || posB < colunas - 3))||
                ((i == alturaB + 1 && j == posB + 1) && (posB > 2 || posB < colunas - 3)) || 
                (((i == alturaB + 1 && j == posB + 2) && (posB > 2 || posB < colunas - 3))))
            { 
                cout << barreira;
                ocupadoJ = j;
            }  
            else
            {
                if (i == alturaE + 3 && j == posE && posE != ocupadoJ)
                {
                    cout << coletavel;
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}

bool bateuBarreira(int altB, int posB, int posJ)
{
    if ((altB == linhas - 1) && (posB == posJ || posB + 1 == posJ || posB + 2 == posJ))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool pegouEstrela(int altE, int posE, int posJ)
{
    if (altE == linhas - 3 && posE == posJ)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void menu(void)
{
    int escolha;
    cout << R"(
    "Diante do infinito, somos apenas um pálido ponto azul."
    - Carl Sagan     .              .                  .           .
          0     .
                 .          .                 ,                ,    ,
 .          \          .                         .
      .      \   ,
   .          o     .                 .                   .            .
     .         \                 ,             .                .
               #\##\#      .                              .        .
             #  #O##\###                .                        .
   .        #*#  #\##\###                       .                     ,
        .   ##*#  #\##\##               .                     .
      .      ##*#  #o##\#         .                             ,       .
          .     *#  #\#     .                    .             .          ,
                      \          .                         .
____^/\___^--____/\____O______________/\/\---/\___________---______________
   /\^   ^  ^    ^                  ^^ ^  '\ ^          ^       ---
         --           -            --  -      -         ---  __       ^
   --  __                      ___--  ^  ^                         --  __)" << endl;
    cout << endl;
    cout << "Bem-vindo (a)! Digite: " << endl;
    cout << endl;
    cout << "(1) Jogar" << endl;
    cout << "(2) Regras" << endl;
    cout << "(3) Sobre" << endl;

    cin >> escolha;
    
    if (escolha == 1)
    {
        cout << endl;
        cout << "3... ";
        sleep(1);
        cout << "2... ";
        sleep(1);
        cout << "1... ";
        sleep(1);
        cout << "0... ";
        sleep(1);
        cout << "Vai!!!!";
        sleep(1);

        return;
    }

    if(escolha == 2)
    {
        system("clear||cls");
        cout << R"( .              +   .                .   . .     .  .
                   .                    .       .     *
  .       *                        . . . .  .   .  + .
            "Voce esta aqui!"            .   .  +  . . .
.                 |             .  .   .    .    . .
                  |           .     .     . +.    +  .
                 \|/            .       .   . .
        . .       V          .    * . . .  .  +   .
           +      .           .   .      +
                            .       . +  .+. .
  .                      .     . + .  . .     .      .
           .      .    .     . .   . . .        ! /
      *             .    . .  +    .  .       - O -
          .     .    .  +   . .  *  .       . / |
               . + .  .  .  .. +  .
.      .  .  .  *   .  *  . +..  .            *
 .      .   . .   .   .   . .  +   .    .            +)" << endl;

    

        cout << endl;
        cout << " * Utilize A e D para movimentar a sua nave." << endl;
        cout << " * Seu objetivo eh coletar o maior numero de estrelas (*) que conseguir." << endl;
        cout << " * Cuidado com os asteroides (X)!" << endl;
        cout << " * Voce possui 3 vidas." << endl;



        cout << endl << "Para voltar ao menu inicial, digite 0" << endl;
        
        do
        {
            cin >> escolha;
        } while (escolha != 0);

        if (escolha == 0)
        {
            system("clear||cls");
            menu();
        }
    
    }
    if (escolha == 3)
    {
        system("clear||cls");
        cout << R"(                                       _..-,--.._
                                 ,`. ,',','      `.
                                 `. `,/`/          \
                                   :'.`:            :
        ____ _          _ __       | |`|            |
      _(    `.)        ( (  )`.    : `-'            ;     _
     ( (    ) ))      ( (    ))    ,\_            _/.  (`','
    ( (   )  _)        `-(__.'    '.  ```------'''  .`
     '.__)--'       .-..           |``-...____...-''|
                   (_)_))          |                |
              ,'`.        ___...---|                |--..._
  ,'`. ,'`. ,'   _`.---'''         |                | "
-'..._`.   `.   /`-._  "      "    |    _           |
       ```-..`./:::::)             `-...||______...-'    "
              /:::_.'     "        "                "
           _.:.'''   "                       "          )" << endl;


           cout << endl;
           cout << "Trabalho final da disciplina de APC1 - Unicentro" << endl;
           cout << "Lucas Cogrossi, 2023" << endl;
           cout << endl << "Para voltar ao menu inicial, digite 0" << endl;

            do
            {
                cin >> escolha;
            } while (escolha != 0);

            if (escolha == 0)
            {
                system("clear||cls");
                menu();
            }

    }
}