#include <cstdlib>
#include <iostream>

using namespace std;

class Player
{                   //class declaration
                    //attributes
    public:         //access specifier for whole members
    string name;
    int health=100;
    int xp;

    //methods
     void talks()
    {
        cout << " Hello " << endl;
    }
    bool isDead();
};

int main()
{
    Player roushan;
    Player hero;
    roushan.talks();
    cout<<roushan.health<<endl;
    
    
    Player *newPlayer= new Player();
    newPlayer->talks(); //dot operator
    (*newPlayer).talks();// arrow operator

    delete newPlayer;

    Player playerList[] {roushan, hero};
    playerList[1].talks();  

    return 0;

}