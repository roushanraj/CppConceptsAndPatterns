#include<cstdlib>
#include<iostream>
#include<vector>


using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

void printVector(vector<int> &v){
    for(auto items: v)
    cout<< items<<" ";
}
int main(){
    int a=10, b= 45;
    cout<<"a was: "<<a<<" b was: "<<b <<endl;
    swap(a,b);
    cout<<"a is: "<<a<<" b is: "<<b <<endl;

    vector<int> vec{1,3,56,8,34};
    printVector(vec);

 return 0; 
}


