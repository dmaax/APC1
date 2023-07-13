#include <iostream>

using namespace std;

int main()
{
    int Cv, Ce, Cs, Fv, Fe, Fs, pontosC, pontosF;

    cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

    pontosC = Cv * 3 + Ce;
    pontosF = Fv * 3 + Fe;

    if (pontosC > pontosF)
    {
        cout << "C" << endl;
    }
    else
    {
        if (pontosF > pontosC)
        {
            cout << "F" << endl;
        }
        else
        {
            if (pontosC == pontosF)
            {
                if (Cs > Fs)
                {
                    cout << "C" << endl;
                }
                else
                {
                    if (Fs > Cs)
                    {
                        cout << "F" << endl;
                    }
                    else
                    {
                        cout << "=" << endl;
                    }
                }
            }
        }
    }
}