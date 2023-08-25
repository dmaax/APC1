#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c = 0;

    cout << a << " " << b << " ";

    for (int i = 0; i < 13; i++)
    {
        c = a + b;
        a = b;
        b = c;
        
        cout << c << " ";
    }
}