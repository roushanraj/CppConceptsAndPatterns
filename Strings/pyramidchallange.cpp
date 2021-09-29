#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cout<<"Enter a word"<<endl;
    cin>>word;

    for (int i=0;i<word.size();i++){
        for(int j=0;j<(word.size()-i+1);j++)
            cout<<" ";
        
        for(int p=0; p<=i;p++)
            cout<<word.at(p);
        
        for(int q=i-1; q>=0;q--)
            cout<<word.at(q);
            

        // for(int j;j<word.size()-1-i;i++)
        //     cout<<" ";
        cout<<endl;
    }

    return 0;
}