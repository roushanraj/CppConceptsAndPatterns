#include<cstdlib>
#include<iostream>


using namespace std;
void volumeOfBoard(int l, int b, int h=2);

int main(){
    volumeOfBoard(2,5);
 return 0; 
}

void volumeOfBoard(int l, int b, int h){
    cout<< (l*b*h)<<endl;
}