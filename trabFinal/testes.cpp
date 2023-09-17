#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int escolha;
    cout << R"(
    "O universo eh um lugar bem grande. Se eh so nos, parece um terrivel desperdicio de espaco."
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

    cin >> escolha;

    if (escolha == 1)
    {
        // jogo
    }



}