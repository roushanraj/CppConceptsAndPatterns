#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a[]{40, 12};
    cout << "second " << a[0] << endl;
   
    //no checking to see if you are out of index in the array
    a[14] = 65;
    cout << "out  " << a[14] << endl;
    // ^ this part will just work fine but not good for program logic
   
    cout << "second " << a << endl; //returns address of the first element in the array
    
    // int x[1] {12,12}; //error because too many initializer
    // cout<< x[0];

    return 0;
}