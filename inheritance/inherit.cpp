#include<cstdlib>
#include<iostream>


using namespace std;

class Account
{
private:
    /* data */
public:
    void deposit(int a){
        cout<<"Deposited: "<< a<<endl;
    }
    void Withdraw(int a){
        cout<<"Deposited: "<< a<<endl;
    }
    
    void printBank(){
        cout<<"Bank of France"<<endl;
    }

    Account(){
        cout<<"Base class constructor called"<<endl;
    }
    ~Account(){
        cout<<"Base class Destructor called"<<endl;
    }


};

class SavingAccount: public Account
{
private:
    /* data */
public:
    void deposit(int a){
        cout<<"Deposited in saving: "<< a<<endl;
    }
    void Withdraw(int a){
        cout<<"Deposited in saving: "<< a<<endl;
    }

    
    SavingAccount(){
        cout<<"Derived class constructor called"<<endl;
    }
    ~SavingAccount(){
        cout<<"Derived class Destructor called"<<endl;
    }

};

int main(){
    Account acc;
    SavingAccount sacc; //Account and SavingAccount both constructor will be called

    acc.deposit(34000);
    acc.Withdraw(4340);
    sacc.deposit(34000);
    sacc.Withdraw(4340);
    sacc.printBank();   //printBank is inherited
 return 0; 
}