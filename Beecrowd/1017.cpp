#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int time, speed, distance;
    float liters;

    cin >> time >> speed;
    distance = time * speed;
    liters = distance / 12.0;
    cout << fixed << setprecision(3) << liters << endl;
}