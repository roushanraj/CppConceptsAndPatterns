#include<cstdlib>
#include<iostream>
#define name "roushan"

using namespace std;

const int constant_val{40}; //declared constant

int main(){
 double x {3e5};
 cout<<scientific<<x <<endl;    //for printing in scientific value
 cout<<" "<< constant_val<<endl;
 cout<<"My name is "<< name<<endl;   
 return 0; 

}



