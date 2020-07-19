#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;

    std::cout << "your name:";
    std::cin >> name;

    std::cout << "your age:";
    std::cin >> age;

    std::cout << name << std::endl;
    std::cout << age;
}