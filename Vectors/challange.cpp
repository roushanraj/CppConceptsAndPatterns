#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1,vector2 ;
    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"\n1st element of vector1 "<<vector1.at(0);
    cout<<"\n2nd element of vector1 "<<vector1.at(1);
    cout<<"\n1st element of vector2 "<<vector2.at(0);
    cout<<"\n2nd element of vector2 "<<vector2.at(1);

    vector<vector<int> > twoDim;
    twoDim.push_back(vector1);
    twoDim.push_back(vector2);

    cout<<"\nThis is 2nd row 2nd value "<<twoDim.at(1).at(1);
    return 0;
}
