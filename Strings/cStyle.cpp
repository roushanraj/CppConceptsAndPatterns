#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char name[21];
    strcpy(name, "Roushan");
    strcat(name, " Raj");
    name[3] = '\0';
    cout << name<< endl;
    
    char car[40];
    cout<< car<<endl;
    strcpy(car, "Hey there");
    cout<<strlen(car)<<endl;
    
    strcpy(car, "hello");
    cout<<car<< endl;
    strcat(car, " ");
    strcat(car, "My name is Raj");
    cout<<car<<endl;

    // char fullName[30];
    // cout<<"enter your full name: ";
    // //from console we cannot accept space ex: if we enter roushan raj then only roushan will be sotored
    // cin >> fullName;    
    // cout<<endl<< fullName;

    char newFullName[30];
    cout<<"enter your new full name: ";
    //we use cin.getline for that
    cin.getline(newFullName,20);    
    cout<<endl<< newFullName;

    cout<<strcmp(newFullName, "roushan");

    for (int i = 0; i < strlen(newFullName); i++)
    {
        if(isalpha(newFullName[i])){
            newFullName[i]= toupper(newFullName[i]);
        }
    }
    cout<<endl<< newFullName<<endl;
    
    cout<< strcmp("fabc","def");


    return 0;
}