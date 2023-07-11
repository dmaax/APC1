#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int start, end;

    cin >> start >> end;

    if (start == end)
    {
        cout << "O JOGO DUROU 24 HORA(s)" << endl;
    }
    else
    {
        if (end < start)
        {
            cout << "O JOGO DUROU " << 24 - start + end << " HORA(S)" << endl;
        }
        else
        {
            cout << "O JOGO DUROU " << end - start << " HORA(S)" << endl;
        }
    }
}