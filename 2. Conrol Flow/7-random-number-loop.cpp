#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool bIsRunning = true;
    string input = "";
    int count = 0;
    cout << "***Random number generator***\n";
    while (bIsRunning)
    {
        cout << "Enter amount of numbers to generate, or 0 to exit: ";
        // count from user
        getline(cin, input);
        count = stoi(input);

        // check if user wants to exit
        if(count == 0)
        {
            break;
        }

        // generate and output numbers
        srand((unsigned) time(0));
        for(int i=0; i<count; ++i)
        {
            cout << rand() % 10;
            
            if(i ==count -1)
            {
                continue;
            }
            cout<< ", ";
        }
        cout<< "\n\n";
    }
}