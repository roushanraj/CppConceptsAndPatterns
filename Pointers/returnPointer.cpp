#include <cstdlib>
#include <iostream>

using namespace std;

int *createArr(size_t size, int init = 0)
{ //this fun return pointer of integer type
    int *ptr{nullptr};
    ptr = new int[size]; //allocation

    for (size_t i = 0; i < size; i++)
    {
        ptr[i] = init;
    }

    return ptr;
}

void displayArr(int *ptr, size_t size){
    for (size_t i = 0; i < size; i++)
    {
        cout<<" "<<ptr[i] <<endl;
    }
}

int main()
{
    int *ptr {nullptr};
    ptr= createArr(4,10);
    displayArr(ptr,4);
    delete [] ptr;  //de-allocation
    return 0;
}