#include<cstdlib>
#include<iostream>


using namespace std;

int main(){
 int n {100};
 cout<<"value of n: "<< n<<endl;   
 cout<<"adress of n: "<< &n<<endl;  //returns adress

 int *ptr = &n;   
 cout<<"adress of n: "<< ptr<<endl;
 cout<<"size of pointer: "<< sizeof ptr<<" in bytes"<<endl; //returns size
 cout<<"size of integer datatype: "<< sizeof *ptr<<" in bytes"<<endl; //returns size
 
 double marks;
 double *ptrd;
 //double *ptrd {nullptr};  //good practice
 cout<<"garbage adress: "<< ptrd<<endl;
 cout<<"garbage value: "<< *ptrd<<endl;
 cout<<"size of pointer: "<< sizeof ptrd<<" in bytes"<<endl; //returns size
 cout<<"size of double datatype: "<< sizeof *ptrd<<" in bytes"<<endl; //returns size

 return 0; 
}