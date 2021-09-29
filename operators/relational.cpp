#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a{10};
    int b{20};
    bool x = a == b;
    bool y = a != b;

    cout << boolalpha; //to print true and false instead of 0 and 1

    cout << "1st boolean " << x << endl;
    cout << "2nd boolean " << y << endl;

    cout << noboolalpha; //to print back 0 and 1

    cout << "3rd boolean " << (10 == (5 + 5)) << endl;

    return 0;
}