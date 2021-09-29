#include<cstdlib>
#include<iostream>

class NewClass{
    public:
    int *ptr;

    void set(int);
    int get();
    NewClass(int d);
    NewClass(const NewClass &source);
    ~NewClass();

};

    void NewClass::set(int d){
        *ptr=d;
    }
    int NewClass::get(){
        return *ptr;
    }

    NewClass:: NewClass(int d){
        ptr = new int;
        *ptr=d;
    }

    NewClass::NewClass(const NewClass &source)  //copy constructor
    :ptr{source.ptr}
    {
        std::cout<<"copied "<< std::endl;
    }

    NewClass::~NewClass(){
        delete ptr;
        std::cout<<"De-constructed"<<std::endl;
    }

using namespace std;

int main(){
 NewClass a(4);
 NewClass b(a);

 cout<<"a: "<<a.get() <<endl;
 cout<<"b: "<<b.get() <<endl;


 return 0; 
}