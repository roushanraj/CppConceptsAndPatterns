#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    enum name
    {
        aa,
        ab,
        ac,
        ad,
        ae
    };

    name selectedName {aa};

    switch (selectedName)
    {
        case aa: cout<< "1st name"; 
        
        case ab: cout<< "2nd name"; 
        
        case ac: cout<< "3rd name"; 
        
        case ad: {
            cout<< "4th name";
            cout<<" yes it's fourth name"<<endl;
            }
        case ae: cout<< "5th name"; break;
        default:cout<< "No name"; break;
    }

    return 0;
}