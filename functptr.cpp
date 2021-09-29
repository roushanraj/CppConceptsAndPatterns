#include<cstdlib>
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

void sayHello(){
    cout<<"Hello there!!" <<endl;
}

int doubleIt(int a){
    return a+a;
}

int main(){
    auto function = sayHello;       //auto type     
    function();
    function();

    int(*newFunc)(int); //actual type---> return_type(*funcVarName)(Param_types)
    newFunc= doubleIt;

    cout<<newFunc(55);

    vector<int> v {1,2,3,4,5,6,7};    
     
    
 return 0; 
}