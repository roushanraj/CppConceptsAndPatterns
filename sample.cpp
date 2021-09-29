#include<cstdlib>
#include<iostream>
#include<string>
#include<limits>
#include<vector>
#include<sstream>
#include<ctime>
#include<cmath>


using namespace std;

int imGlobal=0; //global variable
const double PI= 3.14;  //global static variable (can't be changed)

int main (int argc , char** argv){
    cout<<"hello world"<<endl;
    
    bool married = true;    //return true
    bool unmarried= 1;

    cout <<married<<unmarried <<endl ;
    cout <<"max value of int is : "<<numeric_limits<int>::max() <<endl ;
    cout <<"min value of int is : "<<numeric_limits<int>::min() <<endl ;
    
    float num1= 1.23234;
    float num2= 1.989656;

    printf("sum = %.2f\n",num1+num2);

    int a,b;
    cout<<"enter  the first number"<<endl;
    cin>>a;

    cout<<"enter  the second number"<<endl;
    cin>>b;
    // string x="123";
    // int h =stoi(x);
    // printf("num is %d",h);


    printf("sum of the number is : %d",a+b);
    
    int age;
    cout<<"Enter your age";
    cin>>age;
    if (age>=7 && age<=20){
        cout<< "eligible";
    }
    else if (age==30 || age==32){
        cout<< "also eligible";
    }
    else{
        cout<< "Not eligible";
    }


    return 0;
}

