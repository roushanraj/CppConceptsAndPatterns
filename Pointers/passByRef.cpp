#include<cstdlib>
#include<iostream>


using namespace std;
void add(int*, int* );
int main(){
    int a {10}, b{20};
    add(&a, &b);
    cout<<"value of a after fun call: "<< a<<endl;

    
 return 0; 
}
void add(int *a, int *b ){
    *a += *b;
}