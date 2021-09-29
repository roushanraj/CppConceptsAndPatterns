#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    // cout<<" alphabet size"<< alphabet.size()<<endl;
    // cout<<" key size"<< key.size()<<endl;
    cout<<"Enter the word to decipher: ";
    string word;
    cin>>word;
    
    int pos;
    string cipher;
    for(char letter: word){
        pos=alphabet.find(letter);
        cipher.push_back(key[pos]);
    }

    cout<<"The encrypted message is: "<<cipher <<endl;
    
    string message;
    for(char letter: cipher){
        pos=key.find(letter);
        message.push_back(alphabet[pos]);
    }

    cout<<"The decrypted message is: "<<message <<endl;
    
    return 0;
}