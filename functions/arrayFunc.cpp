#include<cstdlib>
#include<iostream>


using namespace std;
void printArr(const int[] , size_t);


int main(){
    int arr[] {1,2,3,5,6};
    printArr(arr, 5);
 return 0; 
}

void printArr(const int arr[],size_t size){
    for (size_t i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    //arr[2]=436; //this will effect the original array if in formal parameter we don't make the array const.
    
}