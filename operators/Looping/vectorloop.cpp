#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> marks {
        {1,2,4,5},
        {6,4,8},
        {34,65,87,3,564}
    };

    cout<<marks.size();
    for(auto mark1: marks ){
        for (auto finalmarks:mark1)
        {
            cout<<finalmarks<< " ";
        }
        cout<<endl;
    }
    return 0;
}