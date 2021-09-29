#include<cstdlib>
#include<iostream>


using namespace std;

class student{
public:
void sayHi();   //prototype
};


void student::sayHi(){  //member method outside the class
    cout<<"Hi"<<endl;
}

int main(){
 student roushan;
 roushan.sayHi();   
 return 0; 
}