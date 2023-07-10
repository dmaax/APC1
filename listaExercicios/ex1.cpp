#include <iostream>

using namespace std;

int main()
{
    int a, b, dif;
    cin >> a >> b;
    if (a > b)
    {
        dif = a - b;
    }
    else
    {
        dif = b - a;
    }
    cout << dif << endl;    
}