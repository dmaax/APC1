#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, hours;
    float perHour, salary;

    cin >> n >> hours >> perHour;
    salary = perHour * hours;
    cout << "NUMBER = " << n << endl
         << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
}