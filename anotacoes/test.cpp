#include <iostream>

#define MAX 10

using namespace std;

int main()
{
    int i = 0, numVogais = 0;
    string p;

    // Ler até espaço
    // cin >> p;

    // Ler a linha toda, até o ENTER
    getline(cin, p);

    while (p[i] != '\0')
    {
        cout << p[i] << " ";

        switch(p[i])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            p[i] -= 32;
            numVogais++;
            break;
        }
        i++;
    }
    cout << endl;
    cout << numVogais << " vogais" << endl;
    cout << p << endl;
}   