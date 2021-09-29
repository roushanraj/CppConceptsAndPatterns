#include <cstdlib>
#include <iostream>

using namespace std;
const int small_cost{25};
const int large_cost{35};
const float tax{0.06f};
int main()
{
    cout << "Welcome to Room Cleaning service " << endl;
    cout << "\nEnter the number of small Rooms: " << endl;
    int small_room{0};
    cin >> small_room;
    cout << "\nEnter the number of Large Rooms: " << endl;
    int large_room{0};
    cin >> large_room;
    cout << "===================================================" << endl;
    cout << "\nNo. of small rooms are: " << small_room << endl;
    cout << "\nNo. of large rooms are: " << large_room << endl;
    cout << "\nPrice of small rooms are: " << small_cost << endl;
    cout << "\nPrice of large rooms are: " << large_cost << endl;
    int totat_amount{(small_cost * small_room) + (large_cost * large_room)};
    cout << "\nTotal Cost: " << totat_amount << endl;
    double tax_amount{totat_amount * tax};
    cout << "\nGrand Total: " << totat_amount + tax_amount << endl;

    return 0;
}