#include <iostream>

using namespace std;

int main()
{
    double n, result = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result += 1 / (double) i;
    }
    cout << result << endl;
}