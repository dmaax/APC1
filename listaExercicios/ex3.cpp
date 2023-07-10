#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, n4, md;
    cin >> n1 >> n2 >> n3 >> n4;
    md = (n1 + n2 + n3 + n4) / 4;

    if (md >= 5)
    {
        cout << "Aprovado" << endl;
    }
    else
    {
        cout << "Reprovado" << endl;
    }
    cout << md << endl;
}