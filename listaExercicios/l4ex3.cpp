#include <iostream>

using namespace std;

int main()
{
    int a[15] = {0}, b[15] = {0}, fact = 1;

    for (int i = 0; i < 15; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 15; i++)
    {
      for (int j = 1; j <= a[i]; j++)
      {
        fact *= j;
      }

      b[i] = fact;
      fact = 1;
    }
    
    for (int i = 0; i < 15; i++)
    {
        cout << b[i] << " ";
    }
}