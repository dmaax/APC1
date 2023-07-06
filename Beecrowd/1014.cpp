#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    float Y, comsuption;

    cin >> X >> Y;
    comsuption = X / Y;
    cout << fixed << setprecision(3) << comsuption << " km/l" << endl;
}