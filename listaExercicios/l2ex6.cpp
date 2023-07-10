#include <iostream>

using namespace std;

int main()
{
    int a, b, c, aux;
    cin >> a >> b >> c;

    if (a > b)
    {
        aux = b;
        b = a;
        a = aux;
    }
    if (a > c)
    {
       aux = c;
       c = a;
       a = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
  cout << a << " " <<  b << " " << c << endl;
}