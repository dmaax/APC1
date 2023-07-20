#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, d, e, count = 0;

    cin >> t >> a >> b >> c >> d >> e;

    if (a == t)
    {
        count++;
    }
    if (b == t)
    {
        count++;
    }
    if (c == t)
    {
        count ++;
    }
    if (d == t)
    {
        count++;
    }
    if (e == t)
    {
        count++;
    }
    cout << count << endl;
}