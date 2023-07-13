#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4, ne, media1, media2;
    cin >> n1 >> n2 >> n3 >> n4;

    media1 = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10.0;
    cout << "Media: " << fixed << setprecision(1) << media1 << endl;

    if (media1 >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        if (media1 < 5.0)
        {
            cout << "Aluno reprovado." << endl;
        }
        else
        {
            cout << "Aluno em exame." << endl;
            cin >> ne;
            cout << "Nota do exame: " << fixed << setprecision(1) << ne << endl;
            
            media2 = (media1 + ne) / 2.0;

            if (media2 >= 5.0)
            {
                cout << "Aluno aprovado." << endl;
                cout << "Media final: " << fixed << setprecision(1) << media2 << endl;
            }
            else
            {
                cout << "Aluno reprovado." << endl;
                cout << "Media final: " << fixed << setprecision(1) << media2 << endl;
            }
        }
    }
}