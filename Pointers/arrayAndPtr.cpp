#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int arr[]{1, 2, 3, 4, 5, 6};
    int *arrPtr {arr};

    cout<<"adress of first element is "<< arr<<endl;
 
    cout<<"adress of ptr is "<< arrPtr<<endl;
    cout<<"first element is "<< *arrPtr<<endl;
    cout<<"first element is "<< arrPtr[0]<<endl;
    
    cout<<"second element is "<< arr[1]<<endl;
    cout<<"second element is "<< arrPtr[1]<<endl;
    cout<<"second element is "<< *(arrPtr+1)<<endl;
    cout<<"second element is "<< *(arr+1)<<endl;
    cout<<"second adress is is "<< (arrPtr+1)<<endl;
    cout<<"second adress is is "<< (arr+1)<<endl;

    
    

    return 0;
}