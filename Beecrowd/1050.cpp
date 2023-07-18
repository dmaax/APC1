#include <iostream>

using namespace std;

int main()
{
    int DDD;
    string estado = "";
    cin >> DDD;

    switch (DDD)
    {
        case 61:
            estado = "Brasilia";
            break;
        case 71:
            estado = "Salvador";
            break;
        case 11:
            estado = "Sao Paulo";
            break;
        case 21:
            estado = "Rio de Janeiro";
            break;
        case 32:
            estado = "Juiz de Fora";
            break;
        case 19:
            estado = "Campinas";
            break;
        case 27:
            estado = "Vitoria";
            break;
        case 31:
            estado = "Belo Horizonte";
        default:
            estado = "DDD nao cadastrado";
    }
    cout << estado << endl;
}