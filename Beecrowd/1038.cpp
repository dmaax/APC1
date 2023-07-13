#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    float total;

    cin >> x >> y;

    if (x == 1)
    {
        total = 4.00 * y;
    }
    else
    {
        if (x == 2)
        {
            total = 4.50 * y;
        }
        else
        {
            if (x == 3)
            {
                total = 5.00 * y;
            }
            else
            {
                if (x == 4)
                {
                    total = 2.00 * y;
                }
                else
                {
                    if (x == 5)
                    {
                        total = 1.50 * y;
                    }
                }
            }
        }
    }
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
}