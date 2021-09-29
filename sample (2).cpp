#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num, dum;
    cout<< "Enter your favourite number"<<endl;
    cin>>num;
    cout<< "Enter your second favourite number"<<endl;
    cin>>dum;
    cout<< "This is also my favourite number"<<endl;
    cout<< "No really "<< num <<" and "<< dum<< " is my favourite number"<<endl;
 
    
    string str;
    cout<< "Enter your favourite name"<<endl;
    cin>>str;
    cout<< "the name is "<<str;

    cin>>num>>dum;
    cout<< "these are the numbers "<<num<<" & "<<dum;


    int x;
    double y;
    cout<< "Enter Integer"<<endl;
    cin>>x;
    cout<< "Enter Double"<<endl;
    cin>>y;
    cout<< "the Integer is: "<< x << " and the double is: "<< y;
    // if we input 12.5 at place where integer is expected then the integer will 
    //be 12 and next double will be 0.5


}