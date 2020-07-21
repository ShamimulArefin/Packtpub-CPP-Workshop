#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int num;

    cout << "Menu\n";
    cout << "1. Fries\n";
    cout << "2. Burger\n";
    cout << "3. Shake\n";

    cout << "Please enter a number 1-3 to view an item price: ";
    getline(cin, input);
    num = stoi(input);

    if (num == 1)
    {
        cout << "Fries: $0.99\n";
    }
    else if (num == 2)
    {
        cout << "Burger: $1.25\n";
    }
    else if (num == 3)
    {
        cout << "Shake: $1.50\n";
    }
    else{
        cout << "Invalid choice.";
    }
    
    return 0;
}