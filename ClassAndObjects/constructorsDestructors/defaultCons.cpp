#include<cstdlib>
#include<iostream>


using namespace std;

class Student
{
    public:
    int roll;
    string name;
    int std;

    Student(string="null", int=0 , int=0);
    Student(const Student &source);
    ~Student();
};

Student::Student(string newname, int newroll, int newstd)
: name {newname}, roll  {newroll}, std{newstd}
{

}

Student::~Student()
{
     cout<<" destructor called for: "<<name <<endl;
}

//********copy constructor*********//
Student::Student(const Student &source)
:name{source.name}, roll{source.roll}
{
    cout<<"copy made of "<<source.name<<endl;
}


int main(){
    Student blank;


    Student withRoll("raja");
    Student halfFledge("Raj",41);
    Student fullFledge("Raja",42,4);

    Student copiedOne(fullFledge);  //copying object attributes in copiedOne using copy constructor

    cout<<"blank student name: "<< blank.name<<" and Roll: "<<blank.roll<<endl;
    cout<<"with roll student name: "<< withRoll.name<<" and Roll: "<<withRoll.roll<<endl;
    cout<<"full Fledged student name: "<< fullFledge.name<<" and Roll: "<<fullFledge.roll<<endl;
    cout<<"Copied One student name: "<< copiedOne.name<<" and Roll: "<<copiedOne.roll<<endl;
 return 0; 
}