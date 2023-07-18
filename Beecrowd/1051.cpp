#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salary, taxes = 0;
    cin >> salary;

    if (salary > 4500.00)
    {
        taxes += (salary - 4500.00) * 0.28;
        salary -= 4500.00;
    }

    if (salary > 3000.00)
    {
        taxes += (salary - 3000.00) * 0.18;
        salary -= 3000.00;
    }

    if (salary > 2000.00)
    {
        taxes += (salary - 2000.00) * 0.08;
        salary -= 2000.00;
    }

    if (taxes <= 0)
    {
        cout << "Isento" << endl;
        return 0;
    }
    cout << "R$ " << taxes << endl; 
} 