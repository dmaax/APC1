#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salary, taxes = 0.0;

    cin >> salary;

    if (salary < 2000.00)
    {
        cout << "Isento" << endl;
        return 0;
    }
    else
    {
        if (salary <= 3000.00)
        {
            taxes += (salary - 2000.00) * 0.08;
        }
        else
        {
            taxes += 1000.00 * 0.08;
            if (salary <= 4500.00)
            {
                taxes += (salary - 3000.00) * 0.18;
            }
            else
            {
                taxes += 1500.00 * 0.18;
                if (salary > 4500.00)
                {
                    taxes += (salary - 4500.00) * 0.28;
                }
            }
        }
    }
    cout << "R$ " << fixed << setprecision(2) << taxes << endl;
}