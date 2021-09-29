#include<cstdlib>
#include<iostream>
#include<ctime>
#include<cmath>


using namespace std;

int main(){
    srand(time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        cout<<"Random Val: "<< rand()%9<<endl;
    }
 return 0; 
}