// Tentar depois

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salario, imposto, salarioTaxado;

    cin >> salario;

    if (salario <= 2000.00)
    {
        cout << "Isento" << endl;
        return 0;
    }
    else
    {
        if (salario >= 2000.01 && salario <= 3000.00)
        {
            imposto = 0;
        }
        else
        {
            if (salario >= 3000.01 && salario <= 4500.00)
            {
                salarioTaxado = salario - 2000;
                
            }
            else
            {
                imposto = salario * 0.28;
            }
        }
    }
    cout << "R$ " << fixed << setprecision(2) << imposto << endl;
}