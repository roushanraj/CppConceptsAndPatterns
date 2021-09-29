#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int num1{10};
    int num2{123};
    
    num1 = 100;
    cout<<"num1 is: "<<num1 <<endl;

    num1=num2;
    cout<<"num1 is: "<<num1 <<endl;
    
    num1=num2=1000;
    cout<<"num1 is: "<<num1<<" and num2 is: "<<num2 <<endl;
    
    cout<<"num1 is: "<<(num1=43) <<endl;    //returns the assigned value
    
    return 0;
}