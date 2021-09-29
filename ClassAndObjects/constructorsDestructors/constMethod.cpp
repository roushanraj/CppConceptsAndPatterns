#include <cstdlib>
#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string, int);
       
    void displayStudent() const     //const correctness
    {   
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

Student::Student(string a, int b) //constructor
    : name{a}, roll{b}            //constructor initialization
{
    cout << "2 args constructor called" << endl;
}
void displayStudent1(const Student &source)
    {
        source.displayStudent();
    }

int main()
{
    //const Student fullFledge("Raj", 41);

    // fullFledge.name="hello"; // not work because fullFledge is const
    //fullFledge.displayStudent();    //not work because fullFledge is const
    
    Student newStu ("Ram", 23);
    displayStudent1(newStu);
    
    return 0;
}