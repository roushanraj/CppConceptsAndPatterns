#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int dollar{100};
    int quarter{25};
    int dime{10};
    int nickel{5};
    int penny{1};
    int amount {0};

    cout<<"Please enter the amount in cents" <<endl;
    cin>> amount;
    cout<<"\nThe amount you intered is : "<<amount <<endl;
    cout<<"\nWe can provide you change in this way: "<<endl;
    cout<<"\nDollars: "<< amount/dollar;
    amount %= dollar;
    cout<<"\nQuarter: "<< amount/quarter;
    amount %= quarter;
    cout<<"\nDime: "<< amount/dime;
    amount %= dime;
    cout<<"\nNickel: "<< amount/nickel;
    amount %= nickel;
    cout<<"\npenny: "<< amount/penny;
    amount %= penny;

    return 0;
}