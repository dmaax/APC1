#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salario, novoSalario, reajuste, percentual;

    cin >> salario;

    if (salario <= 400.00)
    {
        percentual = 0.15;
        novoSalario = salario * 1.15;
        reajuste = novoSalario - salario;
    }
    else
    {
        if (salario >= 400.01 && salario <= 800.00)
        {
            percentual = 0.12;
            novoSalario = salario * 1.12;
            reajuste = novoSalario - salario;
        }
        else
        {
            if (salario >= 800.01 && salario <= 1200.00)
            {
                percentual = 0.1;
                novoSalario = salario * 1.1;
                reajuste = novoSalario - salario;
            }
            else
            {
                if (salario >= 1200.01 && salario <= 2000.00)
                {
                    percentual = 0.07;
                    novoSalario = salario * 1.07;
                    reajuste = novoSalario - salario;
                }
                else
                {
                    percentual = 0.04;
                    novoSalario = salario * 1.04;
                    reajuste = novoSalario - salario;
                }
            }
        }
    } 
    cout << "Novo salario: "<< fixed << setprecision(2) << novoSalario << endl << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percentual * 100 << " %" << endl;
}