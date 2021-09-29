#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a{100};
    int b{200};

    cout << "sum is: " << a + b << endl;
    cout << "diff is: " << a - b << endl;
    cout << "product is: " << a * b << endl;

    float div = (float)a / b;
    cout << "division is: " << div << endl;

    int x {10};
    cout<<"\n output "<<x++ +20 <<endl;

    return 0;
}