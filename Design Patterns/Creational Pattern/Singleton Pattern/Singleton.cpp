#include <cstdlib>
#include <iostream>

using namespace std;

class Singleton
{
private:
    Singleton(){ }  //making constructor private so that no object can be instantiated
    static Singleton singletonInstance;

public:
    Singleton(const Singleton&) = delete; //disabling the copy constructor
    
    static Singleton& get(){        //method to return the single instance
        return singletonInstance;
    } 

    void do_something(){
        cout<<"Method of singleton class called..."<<endl;
    }

};

int main()
{   
    auto& instance= Singleton::get();
    instance.do_something();

    return 0;
}