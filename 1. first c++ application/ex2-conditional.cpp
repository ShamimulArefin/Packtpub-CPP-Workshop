#include <iostream>
#include <string>

#define gradeC 33
#define gradeB 60
#define gradeA 80

int main()
{
    int value = 0;
    std::cout << "input number and see grade(0-100):";
    std::cin >> value;

    if(value < gradeC)
    {
        std::cout << "Fail";
    }
    else if (value < gradeB)
    {
        std::cout << "Pass: grade C";
    }
    else if(value < gradeA)
    {
        std::cout << "Pass: grade B";
    }
    else
    {
        std::cout << "Pass: grade A";
    }
    
}