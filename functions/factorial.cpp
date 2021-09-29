#include<cstdlib>
#include<iostream>


using namespace std;

int factorial(int x){
    if(x==0 || x== 1)
    return 1;
    return x*factorial(x-1);
}

int fib(int x){
    if(x==0)
        return 0;
    
    if(x==1)
        return 1;

    return fib(x-1)+fib(x-2);
}


int main(){
    cout<<factorial(5)<<endl;
    cout<<fib(5)<<endl;

 return 0; 
}