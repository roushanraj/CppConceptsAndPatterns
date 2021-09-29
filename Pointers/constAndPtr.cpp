#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{

{    //pointer to constant
    int a{12}, b{34};
    const int *ptr{&a};
    //*ptr = 34; //not allowed
    ptr= &b; //allowed
    return 0;
    }

{    //constant pointers
    int a{12}, b{34};
    int *const ptr{&a};
    *ptr = 34; //allowed
    //ptr= &b; //not allowed
    return 0;
    }

{    //constant pointer to constant
    int a{12}, b{34};
    const int *const ptr{&a};
    //*ptr = 34; //not allowed
    // ptr= &b; //not allowed
    return 0;
    }
}