#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>


using namespace std;

double areaOfCircle(double radius);//prototype
void printVector(vector<string> names);//prototype
double areaOfRectangle(double l, double b); //prototype

int main()
{
    cout << areaOfCircle(9) << endl;
    cout << areaOfRectangle(7, 4)<<endl;

    vector<string> names {"roushan", "santosh", "shiwanshu"};
    printVector(names);
    return 0;
}
double areaOfRectangle(double l, double b)
{
    double area = 2 * l * b;
    return area;
}

double areaOfCircle(double radius)
{
    double area = 22 * radius * radius / 7;
    return area;
}

void printVector(vector<string> names){
    for(string name: names){
        cout<< name<<endl;
    }

}