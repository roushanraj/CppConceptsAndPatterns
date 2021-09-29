#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int *ptr{nullptr};
    ptr = new int;
    cout << "adress value: " << ptr << endl;
    cout << "garbage value: " << *ptr << endl;
    *ptr = 100;
    cout << "assigned value: " << *ptr << endl;

    int *ptrArr{nullptr};
    ptrArr = new int[7];
    cout << "adress value: " << ptrArr << endl;
    delete [] ptrArr; 
    
    return 0;
}