#include <iostream>

using namespace std;

int main()
{
    int a1, b1, c1, a, b, c, aux;
    cin >> a1 >> b1 >> c1;
    
    a = a1;
    b = b1;
    c = c1;

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
  cout << a << endl <<  b << endl << c << endl << endl;
  cout << a1 << endl << b1 << endl << c1 << endl;
}