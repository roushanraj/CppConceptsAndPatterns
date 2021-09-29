#include<cstdlib>
#include<iostream>
#include<vector>



using namespace std;

int main(){
 int marks[] {12,24,56,67,76};
 for(int studentMarks: marks)
     cout<<" "<< studentMarks<<endl;
 return 0; 
}