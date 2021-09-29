#include<cstdlib>
#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main(){
    vector<string> names {"ram","mohan","sohan","mahesh","raj"};
    vector<string> *ptr {nullptr};
    ptr=&names;

    for(string newNames: *ptr){
        cout<< newNames<<" " ;
    }

 return 0; 
}