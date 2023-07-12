#include <iostream>

using namespace std;

int main()
{
    int max, p, c;
    char charactere;

    cin >> max >> p >> charactere >> c;

    if (charactere == '*')
    {
        if (p * c > max)
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }

    if (charactere == '+')
    {
        if (p + c > max)
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }
}