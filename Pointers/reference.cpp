#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a{19};
    int &ref{a};
    //int &ref{450}; //initial value of reference to non-const must be an lvalue
    cout << "a is: " << a << endl;
    cout << "a using ref is: " << ref << endl;

    ref = 21;
    cout << "a is: " << a << endl;
    cout << "a using ref is: " << ref << endl;

    vector<string> names  {"raj", "ram", "Mohan", "Lakhan"};
    
    for(auto name: names)
        name="hello";   //it affects the copy 
    
    for(auto name: names)
        cout<<" "<< name<<endl;
    
    for(auto &name: names)  //using reference
        name="hello";       //it affects the actual data 
    
    for(auto const &name: names)
        cout<<" "<< name<<endl;
    

    return 0;
}