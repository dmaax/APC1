#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, n4, ne, md1, md2;
    cin >> n1 >> n2 >> n3 >> n4;

    md1 = (n1 + n2 + n3 + n4) / 4.0;
    
    if (md1 >= 7)
    {
        cout << "Aprovado" << " " << md1 << endl;
    }
    else
    {
        cin >> ne;

        md2 = (ne + md1) / 2.0;

        if (md2 >= 5)
        {
            cout << "Aprovado em exame" << " " << md2 << endl;
        }
        else
        {
            cout << "Reprovado" << " " << md2 << endl;
        }
    }
}