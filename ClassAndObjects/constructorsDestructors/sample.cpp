#include<cstdlib>
#include<iostream>


using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student();
    Student(int);
    Student(string,int);
    Student(const Student &source);

    ~Student();
};

Student::Student()    //constructor
:Student{"null",0}   //Delegating constructor 
{   
    cout<<"No args constructor called"<<endl;
}
Student::Student(int a)    //constructor
:Student{"null", a}         //Delegating constructor 
{   
    cout<<"1 args constructor called"<<endl;
}
Student::Student(string a, int b)    //constructor
:name {a}, roll {b}                     //constructor initialization
{   
    cout<<"2 args constructor called"<<endl;
}

//********copy constructor*********//
Student::Student(const Student &source)
:name{source.name}, roll{source.roll}
{
    cout<<"copy made of "<<source.name<<endl;
}

void displayStudent(Student s){
    cout<<"Name: "<<s.name <<endl;
    cout<<"Roll: "<<s.roll <<endl;
}

Student::~Student()     //destructor
{
    cout<<" destructor called for: "<<name <<endl;
}


int main(){
    Student blank;

    displayStudent(blank);

    Student withRoll(4);
    Student fullFledge("Raj",41);

    cout<<"blank student name: "<< blank.name<<" and Roll: "<<blank.roll<<endl;
    cout<<"with roll student name: "<< withRoll.name<<" and Roll: "<<withRoll.roll<<endl;
    cout<<"full Fledged student name: "<< fullFledge.name<<" and Roll: "<<fullFledge.roll<<endl;
 return 0; 
}