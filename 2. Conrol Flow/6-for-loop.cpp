#include <iostream>
#include <string>

using namespace std;

int main()
{
    // for (int i=0; i<5; ++i)
    // {
    //     cout<< i;
    // }

    int myVector[] {0, 1, 2, 3, 4};

    for(int currentValue : myVector)
    {
        cout << "\n" << currentValue;
    }
    


}