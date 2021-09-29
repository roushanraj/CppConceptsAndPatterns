#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> list{1, 2, 3, 4, 5, 6};
    char response{};
    while (!(response == 'q' || response == 'Q'))
    {
        cout << "=========================" << endl;
        cout << "Select the option" << endl;
        cout << "P- print " << endl;
        cout << "A- Add No." << endl;
        cout << "M- Display Mean" << endl;
        cout << "S- Smallest no." << endl;
        cout << "L- Largest no." << endl;
        cout << "Q- Quit" << endl;

        cout << "Your response: ";
        cin >> response;
        switch (response)
        {
        case 'P':
        case 'p':
        {
            cout << "[ ";
            for (auto items : list)
                cout << " " << items;
            cout << " ]" << endl;
        }
        break;

        case 'A':
        case 'a':
        {
            cout << "Enter a integer value to insert: ";
            int temp;
            cin >> temp;
            list.push_back(temp);
            cout << "value inserted" << endl;
        }
        break;
        case 'M':
        case 'm':
        {
            cout << "Mean is: ";
            int sum{0};
            double mean{0};
            for (auto items : list)
                sum += items;
            mean = (double)sum / (list.size());
            cout << mean << endl;
        }
        break;
        case 'L':
        case 'l':
        {
            cout << "Largest No. is: ";
            int max;
            for (int items : list)
            {
                if (items > max)
                {
                    max = items;
                }
            }
            cout << max << endl;
        }
        break;

        case 'S':
        case 's':
        {
            cout << "Smallest No. is: ";
            int min {list.at(0)};
            for (int items : list)
            {
                if (items < min)
                {
                    min = items;
                }
            }
            cout << min << endl;
        }
        break;

        
        case 'q':
        case 'Q':
            cout << "Closing the Application..." << endl;
            break;

        default:
            cout << "Illegal Input" << endl;
            break;
        }
    }

    return 0;
}