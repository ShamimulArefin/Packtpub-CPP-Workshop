#include<iostream>
#include<string>

using namespace std;

int main()
{
    int multiple = 0;
    int count = 0;
    int numsprinted = 0;
    string input = "";

    cout<<"Enter the value whos multiples will be printed: ";
    getline(cin, input);
    multiple = stoi(input);

    cout<<"Enter the maximum amount of numbers to print: ";
    getline(cin, input);
    count = stoi(input);

    for(int i = 1; i<= 10000; ++i)
    {
        if(numsprinted == count)
        {
            break;
        }

        if(i % multiple != 0)
        {
            continue;
        }

        cout<< i << "\n";
        ++numsprinted;
    }
}