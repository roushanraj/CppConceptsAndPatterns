#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << "number is " << i << endl;
        i++;
    }

    do
    {
        i--;
        cout << "number is " << i << endl;
    } while (i > 0);

    for (int p = 0; p < 10; p++)
    {
        for (int m = 0; m < p; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
