#include<cstdlib>
#include<iostream>


using namespace std;

int main(){
 cout<<"size of int is : "<<sizeof(int)<< " Bytes"<<endl;   
 cout<<"size of long is : "<<sizeof(long)<< " Bytes"<<endl;   
 cout<<"size of double is : "<<sizeof(double)<< " Bytes"<<endl;   
 cout<<"size of float is : "<<sizeof(float)<< " Bytes"<<endl;   
 cout<<"size of char is : "<<sizeof(char)<< " Bytes"<<endl;   
 cout<<"size of boolean is : "<<sizeof(bool)<< " Bytes"<<endl;

 cout<<"Min value for int is : "<<INT_MIN<< "."<<endl;
 cout<<"Min value for char is : "<<CHAR_MIN<< "."<<endl;
 cout<<"Min value for short is : "<<SHRT_MIN<< "."<<endl;
 cout<<"Min value for long is : "<<LONG_MIN<< "."<<endl;
 cout<<"Min value for long long is : "<<LLONG_MIN<< "."<<endl;
 cout<<"Min value for double is : "<<__DBL_MIN__<< "."<<endl;
 cout<<"Min value for float is : "<<__FLT_MIN__<< "."<<endl;
 return 0; 
}