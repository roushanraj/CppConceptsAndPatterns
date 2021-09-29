#include<cstdlib>
#include<iostream>


using namespace std;

int main(){

    int a {109};
    int *ptr {&a};

    cout<<"adress of a: "<<ptr <<endl;
    cout<<"next adress : "<<ptr+1 <<endl;
    cout<<"value of a : "<<*ptr <<endl;
    cout<<"value at next address : "<<*(ptr+1) <<endl;  //garbage value

    int b {873};
    int *ptrb {&b};
    cout<<"address of b: "<< ptrb<<endl;
    cout<<"elements between a and b is: "<< ptr-ptrb<<endl;
    cout<<"a<b?:  "<< (*ptr < *ptrb)<<endl;
    cout<<"do ptr and ptrb stores same address:  "<< (ptr == ptrb)<<endl;








 return 0; 
}