#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2 {"Hi"};
    string s3 {"My"};
    string s4 {"Name"};
    string s5 {"is"};
    string s6 {s4}; //name
    string s7 {s4,1,3}; //ame
    string s8 (3,'X'); //XXX

    cout<<s1<<endl; 
    cout<<s2<<endl; 
    cout<<s3<<endl; 
    cout<<s4<<endl; 
    cout<<s5<<endl; 
    cout<<s6<<endl; 
    cout<<s7<<endl; 
    cout<<s8<<endl; 
    
    cout<<s4.length()<<endl; 

    cout<<(s4>s3)<<endl; 
    cout<<(s4=="Name")<<endl; 

    s1="Hello there";
    cout<<s1<<endl; 
    s1.at(5)='-';
    cout<<s1<<endl;

    cout<<s8<<endl;
    s8= s1;
    cout<<s8<<endl;

    for (int i = 0; i < s8.size(); i++)
    {
        cout<<s8.at(i)<<" ";
    }
    cout<<endl;
    for (char letter: s8){
        cout<<letter<<"-";
    }

    cout<<endl;

    string str {"My name is roushan raj"};
    cout<<str.substr(11,7) <<endl;

    cout<<str<<endl;
    str.erase(19,3);
    cout<<str<<endl;

    cout<< "input you name:";
    string name ;
    getline(cin, name);
    cout<<endl<<name<<endl;

    cout<< "position of roushan word starts from: "<<str.find("roushan");
    //cout<< "position of jkhsdkjsd word starts from: "<<str.find("gf");
    if(str.find("roushan")==string::npos)
    cout<<" No found"<< endl;

    return 0;
}