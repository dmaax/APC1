#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float delta, x1, x2;

    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        cout << "Nao ha solucao" << endl;
        return 1;
    }
    else
    {
        x1 = (b * -1 + sqrt(delta)) / (2 * a);
        x2 = (b * -1 - sqrt(delta)) / (2 *a);
    }
    cout << x1 << " " << x2 << endl;
}