#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int num;
    cout << "Please enter a number: ";
    getline(cin, input);
    num = stoi(input);

    if(num < 10)
    {
        cout << "The number you entered was less than 10 \n";
    }
    else if(num >10)
    {
        cout << "The number you entered was greater than 10 \n";
    }
    else{
        cout << "The number you entered was exactly 10 \n";
    }

    return 0;
}