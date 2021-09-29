#include<cstdlib>
#include<iostream>


using namespace std;

int main(){
 int total {100};   
 int number {8};
 cout<<" average is : "<< static_cast<double>(total)/number <<endl;     //C++ style
 //cout<<" average is : "<< (double)(total)/number <<endl;  //old C style 
    
 return 0; 
}