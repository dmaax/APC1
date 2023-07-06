#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, delta, R1, R2;

    cin >> A >> B >> C;
    
    delta = (pow(B, 2)) - 4 * A * C;

    if (delta < 0 || A == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        R1 = (B * -1 + sqrt(delta)) / (A * 2);
        R2 = (B * -1 - sqrt(delta)) / (A * 2);

        cout << fixed << setprecision(5)
             << "R1 = " << R1 << endl
             << "R2 = " << R2 << endl;
    }
}