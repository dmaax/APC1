#include <iostream>

using namespace std;

int main()
{
    int p1, c1, p2, c2, result;

    cin >> p1 >> c1 >> p2 >> c2;

    if (p1 * c1 > p2 * c2)
    {
        result = -1;
    }
    else
    {
        if (p1 * c1 < p2 * c2)
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    cout << result << endl;
}