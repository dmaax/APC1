#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float A, B, C, perimetro, area;
    cin >> A >> B >> C;
    perimetro = A + B + C;
    area = ((A + B) / 2) * C;

    if (A < B + C && B < A + C && C < A + B)
    {
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }
    else
    {
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
}