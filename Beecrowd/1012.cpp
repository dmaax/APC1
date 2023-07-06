#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float A, B, C, tri, circ, trap, quad, ret;
    cin >> A >> B >> C;

    tri = (A * C) / 2;
    circ = 3.14159 * pow(C, 2);
    trap = ((A + B) / 2) * C;
    quad =  pow(B, 2);
    ret = A * B;

    cout << fixed << setprecision(3)
         << "TRIANGULO: " << tri << endl
         << "CIRCULO: " << circ << endl
         << "TRAPEZIO: " << trap << endl
         << "QUADRADO: " << quad << endl
         << "RETANGULO: " << ret  << endl;
}