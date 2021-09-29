#include<cstdlib>
#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector <char> vowels {'a','e','i','o','u'}; //vector initialization
    vector <double> temp (365, 35); //365 elements with all the values set to 35 

    cout<<vowels.at(1);
    cout<<vowels.at(4);
    cout<<vowels.size();

    vector<vector<int>> ratings {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<< ratings.at(1).at(2);


 return 0; 
}