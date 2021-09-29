#include<cstdlib>
#include<iostream>


using namespace std;

int main(){
  int a {12};   
  int b {34};

  int diff = (a>b)? a-b:b-a;
  cout<<"Diff is: "<<diff <<endl;


 return 0; 
}