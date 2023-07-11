#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 1 || n > 9)
    {
        cout << "O valor esta fora da faixa permitida" << endl;
    }
    else
    {
        cout << "O valor esta na faixa permitida" << endl;
    }
}