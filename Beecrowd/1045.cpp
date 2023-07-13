#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, aux;
    cin >> a >> b >> c;

    // Sort in decreasing order
    if (a < b)
    {
        aux = b;
        b = a;
        a = aux;
    }
    if (a < c)
    {
       aux = c;
       c = a;
       a = aux;
    }
    if (b < c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    
    // Triangle type
    if (a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if (pow(a, 2) > pow(b, 2) + pow(c, 2))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if (pow(a, 2) < pow(b, 2) + pow(c, 2))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if (a == b && a == c && b == c)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }   
    if ((a == b && c != a) || (a == c && b != a) || (b == c && b != a))
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}