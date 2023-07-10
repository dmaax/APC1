#include <iostream>

using namespace std;

int main()
{
    int n, n1;
    cin >> n;

    if (n > 0)
    {
        n1 = n;
    }
    else
    {
        n1 = n * -1;
    }
    cout << n1 << endl;
}